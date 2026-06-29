HauoliOutskirts_MapScripts::
	.byte 0


HauoliOutskirts_Trigger_SightseerMBlocksWest::
# 18 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 19 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 20 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 21 "data//maps/HauoliOutskirts/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 22 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 23 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 25 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_0
# 26 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 27 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0
# 28 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_1
# 29 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 30 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 32 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_1
# 33 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 34 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Trigger_SightseerMBlockSouth::
# 40 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 41 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 42 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 43 "data//maps/HauoliOutskirts/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 44 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 45 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 47 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_0
# 48 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 49 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0
# 50 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trigger_SightseerMBlockSouth_Text_0
# 51 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 52 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 54 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_1
# 55 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 56 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_LillieLabEvent::
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	lockall
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 64 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 65 "data//maps/HauoliOutskirts/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 66 "data//maps/HauoliOutskirts/scripts.pory"
	delay 15
# 68 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_0
# 69 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_1
# 70 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 12, HauoliOutskirts_Script_LillieLabEvent_Movement_0
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 11, HauoliOutskirts_Script_LillieLabEvent_Movement_1
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 12
# 74 "data//maps/HauoliOutskirts/scripts.pory"
	delay 15
# 75 "data//maps/HauoliOutskirts/scripts.pory"
	emote 11, EMOTE_EXCLAM
# 76 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 77 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_0
# 78 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_2
# 79 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 80 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_Script_LillieLabEvent_Movement_2
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 12, HauoliOutskirts_Script_LillieLabEvent_Movement_3
# 82 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 83 "data//maps/HauoliOutskirts/scripts.pory"
	delay 15
# 85 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_0
# 86 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_3
# 87 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 88 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 89 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 90 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_0
# 91 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_4
# 92 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 93 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 94 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 95 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 96 "data//maps/HauoliOutskirts/scripts.pory"
	emote 11, EMOTE_EXCLAM
# 97 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_5
# 98 "data//maps/HauoliOutskirts/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 99 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_6
# 100 "data//maps/HauoliOutskirts/scripts.pory"
	waitmoncry
# 101 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 102 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_7
# 103 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_8
# 104 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 106 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_0
# 108 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_9
# 109 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 110 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 11, HauoliOutskirts_Script_LillieLabEvent_Movement_4
# 111 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_Script_LillieLabEvent_Movement_5
# 112 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 12, HauoliOutskirts_Script_LillieLabEvent_Movement_6
# 113 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement LOCALID_PLAYER
# 115 "data//maps/HauoliOutskirts/scripts.pory"
	warpcontinuescript MAP_HAUOLI_OUTSKIRTS_KUKUI_LAB, 5, 9, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex
# 117 "data//maps/HauoliOutskirts/scripts.pory"
	releaseall
	end


HauoliOutskirts_Script_SamsonOak::
# 125 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 126 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 127 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_SamsonOak_Text_0
# 129 "data//maps/HauoliOutskirts/scripts.pory"
	switch VAR_INTRO_STATE
# 131 "data//maps/HauoliOutskirts/scripts.pory"
	case 3, HauoliOutskirts_Script_SamsonOak_3
# 132 "data//maps/HauoliOutskirts/scripts.pory"
	case 4, HauoliOutskirts_Script_SamsonOak_3
# 133 "data//maps/HauoliOutskirts/scripts.pory"
	case 5, HauoliOutskirts_Script_SamsonOak_3
# 134 "data//maps/HauoliOutskirts/scripts.pory"
	case 6, HauoliOutskirts_Script_SamsonOak_3
# 137 "data//maps/HauoliOutskirts/scripts.pory"
	case 7, HauoliOutskirts_Script_SamsonOak_4
HauoliOutskirts_Script_SamsonOak_3:
# 136 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_SamsonOak_Text_1
HauoliOutskirts_Script_SamsonOak_1:
# 141 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 142 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end

HauoliOutskirts_Script_SamsonOak_4:
# 138 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_SamsonOak_Text_2
	goto HauoliOutskirts_Script_SamsonOak_1


HauoliOutskirts_Script_SightseerM::
# 148 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 149 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 150 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0
# 151 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_SightseerM_Text_0
# 152 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 153 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_LassOnLedge::
# 159 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 160 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 161 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LassOnLedge_Text_0
# 162 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LassOnLedge_Text_1
# 163 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 164 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_YoungsterWithLechonk::
# 170 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 171 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 172 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_YoungsterWithLechonk_Text_0
# 173 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_YoungsterWithLechonk_Text_1
# 174 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 175 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 176 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 177 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_Lechonk::
# 183 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 184 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 185 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_Lechonk_Text_0
# 186 "data//maps/HauoliOutskirts/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_NORMAL
# 187 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_Lechonk_Text_1
# 188 "data//maps/HauoliOutskirts/scripts.pory"
	waitmoncry
# 189 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 190 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 191 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 192 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_NPC_BlackBelt::
# 198 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 199 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 200 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_NPC_BlackBelt_Text_0
# 201 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_NPC_BlackBelt_Text_1
# 202 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 203 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_NPC_WomanWithSpinarak::
# 209 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 210 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 211 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_NPC_WomanWithSpinarak_Text_0
# 212 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_NPC_WomanWithSpinarak_Text_1
# 213 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 214 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
# 215 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 216 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_NPC_Spinarak::
# 222 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 223 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 224 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_NPC_Spinarak_Text_0
# 225 "data//maps/HauoliOutskirts/scripts.pory"
	playmoncry SPECIES_SPINARAK, CRY_MODE_NORMAL
# 226 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_NPC_Spinarak_Text_1
# 227 "data//maps/HauoliOutskirts/scripts.pory"
	waitmoncry
# 228 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 229 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 230 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 231 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_NPC_SchoolGirlBySign::
# 237 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 238 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 239 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_NPC_SchoolGirlBySign_Text_0
# 240 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_NPC_SchoolGirlBySign_Text_1
# 241 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 242 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 243 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 244 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Trainer_LassMadison::
# 252 "data//maps/HauoliOutskirts/scripts.pory"
	trainerbattle_single TRAINER_LASS_MADISON, HauoliOutskirts_Trainer_LassMadison_Text_0, HauoliOutskirts_Trainer_LassMadison_Text_1
# 256 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trainer_LassMadison_Text_2
# 257 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trainer_LassMadison_Text_3
# 258 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 259 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Trainer_YoungsterKevin::
# 265 "data//maps/HauoliOutskirts/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_KEVIN, HauoliOutskirts_Trainer_YoungsterKevin_Text_0, HauoliOutskirts_Trainer_YoungsterKevin_Text_1
# 269 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trainer_YoungsterKevin_Text_2
# 270 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trainer_YoungsterKevin_Text_3
# 271 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 272 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Trainer_SwimmerNatasha::
# 278 "data//maps/HauoliOutskirts/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_NATASHA, HauoliOutskirts_Trainer_SwimmerNatasha_Text_0, HauoliOutskirts_Trainer_SwimmerNatasha_Text_1
# 282 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trainer_SwimmerNatasha_Text_2
# 283 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trainer_SwimmerNatasha_Text_3
# 284 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 285 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Sign_HouseSign::
# 293 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 294 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Sign_HouseSign_Text_0
# 295 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 296 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Sign_SeelWatching::
# 302 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 303 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Sign_SeelWatching_Text_0, MSGBOX_YESNO
# 304 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 305 "data//maps/HauoliOutskirts/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_Sign_SeelWatching_2
HauoliOutskirts_Sign_SeelWatching_1:
# 313 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end

HauoliOutskirts_Sign_SeelWatching_2:
# 307 "data//maps/HauoliOutskirts/scripts.pory"
	setvar VAR_0x8003, SPECIES_SEEL
# 308 "data//maps/HauoliOutskirts/scripts.pory"
	special ShowSpeciesInfoWindow
# 309 "data//maps/HauoliOutskirts/scripts.pory"
	delay 30
# 310 "data//maps/HauoliOutskirts/scripts.pory"
	waitbuttonpress
# 311 "data//maps/HauoliOutskirts/scripts.pory"
	special CloseSpeciesInfoWindow
	goto HauoliOutskirts_Sign_SeelWatching_1


# 25 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_0:
# 25 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_left
# 25 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_left
# 25 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 32 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_1:
# 32 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 32 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 47 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_0:
# 47 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_down
# 47 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_down
# 47 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 54 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_1:
# 54 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 54 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 71 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_0:
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_down
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_down
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_left
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	face_up
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_left
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	face_right
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_down
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	face_left
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 72 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_1:
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	face_up
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	face_right
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	face_down
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	face_up
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	face_left
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 80 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_2:
# 80 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 80 "data//maps/HauoliOutskirts/scripts.pory"
	walk_down
# 80 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 80 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 80 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 80 "data//maps/HauoliOutskirts/scripts.pory"
	face_down
# 80 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 81 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_3:
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	walk_down
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	walk_left
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	walk_left
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	face_up
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	jump_in_place_up
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	jump_in_place_up
	step_end

# 110 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_4:
# 110 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 110 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 110 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 110 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 110 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 110 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 111 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_5:
# 111 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 111 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 111 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 111 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 111 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 111 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 111 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 112 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_6:
# 112 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 112 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 112 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 112 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 112 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 112 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 112 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0:
# 27 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Sightseer$"

HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_1:
# 28 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Hey- er, Alola! This way leads to Hau'oli\n"
	.string "City, past the Alola Leo Pokémon School.\p"
	.string "There are some wild Pokémon running\n"
	.string "loose outside the school. I wouldn't go\l"
	.string "unless I had some stronger Pokémon\l"
	.string "with me... That's why I'm waiting for my\l"
	.string "fiancée to come back!$"

HauoliOutskirts_Trigger_SightseerMBlockSouth_Text_0:
# 50 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Hey- er, Alola! That way leads to\n"
	.string "Professor Kukui's Lab and Ten Carat\l"
	.string "Hill.\p"
	.string "I saw some wild Pokémon in that grass. I\n"
	.string "wouldn't go unless I had some stronger\l"
	.string "Pokémon with me... That's why I'm waiting\l"
	.string "for my fiancée to come back!$"

HauoliOutskirts_Script_LillieLabEvent_Text_0:
# 68 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Lillie$"

HauoliOutskirts_Script_LillieLabEvent_Text_1:
# 69 "data//maps/HauoliOutskirts/scripts.pory"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY}, you have to stay in the bag! How\n"
	.string "do you think people will react if they\l"
	.string "catch a {COLOR BLUE}Cosmog{COLOR DARK_GRAY} wandering around... We\l"
	.string "don't want {COLOR RED}her{COLOR DARK_GRAY} to find us...$"

HauoliOutskirts_Script_LillieLabEvent_Text_2:
# 78 "data//maps/HauoliOutskirts/scripts.pory"
	.string "{PLAYER}! I- Um, I didn't see you\n"
	.string "there.$"

HauoliOutskirts_Script_LillieLabEvent_Text_3:
# 86 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Ehehe, it looks like {COLOR BLUE}Nebbie{COLOR DARK_GRAY}'s taken an\n"
	.string "interest in you!$"

HauoliOutskirts_Script_LillieLabEvent_Text_4:
# 91 "data//maps/HauoliOutskirts/scripts.pory"
	.string "This is Professor Kukui's Lab! It's...\n"
	.string "Um...\p"
	.string "Well, it's not the prettiest building,\n"
	.string "but it serves. Besides, Kukui's research\l"
	.string "on Pokémon Moves make too much of a\l"
	.string "mess. A big part of my job as his\l"
	.string "Assistant is to clean up the rubble...$"

HauoliOutskirts_Script_LillieLabEvent_Text_5:
# 97 "data//maps/HauoliOutskirts/scripts.pory"
	.string "???$"

HauoliOutskirts_Script_LillieLabEvent_Text_6:
# 99 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Gruff ruff!$"

HauoliOutskirts_Script_LillieLabEvent_Text_7:
# 102 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Prof. Kukui$"

HauoliOutskirts_Script_LillieLabEvent_Text_8:
# 103 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Yeah, {COLOR BLUE}Rockruff{COLOR DARK_GRAY}! Use Rock Slide!$"

HauoliOutskirts_Script_LillieLabEvent_Text_9:
# 108 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Not again! Quick, we have to distract\n"
	.string "him!$"

HauoliOutskirts_Script_SamsonOak_Text_0:
# 127 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Grandpa Samson$"

HauoliOutskirts_Script_SamsonOak_Text_1:
# 136 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Alola, {PLAYER}! How's your Pokémon\n"
	.string "doing?\p"
	.string "I hope you're settling into the Alola\n"
	.string "Region. I know it's quite different than\l"
	.string "Kanto, but give it a chance.$"

HauoliOutskirts_Script_SamsonOak_Text_2:
# 138 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I saw your battle during the Manalo\n"
	.string "Festival, you did great!\p"
	.string "Carrying a {COLOR GREEN}Z-Power Ring{COLOR DARK_GRAY} is a big\n"
	.string "responsibility. I got my own when I was\l"
	.string "about 18, and did the Island Challenge\l"
	.string "myself!$"

HauoliOutskirts_Script_SightseerM_Text_0:
# 151 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I finally made it to Alola! My fiancée\n"
	.string "and I are staying in Hau'oli City.\p"
	.string "She wants to explore the tall grass, but\n"
	.string "I don't have any Pokémon... I think I'll\l"
	.string "just stay here.$"

HauoliOutskirts_Script_LassOnLedge_Text_0:
# 161 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Lady$"

HauoliOutskirts_Script_LassOnLedge_Text_1:
# 162 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Are you Samson Oak's grandchild? I\n"
	.string "heard his family just moved back here\l"
	.string "after spending years in Kanto!$"

HauoliOutskirts_Script_YoungsterWithLechonk_Text_0:
# 172 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Youngster$"

HauoliOutskirts_Script_YoungsterWithLechonk_Text_1:
# 173 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I'm training my Lechonk to grow up real\n"
	.string "strong! No one messes with a big pig!$"

HauoliOutskirts_Script_Lechonk_Text_0:
# 185 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Lechonk$"

HauoliOutskirts_Script_Lechonk_Text_1:
# 187 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Snort!$"

HauoliOutskirts_NPC_BlackBelt_Text_0:
# 200 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Black Belt$"

HauoliOutskirts_NPC_BlackBelt_Text_1:
# 201 "data//maps/HauoliOutskirts/scripts.pory"
	.string "When people see me, they think I only\n"
	.string "use super muscle-y Pokémon...\p"
	.string "And they're RIGHT!$"

HauoliOutskirts_NPC_WomanWithSpinarak_Text_0:
# 211 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Woman$"

HauoliOutskirts_NPC_WomanWithSpinarak_Text_1:
# 212 "data//maps/HauoliOutskirts/scripts.pory"
	.string "{COLOR BLUE}Alolan Spinarak{COLOR DARK_GRAY} adapted to living\n"
	.string "around coastal volcanoes. Apparently,\l"
	.string "they can burrow through volcanic rock!$"

HauoliOutskirts_NPC_Spinarak_Text_0:
# 224 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Spinarak$"

HauoliOutskirts_NPC_Spinarak_Text_1:
# 226 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Ktch-cha!$"

HauoliOutskirts_NPC_SchoolGirlBySign_Text_0:
# 239 "data//maps/HauoliOutskirts/scripts.pory"
	.string "School Girl$"

HauoliOutskirts_NPC_SchoolGirlBySign_Text_1:
# 240 "data//maps/HauoliOutskirts/scripts.pory"
	.string "My teacher at the Alola Leo School told\n"
	.string "me I should read all these big signs!\p"
	.string "I guess the School put them up all over\n"
	.string "Alola... I don't think I wanna read that\l"
	.string "much!$"

HauoliOutskirts_Trainer_LassMadison_Text_0:
# 253 "data//maps/HauoliOutskirts/scripts.pory"
	.string "We're almost to the beach!$"

HauoliOutskirts_Trainer_LassMadison_Text_1:
# 254 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Back to the Pokémon Center for me.$"

HauoliOutskirts_Trainer_LassMadison_Text_2:
# 256 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Lass Madison$"

HauoliOutskirts_Trainer_LassMadison_Text_3:
# 257 "data//maps/HauoliOutskirts/scripts.pory"
	.string "A lot of strange Pokémon live around\n"
	.string "here. They're my favorites!$"

HauoliOutskirts_Trainer_YoungsterKevin_Text_0:
# 266 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Step back, kid!$"

HauoliOutskirts_Trainer_YoungsterKevin_Text_1:
# 267 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Wait, I'm WAY younger than you...!$"

HauoliOutskirts_Trainer_YoungsterKevin_Text_2:
# 269 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Youngster Kevin$"

HauoliOutskirts_Trainer_YoungsterKevin_Text_3:
# 270 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I wanna catch a Rockruff. I hear if it\n"
	.string "evolves at night, it turns super scary\l"
	.string "and cool!$"

HauoliOutskirts_Trainer_SwimmerNatasha_Text_0:
# 279 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Heyyy-y! Jump in the water with me!$"

HauoliOutskirts_Trainer_SwimmerNatasha_Text_1:
# 280 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Eek! The water's cold!$"

HauoliOutskirts_Trainer_SwimmerNatasha_Text_2:
# 282 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Swimmer Natasha$"

HauoliOutskirts_Trainer_SwimmerNatasha_Text_3:
# 283 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I thought all the water was warm in\n"
	.string "Alola...$"

HauoliOutskirts_Sign_HouseSign_Text_0:
# 294 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Oak Family Home$"

HauoliOutskirts_Sign_SeelWatching_Text_0:
# 303 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Alolan Education Tip Number 1:\n"
	.string "Please watch out for sleeping {COLOR BLUE}Seel{COLOR DARK_GRAY} on\l"
	.string "the beach!\p"
	.string "There is more written about {COLOR BLUE}Alolan Seel{COLOR DARK_GRAY}.\n"
	.string "Read it?$"

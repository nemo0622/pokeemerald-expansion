HauoliOutskirts_MapScripts::
	.byte 0


HauoliOutskirts_Trigger_SightseerMBlocksWest::
# 8 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 9 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 10 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 11 "data//maps/HauoliOutskirts/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 12 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 13 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 15 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_0
# 16 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 17 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0
# 18 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_1
# 19 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 20 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 22 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_1
# 23 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 24 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Trigger_SightseerMBlockSouth::
# 30 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 31 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 32 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 33 "data//maps/HauoliOutskirts/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 34 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 35 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 37 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_0
# 38 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 39 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0
# 40 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trigger_SightseerMBlockSouth_Text_0
# 41 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 42 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 44 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_1
# 45 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 46 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_LillieLabEvent::
# 52 "data//maps/HauoliOutskirts/scripts.pory"
	lockall
# 53 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 54 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 55 "data//maps/HauoliOutskirts/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 56 "data//maps/HauoliOutskirts/scripts.pory"
	delay 15
# 58 "data//maps/HauoliOutskirts/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_OTHER
# 59 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_0
# 60 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_1
# 61 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 12, HauoliOutskirts_Script_LillieLabEvent_Movement_0
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 11, HauoliOutskirts_Script_LillieLabEvent_Movement_1
# 64 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 12
# 65 "data//maps/HauoliOutskirts/scripts.pory"
	delay 15
# 66 "data//maps/HauoliOutskirts/scripts.pory"
	emote 11, EMOTE_EXCLAM
# 67 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 68 "data//maps/HauoliOutskirts/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 69 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_0
# 70 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_2
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_Script_LillieLabEvent_Movement_2
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 12, HauoliOutskirts_Script_LillieLabEvent_Movement_3
# 74 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 75 "data//maps/HauoliOutskirts/scripts.pory"
	delay 15
# 77 "data//maps/HauoliOutskirts/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 78 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_0
# 79 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_3
# 80 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 82 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 83 "data//maps/HauoliOutskirts/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 84 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_0
# 85 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_4
# 86 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 87 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 88 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 89 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 90 "data//maps/HauoliOutskirts/scripts.pory"
	emote 11, EMOTE_EXCLAM
# 91 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_5
# 92 "data//maps/HauoliOutskirts/scripts.pory"
	playmoncry SPECIES_ROCKRUFF, CRY_MODE_NORMAL
# 93 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_6
# 94 "data//maps/HauoliOutskirts/scripts.pory"
	waitmoncry
# 95 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 96 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_7
# 97 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_8
# 98 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 100 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 101 "data//maps/HauoliOutskirts/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 102 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LillieLabEvent_Text_0
# 103 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LillieLabEvent_Text_9
# 104 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 105 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 11, HauoliOutskirts_Script_LillieLabEvent_Movement_4
# 106 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_Script_LillieLabEvent_Movement_5
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 12, HauoliOutskirts_Script_LillieLabEvent_Movement_6
# 108 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement LOCALID_PLAYER
# 110 "data//maps/HauoliOutskirts/scripts.pory"
	warpcontinuescript MAP_HAUOLI_OUTSKIRTS_KUKUI_LAB, 5, 9, HauoliOutskirts_KukuiLab_Script_KukuiGivesDex
# 112 "data//maps/HauoliOutskirts/scripts.pory"
	releaseall
	end


HauoliOutskirts_Script_SamsonOak::
# 120 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 121 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 122 "data//maps/HauoliOutskirts/scripts.pory"
	createfieldmugshot MUGSHOT_SAMSON_OAK
# 123 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_SamsonOak_Text_0
# 125 "data//maps/HauoliOutskirts/scripts.pory"
	switch VAR_INTRO_STATE
# 127 "data//maps/HauoliOutskirts/scripts.pory"
	case 3, HauoliOutskirts_Script_SamsonOak_3
# 128 "data//maps/HauoliOutskirts/scripts.pory"
	case 4, HauoliOutskirts_Script_SamsonOak_3
# 129 "data//maps/HauoliOutskirts/scripts.pory"
	case 5, HauoliOutskirts_Script_SamsonOak_3
# 130 "data//maps/HauoliOutskirts/scripts.pory"
	case 6, HauoliOutskirts_Script_SamsonOak_3
# 133 "data//maps/HauoliOutskirts/scripts.pory"
	case 7, HauoliOutskirts_Script_SamsonOak_4
HauoliOutskirts_Script_SamsonOak_3:
# 132 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_SamsonOak_Text_1
HauoliOutskirts_Script_SamsonOak_1:
# 137 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 138 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end

HauoliOutskirts_Script_SamsonOak_4:
# 134 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_SamsonOak_Text_2
	goto HauoliOutskirts_Script_SamsonOak_1


HauoliOutskirts_Script_SightseerM::
# 144 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 145 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 146 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0
# 147 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_SightseerM_Text_0
# 148 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 149 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_LassOnLedge::
# 155 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 156 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 157 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LassOnLedge_Text_0
# 158 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LassOnLedge_Text_1
# 159 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 160 "data//maps/HauoliOutskirts/scripts.pory"
	createplayerfieldmugshot
# 161 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LassOnLedge_Text_2
# 162 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 163 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LassOnLedge_Text_0
# 164 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LassOnLedge_Text_3
# 165 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 166 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_YoungsterWithLechonk::
# 172 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 173 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 174 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_YoungsterWithLechonk_Text_0
# 175 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_YoungsterWithLechonk_Text_1
# 176 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 177 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 178 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 179 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_Lechonk::
# 185 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 186 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 187 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_Lechonk_Text_0
# 188 "data//maps/HauoliOutskirts/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_NORMAL
# 189 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_Lechonk_Text_1
# 190 "data//maps/HauoliOutskirts/scripts.pory"
	waitmoncry
# 191 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 192 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 193 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 194 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_NPC_BlackBelt::
# 200 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 201 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 202 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_NPC_BlackBelt_Text_0
# 203 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_NPC_BlackBelt_Text_1
# 204 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 205 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_NPC_WomanWithSpinarak::
# 211 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 212 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 213 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_NPC_WomanWithSpinarak_Text_0
# 214 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_NPC_WomanWithSpinarak_Text_1
# 215 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 216 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
# 217 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 218 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_NPC_Spinarak::
# 224 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 225 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 226 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_NPC_Spinarak_Text_0
# 227 "data//maps/HauoliOutskirts/scripts.pory"
	playmoncry SPECIES_SPINARAK, CRY_MODE_NORMAL
# 228 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_NPC_Spinarak_Text_1
# 229 "data//maps/HauoliOutskirts/scripts.pory"
	waitmoncry
# 230 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 231 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 232 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 233 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_NPC_SchoolGirlBySign::
# 239 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 240 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 241 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_NPC_SchoolGirlBySign_Text_0
# 242 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_NPC_SchoolGirlBySign_Text_1
# 243 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 244 "data//maps/HauoliOutskirts/scripts.pory"
	createplayerfieldmugshot
# 245 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_NPC_SchoolGirlBySign_Text_2
# 246 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 247 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 248 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 249 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Trainer_LassMadison::
# 257 "data//maps/HauoliOutskirts/scripts.pory"
	trainerbattle_single TRAINER_LASS_MADISON, HauoliOutskirts_Trainer_LassMadison_Text_0, HauoliOutskirts_Trainer_LassMadison_Text_1
# 261 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trainer_LassMadison_Text_2
# 262 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trainer_LassMadison_Text_3
# 263 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 264 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Trainer_YoungsterKevin::
# 270 "data//maps/HauoliOutskirts/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_KEVIN, HauoliOutskirts_Trainer_YoungsterKevin_Text_0, HauoliOutskirts_Trainer_YoungsterKevin_Text_1
# 274 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trainer_YoungsterKevin_Text_2
# 275 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trainer_YoungsterKevin_Text_3
# 276 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 277 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Trainer_SwimmerNatasha::
# 283 "data//maps/HauoliOutskirts/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_NATASHA, HauoliOutskirts_Trainer_SwimmerNatasha_Text_0, HauoliOutskirts_Trainer_SwimmerNatasha_Text_1
# 287 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trainer_SwimmerNatasha_Text_2
# 288 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trainer_SwimmerNatasha_Text_3
# 289 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 290 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Sign_HouseSign::
# 298 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 299 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Sign_HouseSign_Text_0, MSGBOX_SIGN
# 300 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 301 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Sign_KukuiLab::
# 307 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 308 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Sign_KukuiLab_Text_0, MSGBOX_SIGN
# 309 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 310 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Sign_TenCaratHill::
# 316 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 317 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Sign_TenCaratHill_Text_0, MSGBOX_SIGN
# 318 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 319 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Sign_Directions::
# 325 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 326 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Sign_Directions_Text_0, MSGBOX_SIGN
# 327 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 328 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Sign_SeelWatching::
# 334 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 335 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Sign_SeelWatching_Text_0, MSGBOX_SIGN
# 336 "data//maps/HauoliOutskirts/scripts.pory"
	waitmessage
# 337 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Sign_SeelWatching_Text_1, MSGBOX_YESNO
# 338 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 339 "data//maps/HauoliOutskirts/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_Sign_SeelWatching_2
HauoliOutskirts_Sign_SeelWatching_1:
# 347 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end

HauoliOutskirts_Sign_SeelWatching_2:
# 341 "data//maps/HauoliOutskirts/scripts.pory"
	setvar VAR_0x8003, SPECIES_SEEL
# 342 "data//maps/HauoliOutskirts/scripts.pory"
	special ShowSpeciesInfoWindow
# 343 "data//maps/HauoliOutskirts/scripts.pory"
	delay 30
# 344 "data//maps/HauoliOutskirts/scripts.pory"
	waitbuttonpress
# 345 "data//maps/HauoliOutskirts/scripts.pory"
	special CloseSpeciesInfoWindow
	goto HauoliOutskirts_Sign_SeelWatching_1


# 15 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_0:
# 15 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_left
# 15 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_left
# 15 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 22 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_1:
# 22 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 22 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 37 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_0:
# 37 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_down
# 37 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_down
# 37 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 44 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_1:
# 44 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 44 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 62 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_0:
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_down
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_down
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_left
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	face_up
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_left
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	face_right
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_down
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	face_left
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 63 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_1:
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	face_up
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	face_right
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	face_down
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	face_up
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	face_left
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 63 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 72 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_2:
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	walk_down
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	face_down
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 73 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_3:
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	delay_16
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	walk_down
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	walk_left
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	walk_left
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	face_up
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	jump_in_place_up
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	jump_in_place_up
	step_end

# 105 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_4:
# 105 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 105 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 105 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 105 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 105 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 105 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 106 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_5:
# 106 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 106 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 106 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 106 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 106 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 106 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 106 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 107 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Script_LillieLabEvent_Movement_6:
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0:
# 17 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Sightseer$"

HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_1:
# 18 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Hey- er, Alola! This way leads to Hau'oli\n"
	.string "City, past the Alola Leo Pokémon School.\p"
	.string "There are some wild Pokémon running\n"
	.string "loose outside the school. I wouldn't go\l"
	.string "unless I had some stronger Pokémon\l"
	.string "with me... That's why I'm waiting for my\l"
	.string "fiancée to come back!$"

HauoliOutskirts_Trigger_SightseerMBlockSouth_Text_0:
# 40 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Hey- er, Alola! That way leads to\n"
	.string "Professor Kukui's Lab and Ten Carat\l"
	.string "Hill.\p"
	.string "I saw some wild Pokémon in that grass. I\n"
	.string "wouldn't go unless I had some stronger\l"
	.string "Pokémon with me... That's why I'm waiting\l"
	.string "for my fiancée to come back!$"

HauoliOutskirts_Script_LillieLabEvent_Text_0:
# 59 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Lillie$"

HauoliOutskirts_Script_LillieLabEvent_Text_1:
# 60 "data//maps/HauoliOutskirts/scripts.pory"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY}, you have to stay in the bag! How\n"
	.string "do you think people will react if they\l"
	.string "catch a {COLOR BLUE}Cosmog{COLOR DARK_GRAY} wandering around... We\l"
	.string "don't want {COLOR RED}her{COLOR DARK_GRAY} to find us...$"

HauoliOutskirts_Script_LillieLabEvent_Text_2:
# 70 "data//maps/HauoliOutskirts/scripts.pory"
	.string "{PLAYER}! I- Um, I didn't see you\n"
	.string "there.$"

HauoliOutskirts_Script_LillieLabEvent_Text_3:
# 79 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Ehehe, it looks like {COLOR BLUE}Nebbie{COLOR DARK_GRAY}'s taken an\n"
	.string "interest in you!$"

HauoliOutskirts_Script_LillieLabEvent_Text_4:
# 85 "data//maps/HauoliOutskirts/scripts.pory"
	.string "This is Professor Kukui's Lab! It's...\n"
	.string "Um...\p"
	.string "Well, it's not the prettiest building,\n"
	.string "but it serves. Besides, Kukui's research\l"
	.string "on Pokémon Moves make too much of a\l"
	.string "mess. A big part of my job as his\l"
	.string "Assistant is to clean up the rubble...$"

HauoliOutskirts_Script_LillieLabEvent_Text_5:
# 91 "data//maps/HauoliOutskirts/scripts.pory"
	.string "???$"

HauoliOutskirts_Script_LillieLabEvent_Text_6:
# 93 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Gruff ruff!$"

HauoliOutskirts_Script_LillieLabEvent_Text_7:
# 96 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Prof. Kukui$"

HauoliOutskirts_Script_LillieLabEvent_Text_8:
# 97 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Yeah, {COLOR BLUE}Rockruff{COLOR DARK_GRAY}! Use Rock Slide!$"

HauoliOutskirts_Script_LillieLabEvent_Text_9:
# 103 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Not again! Quick, we have to distract\n"
	.string "him!$"

HauoliOutskirts_Script_SamsonOak_Text_0:
# 123 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Grandpa Samson$"

HauoliOutskirts_Script_SamsonOak_Text_1:
# 132 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Alola, {PLAYER}! How's your Pokémon\n"
	.string "doing?\p"
	.string "I hope you're settling into the Alola\n"
	.string "Region. I know it's quite different than\l"
	.string "Kanto, but give it a chance.$"

HauoliOutskirts_Script_SamsonOak_Text_2:
# 134 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I saw your battle during the Manalo\n"
	.string "Festival, you did great!\p"
	.string "Carrying a {COLOR GREEN}Z-Power Ring{COLOR DARK_GRAY} is a big\n"
	.string "responsibility. I got my own when I was\l"
	.string "about 18, and did the Island Challenge\l"
	.string "myself!$"

HauoliOutskirts_Script_SightseerM_Text_0:
# 147 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I finally made it to Alola! My fiancée\n"
	.string "and I are staying in Hau'oli City.\p"
	.string "She wants to explore the tall grass, but\n"
	.string "I don't have any Pokémon... I think I'll\l"
	.string "just stay here.$"

HauoliOutskirts_Script_LassOnLedge_Text_0:
# 157 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Lady$"

HauoliOutskirts_Script_LassOnLedge_Text_1:
# 158 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Are you Samson Oak's grandchild?$"

HauoliOutskirts_Script_LassOnLedge_Text_2:
# 161 "data//maps/HauoliOutskirts/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Sure am!$"

HauoliOutskirts_Script_LassOnLedge_Text_3:
# 164 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Oho, charmed! I'd heard his family were\n"
	.string "moving back to Alola after living in\l"
	.string "Kanto for years... I had to see for\l"
	.string "myself!$"

HauoliOutskirts_Script_YoungsterWithLechonk_Text_0:
# 174 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Youngster$"

HauoliOutskirts_Script_YoungsterWithLechonk_Text_1:
# 175 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I'm training my Lechonk to grow up real\n"
	.string "strong! No one messes with a big pig!$"

HauoliOutskirts_Script_Lechonk_Text_0:
# 187 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Lechonk$"

HauoliOutskirts_Script_Lechonk_Text_1:
# 189 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Snort!$"

HauoliOutskirts_NPC_BlackBelt_Text_0:
# 202 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Black Belt$"

HauoliOutskirts_NPC_BlackBelt_Text_1:
# 203 "data//maps/HauoliOutskirts/scripts.pory"
	.string "When people see me, they think I only\n"
	.string "use super muscle-y Pokémon...\p"
	.string "And they're RIGHT!$"

HauoliOutskirts_NPC_WomanWithSpinarak_Text_0:
# 213 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Woman$"

HauoliOutskirts_NPC_WomanWithSpinarak_Text_1:
# 214 "data//maps/HauoliOutskirts/scripts.pory"
	.string "{COLOR BLUE}Alolan Spinarak{COLOR DARK_GRAY} adapted to living\n"
	.string "around coastal volcanoes. Apparently,\l"
	.string "they can burrow through volcanic rock!$"

HauoliOutskirts_NPC_Spinarak_Text_0:
# 226 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Spinarak$"

HauoliOutskirts_NPC_Spinarak_Text_1:
# 228 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Ktch-cha!$"

HauoliOutskirts_NPC_SchoolGirlBySign_Text_0:
# 241 "data//maps/HauoliOutskirts/scripts.pory"
	.string "School Girl$"

HauoliOutskirts_NPC_SchoolGirlBySign_Text_1:
# 242 "data//maps/HauoliOutskirts/scripts.pory"
	.string "My teacher at the Alola Leo School told\n"
	.string "me I should read all these big signs!\p"
	.string "I guess the School put them up all over\n"
	.string "Alola... I don't think I wanna read that\l"
	.string "much!$"

HauoliOutskirts_NPC_SchoolGirlBySign_Text_2:
# 245 "data//maps/HauoliOutskirts/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Educational signs, huh? I guess it\n"
	.string "wouldn't hurt to stay up-to-date...$"

HauoliOutskirts_Trainer_LassMadison_Text_0:
# 258 "data//maps/HauoliOutskirts/scripts.pory"
	.string "We're almost to the beach!$"

HauoliOutskirts_Trainer_LassMadison_Text_1:
# 259 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Back to the Pokémon Center for me.$"

HauoliOutskirts_Trainer_LassMadison_Text_2:
# 261 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Lass Madison$"

HauoliOutskirts_Trainer_LassMadison_Text_3:
# 262 "data//maps/HauoliOutskirts/scripts.pory"
	.string "A lot of strange Pokémon live around\n"
	.string "here. They're my favorites!$"

HauoliOutskirts_Trainer_YoungsterKevin_Text_0:
# 271 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Step back, kid!$"

HauoliOutskirts_Trainer_YoungsterKevin_Text_1:
# 272 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Wait, I'm WAY younger than you...!$"

HauoliOutskirts_Trainer_YoungsterKevin_Text_2:
# 274 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Youngster Kevin$"

HauoliOutskirts_Trainer_YoungsterKevin_Text_3:
# 275 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I wanna catch a Rockruff. I hear if it\n"
	.string "evolves at night, it turns super scary\l"
	.string "and cool!$"

HauoliOutskirts_Trainer_SwimmerNatasha_Text_0:
# 284 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Heyyy-y! Jump in the water with me!$"

HauoliOutskirts_Trainer_SwimmerNatasha_Text_1:
# 285 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Eek! The water's cold!$"

HauoliOutskirts_Trainer_SwimmerNatasha_Text_2:
# 287 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Swimmer Natasha$"

HauoliOutskirts_Trainer_SwimmerNatasha_Text_3:
# 288 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I thought all the water was warm in\n"
	.string "Alola...$"

HauoliOutskirts_Sign_HouseSign_Text_0:
# 299 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Oak Family Home$"

HauoliOutskirts_Sign_KukuiLab_Text_0:
# 308 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Kukui's Pokémon Lab$"

HauoliOutskirts_Sign_TenCaratHill_Text_0:
# 317 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Ten Carat Hill$"

HauoliOutskirts_Sign_Directions_Text_0:
# 326 "data//maps/HauoliOutskirts/scripts.pory"
	.string "{LEFT_ARROW} Alola Leo Trainer School\n"
	.string "{LEFT_ARROW} Hau'oli City\p"
	.string "{UP_ARROW} Route 1\n"
	.string "{DOWN_ARROW} Ten Carat Hill$"

HauoliOutskirts_Sign_SeelWatching_Text_0:
# 335 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Alolan Education Tip Number 1:\n"
	.string "Please watch out for sleeping {COLOR BLUE}Seel{COLOR DARK_GRAY} on\l"
	.string "the beach!$"

HauoliOutskirts_Sign_SeelWatching_Text_1:
# 337 "data//maps/HauoliOutskirts/scripts.pory"
	.string "There is more written about {COLOR BLUE}Alolan Seel{COLOR DARK_GRAY}.\n"
	.string "Read it?$"

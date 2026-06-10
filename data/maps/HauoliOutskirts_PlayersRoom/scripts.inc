HauoliOutskirts_PlayersRoom_MapScripts::
# 2 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HauoliOutskirts_PlayersRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HauoliOutskirts_PlayersRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 1, HauoliOutskirts_PlayersHouse_IntroEvent
	.2byte 0


HauoliOutskirts_PlayersHouse_IntroEvent::
# 9 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setvar VAR_INTRO_STATE, 2
# 11 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lockall
# 12 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 20
# 13 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote LOCALID_MOM, EMOTE_EXCLAM
# 14 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_MomApproachPlayersRoom
# 15 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 17 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 18 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_IntroEvent_Text_1
# 19 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 22 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	startquest QUEST_01
# 23 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	completesubquest QUEST_01, SUB_QUEST_1
# 25 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_MomReturnToChair
# 26 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 28 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	releaseall
	end


# 31 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_MomApproachPlayersRoom:
# 33 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 34 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 34 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 34 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 35 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 36 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 37 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 39 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_MomReturnToChair:
# 41 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 42 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 42 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 42 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 43 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 44 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 45 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

HauoliOutskirts_PlayersHouse_Script_Mom::
# 52 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 53 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	faceplayer
# 54 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 56 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_INTRO_STATE
# 58 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case 2, HauoliOutskirts_PlayersHouse_Script_Mom_3
# 61 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case 3, HauoliOutskirts_PlayersHouse_Script_Mom_4
# 77 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_3, MSGBOX_YESNO
# 78 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersHouse_Script_Mom_8
# 92 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_5
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
HauoliOutskirts_PlayersHouse_Script_Mom_1:
# 98 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Script_Mom_3:
# 59 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_0
# 60 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1

HauoliOutskirts_PlayersHouse_Script_Mom_4:
# 62 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_1, MSGBOX_YESNO
# 63 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 64 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersHouse_Script_Mom_6
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1

HauoliOutskirts_PlayersHouse_Script_Mom_6:
# 66 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 67 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 68 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	special HealPlayerParty
# 69 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 70 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 71 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 15
# 72 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 73 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_2
# 74 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1

HauoliOutskirts_PlayersHouse_Script_Mom_8:
# 80 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 81 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 82 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	special HealPlayerParty
# 83 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 84 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 85 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 15
# 86 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 87 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_4
# 88 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1


HauoliOutskirts_PlayersHouse_Script_Meowth::
# 104 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 105 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	faceplayer
# 106 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_Meowth_Text_0
# 107 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 108 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Meowth_Text_1
# 109 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmoncry
# 110 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 111 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter::
# 117 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lockall
# 118 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject 3
# 119 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject 4
# 120 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 123 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_3
# 127 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_4
# 131 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_5
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_3:
# 124 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_ROWLET_STARTERS_HOUSE
# 125 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_ROWLET
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1:
# 136 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 20
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 3, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_0
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_1
# 140 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_2
# 141 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 144 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_8
# 147 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_9
# 150 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_10
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_8:
# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6:
# 154 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 155 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 2, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_4
# 156 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 157 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 10
# 159 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote LOCALID_MOM, EMOTE_EXCLAM
# 160 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 161 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 164 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_13
# 167 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_14
# 170 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_15
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_13:
# 165 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11:
# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_6
# 175 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 176 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 177 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_0
# 178 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 180 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 3, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_7
# 181 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 182 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 183 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_1
# 184 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_2
# 185 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 186 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_8
# 187 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 5
# 189 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 190 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_3
# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_9
# 194 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 195 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4
# 196 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5
# 197 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 198 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 20
# 200 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 201 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
# 202 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_10
# 203 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 204 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4
# 205 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_6
# 206 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 208 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 10
# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_11
# 212 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 213 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_SAMSON_ROUTE_01
# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_STARTERS_ROUTE_01
# 215 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 3
# 216 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 4
# 217 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_ROWLET_STARTERS_HOUSE
# 218 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_LITTEN_STARTERS_HOUSE
# 219 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_POPPLIO_STARTERS_HOUSE
# 220 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 5
# 221 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 6
# 222 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 7
# 223 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_SAMSON_HAUOLI_OUTSKIRTS
# 224 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 225 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 227 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	startsubquest QUEST_01, SUB_QUEST_2
# 229 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_OVERWORLD_ENCOUNTERS_DISABLED
# 230 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	updatefollowingmon
# 231 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	releaseall
	end

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_4:
# 128 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_LITTEN_STARTERS_HOUSE
# 129 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_LITTEN
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_5:
# 132 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_POPPLIO_STARTERS_HOUSE
# 133 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_POPPLIO
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_9:
# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_10:
# 151 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_14:
# 168 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_15:
# 171 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11


HauoliOutskirts_PlayersHouse_Sign_TV::
# 239 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 240 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_TV_Text_0
# 241 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 242 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl::
# 248 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 249 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_0
# 250 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 251 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	goto_if_unset FLAG_GOT_AMULET_COIN_HAUOLI, HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_2
HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_1:
# 261 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_2:
# 253 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_GOT_AMULET_COIN_HAUOLI
# 254 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_1
# 255 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 256 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 257 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 258 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_2
# 259 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_1


HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal::
# 267 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 268 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_0, MSGBOX_YESNO
# 269 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_2
HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_1:
# 274 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 275 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_2:
# 271 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_1
# 272 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_2
	goto HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_1


# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_0:
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_1:
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 140 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_2:
# 140 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 140 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 140 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 140 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 140 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3:
# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 155 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_4:
# 155 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
# 155 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote_heart
# 155 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 165 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5:
# 165 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
	step_end

# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_6:
# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 180 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_7:
# 180 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 180 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
	step_end

# 186 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_8:
# 186 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
	step_end

# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_9:
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_down
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 202 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_10:
# 202 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
	step_end

# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_11:
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_down
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

HauoliOutskirts_PlayersHouse_IntroEvent_Text_0:
# 17 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom$"

HauoliOutskirts_PlayersHouse_IntroEvent_Text_1:
# 18 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Ehehe, sorry about Meowth, {PLAYER}!\n"
	.string "She's been bouncing around the house\l"
	.string "like a Hoppip in a hurricane.\p"
	.string "Looks like you finished your video call\n"
	.string "with Professor Burnet! You should go\l"
	.string "out and {COLOR GREEN}talk to your Grandpa Samson{COLOR DARK_GRAY}\l"
	.string "before you meet with the professors.\l"
	.string "He's just north of here in {COLOR GREEN}Iki Town{COLOR DARK_GRAY}. Try\l"
	.string "to stay out of the tall grass!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_0:
# 59 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Your Grandpa, Tutu Samson, is in {COLOR GREEN}Iki\n"
	.string "Town{COLOR DARK_GRAY} meeting with someone. It sounded\l"
	.string "like he wanted to talk to you!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_1:
# 62 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Now that you've got a Pokémon, you\n"
	.string "should be able to reach {COLOR GREEN}Iki Town{COLOR DARK_GRAY}\l"
	.string "without a problem.\p"
	.string "Do you two want a rest?$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_2:
# 73 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Hey, you two look like you're ready to\n"
	.string "go! Have fun out there!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_3:
# 77 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Alola and welcome home, {PLAYER}! Do\n"
	.string "you want to rest your Pokémon while\l"
	.string "you're here?$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_4:
# 87 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Looks like your Pokémon are all healed.\n"
	.string "Have fun out there!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_5:
# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Alright then, stay as long as you'd like.\n"
	.string "I'm glad you came to visit!$"

HauoliOutskirts_PlayersHouse_Script_Meowth_Text_0:
# 106 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom's Meowth$"

HauoliOutskirts_PlayersHouse_Script_Meowth_Text_1:
# 108 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Breowww!!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_0:
# 177 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Who's THIS?! It's so CUTE!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_1:
# 183 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Grandpa Samson$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_2:
# 184 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "That's {STR_VAR_1}, a rare Pokémon\n"
	.string "native to Alola...\p"
	.string "And it's {PLAYER}'s new Pokémon, too!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_3:
# 190 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Maika'i loa, that's great! How'd this\n"
	.string "happen? I just sent {PLAYER} to get\l"
	.string "you from Iki Town, not get caught up in\l"
	.string "an adventure!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4:
# 195 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Prof. Kukui$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5:
# 196 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "{PLAYER} ran into some bad luck with a\n"
	.string "wild Yungoos on the way, but my Pokémon\l"
	.string "ran off to save them! With\l"
	.string "{STR_VAR_1} by their side,\l"
	.string "{PLAYER}'ll be safe from anything.$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_6:
# 205 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Samson and I ran after those Pokémon\n"
	.string "in such a rush, I forgot why I was in Iki\l"
	.string "Town in the first place!\p"
	.string "Come to {COLOR GREEN}Iki Town{COLOR DARK_GRAY}. You'll be safe with\n"
	.string "{STR_VAR_1}, and I want you to meet\l"
	.string "someone there, yeah!$"

HauoliOutskirts_PlayersHouse_Sign_TV_Text_0:
# 240 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom has a sitcom on from when she was a\n"
	.string "teen. Nostalgia is a powerful thing!$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_0:
# 249 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It's Meowth's food bowl.$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_1:
# 254 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Hm? There's something in the bowl.$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_2:
# 258 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom is spoiling Meowth too much!$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_0:
# 268 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It's Grandpa Samson's field journal!\n"
	.string "Read it?$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_1:
# 271 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Samson Oak$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_2:
# 272 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "{COLOR GREEN}Lurantis{COLOR DARK_GRAY} is a beautiful Pokémon with\n"
	.string "sickle-sharp petals able to cut\l"
	.string "straight through trees. They've\l"
	.string "evolved to blend in with the bright\l"
	.string "flowers of Alola, luring in prey with\l"
	.string "hypnotic swaying and colors before\l"
	.string "striking.\p"
	.string "There are rumors of a {COLOR RED}super-powerful\n"
	.string "Lurantis{COLOR DARK_GRAY} lurking deep in the forests of\l"
	.string "Akala Island. Is this a folktale, or\l"
	.string "could this be a real {COLOR GREEN}Totem Pokémon{COLOR DARK_GRAY}?$"

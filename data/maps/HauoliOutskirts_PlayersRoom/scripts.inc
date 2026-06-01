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
# 23 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_MomReturnToChair
# 24 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 26 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	releaseall
	end


# 29 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_MomApproachPlayersRoom:
# 31 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 32 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 32 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 32 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 33 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 34 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 35 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 37 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_MomReturnToChair:
# 39 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 40 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 40 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 40 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 41 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 42 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 43 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

HauoliOutskirts_PlayersHouse_Script_Mom::
# 50 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 51 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	faceplayer
# 52 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 54 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_INTRO_STATE
# 56 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case 2, HauoliOutskirts_PlayersHouse_Script_Mom_3
# 59 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case 3, HauoliOutskirts_PlayersHouse_Script_Mom_4
# 75 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_3, MSGBOX_YESNO
# 76 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersHouse_Script_Mom_8
# 90 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 91 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_5
# 92 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
HauoliOutskirts_PlayersHouse_Script_Mom_1:
# 96 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Script_Mom_3:
# 57 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_0
# 58 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1

HauoliOutskirts_PlayersHouse_Script_Mom_4:
# 60 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_1, MSGBOX_YESNO
# 61 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 62 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersHouse_Script_Mom_6
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1

HauoliOutskirts_PlayersHouse_Script_Mom_6:
# 64 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 65 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 66 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	special HealPlayerParty
# 67 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 68 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 69 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 15
# 70 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 71 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_2
# 72 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1

HauoliOutskirts_PlayersHouse_Script_Mom_8:
# 78 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 79 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 80 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	special HealPlayerParty
# 81 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 82 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 83 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 15
# 84 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 85 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_4
# 86 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1


HauoliOutskirts_PlayersHouse_Script_Meowth::
# 102 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 103 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	faceplayer
# 104 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_Meowth_Text_0
# 105 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 106 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Meowth_Text_1
# 107 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmoncry
# 108 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 109 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter::
# 115 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lockall
# 116 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject 3
# 117 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject 4
# 118 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 121 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_3
# 125 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_4
# 129 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_5
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_3:
# 122 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_ROWLET_STARTERS_HOUSE
# 123 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_ROWLET
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1:
# 134 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 135 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 20
# 136 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 3, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_0
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_1
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_2
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 142 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_8
# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_9
# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_10
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_8:
# 143 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6:
# 152 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 2, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_4
# 154 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 155 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 10
# 157 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote LOCALID_MOM, EMOTE_EXCLAM
# 158 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 159 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 162 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_13
# 165 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_14
# 168 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_15
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_13:
# 163 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11:
# 172 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_6
# 173 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 175 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_0
# 176 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 178 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 3, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_7
# 179 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 180 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 181 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_1
# 182 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_2
# 183 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 184 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_8
# 185 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 186 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 5
# 187 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_3
# 189 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_9
# 192 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4
# 194 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5
# 195 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 196 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 20
# 198 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 199 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
# 200 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_10
# 201 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 202 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4
# 203 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_6
# 204 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 206 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 10
# 207 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 208 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_11
# 210 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_SAMSON_ROUTE_01
# 212 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_STARTERS_ROUTE_01
# 213 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 3
# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 4
# 215 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_ROWLET_STARTERS_HOUSE
# 216 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_LITTEN_STARTERS_HOUSE
# 217 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_POPPLIO_STARTERS_HOUSE
# 218 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 5
# 219 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 6
# 220 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 7
# 221 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_SAMSON_HAUOLI_OUTSKIRTS
# 222 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 223 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 227 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_OVERWORLD_ENCOUNTERS_DISABLED
# 228 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	updatefollowingmon
# 229 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	releaseall
	end

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_4:
# 126 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_LITTEN_STARTERS_HOUSE
# 127 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_LITTEN
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_5:
# 130 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_POPPLIO_STARTERS_HOUSE
# 131 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_POPPLIO
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_9:
# 146 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_10:
# 149 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_14:
# 166 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_15:
# 169 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11


HauoliOutskirts_PlayersHouse_Sign_TV::
# 237 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 238 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_TV_Text_0
# 239 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 240 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl::
# 246 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 247 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_0
# 248 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 249 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	goto_if_unset FLAG_GOT_AMULET_COIN_HAUOLI, HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_2
HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_1:
# 259 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_2:
# 251 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_GOT_AMULET_COIN_HAUOLI
# 252 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_1
# 253 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 254 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 255 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 256 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_2
# 257 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_1


HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal::
# 265 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 266 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_0, MSGBOX_YESNO
# 267 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_2
HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_1:
# 272 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 273 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_2:
# 269 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_1
# 270 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_2
	goto HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_1


# 136 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_0:
# 136 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 136 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 136 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
# 136 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_1:
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_2:
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 143 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3:
# 143 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 143 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 143 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 143 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 143 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_4:
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote_heart
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 163 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5:
# 163 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
	step_end

# 172 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_6:
# 172 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 172 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 172 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 172 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 172 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 172 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 178 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_7:
# 178 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 178 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
	step_end

# 184 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_8:
# 184 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
	step_end

# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_9:
# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_down
# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 200 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_10:
# 200 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
	step_end

# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_11:
# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_down
# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
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
# 57 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Your Grandpa, Tutu Samson, is in {COLOR GREEN}Iki\n"
	.string "Town{COLOR DARK_GRAY} meeting with someone. It sounded\l"
	.string "like he wanted to talk to you!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_1:
# 60 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Now that you've got a Pokémon, you\n"
	.string "should be able to reach {COLOR GREEN}Iki Town{COLOR DARK_GRAY}\l"
	.string "without a problem.\p"
	.string "Do you two want a rest?$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_2:
# 71 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Hey, you two look like you're ready to\n"
	.string "go! Have fun out there!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_3:
# 75 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Alola and welcome home, {PLAYER}! Do\n"
	.string "you want to rest your Pokémon while\l"
	.string "you're here?$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_4:
# 85 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Looks like your Pokémon are all healed.\n"
	.string "Have fun out there!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_5:
# 91 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Alright then, stay as long as you'd like.\n"
	.string "I'm glad you came to visit!$"

HauoliOutskirts_PlayersHouse_Script_Meowth_Text_0:
# 104 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom's Meowth$"

HauoliOutskirts_PlayersHouse_Script_Meowth_Text_1:
# 106 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Breowww!!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_0:
# 175 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Who's THIS?! It's so CUTE!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_1:
# 181 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Grandpa Samson$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_2:
# 182 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "That's {STR_VAR_1}, a rare Pokémon\n"
	.string "native to Alola...\p"
	.string "And it's {PLAYER}'s new Pokémon, too!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_3:
# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Maika'i loa, that's great! How'd this\n"
	.string "happen? I just sent {PLAYER} to get\l"
	.string "you from Iki Town, not get caught up in\l"
	.string "an adventure!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4:
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Prof. Kukui$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5:
# 194 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "{PLAYER} ran into some bad luck with a\n"
	.string "wild Yungoos on the way, but my Pokémon\l"
	.string "ran off to save them! With\l"
	.string "{STR_VAR_1} by their side,\l"
	.string "{PLAYER}'ll be safe from anything.$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_6:
# 203 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Samson and I ran after those Pokémon\n"
	.string "in such a rush, I forgot why I was in Iki\l"
	.string "Town in the first place!\p"
	.string "Come meet me in {COLOR GREEN}Iki Town{COLOR DARK_GRAY}. You'll be safe\n"
	.string "with {STR_VAR_1}, and I want you to\l"
	.string "meet someone there, yeah!$"

HauoliOutskirts_PlayersHouse_Sign_TV_Text_0:
# 238 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom has a sitcom on from when she was a\n"
	.string "teen. Nostalgia is a powerful thing!$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_0:
# 247 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It's Meowth's food bowl.$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_1:
# 252 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Hm? There's something in the bowl.$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_2:
# 256 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom is spoiling Meowth too much!$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_0:
# 266 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It's Grandpa Samson's field journal!\n"
	.string "Read it?$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_1:
# 269 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Samson Oak$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_2:
# 270 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
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

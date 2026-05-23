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
# 48 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 49 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	faceplayer
# 50 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 51 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_0
# 52 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 53 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Script_Meowth::
# 59 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 60 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	faceplayer
# 61 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_Meowth_Text_0
# 62 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 63 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Meowth_Text_1
# 64 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmoncry
# 65 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 66 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter::
# 72 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lockall
# 73 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject 3
# 74 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject 4
# 75 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 78 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_3
# 82 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_4
# 86 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_5
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_3:
# 79 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_ROWLET_STARTERS_HOUSE
# 80 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_ROWLET
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1:
# 91 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 92 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 20
# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 3, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_0
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_1
# 95 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_2
# 96 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 99 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_8
# 102 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_9
# 105 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_10
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_8:
# 100 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6:
# 109 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 110 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 2, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_4
# 111 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 112 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 10
# 114 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote LOCALID_MOM, EMOTE_EXCLAM
# 115 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 116 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 119 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_13
# 122 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_14
# 125 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_15
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_13:
# 120 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11:
# 129 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_6
# 130 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 131 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 132 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_0
# 133 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 135 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 3, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_7
# 136 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_1
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_2
# 140 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 141 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_8
# 142 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 143 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 5
# 144 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_3
# 146 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_9
# 149 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 150 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4
# 151 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5
# 152 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 20
# 155 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 156 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
# 157 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_10
# 158 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 159 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4
# 160 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_6
# 161 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 163 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 10
# 164 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 165 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 166 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_11
# 167 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 168 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_SAMSON_ROUTE_01
# 169 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_STARTERS_ROUTE_01
# 170 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 3
# 171 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 4
# 172 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_ROWLET_STARTERS_HOUSE
# 173 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_LITTEN_STARTERS_HOUSE
# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_POPPLIO_STARTERS_HOUSE
# 175 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 5
# 176 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 6
# 177 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 7
# 178 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_SAMSON_HAUOLI_OUTSKIRTS
# 179 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 180 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 184 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	updatefollowingmon
# 185 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	releaseall
	end

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_4:
# 83 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_LITTEN_STARTERS_HOUSE
# 84 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_LITTEN
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_5:
# 87 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_POPPLIO_STARTERS_HOUSE
# 88 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_POPPLIO
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_9:
# 103 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_10:
# 106 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_14:
# 123 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_15:
# 126 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11


HauoliOutskirts_PlayersHouse_Sign_TV::
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 194 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_TV_Text_0
# 195 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 196 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl::
# 202 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 203 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_0
# 204 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 205 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	goto_if_unset FLAG_GOT_AMULET_COIN_HAUOLI, HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_2
HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_1:
# 215 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_2:
# 207 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_GOT_AMULET_COIN_HAUOLI
# 208 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_1
# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 210 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 212 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_2
# 213 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_1


HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal::
# 221 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 222 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_0, MSGBOX_YESNO
# 223 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_2
HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_1:
# 228 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 229 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_2:
# 225 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_1
# 226 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_2
	goto HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_1


# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_0:
# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_1:
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 95 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_2:
# 95 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 95 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 95 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 95 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 95 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 100 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3:
# 100 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 100 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 100 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 100 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 100 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 110 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_4:
# 110 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
# 110 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote_heart
# 110 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 120 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5:
# 120 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
	step_end

# 129 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_6:
# 129 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 129 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 129 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 129 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 129 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 129 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 135 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_7:
# 135 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 135 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
	step_end

# 141 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_8:
# 141 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
	step_end

# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_9:
# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_down
# 148 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 157 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_10:
# 157 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
	step_end

# 166 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_11:
# 166 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 166 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 166 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 166 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 166 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_down
# 166 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
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
# 51 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Alola {PLAYER}! It's nice to be back in\n"
	.string "our home region, yeah?$"

HauoliOutskirts_PlayersHouse_Script_Meowth_Text_0:
# 61 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom's Meowth$"

HauoliOutskirts_PlayersHouse_Script_Meowth_Text_1:
# 63 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Breowww!!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_0:
# 132 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Who's THIS?! It's so CUTE!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_1:
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Grandpa Samson$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_2:
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "That's {STR_VAR_1}, a rare Pokémon\n"
	.string "native to Alola...\p"
	.string "And it's {PLAYER}'s new Pokémon, too!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_3:
# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Maika'i loa, that's great! How'd this\n"
	.string "happen? I just sent {PLAYER} to get\l"
	.string "you from Iki Town, not get caught up in\l"
	.string "an adventure!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4:
# 150 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Prof. Kukui$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5:
# 151 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "{PLAYER} ran into some bad luck with a\n"
	.string "wild Yungoos on the way, but my Pokémon\l"
	.string "ran off to save them! With\l"
	.string "{STR_VAR_1} by their side,\l"
	.string "{PLAYER}'ll be safe from anything.$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_6:
# 160 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Samson and I ran after those Pokémon\n"
	.string "in such a rush, I forgot why I was in Iki\l"
	.string "Town in the first place!\p"
	.string "Come meet me in {COLOR GREEN}Iki Town{COLOR DARK_GRAY}. You'll be safe\n"
	.string "with {STR_VAR_1}, and I want you to\l"
	.string "meet someone there, yeah!$"

HauoliOutskirts_PlayersHouse_Sign_TV_Text_0:
# 194 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom has a sitcom on from when she was a\n"
	.string "teen. Nostalgia is a powerful thing!$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_0:
# 203 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It's Meowth's food bowl.$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_1:
# 208 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Hm? There's something in the bowl.$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_2:
# 212 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom is spoiling Meowth too much!$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_0:
# 222 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It's Grandpa Samson's field journal!\n"
	.string "Read it?$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_1:
# 225 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Samson Oak$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_2:
# 226 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
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

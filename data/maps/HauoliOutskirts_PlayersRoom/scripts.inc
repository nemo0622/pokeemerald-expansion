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
	createfieldmugshot MUGSHOT_MOM
# 18 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 19 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_IntroEvent_Text_1
# 20 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 23 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	startquest QUEST_WELCOME_TO_ALOLA
# 24 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	completesubquest QUEST_WELCOME_TO_ALOLA, QUEST_WELCOME_TO_ALOLA_SUBQUEST_1
# 26 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_MomReturnToChair
# 27 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 29 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	releaseall
	end


# 32 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_MomApproachPlayersRoom:
# 34 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 35 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 35 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 35 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 36 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 37 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 38 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 40 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_MomReturnToChair:
# 42 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 43 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 43 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 43 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 44 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 45 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 46 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

HauoliOutskirts_PlayersHouse_Script_Mom::
# 53 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 54 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	faceplayer
# 55 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 56 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_MOM
# 58 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_INTRO_STATE
# 60 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case 2, HauoliOutskirts_PlayersHouse_Script_Mom_3
# 63 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case 3, HauoliOutskirts_PlayersHouse_Script_Mom_4
# 84 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_4
# 85 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmessage
# 86 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removefieldmugshot
# 87 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 88 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_5, MSGBOX_YESNO
# 89 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 90 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersHouse_Script_Mom_8
# 105 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 106 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_MOM
# 107 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_7
# 108 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
HauoliOutskirts_PlayersHouse_Script_Mom_1:
# 112 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Script_Mom_3:
# 61 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_0
# 62 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1

HauoliOutskirts_PlayersHouse_Script_Mom_4:
# 64 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_1
# 65 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmessage
# 66 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removefieldmugshot
# 67 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 68 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_2, MSGBOX_YESNO
# 69 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 70 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliOutskirts_PlayersHouse_Script_Mom_6
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1

HauoliOutskirts_PlayersHouse_Script_Mom_6:
# 72 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 73 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 74 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	special HealPlayerParty
# 75 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 76 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 77 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 15
# 78 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 79 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_MOM
# 80 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_3
# 81 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1

HauoliOutskirts_PlayersHouse_Script_Mom_8:
# 92 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	special HealPlayerParty
# 95 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 96 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 97 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 15
# 98 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 99 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_MOM
# 100 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_6
# 101 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Script_Mom_1


HauoliOutskirts_PlayersHouse_Script_Meowth::
# 118 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 119 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	faceplayer
# 120 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_Meowth_Text_0
# 121 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 122 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Meowth_Text_1
# 123 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmoncry
# 124 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 125 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter::
# 131 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lockall
# 132 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject 3
# 133 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject 4
# 134 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 137 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_3
# 141 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_4
# 145 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_5
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_3:
# 138 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_ROWLET_STARTERS_HOUSE
# 139 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_ROWLET
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1:
# 150 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 151 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 20
# 152 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 3, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_0
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_1
# 154 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_2
# 155 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 158 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_8
# 161 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_9
# 164 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_10
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_8:
# 159 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6:
# 168 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 169 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 2, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_4
# 170 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 171 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 10
# 173 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote LOCALID_MOM, EMOTE_EXCLAM
# 174 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 175 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	switch VAR_STARTER_MON
# 178 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_13
# 181 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_14
# 184 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	case SPECIES_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_15
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_13:
# 179 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_ROWLET, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11:
# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_6
# 189 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 190 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_MOM
# 191 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 192 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_0
# 193 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 195 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 3, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_7
# 196 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 197 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_STARTER_MON
# 198 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_SAMSON_OAK
# 199 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_1
# 200 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_2
# 201 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmessage
# 202 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_SAMSON_OAK, EMOTION_LAUGH
# 203 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_1
# 204 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_3
# 205 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 206 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_8
# 207 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 208 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 5
# 209 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_MOM
# 210 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4
# 212 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_9
# 215 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 216 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 217 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5
# 218 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_6
# 219 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 220 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 20
# 222 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 223 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
# 224 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_10
# 225 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 226 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI, EMOTION_LAUGH
# 227 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5
# 228 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_7
# 229 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 230 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 231 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	message HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_8
# 232 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmessage
# 233 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitfanfare
# 234 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 235 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_ROTOM_DEX
# 236 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_9
# 237 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_10
# 238 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 239 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 240 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5
# 241 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_11
# 242 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmessage
# 243 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI, EMOTION_OTHER
# 244 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5
# 245 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_12
# 246 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmessage
# 247 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI, EMOTION_NORMAL
# 248 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5
# 249 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_13
# 250 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 253 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	startquest QUEST_DEX_COMPLETION
# 254 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	completesubquest QUEST_DEX_COMPLETION, QUEST_DEX_COMPLETION_SUBQUEST_1
# 255 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	completesubquest QUEST_DEX_COMPLETION, QUEST_DEX_COMPLETION_SUBQUEST_2
# 256 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	completesubquest QUEST_DEX_COMPLETION, QUEST_DEX_COMPLETION_SUBQUEST_3
# 257 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	completesubquest QUEST_DEX_COMPLETION, QUEST_DEX_COMPLETION_SUBQUEST_4
# 259 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 10
# 260 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement 4, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_11
# 261 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 262 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 10
# 263 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 264 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5
# 265 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_14
# 266 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 268 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 269 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 271 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 10
# 272 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 273 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 274 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_12
# 275 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 276 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_SAMSON_ROUTE_01
# 277 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_STARTERS_ROUTE_01
# 278 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 3
# 279 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 4
# 280 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_ROWLET_STARTERS_HOUSE
# 281 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_LITTEN_STARTERS_HOUSE
# 282 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_HIDE_POPPLIO_STARTERS_HOUSE
# 283 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 5
# 284 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 6
# 285 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	removeobject 7
# 286 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_SAMSON_HAUOLI_OUTSKIRTS
# 287 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 288 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 30
# 290 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	startsubquest QUEST_WELCOME_TO_ALOLA, QUEST_WELCOME_TO_ALOLA_SUBQUEST_2
# 292 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_OVERWORLD_ENCOUNTERS_DISABLED
# 293 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	updatefollowingmon
# 294 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	releaseall
	end

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_4:
# 142 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_LITTEN_STARTERS_HOUSE
# 143 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_LITTEN
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_5:
# 146 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	clearflag FLAG_HIDE_POPPLIO_STARTERS_HOUSE
# 147 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	addobject LOCALID_PH_POPPLIO
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_1

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_9:
# 162 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_10:
# 165 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_6

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_14:
# 182 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_LITTEN, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_15:
# 185 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_PH_POPPLIO, HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5
	goto HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_11


HauoliOutskirts_PlayersHouse_Sign_TV::
# 302 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 303 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createplayerfieldmugshot EMOTION_LAUGH
# 304 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_TV_Text_0
# 305 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 306 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl::
# 312 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 313 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_0
# 314 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 315 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	goto_if_unset FLAG_GOT_AMULET_COIN_HAUOLI, HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_2
HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_1:
# 327 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_2:
# 317 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_GOT_AMULET_COIN_HAUOLI
# 318 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createplayerfieldmugshot
# 319 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_1
# 320 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 321 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 322 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 323 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	createplayerfieldmugshot EMOTION_LAUGH
# 324 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_2
# 325 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_1


HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal::
# 333 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 334 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_0, MSGBOX_YESNO
# 335 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_2
HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_1:
# 340 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 341 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_2:
# 337 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_1
# 338 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_2
	goto HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_1


# 152 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_0:
# 152 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 152 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 152 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
# 152 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_1:
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_left
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 153 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 154 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_2:
# 154 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 154 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 154 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 154 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 154 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 159 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_3:
# 159 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 159 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 159 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 159 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 159 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 169 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_4:
# 169 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
# 169 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote_heart
# 169 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 179 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_5:
# 179 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
	step_end

# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_6:
# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_down
# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 188 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 195 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_7:
# 195 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 195 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_right
	step_end

# 206 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_8:
# 206 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	jump_in_place_left
	step_end

# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_9:
# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_down
# 214 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 224 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_10:
# 224 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
	step_end

# 260 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_11:
# 260 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_in_place_left
# 260 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_in_place_left
# 260 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 274 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Movement_12:
# 274 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 274 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 274 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 274 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_fast_up
# 274 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_down
# 274 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

HauoliOutskirts_PlayersHouse_IntroEvent_Text_0:
# 18 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom$"

HauoliOutskirts_PlayersHouse_IntroEvent_Text_1:
# 19 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
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
# 61 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Your Grandpa, Tutu Samson, is in {COLOR GREEN}Iki\n"
	.string "Town{COLOR DARK_GRAY} meeting with someone. It sounded\l"
	.string "like he wanted to talk to you!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_1:
# 64 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Now that you've got a Pokémon, you\n"
	.string "should be able to reach {COLOR GREEN}Iki Town{COLOR DARK_GRAY}\l"
	.string "without a problem.$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_2:
# 68 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Do you two want a rest?$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_3:
# 80 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Hey, you two look like you're ready to\n"
	.string "go! Have fun out there!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_4:
# 84 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Alola and welcome home, {PLAYER}!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_5:
# 88 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Do you want to rest your Pokémon while\n"
	.string "you're here?$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_6:
# 100 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Looks like your Pokémon are all healed.\n"
	.string "Have fun out there!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_7:
# 107 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Alright then, stay as long as you'd like.\n"
	.string "I'm glad you came to visit!$"

HauoliOutskirts_PlayersHouse_Script_Meowth_Text_0:
# 120 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom's Meowth$"

HauoliOutskirts_PlayersHouse_Script_Meowth_Text_1:
# 122 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Breowww!!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_0:
# 192 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Who's THIS?! It's so CUTE!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_1:
# 199 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Grandpa Samson$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_2:
# 200 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "That's {STR_VAR_1}, a rare Pokémon\n"
	.string "native to Alola...$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_3:
# 204 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "And it's {PLAYER}'s new Pokémon, too!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_4:
# 211 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Maika'i loa, that's great! How'd this\n"
	.string "happen? I just sent {PLAYER} to get\l"
	.string "you from Iki Town, not get caught up in\l"
	.string "an adventure!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_5:
# 217 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Prof. Kukui$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_6:
# 218 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "{PLAYER} ran into some bad luck with a\n"
	.string "wild Yungoos on the way, but my Pokémon\l"
	.string "ran off to save them! With\l"
	.string "{STR_VAR_1} by their side,\l"
	.string "{PLAYER}'ll be safe from anything.$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_7:
# 228 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Oh! I got so lost in your Pokémon, I\n"
	.string "forgot to give you this!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_8:
# 231 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Professor Kukui handed you a {COLOR GREEN}Rotom\n"
	.string "Dex{COLOR DARK_GRAY}!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_9:
# 236 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Rotom$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_10:
# 237 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Uh, hey there! P-pleasure to meet you!\n"
	.string "I-I'm not nervouzzz or anything, OK?!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_11:
# 241 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Hey, how about that! The {COLOR GREEN}Rotom Dex{COLOR DARK_GRAY} is a\n"
	.string "companion for your journey.$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_12:
# 245 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It'll keep track of Pokémon you've\n"
	.string "caught (like my precious {COLOR BLUE}Cutiefly{COLOR DARK_GRAY}!),\l"
	.string "your Party, and even your {COLOR GREEN}Quests{COLOR DARK_GRAY}.$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_13:
# 249 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "If you ever have a question, ask Rotom\n"
	.string "- {COLOR BLUE}press Start to turn it on{COLOR DARK_GRAY}, and it'll\l"
	.string "project a whole menu of things to do!$"

HauoliOutskirts_PlayersHouse_Script_MomMeetsStarter_Text_14:
# 265 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Awrite, you should be all set to explore\n"
	.string "safely! You should {COLOR GREEN}come to Iki Town{COLOR DARK_GRAY} for\l"
	.string "the {COLOR GREEN}Manalo Festival{COLOR DARK_GRAY} soon. Maybe you can\l"
	.string "meet the Kahuna there!$"

HauoliOutskirts_PlayersHouse_Sign_TV_Text_0:
# 304 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Mom has a sitcom on from when she was a\n"
	.string "teen. Nostalgia is a powerful thing!$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_0:
# 313 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It's Meowth's food bowl.$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_1:
# 319 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Hm? There's something in the bowl.$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_2:
# 324 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Mom is spoiling Meowth too much!$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_0:
# 334 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It's Grandpa Samson's field journal!\n"
	.string "Read it?$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_1:
# 337 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Samson Oak$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_2:
# 338 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
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

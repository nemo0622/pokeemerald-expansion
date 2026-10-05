HauoliShoppingDistrict_MapScripts::
	.byte 0


HauoliShoppingDistrict_Trigger_BlockGrass::
# 9 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lockall
# 10 "data//maps/HauoliShoppingDistrict/scripts.pory"
	emote 16, EMOTE_EXCLAM
# 11 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 12 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 16, HauoliShoppingDistrict_Trigger_BlockGrass_Movement_0
# 13 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 14 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 15 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Trigger_BlockGrass_Text_0
# 16 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Trigger_BlockGrass_Text_1
# 17 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 18 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 19 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 16, Common_Movement_WalkRight
# 20 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 21 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp
# 22 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 23 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_Event_HauOutsideMalasadaShop::
# 29 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lockall
# 30 "data//maps/HauoliShoppingDistrict/scripts.pory"
	emote 17, EMOTE_EXCLAM
# 31 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 32 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_0
# 33 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 34 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 35 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 36 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_1
# 37 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 40 "data//maps/HauoliShoppingDistrict/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 41 "data//maps/HauoliShoppingDistrict/scripts.pory"
	switch VAR_TEMP_2
# 43 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 37, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_3
# 45 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 38, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_4
# 47 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 39, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_5
# 49 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 40, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_6
# 51 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 41, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_7
# 54 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_2
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_1:
# 56 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 57 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 58 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 59 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 60 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 61 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_2
# 62 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 65 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 20
# 66 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_3
# 67 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_4
# 68 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 69 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 70 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 71 "data//maps/HauoliShoppingDistrict/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_QUESTION
# 72 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 20
# 73 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_6
# 74 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_6
# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 18, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_7
# 76 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 19, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_7
# 77 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 78 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 80 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_SKULL_GRUNT_F
# 81 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_5
# 82 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_6
# 83 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createplayerfieldmugshot
# 84 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_7
# 85 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 86 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 87 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 88 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 89 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_INTENSE
# 90 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 91 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_8
# 92 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 93 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, Common_Movement_FaceRight
# 94 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 95 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 19, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_8
# 96 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 97 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_SKULL_GRUNT_M
# 98 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_9
# 99 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_10
# 100 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 101 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 18, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_8
# 102 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 103 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_SKULL_GRUNT_F
# 104 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_5
# 105 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_11
# 106 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 107 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_INTENSE
# 108 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 109 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_12
# 110 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 113 "data//maps/HauoliShoppingDistrict/scripts.pory"
	trainerbattle_no_intro TRAINER_SKULL_GRUNT_HAUOLI, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_13
# 116 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 20
# 117 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 19, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_8
# 118 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 119 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_SKULL_GRUNT_M, EMOTION_SAD
# 120 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_9
# 121 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_14
# 122 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 123 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 18, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_9
# 124 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 125 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_SKULL_GRUNT_F, EMOTION_SAD
# 126 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_5
# 127 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_15
# 128 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 18, Common_Movement_FaceLeft
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 131 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_SKULL_GRUNT_M, EMOTION_SAD
# 132 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_5
# 133 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_16
# 134 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 135 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 19, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_10
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 18, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_11
# 138 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 139 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 140 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 141 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 142 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 143 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 144 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_17
# 145 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmessage
# 146 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_LAUGH
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 148 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_18
# 149 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmessage
# 150 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 151 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 152 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_19
# 153 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_12
# 155 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 157 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setflag FLAG_DID_MALASADA_SHOP_EVENT
# 158 "data//maps/HauoliShoppingDistrict/scripts.pory"
	removeobject 17
# 159 "data//maps/HauoliShoppingDistrict/scripts.pory"
	removeobject 18
# 160 "data//maps/HauoliShoppingDistrict/scripts.pory"
	removeobject 19
# 162 "data//maps/HauoliShoppingDistrict/scripts.pory"
	releaseall
	end

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_3:
# 44 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_1
	goto HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_1

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_4:
# 46 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_2
	goto HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_1

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_5:
# 48 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_3
	goto HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_1

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_6:
# 50 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_4
	goto HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_1

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_7:
# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_5
	goto HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_1


HauoliShoppingDistrict_Event_MeetIlima::
# 168 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lockall
# 169 "data//maps/HauoliShoppingDistrict/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 170 "data//maps/HauoliShoppingDistrict/scripts.pory"
	switch VAR_TEMP_1
# 172 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 48, HauoliShoppingDistrict_Event_MeetIlima_3
# 174 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 50, HauoliShoppingDistrict_Event_MeetIlima_4
# 177 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
HauoliShoppingDistrict_Event_MeetIlima_1:
# 179 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 180 "data//maps/HauoliShoppingDistrict/scripts.pory"
	emote 24, EMOTE_EXCLAM
# 181 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 182 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 24, Common_Movement_FaceUp
# 183 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 184 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 185 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_ILIMA
# 186 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 187 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_MeetIlima_Text_1
# 188 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 189 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createplayerfieldmugshot
# 190 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_MeetIlima_Text_2
# 191 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 192 "data//maps/HauoliShoppingDistrict/scripts.pory"
	emote 24, EMOTE_EXCLAM
# 193 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 194 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_ILIMA
# 195 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 196 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_MeetIlima_Text_3
# 197 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 199 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 24, Common_Movement_WalkDown
# 200 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 201 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 20
# 202 "data//maps/HauoliShoppingDistrict/scripts.pory"
	startsubquest QUEST_TRIAL_ILIMA, QUEST_TRIAL_ILIMA_SUBQUEST_2
# 203 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setflag FLAG_MET_ILIMA_HAUOLI
# 204 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 206 "data//maps/HauoliShoppingDistrict/scripts.pory"
	releaseall
	end

HauoliShoppingDistrict_Event_MeetIlima_3:
# 173 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_MeetIlima_Movement_0
	goto HauoliShoppingDistrict_Event_MeetIlima_1

HauoliShoppingDistrict_Event_MeetIlima_4:
# 175 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_MeetIlima_Movement_1
	goto HauoliShoppingDistrict_Event_MeetIlima_1


HauoliShoppingDistrict_NPC_BackpackerPlayingCards::
# 214 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 215 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 216 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_0
# 217 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_1
# 218 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 219 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 220 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 221 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_0
# 222 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_2
# 223 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 224 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 225 "data//maps/HauoliShoppingDistrict/scripts.pory"
	emote 13, EMOTE_EXCLAM
# 226 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 227 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 13, HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Movement_0
# 228 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 229 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_0
# 230 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_3
# 231 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 232 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 233 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 235 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 20
# 236 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createplayerfieldmugshot EMOTION_SAD
# 237 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_4
# 238 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 239 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_VeteranWandering::
# 245 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 246 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 247 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_VeteranWandering_Text_0
# 248 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_VeteranWandering_Text_1
# 249 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 250 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_SilkScarfWoman::
# 256 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 257 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 258 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_0
# 259 "data//maps/HauoliShoppingDistrict/scripts.pory"
	goto_if_set FLAG_GOT_SILK_SCARF, HauoliShoppingDistrict_NPC_SilkScarfWoman_2
# 265 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_2
# 266 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 267 "data//maps/HauoliShoppingDistrict/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 268 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setflag FLAG_GOT_SILK_SCARF
# 269 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_0
# 270 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_3
HauoliShoppingDistrict_NPC_SilkScarfWoman_1:
# 272 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 273 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end

HauoliShoppingDistrict_NPC_SilkScarfWoman_2:
# 261 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_1
	goto HauoliShoppingDistrict_NPC_SilkScarfWoman_1


HauoliShoppingDistrict_NPC_PicnickerInGrass::
# 279 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 280 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 281 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Trigger_BlockGrass_Text_0
# 282 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_PicnickerInGrass_Text_0
# 283 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 284 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_LadyWithMalasada::
# 290 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 291 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 292 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_LadyWithMalasada_Text_0
# 293 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_LadyWithMalasada_Text_1
# 294 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 295 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_WomanNearMarina::
# 301 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 302 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 303 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_WomanNearMarina_Text_0
# 304 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_WomanNearMarina_Text_1
# 305 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 306 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_BattleGirlOnStreet::
# 312 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 313 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 314 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_BattleGirlOnStreet_Text_0
# 315 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_BattleGirlOnStreet_Text_1
# 316 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 317 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_SailorAtWharf::
# 323 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 324 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 325 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_SailorAtWharf_Text_0
# 326 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_SailorAtWharf_Text_1
# 327 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 328 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_SailorWithFarfetchd::
# 334 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 335 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 336 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_SailorAtWharf_Text_0
# 337 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_SailorWithFarfetchd_Text_0
# 338 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 339 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 340 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 341 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_Pokemon_Farfetchd::
# 346 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 347 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 348 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Pokemon_Farfetchd_Text_0
# 349 "data//maps/HauoliShoppingDistrict/scripts.pory"
	playmoncry SPECIES_FARFETCHD, CRY_MODE_NORMAL
# 350 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Pokemon_Farfetchd_Text_1
# 351 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmoncry
# 352 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 353 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_SightseerWithHealBall::
# 359 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 360 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 361 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_SightseerWithHealBall_Text_0
# 362 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_SightseerWithHealBall_Text_1
# 363 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 364 "data//maps/HauoliShoppingDistrict/scripts.pory"
	giveitem ITEM_HEAL_BALL, 5
# 365 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 366 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_SightseerWithHealBall_Text_0
# 367 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_SightseerWithHealBall_Text_2
# 368 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 369 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_OfficeWorkerWithStufful::
# 375 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 376 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 377 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_OfficeWorkerWithStufful_Text_0
# 378 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_OfficeWorkerWithStufful_Text_1
# 379 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 380 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_Pokemon_Stufful::
# 385 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 386 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 387 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Pokemon_Stufful_Text_0
# 388 "data//maps/HauoliShoppingDistrict/scripts.pory"
	playmoncry SPECIES_STUFFUL, CRY_MODE_NORMAL
# 389 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Pokemon_Stufful_Text_1
# 390 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmoncry
# 391 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 392 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_Officer::
# 398 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 399 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 400 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Officer_Text_0
# 401 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Officer_Text_1
# 402 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 403 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_PunkRocker::
# 409 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 410 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 411 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_PunkRocker_Text_0
# 412 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_PunkRocker_Text_1
# 413 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 414 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_OldManWithCorsola::
# 420 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 421 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 422 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_OldManWithCorsola_Text_0
# 423 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_OldManWithCorsola_Text_1
# 424 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 425 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_Pokemon_Corsola::
# 430 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 431 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 432 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Pokemon_Corsola_Text_0
# 433 "data//maps/HauoliShoppingDistrict/scripts.pory"
	playmoncry SPECIES_CORSOLA, CRY_MODE_NORMAL
# 434 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Pokemon_Corsola_Text_1
# 435 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmoncry
# 436 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 437 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_OfficerWorkerOnCoast::
# 443 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 444 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 445 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_OfficeWorkerWithStufful_Text_0
# 446 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_OfficerWorkerOnCoast_Text_0
# 447 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 448 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_Bellhop::
# 454 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 455 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 456 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Bellhop_Text_0
# 457 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Bellhop_Text_1
# 458 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 459 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_DancerF::
# 465 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 466 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 467 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_DancerF_Text_0
# 468 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_DancerF_Text_1
# 469 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 470 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_DancerWithCrabrawler::
# 476 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 477 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 478 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_DancerF_Text_0
# 479 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_DancerWithCrabrawler_Text_0
# 480 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 481 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 482 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 483 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_Pokemon_Crabrawler::
# 488 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 489 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 490 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Pokemon_Crabrawler_Text_0
# 491 "data//maps/HauoliShoppingDistrict/scripts.pory"
	playmoncry SPECIES_CRABRAWLER, CRY_MODE_NORMAL
# 492 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Pokemon_Crabrawler_Text_1
# 493 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmoncry
# 494 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 495 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 496 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 497 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_Jester::
# 503 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 504 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 505 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Jester_Text_0
# 506 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Jester_Text_1
# 507 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 508 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_Event_JesterBlock::
# 514 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lockall
# 515 "data//maps/HauoliShoppingDistrict/scripts.pory"
	emote 42, EMOTE_EXCLAM
# 516 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 517 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Jester_Text_0
# 518 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_JesterBlock_Text_0
# 519 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 520 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 521 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 522 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 523 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Jester_Text_0
# 524 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_JesterBlock_Text_1
# 525 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 526 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 527 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 528 "data//maps/HauoliShoppingDistrict/scripts.pory"
	releaseall
	end


HauoliShoppingDistrict_NPC_Camper::
# 534 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 535 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 536 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Camper_Text_0
# 537 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Camper_Text_1
# 538 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 539 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_Hiker::
# 545 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 546 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 547 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Hiker_Text_0
# 548 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Hiker_Text_1
# 549 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 550 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_Surfer::
# 556 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 557 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 558 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Surfer_Text_0
# 559 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Surfer_Text_1
# 560 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 561 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_IlimaBattle::
# 568 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 569 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 570 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 571 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_ILIMA
# 572 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_IlimaBattle_Text_0
# 573 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmessage
# 574 "data//maps/HauoliShoppingDistrict/scripts.pory"
	removefieldmugshot
# 575 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 576 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_IlimaBattle_Text_1, MSGBOX_YESNO
# 577 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 579 "data//maps/HauoliShoppingDistrict/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliShoppingDistrict_NPC_IlimaBattle_2
# 620 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 621 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_ILIMA
# 622 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_IlimaBattle_Text_5
# 623 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 624 "data//maps/HauoliShoppingDistrict/scripts.pory"
	releaseall
	end

HauoliShoppingDistrict_NPC_IlimaBattle_1:
	end

HauoliShoppingDistrict_NPC_IlimaBattle_2:
# 581 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 582 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_ILIMA
# 583 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_IlimaBattle_Text_2
# 584 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 586 "data//maps/HauoliShoppingDistrict/scripts.pory"
	trainerbattle_no_intro TRAINER_CAPTAIN_ILIMA_HAUOLI, HauoliShoppingDistrict_NPC_IlimaBattle_Text_3
# 588 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 589 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 590 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_ILIMA
# 591 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_IlimaBattle_Text_4
# 592 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 594 "data//maps/HauoliShoppingDistrict/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 595 "data//maps/HauoliShoppingDistrict/scripts.pory"
	switch VAR_TEMP_1
# 597 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 48, HauoliShoppingDistrict_NPC_IlimaBattle_7
# 600 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 24, HauoliShoppingDistrict_NPC_IlimaBattle_Movement_1
HauoliShoppingDistrict_NPC_IlimaBattle_5:
# 602 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 603 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 24, HauoliShoppingDistrict_NPC_IlimaBattle_Movement_2
# 604 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 30
# 605 "data//maps/HauoliShoppingDistrict/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 606 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 30
# 607 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setflag FLAG_HIDE_ILIMA_HAUOLI
# 608 "data//maps/HauoliShoppingDistrict/scripts.pory"
	removeobject 24
# 609 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 30
# 610 "data//maps/HauoliShoppingDistrict/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 611 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 20
# 613 "data//maps/HauoliShoppingDistrict/scripts.pory"
	startsubquest QUEST_TRIAL_ILIMA, QUEST_TRIAL_ILIMA_SUBQUEST_3
# 614 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 615 "data//maps/HauoliShoppingDistrict/scripts.pory"
	releaseall
	goto HauoliShoppingDistrict_NPC_IlimaBattle_1

HauoliShoppingDistrict_NPC_IlimaBattle_7:
# 598 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 24, HauoliShoppingDistrict_NPC_IlimaBattle_Movement_0
	goto HauoliShoppingDistrict_NPC_IlimaBattle_5


HauoliShoppingDistrict_NPC_Fisherman::
# 632 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 633 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 634 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Fisherman_Text_0
# 635 "data//maps/HauoliShoppingDistrict/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, HauoliShoppingDistrict_NPC_Fisherman_2
# 654 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Fisherman_Text_4, MSGBOX_YESNO
# 655 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 656 "data//maps/HauoliShoppingDistrict/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HauoliShoppingDistrict_NPC_Fisherman_8
# 664 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Fisherman_Text_0
# 665 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Fisherman_Text_6
# 666 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 667 "data//maps/HauoliShoppingDistrict/scripts.pory"
	trainerbattle_no_intro TRAINER_FISHERMAN_HAUOLI, HauoliShoppingDistrict_NPC_Fisherman_Text_7
# 669 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 670 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Fisherman_Text_0
# 671 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Fisherman_Text_8
# 672 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 673 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 674 "data//maps/HauoliShoppingDistrict/scripts.pory"
	giveitem ITEM_OLD_ROD
# 675 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 676 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Fisherman_Text_0
# 677 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Fisherman_Text_9
# 678 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
HauoliShoppingDistrict_NPC_Fisherman_1:
# 681 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end

HauoliShoppingDistrict_NPC_Fisherman_2:
# 637 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Fisherman_Text_1, MSGBOX_YESNO
# 638 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 639 "data//maps/HauoliShoppingDistrict/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HauoliShoppingDistrict_NPC_Fisherman_5
# 647 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Fisherman_Text_0
# 648 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Fisherman_Text_3
# 649 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
	goto HauoliShoppingDistrict_NPC_Fisherman_1

HauoliShoppingDistrict_NPC_Fisherman_5:
# 641 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Fisherman_Text_0
# 642 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Fisherman_Text_2
# 643 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
	goto HauoliShoppingDistrict_NPC_Fisherman_1

HauoliShoppingDistrict_NPC_Fisherman_8:
# 658 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_Fisherman_Text_0
# 659 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_Fisherman_Text_5
# 660 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
	goto HauoliShoppingDistrict_NPC_Fisherman_1


HauoliShoppingDistrict_Pokemon_Chinchou::
# 686 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 687 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 688 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Pokemon_Chinchou_Text_0
# 689 "data//maps/HauoliShoppingDistrict/scripts.pory"
	playmoncry SPECIES_CHINCHOU, CRY_MODE_NORMAL
# 690 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Pokemon_Chinchou_Text_1
# 691 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmoncry
# 692 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 693 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliBeachfront_Sign_HauoliShoppingCenter::
# 701 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 702 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliBeachfront_Sign_HauoliShoppingCenter_Text_0, MSGBOX_SIGN
# 703 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 704 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_Sign_CityHall::
# 710 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 711 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Sign_CityHall_Text_0, MSGBOX_SIGN
# 712 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 713 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_Sign_IlimaHouse::
# 719 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 720 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Sign_IlimaHouse_Text_0
# 721 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 722 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


# 12 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Trigger_BlockGrass_Movement_0:
# 12 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 12 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_up
# 12 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 32 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_0:
# 32 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_left
# 32 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_left
# 32 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_left
# 32 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 44 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_1:
# 44 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 44 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 44 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_down
# 44 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 44 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 44 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_up
# 44 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 46 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_2:
# 46 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 46 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 46 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 46 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 46 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_up
# 46 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 48 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_3:
# 48 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 48 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 48 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 48 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 48 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 48 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_up
# 48 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 50 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_4:
# 50 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 50 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 50 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 50 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 50 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 50 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 50 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_up
# 50 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_5:
# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_up
# 52 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 73 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_6:
# 73 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_down
# 73 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_right
# 73 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_7:
# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_slow_left
# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_slow_left
# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_slow_left
# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_slow_left
# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_slow_left
# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_slow_left
# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_slow_left
# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 95 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_8:
# 95 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_slow_left
# 95 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_slow_left
# 95 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 123 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_9:
# 123 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_slow_down
# 123 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_slow_down
# 123 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_10:
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_down
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_11:
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_down
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_12:
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 154 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 173 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_MeetIlima_Movement_0:
# 173 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_right
# 173 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_down
# 173 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 175 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_MeetIlima_Movement_1:
# 175 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 175 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_down
# 175 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 227 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Movement_0:
# 227 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_left
# 227 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_left
# 227 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 598 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_NPC_IlimaBattle_Movement_0:
# 598 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 598 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 598 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_up
# 598 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 600 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_NPC_IlimaBattle_Movement_1:
# 600 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 600 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 600 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 603 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_NPC_IlimaBattle_Movement_2:
# 603 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 603 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 603 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 603 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 603 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 603 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 603 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

HauoliShoppingDistrict_Trigger_BlockGrass_Text_0:
# 15 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Picnicker$"

HauoliShoppingDistrict_Trigger_BlockGrass_Text_1:
# 16 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hold it right there! I'm looking for\n"
	.string "footprints from rare Pokémon. I can't\l"
	.string "have you trampling my discoveries!\p"
	.string "Just give me a few more minutes, I'm\n"
	.string "sure I'll find something... But please,\l"
	.string "just walk around the city for now!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0:
# 35 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hau$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_1:
# 36 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Howzit, {PLAYER}!\n"
	.string "If you're looking for good eats, you've\l"
	.string "found 'em!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_2:
# 61 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "This is the best Malasada Shop on\n"
	.string "Melemele Island. Malasadas are\l"
	.string "delicious, and they help you get along\l"
	.string "better with your Pokémon!\p"
	.string "Who could resist giving their Pokémon a\n"
	.string "few malasadas, eh? They're just so\l"
	.string "cute!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_3:
# 66 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "???$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_4:
# 67 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Yo, yo, yo, check it!\p"
	.string "Whenever, wherever we meet you, Team\n"
	.string "Skull don't even greet you!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_5:
# 81 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Grunt A$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_6:
# 82 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Yo, you wanna throw us a bone and hand\n"
	.string "over those Island Challenge Amulets?$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_7:
# 84 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Team... Skull? Why would we do that?$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_8:
# 91 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Team Skull is a nasty group with\n"
	.string "members across Alola. All they do is\l"
	.string "steal Totem Stickers and people's\l"
	.string "Pokémon to get in the way of other\l"
	.string "people's Island Challenges!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_9:
# 98 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Grunt B$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_10:
# 99 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "You know it!\p"
	.string "We hate the Island Challenge, yo! And\n"
	.string "everyone fool enough to try it!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_11:
# 105 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Yo, let's check these fools.$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_12:
# 109 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Come on, {PLAYER}! Let's teach these\n"
	.string "Team Skull jerks a lesson!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_13:
# 113 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "W-who is this kid?!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_14:
# 121 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "No fair! I was playing a different game!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_15:
# 127 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Let's get up out this port, B! Nobody\n"
	.string "has to know about this!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_16:
# 133 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "We don't need your whack little Amulet\n"
	.string "anyway! Wouldn't even take 'em if you\l"
	.string "gave 'em to us!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_17:
# 144 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Those Team Skull jerks really must have\n"
	.string "too much time on their hands, yeah?\p"
	.string "But stopping other people from doing\n"
	.string "the Island Challenge won't magically\l"
	.string "mean they finished theirs, you know?$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_18:
# 148 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "I already went down to the Marina and\n"
	.string "screamed out over the ocean, 'Watch out\l"
	.string "world! Someday I'm gonna even beat my\l"
	.string "old gramps in a battle!'$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_19:
# 152 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Maybe you should go to the Marina and\n"
	.string "do the same! It's just south of here.\l"
	.string "See you around!$"

HauoliShoppingDistrict_Event_MeetIlima_Text_0:
# 186 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Ilima$"

HauoliShoppingDistrict_Event_MeetIlima_Text_1:
# 187 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Greetings! I'm Ilima, the first Trial\n"
	.string "Captain of Melemele Island.\p"
	.string "I couldn't help but observe your battle\n"
	.string "alongside that boy... Team Skull doesn't\l"
	.string "seem serious, but they're known for\l"
	.string "making trouble and stealing Pokémon.\p"
	.string "Please, tell me about yourself.$"

HauoliShoppingDistrict_Event_MeetIlima_Text_2:
# 190 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}I'm {PLAYER}! I just moved back to\n"
	.string "Hau'oli Outskirts from Kanto, and I'm\l"
	.string "just starting on my Island Challenge!$"

HauoliShoppingDistrict_Event_MeetIlima_Text_3:
# 196 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hm! Of course, I'd heard about Samson\n"
	.string "Oak's grandchild moving to Alola, but I\l"
	.string "hadn't expected to run into you so\l"
	.string "soon.\p"
	.string "I must admit, I'd love to test your\n"
	.string "skills in battle personally. Please let\l"
	.string "me know when your Pokémon are {COLOR GREEN}ready\l"
	.string "for battle{COLOR DARK_GRAY}!$"

HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_0:
# 216 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Backpacker$"

HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_1:
# 217 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Have you heard of the {COLOR BLUE}Pokémon TCG{COLOR DARK_GRAY}?\n"
	.string "It's a card game where you battle\l"
	.string "Pokémon, and it's taking the Alola\l"
	.string "Region by storm!$"

HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_2:
# 222 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "If you want to play, just {COLOR GREEN}interact with\n"
	.string "this table{COLOR DARK_GRAY} with checkered spots. Most\l"
	.string "large towns in Alola probably have them\l"
	.string "by now.$"

HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_3:
# 230 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Oh, but you'll need some {COLOR BLUE}TCG Cards{COLOR DARK_GRAY}\n"
	.string "first! You can buy some at the {COLOR BLUE}TCG Shop{COLOR DARK_GRAY}\l"
	.string "in the Hau'oli Shopping Center.$"

HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_4:
# 237 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Wow, she's really into this... That\n"
	.string "better not have been some paid\l"
	.string "promotion!$"

HauoliShoppingDistrict_NPC_VeteranWandering_Text_0:
# 247 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Veteran$"

HauoliShoppingDistrict_NPC_VeteranWandering_Text_1:
# 248 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Between the Beachfront and the\n"
	.string "Shopping District, Hau'oli City is way\l"
	.string "too big to see it all in one visit.$"

HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_0:
# 258 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Old Woman$"

HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_1:
# 261 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "That item, the Silk Scarf, increases the\n"
	.string "power of Normal-type moves. I'm sure\l"
	.string "that's helpful early in your adventure.$"

HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_2:
# 265 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hm? Oh, dearie, your Pokémon could use\n"
	.string "some fashion. Give one of them this!$"

HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_3:
# 270 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "The Silk Scarf increases the power of\n"
	.string "Normal-type moves. I'm sure that's\l"
	.string "helpful early in your adventure.$"

HauoliShoppingDistrict_NPC_PicnickerInGrass_Text_0:
# 282 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "You won't believe it! I found a few\n"
	.string "footprints left by wild {COLOR BLUE}Mankey{COLOR DARK_GRAY}!\p"
	.string "They normally live in the rainforests of\n"
	.string "other islands... Maybe a few stowed away\l"
	.string "on a ship here?$"

HauoliShoppingDistrict_NPC_LadyWithMalasada_Text_0:
# 292 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Lady$"

HauoliShoppingDistrict_NPC_LadyWithMalasada_Text_1:
# 293 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "There was a young man here earlier\n"
	.string "shouting about this Malasada shop. I\l"
	.string "decided to try one, and now it's my\l"
	.string "favorite food spot in Hau'oli City!$"

HauoliShoppingDistrict_NPC_WomanNearMarina_Text_0:
# 303 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Woman$"

HauoliShoppingDistrict_NPC_WomanNearMarina_Text_1:
# 304 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Lots of goods come and go through the\n"
	.string "Hau'oli City Marina. That's why we have\l"
	.string "premier access to rare items!$"

HauoliShoppingDistrict_NPC_BattleGirlOnStreet_Text_0:
# 314 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Battle Girl$"

HauoliShoppingDistrict_NPC_BattleGirlOnStreet_Text_1:
# 315 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Ilima is the first Trial Captain for\n"
	.string "Trainers on Melemele Island. I heard he\l"
	.string "uses Normal-type Pokémon... Maybe my\l"
	.string "Fighting-types will help during his\l"
	.string "Trial!$"

HauoliShoppingDistrict_NPC_SailorAtWharf_Text_0:
# 325 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Sailor$"

HauoliShoppingDistrict_NPC_SailorAtWharf_Text_1:
# 326 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Lots of cargo passes through here\n"
	.string "ev'ry day. We truck it across Melemele\l"
	.string "Island as it comes in.$"

HauoliShoppingDistrict_NPC_SailorWithFarfetchd_Text_0:
# 337 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "My {COLOR BLUE}Farfetch'd{COLOR DARK_GRAY} cuts sheets for us to use\n"
	.string "as sails. It's better for the\l"
	.string "environment that way!$"

HauoliShoppingDistrict_Pokemon_Farfetchd_Text_0:
# 348 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Farfetch'd$"

HauoliShoppingDistrict_Pokemon_Farfetchd_Text_1:
# 350 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Chee! Kwee!$"

HauoliShoppingDistrict_NPC_SightseerWithHealBall_Text_0:
# 361 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Sightseer$"

HauoliShoppingDistrict_NPC_SightseerWithHealBall_Text_1:
# 362 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "A journey is made by those who travel\n"
	.string "with you. And compassion makes the\l"
	.string "world go round.\p"
	.string "Let me share these with you, young\n"
	.string "trial-goer.$"

HauoliShoppingDistrict_NPC_SightseerWithHealBall_Text_2:
# 367 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Pokémon you catch in a Heal Ball will\n"
	.string "have their HP restored to the maximum\l"
	.string "level. They are also cured of any status\l"
	.string "conditions they might have.$"

HauoliShoppingDistrict_NPC_OfficeWorkerWithStufful_Text_0:
# 377 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Office Worker$"

HauoliShoppingDistrict_NPC_OfficeWorkerWithStufful_Text_1:
# 378 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Petting a fluffy Pokémon is pretty\n"
	.string "much the best feeling ever. I'm pretty\l"
	.string "sure I'm not wrong.\p"
	.string "If you cuddle with your Pokémon using\n"
	.string "Pokémon Refresh, then. they'll try\l"
	.string "harder for you in battle! They can even\l"
	.string "shake off status conditions!$"

HauoliShoppingDistrict_Pokemon_Stufful_Text_0:
# 387 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Stufful$"

HauoliShoppingDistrict_Pokemon_Stufful_Text_1:
# 389 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Broar!$"

HauoliShoppingDistrict_NPC_Officer_Text_0:
# 400 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Officer$"

HauoliShoppingDistrict_NPC_Officer_Text_1:
# 401 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "In this city, we're proud to live\n"
	.string "together with Pokémon, and that's why\l"
	.string "we have so many patches of tall grass\l"
	.string "right in the city.\p"
	.string "Young Ilima and his Smeargle are always\n"
	.string "working hard to keep the city looking\l"
	.string "tip-top, as well.\p"
	.string "Captains should be responsible types,\n"
	.string "after all!$"

HauoliShoppingDistrict_NPC_PunkRocker_Text_0:
# 411 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Punk Rocker$"

HauoliShoppingDistrict_NPC_PunkRocker_Text_1:
# 412 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Heh heh heh... Here's some advice,\n"
	.string "Trainer.\p"
	.string "If you're going to stand up to tough\n"
	.string "opponents, be willing to use items on\l"
	.string "your Pokémon. It'll help them win!$"

HauoliShoppingDistrict_NPC_OldManWithCorsola_Text_0:
# 422 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Old Man$"

HauoliShoppingDistrict_NPC_OldManWithCorsola_Text_1:
# 423 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "See my {COLOR BLUE}Corsola{COLOR DARK_GRAY} here? Mine's mostly pink,\n"
	.string "but in Alola, {COLOR BLUE}Corsola{COLOR DARK_GRAY} can be found in a\l"
	.string "rainbow of colors!\p"
	.string "They're not any different in battle, but\n"
	.string "they can really bring a team to life!$"

HauoliShoppingDistrict_Pokemon_Corsola_Text_0:
# 432 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Corsola$"

HauoliShoppingDistrict_Pokemon_Corsola_Text_1:
# 434 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Bubble-lub!$"

HauoliShoppingDistrict_NPC_OfficerWorkerOnCoast_Text_0:
# 446 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "The ocean around Alola looks so huge\n"
	.string "and endless, but thanks to the great\l"
	.string "Ferry System, you can get to the next\l"
	.string "island in no time!\p"
	.string "Some younger folks even choose to ride\n"
	.string "between islands on {COLOR GREEN}Mantine{COLOR DARK_GRAY}!$"

HauoliShoppingDistrict_NPC_Bellhop_Text_0:
# 456 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Bellhop$"

HauoliShoppingDistrict_NPC_Bellhop_Text_1:
# 457 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Welcome! This is the estate of Captain\n"
	.string "Ilima's family, now open to the public.$"

HauoliShoppingDistrict_NPC_DancerF_Text_0:
# 467 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Dancer$"

HauoliShoppingDistrict_NPC_DancerF_Text_1:
# 468 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Ilima's family grows flowers from all\n"
	.string "around the Alola Region here. I can't\l"
	.string "get enough of the smell!$"

HauoliShoppingDistrict_NPC_DancerWithCrabrawler_Text_0:
# 479 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Aw, yeah! My {COLOR BLUE}Crabrawler{COLOR DARK_GRAY}'s the best\n"
	.string "dancer around!$"

HauoliShoppingDistrict_Pokemon_Crabrawler_Text_0:
# 490 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Crabrawler$"

HauoliShoppingDistrict_Pokemon_Crabrawler_Text_1:
# 492 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Ktcha-ha!$"

HauoliShoppingDistrict_NPC_Jester_Text_0:
# 505 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Jester$"

HauoliShoppingDistrict_NPC_Jester_Text_1:
# 506 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hey-hey! Come on by! Hau'oli City is the\n"
	.string "best place in Alola!$"

HauoliShoppingDistrict_Event_JesterBlock_Text_0:
# 518 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hold it right there!$"

HauoliShoppingDistrict_Event_JesterBlock_Text_1:
# 524 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "How could you leave Hau'oli City? It's\n"
	.string "the best place in Alola, take a break\l"
	.string "here!$"

HauoliShoppingDistrict_NPC_Camper_Text_0:
# 536 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Camper$"

HauoliShoppingDistrict_NPC_Camper_Text_1:
# 537 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Someone told me there's a Hidden Grotto\n"
	.string "around here.\p"
	.string "They're supposed to have rare Pokémon,\n"
	.string "but how should I know which gap in the\l"
	.string "trees it'll be in?$"

HauoliShoppingDistrict_NPC_Hiker_Text_0:
# 547 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hiker$"

HauoliShoppingDistrict_NPC_Hiker_Text_1:
# 548 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Phew... I made it!\p"
	.string "Route 2 leads north to the Verdant\n"
	.string "Cavern. Those wild {COLOR BLUE}Yungoos{COLOR DARK_GRAY} almost got\l"
	.string "me on the path!$"

HauoliShoppingDistrict_NPC_Surfer_Text_0:
# 558 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Surfer$"

HauoliShoppingDistrict_NPC_Surfer_Text_1:
# 559 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Woooah, dude! Another surfer! You can\n"
	.string "find a lot when you cross the waves in\l"
	.string "style!$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_0:
# 572 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Greetings! I'm itching to see your\n"
	.string "skills in a proper battle, you know.$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_1:
# 576 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "I assume you're ready to battle me?$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_2:
# 583 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Behold the magnificent Pokémon of the\n"
	.string "one and only Captain Ilima!$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_3:
# 586 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Yes! You have emerged victorious!$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_4:
# 591 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "You - or should I say, you and your\n"
	.string "Pokémon - make quite the interesting\l"
	.string "team!\p"
	.string "I do hope you'll come to {COLOR GREEN}Verdant Cavern{COLOR DARK_GRAY}\n"
	.string "and attempt the first trial of the\l"
	.string "Island Challenge - the Trial of Ilima!\p"
	.string "You can find Verdant Cavern north of\n"
	.string "Route 2.$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_5:
# 622 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Well then! I'll wait until you are ready\n"
	.string "to take me on.$"

HauoliShoppingDistrict_NPC_Fisherman_Text_0:
# 634 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Fisherman$"

HauoliShoppingDistrict_NPC_Fisherman_Text_1:
# 637 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Howzit, little Trainer!\p"
	.string "You here to learn more about Fishing?$"

HauoliShoppingDistrict_NPC_Fisherman_Text_2:
# 642 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hah! I'm sure you're an expert already!$"

HauoliShoppingDistrict_NPC_Fisherman_Text_3:
# 648 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Gotcha! When you're fishing, you'll have\n"
	.string "to fight to reel the Pokémon in. You'll\l"
	.string "have to keep the Pokémon in the {COLOR GREEN}green\l"
	.string "bar{COLOR DARK_GRAY} to bring it in!\p"
	.string "Some Pokémon with certain abilities can\n"
	.string "help you fish. You might even find some\l"
	.string "treasure, if you're skilled enough to\l"
	.string "reel that in too!$"

HauoliShoppingDistrict_NPC_Fisherman_Text_4:
# 654 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Howzit, little Trainer!\p"
	.string "You look like someone who'd enjoy a\n"
	.string "good sport, yeah? If you can beat me in\l"
	.string "a battle, I'll give you something to\l"
	.string "{COLOR GREEN}catch your own{COLOR DARK_GRAY}!\p"
	.string "So? Ready to battle?$"

HauoliShoppingDistrict_NPC_Fisherman_Text_5:
# 659 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Mmm, that's okay. Come on back when\n"
	.string "you're ready to learn the art of\l"
	.string "Fishing!$"

HauoliShoppingDistrict_NPC_Fisherman_Text_6:
# 665 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Awrite! My fish Pokémon will wash you\n"
	.string "away!$"

HauoliShoppingDistrict_NPC_Fisherman_Text_7:
# 667 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Woah, you served me up on a platter...!$"

HauoliShoppingDistrict_NPC_Fisherman_Text_8:
# 671 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Ehehe, not bad at all! You should have\n"
	.string "this.$"

HauoliShoppingDistrict_NPC_Fisherman_Text_9:
# 677 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "There's only a few Pokémon that'll bite\n"
	.string "on the {COLOR BLUE}Old Rod{COLOR DARK_GRAY}. If you want an upgrade,\l"
	.string "you'll need to talk to {COLOR GREEN}Lana{COLOR DARK_GRAY} on Akala\l"
	.string "Island.\p"
	.string "Fishing is a li'l complicated in Alola. If\n"
	.string "you want to learn about the\l"
	.string "ins-and-outs, come talk to me!$"

HauoliShoppingDistrict_Pokemon_Chinchou_Text_0:
# 688 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Chinchou$"

HauoliShoppingDistrict_Pokemon_Chinchou_Text_1:
# 690 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Blub blubble.$"

HauoliBeachfront_Sign_HauoliShoppingCenter_Text_0:
# 702 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hau'oli City Shopping Center\n"
	.string "For All Your Shopping Needs!$"

HauoliShoppingDistrict_Sign_CityHall_Text_0:
# 711 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hau'oli City Hall\n"
	.string "Serving the City's Every Need!$"

HauoliShoppingDistrict_Sign_IlimaHouse_Text_0:
# 720 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Ilima Family Estate\p"
	.string "Now Open to All!$"

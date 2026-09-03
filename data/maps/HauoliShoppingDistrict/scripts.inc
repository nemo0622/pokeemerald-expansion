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


HauoliShoppingDistrict_NPC_IlimaBattle::
# 323 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 324 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 325 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 326 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_ILIMA
# 327 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_IlimaBattle_Text_0
# 328 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmessage
# 329 "data//maps/HauoliShoppingDistrict/scripts.pory"
	removefieldmugshot
# 330 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 331 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_IlimaBattle_Text_1, MSGBOX_YESNO
# 332 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 334 "data//maps/HauoliShoppingDistrict/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliShoppingDistrict_NPC_IlimaBattle_2
# 375 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 376 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_ILIMA
# 377 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_IlimaBattle_Text_5
# 378 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 379 "data//maps/HauoliShoppingDistrict/scripts.pory"
	releaseall
	end

HauoliShoppingDistrict_NPC_IlimaBattle_1:
	end

HauoliShoppingDistrict_NPC_IlimaBattle_2:
# 336 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 337 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_ILIMA
# 338 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_IlimaBattle_Text_2
# 339 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 341 "data//maps/HauoliShoppingDistrict/scripts.pory"
	trainerbattle_no_intro TRAINER_CAPTAIN_ILIMA_HAUOLI, HauoliShoppingDistrict_NPC_IlimaBattle_Text_3
# 343 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 344 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_MeetIlima_Text_0
# 345 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_ILIMA
# 346 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_IlimaBattle_Text_4
# 347 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 349 "data//maps/HauoliShoppingDistrict/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 350 "data//maps/HauoliShoppingDistrict/scripts.pory"
	switch VAR_TEMP_1
# 352 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 48, HauoliShoppingDistrict_NPC_IlimaBattle_7
# 355 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 24, HauoliShoppingDistrict_NPC_IlimaBattle_Movement_1
HauoliShoppingDistrict_NPC_IlimaBattle_5:
# 357 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 358 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 24, HauoliShoppingDistrict_NPC_IlimaBattle_Movement_2
# 359 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 30
# 360 "data//maps/HauoliShoppingDistrict/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 361 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 30
# 362 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setflag FLAG_HIDE_ILIMA_HAUOLI
# 363 "data//maps/HauoliShoppingDistrict/scripts.pory"
	removeobject 24
# 364 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 30
# 365 "data//maps/HauoliShoppingDistrict/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 366 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 20
# 368 "data//maps/HauoliShoppingDistrict/scripts.pory"
	startsubquest QUEST_TRIAL_ILIMA, QUEST_TRIAL_ILIMA_SUBQUEST_3
# 369 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 370 "data//maps/HauoliShoppingDistrict/scripts.pory"
	releaseall
	goto HauoliShoppingDistrict_NPC_IlimaBattle_1

HauoliShoppingDistrict_NPC_IlimaBattle_7:
# 353 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 24, HauoliShoppingDistrict_NPC_IlimaBattle_Movement_0
	goto HauoliShoppingDistrict_NPC_IlimaBattle_5


HauoliBeachfront_Sign_HauoliShoppingCenter::
# 389 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 390 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliBeachfront_Sign_HauoliShoppingCenter_Text_0, MSGBOX_SIGN
# 391 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 392 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_Sign_CityHall::
# 398 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 399 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Sign_CityHall_Text_0, MSGBOX_SIGN
# 400 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 401 "data//maps/HauoliShoppingDistrict/scripts.pory"
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

# 353 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_NPC_IlimaBattle_Movement_0:
# 353 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 353 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 353 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_up
# 353 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 355 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_NPC_IlimaBattle_Movement_1:
# 355 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 355 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 355 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 358 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_NPC_IlimaBattle_Movement_2:
# 358 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 358 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 358 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 358 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 358 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 358 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 358 "data//maps/HauoliShoppingDistrict/scripts.pory"
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

HauoliShoppingDistrict_NPC_IlimaBattle_Text_0:
# 327 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Greetings! I'm itching to see your\n"
	.string "skills in a proper battle, you know.$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_1:
# 331 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "I assume you're ready to battle me?$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_2:
# 338 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Behold the magnificent Pokémon of the\n"
	.string "one and only Captain Ilima!$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_3:
# 341 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Yes! You have emerged victorious!$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_4:
# 346 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "You - or should I say, you and your\n"
	.string "Pokémon - make quite the interesting\l"
	.string "team!\p"
	.string "I do hope you'll come to {COLOR GREEN}Verdant Cavern{COLOR DARK_GRAY}\n"
	.string "and attempt the first trial of the\l"
	.string "Island Challenge - the Trial of Ilima!\p"
	.string "You can find Verdant Cavern north of\n"
	.string "Route 2.$"

HauoliShoppingDistrict_NPC_IlimaBattle_Text_5:
# 377 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Well then! I'll wait until you are ready\n"
	.string "to take me on.$"

HauoliBeachfront_Sign_HauoliShoppingCenter_Text_0:
# 390 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hau'oli City Shopping Center\n"
	.string "For All Your Shopping Needs!$"

HauoliShoppingDistrict_Sign_CityHall_Text_0:
# 399 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hau'oli City Hall\n"
	.string "Serving the City's Every Need!$"

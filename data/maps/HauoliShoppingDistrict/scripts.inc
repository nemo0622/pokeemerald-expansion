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
	case 33, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_3
# 45 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 34, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_4
# 47 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 35, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_5
# 49 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 36, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_6
# 51 "data//maps/HauoliShoppingDistrict/scripts.pory"
	case 37, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_7
# 54 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_6
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
	applymovement LOCALID_PLAYER, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_7
# 74 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_7
# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 18, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_8
# 76 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 19, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_8
# 77 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 78 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 80 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_5
# 81 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_6
# 82 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createplayerfieldmugshot
# 83 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_7
# 84 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 85 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 86 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 87 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 88 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_INTENSE
# 89 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 90 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_8
# 91 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 92 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, Common_Movement_FaceRight
# 93 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 94 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 19, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_9
# 95 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 96 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_9
# 97 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_10
# 98 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 99 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 18, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_9
# 100 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 101 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_5
# 102 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_11
# 103 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 104 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_INTENSE
# 105 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 106 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_12
# 107 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 112 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 20
# 113 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 19, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_9
# 114 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 115 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_9
# 116 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_13
# 117 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 118 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 18, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_10
# 119 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 120 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_5
# 121 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_14
# 122 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 123 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 18, Common_Movement_FaceLeft
# 124 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 125 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_5
# 126 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_15
# 127 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 128 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 19, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_11
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 18, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_12
# 131 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 132 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, Common_Movement_FaceDown
# 133 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 134 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 135 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 136 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_16
# 138 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmessage
# 139 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_LAUGH
# 140 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 141 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_17
# 142 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmessage
# 143 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 144 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_0
# 145 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_18
# 146 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 17, HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_13
# 148 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 150 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setflag FLAG_DID_MALASADA_SHOP_EVENT
# 151 "data//maps/HauoliShoppingDistrict/scripts.pory"
	removeobject 17
# 152 "data//maps/HauoliShoppingDistrict/scripts.pory"
	removeobject 18
# 153 "data//maps/HauoliShoppingDistrict/scripts.pory"
	removeobject 19
# 155 "data//maps/HauoliShoppingDistrict/scripts.pory"
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


HauoliShoppingDistrict_NPC_BackpackerPlayingCards::
# 163 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 164 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 165 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_0
# 166 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_1
# 167 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 168 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 169 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 170 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_0
# 171 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_2
# 172 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 173 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 174 "data//maps/HauoliShoppingDistrict/scripts.pory"
	emote 13, EMOTE_EXCLAM
# 175 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 10
# 176 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 13, HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Movement_0
# 177 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 178 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_0
# 179 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_3
# 180 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 181 "data//maps/HauoliShoppingDistrict/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 182 "data//maps/HauoliShoppingDistrict/scripts.pory"
	waitmovement 0
# 184 "data//maps/HauoliShoppingDistrict/scripts.pory"
	delay 20
# 185 "data//maps/HauoliShoppingDistrict/scripts.pory"
	createplayerfieldmugshot EMOTION_SAD
# 186 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_4
# 187 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 188 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_VeteranWandering::
# 194 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 195 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 196 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_VeteranWandering_Text_0
# 197 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_VeteranWandering_Text_1
# 198 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 199 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_SilkScarfWoman::
# 205 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 206 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 207 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_0
# 208 "data//maps/HauoliShoppingDistrict/scripts.pory"
	goto_if_set FLAG_GOT_SILK_SCARF, HauoliShoppingDistrict_NPC_SilkScarfWoman_2
# 214 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_2
# 215 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 216 "data//maps/HauoliShoppingDistrict/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 217 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setflag FLAG_GOT_SILK_SCARF
# 218 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_0
# 219 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_3
HauoliShoppingDistrict_NPC_SilkScarfWoman_1:
# 221 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 222 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end

HauoliShoppingDistrict_NPC_SilkScarfWoman_2:
# 210 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_1
	goto HauoliShoppingDistrict_NPC_SilkScarfWoman_1


HauoliShoppingDistrict_NPC_PicnickerInGrass::
# 228 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 229 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 230 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_Trigger_BlockGrass_Text_0
# 231 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_PicnickerInGrass_Text_0
# 232 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 233 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_LadyWithMalasada::
# 239 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 240 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 241 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_LadyWithMalasada_Text_0
# 242 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_LadyWithMalasada_Text_1
# 243 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 244 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_WomanNearMarina::
# 250 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 251 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 252 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_WomanNearMarina_Text_0
# 253 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_WomanNearMarina_Text_1
# 254 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 255 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_NPC_BattleGirlOnStreet::
# 261 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 262 "data//maps/HauoliShoppingDistrict/scripts.pory"
	faceplayer
# 263 "data//maps/HauoliShoppingDistrict/scripts.pory"
	setspeaker HauoliShoppingDistrict_NPC_BattleGirlOnStreet_Text_0
# 264 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_NPC_BattleGirlOnStreet_Text_1
# 265 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 266 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliBeachfront_Sign_HauoliShoppingCenter::
# 274 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 275 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliBeachfront_Sign_HauoliShoppingCenter_Text_0, MSGBOX_SIGN
# 276 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 277 "data//maps/HauoliShoppingDistrict/scripts.pory"
	release
	end


HauoliShoppingDistrict_Sign_CityHall::
# 283 "data//maps/HauoliShoppingDistrict/scripts.pory"
	lock
# 284 "data//maps/HauoliShoppingDistrict/scripts.pory"
	msgbox HauoliShoppingDistrict_Sign_CityHall_Text_0, MSGBOX_SIGN
# 285 "data//maps/HauoliShoppingDistrict/scripts.pory"
	closemessage
# 286 "data//maps/HauoliShoppingDistrict/scripts.pory"
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

# 54 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_6:
# 54 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 54 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 54 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_up
# 54 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 73 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_7:
# 73 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_down
# 73 "data//maps/HauoliShoppingDistrict/scripts.pory"
	face_right
# 73 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 75 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_8:
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

# 94 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_9:
# 94 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_slow_left
# 94 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_slow_left
# 94 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 118 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_10:
# 118 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_slow_down
# 118 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_slow_down
# 118 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_11:
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_down
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 129 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_12:
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_up
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_down
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 130 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Movement_13:
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_left
# 147 "data//maps/HauoliShoppingDistrict/scripts.pory"
	step_end

# 176 "data//maps/HauoliShoppingDistrict/scripts.pory"
HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Movement_0:
# 176 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_left
# 176 "data//maps/HauoliShoppingDistrict/scripts.pory"
	walk_in_place_left
# 176 "data//maps/HauoliShoppingDistrict/scripts.pory"
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
# 80 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Grunt A$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_6:
# 81 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Yo, you wanna throw us a bone and hand\n"
	.string "over those Island Challenge Amulets?$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_7:
# 83 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Team... Skull? Why would we do that?$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_8:
# 90 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Team Skull is a nasty group with\n"
	.string "members across Alola. All they do is\l"
	.string "steal Totem Stickers and people's\l"
	.string "Pokémon to get in the way of other\l"
	.string "people's Island Challenges!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_9:
# 96 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Grunt B$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_10:
# 97 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "You know it!\p"
	.string "We hate the Island Challenge, yo! And\n"
	.string "everyone fool enough to try it!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_11:
# 102 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Yo, let's check these fools.$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_12:
# 106 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Come on, {PLAYER}! Let's teach these\n"
	.string "Team Skull jerks a lesson!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_13:
# 116 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "No fair! I was playing a different game!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_14:
# 121 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Let's get up out this port, B! Nobody\n"
	.string "has to know about this!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_15:
# 126 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "We don't need your whack little Amulet\n"
	.string "anyway! Wouldn't even take 'em if you\l"
	.string "gave 'em to us!$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_16:
# 137 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Those Team Skull jerks really must have\n"
	.string "too much time on their hands, yeah?\p"
	.string "But stopping other people from doing\n"
	.string "the Island Challenge won't magically\l"
	.string "mean they finished theirs, you know?$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_17:
# 141 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "I already went down to the Marina and\n"
	.string "screamed out over the ocean, 'Watch out\l"
	.string "world! Someday I'm gonna even beat my\l"
	.string "old gramps in a battle!'$"

HauoliShoppingDistrict_Event_HauOutsideMalasadaShop_Text_18:
# 145 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Maybe you should go to the Marina and\n"
	.string "do the same! It's just south of here.\l"
	.string "See you around!$"

HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_0:
# 165 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Backpacker$"

HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_1:
# 166 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Have you heard of the {COLOR BLUE}Pokémon TCG{COLOR DARK_GRAY}?\n"
	.string "It's a card game where you battle\l"
	.string "Pokémon, and it's taking the Alola\l"
	.string "Region by storm!$"

HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_2:
# 171 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "If you want to play, just {COLOR GREEN}interact with\n"
	.string "this table{COLOR DARK_GRAY} with checkered spots. Most\l"
	.string "large towns in Alola probably have them\l"
	.string "by now.$"

HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_3:
# 179 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Oh, but you'll need some {COLOR BLUE}TCG Cards{COLOR DARK_GRAY}\n"
	.string "first! You can buy some at the {COLOR BLUE}TCG Shop{COLOR DARK_GRAY}\l"
	.string "in the Hau'oli Shopping Center.$"

HauoliShoppingDistrict_NPC_BackpackerPlayingCards_Text_4:
# 186 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Wow, she's really into this... That\n"
	.string "better not have been some paid\l"
	.string "promotion!$"

HauoliShoppingDistrict_NPC_VeteranWandering_Text_0:
# 196 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Veteran$"

HauoliShoppingDistrict_NPC_VeteranWandering_Text_1:
# 197 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Between the Beachfront and the\n"
	.string "Shopping District, Hau'oli City is way\l"
	.string "too big to see it all in one visit.$"

HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_0:
# 207 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Old Woman$"

HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_1:
# 210 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "That item, the Silk Scarf, increases the\n"
	.string "power of Normal-type moves. I'm sure\l"
	.string "that's helpful early in your adventure.$"

HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_2:
# 214 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hm? Oh, dearie, your Pokémon could use\n"
	.string "some fashion. Give one of them this!$"

HauoliShoppingDistrict_NPC_SilkScarfWoman_Text_3:
# 219 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "The Silk Scarf increases the power of\n"
	.string "Normal-type moves. I'm sure that's\l"
	.string "helpful early in your adventure.$"

HauoliShoppingDistrict_NPC_PicnickerInGrass_Text_0:
# 231 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "You won't believe it! I found a few\n"
	.string "footprints left by wild {COLOR BLUE}Mankey{COLOR DARK_GRAY}!\p"
	.string "They normally live in the rainforests of\n"
	.string "other islands... Maybe a few stowed away\l"
	.string "on a ship here?$"

HauoliShoppingDistrict_NPC_LadyWithMalasada_Text_0:
# 241 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Lady$"

HauoliShoppingDistrict_NPC_LadyWithMalasada_Text_1:
# 242 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "There was a young man here earlier\n"
	.string "shouting about this Malasada shop. I\l"
	.string "decided to try one, and now it's my\l"
	.string "favorite food spot in Hau'oli City!$"

HauoliShoppingDistrict_NPC_WomanNearMarina_Text_0:
# 252 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Woman$"

HauoliShoppingDistrict_NPC_WomanNearMarina_Text_1:
# 253 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Lots of goods come and go through the\n"
	.string "Hau'oli City Marina. That's why we have\l"
	.string "premier access to rare items!$"

HauoliShoppingDistrict_NPC_BattleGirlOnStreet_Text_0:
# 263 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Battle Girl$"

HauoliShoppingDistrict_NPC_BattleGirlOnStreet_Text_1:
# 264 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Ilima is the first Trial Captain for\n"
	.string "Trainers on Melemele Island. I heard he\l"
	.string "uses Normal-type Pokémon... Maybe my\l"
	.string "Fighting-types will help during his\l"
	.string "Trial!$"

HauoliBeachfront_Sign_HauoliShoppingCenter_Text_0:
# 275 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hau'oli City Shopping Center\n"
	.string "For All Your Shopping Needs!$"

HauoliShoppingDistrict_Sign_CityHall_Text_0:
# 284 "data//maps/HauoliShoppingDistrict/scripts.pory"
	.string "Hau'oli City Hall\n"
	.string "Serving the City's Every Need!$"

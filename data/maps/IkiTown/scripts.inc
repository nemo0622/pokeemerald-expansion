# 1 "data//maps/IkiTown/scripts.pory"

# 2 "data//maps/IkiTown/scripts.pory"
IkiTown_MapScripts::
# 3 "data//maps/IkiTown/scripts.pory"
	.byte 0

IkiTown_Script_HalaIntro::
# 8 "data//maps/IkiTown/scripts.pory"
	lockall
# 9 "data//maps/IkiTown/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 10 "data//maps/IkiTown/scripts.pory"
	switch VAR_TEMP_1
# 12 "data//maps/IkiTown/scripts.pory"
	case 26, IkiTown_Script_HalaIntro_3
# 14 "data//maps/IkiTown/scripts.pory"
	case 28, IkiTown_Script_HalaIntro_4
# 17 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkUp2
IkiTown_Script_HalaIntro_1:
# 22 "data//maps/IkiTown/scripts.pory"
	delay 10
# 23 "data//maps/IkiTown/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 24 "data//maps/IkiTown/scripts.pory"
	applymovement 2, IkiTown_Script_HalaIntro_Movement_2
# 25 "data//maps/IkiTown/scripts.pory"
	applymovement 3, IkiTown_Script_HalaIntro_Movement_3
# 26 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 27 "data//maps/IkiTown/scripts.pory"
	delay 20
# 30 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 31 "data//maps/IkiTown/scripts.pory"
	applymovement 4, IkiTown_Script_HalaIntro_Movement_4
# 32 "data//maps/IkiTown/scripts.pory"
	delay 80
# 33 "data//maps/IkiTown/scripts.pory"
	applymovement 5, IkiTown_Script_HalaIntro_Movement_5
# 34 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 35 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 36 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 37 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_0
# 38 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI, EMOTION_LAUGH
# 39 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_HalaIntro_Text_1
# 40 "data//maps/IkiTown/scripts.pory"
	closemessage
# 41 "data//maps/IkiTown/scripts.pory"
	applymovement 5, IkiTown_Script_HalaIntro_Movement_6
# 42 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 43 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_ALOLAN_EXEGGUTOR_IKI_TOWN
# 44 "data//maps/IkiTown/scripts.pory"
	removeobject 4
# 45 "data//maps/IkiTown/scripts.pory"
	removeobject 5
# 48 "data//maps/IkiTown/scripts.pory"
	delay 20
# 49 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_HALA_IKI, IkiTown_Script_HalaIntro_Movement_7
# 50 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 51 "data//maps/IkiTown/scripts.pory"
	emote LOCALID_HALA_IKI, EMOTE_QUESTION
# 52 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_2
# 53 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA, EMOTION_LAUGH
# 54 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_HalaIntro_Text_3
# 55 "data//maps/IkiTown/scripts.pory"
	closemessage
# 56 "data//maps/IkiTown/scripts.pory"
	delay 10
# 57 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_HALA_IKI, IkiTown_Script_HalaIntro_Movement_8
# 58 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 59 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_4
# 60 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 61 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_HalaIntro_Text_5
# 62 "data//maps/IkiTown/scripts.pory"
	closemessage
# 64 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 65 "data//maps/IkiTown/scripts.pory"
	delay 30
# 66 "data//maps/IkiTown/scripts.pory"
	setvar VAR_INTRO_STATE, 5
# 67 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_HALA_INTRO_IKI_TOWN
# 68 "data//maps/IkiTown/scripts.pory"
	removeobject LOCALID_HALA_IKI
# 69 "data//maps/IkiTown/scripts.pory"
	delay 30
# 70 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 71 "data//maps/IkiTown/scripts.pory"
	delay 15
# 73 "data//maps/IkiTown/scripts.pory"
	startsubquest QUEST_WELCOME_TO_ALOLA, QUEST_WELCOME_TO_ALOLA_SUBQUEST_3
# 75 "data//maps/IkiTown/scripts.pory"
	releaseall
	end

IkiTown_Script_HalaIntro_3:
# 13 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, IkiTown_Script_HalaIntro_Movement_0
	goto IkiTown_Script_HalaIntro_1

IkiTown_Script_HalaIntro_4:
# 15 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, IkiTown_Script_HalaIntro_Movement_1
	goto IkiTown_Script_HalaIntro_1


IkiTown_Script_SavedLillie::
# 81 "data//maps/IkiTown/scripts.pory"
	lockall
# 82 "data//maps/IkiTown/scripts.pory"
	addobject 16
# 83 "data//maps/IkiTown/scripts.pory"
	addobject 17
# 84 "data//maps/IkiTown/scripts.pory"
	addobject 18
# 85 "data//maps/IkiTown/scripts.pory"
	addobject 19
# 86 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, IkiTown_Script_SavedLillie_Movement_0
# 87 "data//maps/IkiTown/scripts.pory"
	applymovement 16, IkiTown_Script_SavedLillie_Movement_0
# 88 "data//maps/IkiTown/scripts.pory"
	applymovement 17, IkiTown_Script_SavedLillie_Movement_0
# 89 "data//maps/IkiTown/scripts.pory"
	applymovement 18, IkiTown_Script_SavedLillie_Movement_0
# 90 "data//maps/IkiTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 91 "data//maps/IkiTown/scripts.pory"
	delay 25
# 92 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 94 "data//maps/IkiTown/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 95 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 96 "data//maps/IkiTown/scripts.pory"
	emote 8, EMOTE_EXCLAM
# 97 "data//maps/IkiTown/scripts.pory"
	delay 10
# 98 "data//maps/IkiTown/scripts.pory"
	applymovement 8, IkiTown_Script_SavedLillie_Movement_1
# 99 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 100 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 101 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_0
# 102 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 103 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_0
# 104 "data//maps/IkiTown/scripts.pory"
	closemessage
# 105 "data//maps/IkiTown/scripts.pory"
	applymovement 16, IkiTown_Script_SavedLillie_Movement_2
# 106 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 107 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_1
# 108 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_SAD
# 109 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_2
# 110 "data//maps/IkiTown/scripts.pory"
	closemessage
# 111 "data//maps/IkiTown/scripts.pory"
	delay 30
# 112 "data//maps/IkiTown/scripts.pory"
	emote 16, EMOTE_EXCLAM
# 113 "data//maps/IkiTown/scripts.pory"
	applymovement 16, IkiTown_Script_SavedLillie_Movement_3
# 114 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 115 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_1
# 116 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_INTENSE
# 117 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_3
# 118 "data//maps/IkiTown/scripts.pory"
	closemessage
# 120 "data//maps/IkiTown/scripts.pory"
	delay 10
# 121 "data//maps/IkiTown/scripts.pory"
	applymovement 17, IkiTown_Script_SavedLillie_Movement_4
# 122 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 123 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_4
# 124 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 125 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_5
# 126 "data//maps/IkiTown/scripts.pory"
	closemessage
# 128 "data//maps/IkiTown/scripts.pory"
	delay 10
# 129 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 130 "data//maps/IkiTown/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 131 "data//maps/IkiTown/scripts.pory"
	applymovement 19, Common_Movement_WalkUp2
# 132 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 133 "data//maps/IkiTown/scripts.pory"
	emote 19, EMOTE_QUESTION
# 134 "data//maps/IkiTown/scripts.pory"
	delay 10
# 135 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 136 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 137 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_7
# 138 "data//maps/IkiTown/scripts.pory"
	closemessage
# 139 "data//maps/IkiTown/scripts.pory"
	applymovement 19, IkiTown_Script_SavedLillie_Movement_5
# 140 "data//maps/IkiTown/scripts.pory"
	applymovement 17, IkiTown_Script_SavedLillie_Movement_6
# 141 "data//maps/IkiTown/scripts.pory"
	waitmovement 19
# 142 "data//maps/IkiTown/scripts.pory"
	delay 10
# 143 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_8
# 144 "data//maps/IkiTown/scripts.pory"
	closemessage
# 145 "data//maps/IkiTown/scripts.pory"
	delay 10
# 147 "data//maps/IkiTown/scripts.pory"
	applymovement 19, Common_Movement_FaceUp
# 148 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 149 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 150 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 151 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_9
# 152 "data//maps/IkiTown/scripts.pory"
	closemessage
# 153 "data//maps/IkiTown/scripts.pory"
	applymovement 19, Common_Movement_FaceLeft
# 154 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 155 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 156 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA, EMOTION_LAUGH
# 157 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_10
# 158 "data//maps/IkiTown/scripts.pory"
	closemessage
# 160 "data//maps/IkiTown/scripts.pory"
	delay 10
# 161 "data//maps/IkiTown/scripts.pory"
	applymovement 19, IkiTown_Script_SavedLillie_Movement_7
# 162 "data//maps/IkiTown/scripts.pory"
	applymovement 17, IkiTown_Script_SavedLillie_Movement_8
# 163 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 164 "data//maps/IkiTown/scripts.pory"
	emote 8, EMOTE_EXCLAM
# 165 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_0
# 166 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 167 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_11
# 168 "data//maps/IkiTown/scripts.pory"
	closemessage
# 169 "data//maps/IkiTown/scripts.pory"
	applymovement 8, IkiTown_Script_SavedLillie_Movement_9
# 170 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 171 "data//maps/IkiTown/scripts.pory"
	delay 10
# 172 "data//maps/IkiTown/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 173 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 174 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 175 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_1
# 176 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 177 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_12
# 178 "data//maps/IkiTown/scripts.pory"
	closemessage
# 179 "data//maps/IkiTown/scripts.pory"
	applymovement 18, IkiTown_Script_SavedLillie_Movement_10
# 180 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 181 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_13
# 182 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_NORMAL
# 183 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_14
# 184 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 185 "data//maps/IkiTown/scripts.pory"
	closemessage
# 187 "data//maps/IkiTown/scripts.pory"
	delay 10
# 188 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 189 "data//maps/IkiTown/scripts.pory"
	delay 30
# 190 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_TAPU_KOKO_MAHALO_TRAIL
# 191 "data//maps/IkiTown/scripts.pory"
	removeobject 16
# 192 "data//maps/IkiTown/scripts.pory"
	removeobject 17
# 193 "data//maps/IkiTown/scripts.pory"
	removeobject 18
# 194 "data//maps/IkiTown/scripts.pory"
	removeobject 19
# 195 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_LILLIE_IKI_TOWN
# 196 "data//maps/IkiTown/scripts.pory"
	addobject 27
# 197 "data//maps/IkiTown/scripts.pory"
	addobject 28
# 198 "data//maps/IkiTown/scripts.pory"
	addobject 29
# 199 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 200 "data//maps/IkiTown/scripts.pory"
	delay 30
# 201 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 202 "data//maps/IkiTown/scripts.pory"
	delay 20
# 204 "data//maps/IkiTown/scripts.pory"
	setvar VAR_INTRO_STATE, 6
# 205 "data//maps/IkiTown/scripts.pory"
	startsubquest QUEST_WELCOME_TO_ALOLA, QUEST_WELCOME_TO_ALOLA_SUBQUEST_4
# 207 "data//maps/IkiTown/scripts.pory"
	releaseall
	end


IkiTown_Script_ManaloFestival::
# 214 "data//maps/IkiTown/scripts.pory"
	lockall
# 215 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 216 "data//maps/IkiTown/scripts.pory"
	delay 30
# 217 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_MOM_IKI_TOWN
# 218 "data//maps/IkiTown/scripts.pory"
	addobject 30
# 219 "data//maps/IkiTown/scripts.pory"
	addobject 31
# 220 "data//maps/IkiTown/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 221 "data//maps/IkiTown/scripts.pory"
	switch VAR_TEMP_1
# 223 "data//maps/IkiTown/scripts.pory"
	case 18, IkiTown_Script_ManaloFestival_3
# 226 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, IkiTown_Script_ManaloFestival_Movement_1
IkiTown_Script_ManaloFestival_1:
# 229 "data//maps/IkiTown/scripts.pory"
	applymovement 27, Common_Movement_FaceDown
# 230 "data//maps/IkiTown/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 231 "data//maps/IkiTown/scripts.pory"
	applymovement 29, IkiTown_Script_ManaloFestival_Movement_2
# 232 "data//maps/IkiTown/scripts.pory"
	applymovement 11, Common_Movement_WalkUp2
# 233 "data//maps/IkiTown/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 234 "data//maps/IkiTown/scripts.pory"
	applymovement 13, Common_Movement_WalkUp
# 235 "data//maps/IkiTown/scripts.pory"
	applymovement 14, Common_Movement_WalkUp
# 236 "data//maps/IkiTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 237 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 238 "data//maps/IkiTown/scripts.pory"
	hidefollower
# 239 "data//maps/IkiTown/scripts.pory"
	fwdtime 22, 0
# 240 "data//maps/IkiTown/scripts.pory"
	addminutes 1
# 241 "data//maps/IkiTown/scripts.pory"
	delay 30
# 242 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 243 "data//maps/IkiTown/scripts.pory"
	delay 20
# 245 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 246 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA, EMOTION_LAUGH
# 247 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_0
# 248 "data//maps/IkiTown/scripts.pory"
	closemessage
# 249 "data//maps/IkiTown/scripts.pory"
	applymovement 14, IkiTown_Script_ManaloFestival_Movement_3
# 250 "data//maps/IkiTown/scripts.pory"
	applymovement 30, IkiTown_Script_SavedLillie_Movement_4
# 251 "data//maps/IkiTown/scripts.pory"
	emote 11, EMOTE_HEART
# 252 "data//maps/IkiTown/scripts.pory"
	delay 30
# 253 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 254 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 255 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_1
# 256 "data//maps/IkiTown/scripts.pory"
	closemessage
# 257 "data//maps/IkiTown/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 258 "data//maps/IkiTown/scripts.pory"
	applymovement 30, IkiTown_Script_SavedLillie_Movement_4
# 259 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 260 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_ManaloFestival_Text_2
# 261 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_MOM
# 262 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_3
# 263 "data//maps/IkiTown/scripts.pory"
	closemessage
# 264 "data//maps/IkiTown/scripts.pory"
	delay 10
# 265 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 266 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 267 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_4
# 268 "data//maps/IkiTown/scripts.pory"
	closemessage
# 269 "data//maps/IkiTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 270 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 271 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 272 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA, EMOTION_LAUGH
# 273 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_5
# 274 "data//maps/IkiTown/scripts.pory"
	closemessage
# 276 "data//maps/IkiTown/scripts.pory"
	delay 15
# 277 "data//maps/IkiTown/scripts.pory"
	applymovement 29, IkiTown_Script_SavedLillie_Movement_3
# 278 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 279 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_4
# 280 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 281 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_6
# 282 "data//maps/IkiTown/scripts.pory"
	closemessage
# 285 "data//maps/IkiTown/scripts.pory"
	switch VAR_STARTER_MON
# 288 "data//maps/IkiTown/scripts.pory"
	case SPECIES_ROWLET, IkiTown_Script_ManaloFestival_7
# 290 "data//maps/IkiTown/scripts.pory"
	case SPECIES_LITTEN, IkiTown_Script_ManaloFestival_8
# 292 "data//maps/IkiTown/scripts.pory"
	case SPECIES_POPPLIO, IkiTown_Script_ManaloFestival_9
IkiTown_Script_ManaloFestival_7:
# 289 "data//maps/IkiTown/scripts.pory"
	trainerbattle_no_intro TRAINER_HAU_FESTIVAL_GRASS, IkiTown_Script_ManaloFestival_Text_7
IkiTown_Script_ManaloFestival_5:
# 296 "data//maps/IkiTown/scripts.pory"
	delay 20
# 297 "data//maps/IkiTown/scripts.pory"
	special HealPlayerParty
# 298 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 299 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA, EMOTION_LAUGH
# 300 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_8
# 301 "data//maps/IkiTown/scripts.pory"
	waitmessage
# 302 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA, EMOTION_NORMAL
# 303 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 304 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_9
# 305 "data//maps/IkiTown/scripts.pory"
	closemessage
# 306 "data//maps/IkiTown/scripts.pory"
	applymovement 7, IkiTown_Script_ManaloFestival_Movement_4
# 307 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 309 "data//maps/IkiTown/scripts.pory"
	giveitem ITEM_Z_POWER_RING
# 310 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_RECEIVED_Z_RING
# 312 "data//maps/IkiTown/scripts.pory"
	closemessage
# 313 "data//maps/IkiTown/scripts.pory"
	applymovement 7, IkiTown_Script_ManaloFestival_Movement_5
# 314 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 315 "data//maps/IkiTown/scripts.pory"
	delay 20
# 316 "data//maps/IkiTown/scripts.pory"
	applymovement 29, IkiTown_Script_SavedLillie_Movement_3
# 317 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 318 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_4
# 319 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_LAUGH
# 320 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_10
# 321 "data//maps/IkiTown/scripts.pory"
	closemessage
# 322 "data//maps/IkiTown/scripts.pory"
	delay 10
# 323 "data//maps/IkiTown/scripts.pory"
	applymovement 7, IkiTown_Script_ManaloFestival_Movement_6
# 324 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 325 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 326 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 327 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_11
# 328 "data//maps/IkiTown/scripts.pory"
	closemessage
# 329 "data//maps/IkiTown/scripts.pory"
	delay 10
# 330 "data//maps/IkiTown/scripts.pory"
	applymovement 7, IkiTown_Script_SavedLillie_Movement_2
# 331 "data//maps/IkiTown/scripts.pory"
	waitmovement 7
# 332 "data//maps/IkiTown/scripts.pory"
	delay 10
# 333 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 334 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 335 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_12
# 336 "data//maps/IkiTown/scripts.pory"
	closemessage
# 337 "data//maps/IkiTown/scripts.pory"
	applymovement 14, IkiTown_Script_ManaloFestival_Movement_3
# 338 "data//maps/IkiTown/scripts.pory"
	applymovement 30, IkiTown_Script_SavedLillie_Movement_4
# 339 "data//maps/IkiTown/scripts.pory"
	emote 27, EMOTE_HEART
# 341 "data//maps/IkiTown/scripts.pory"
	startquest QUEST_ISLAND_CHALLENGE
# 343 "data//maps/IkiTown/scripts.pory"
	delay 30
# 344 "data//maps/IkiTown/scripts.pory"
	applymovement 29, IkiTown_Script_ManaloFestival_Movement_7
# 345 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 346 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_4
# 347 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 348 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_13
# 349 "data//maps/IkiTown/scripts.pory"
	closemessage
# 350 "data//maps/IkiTown/scripts.pory"
	delay 10
# 351 "data//maps/IkiTown/scripts.pory"
	applymovement 29, IkiTown_Script_ManaloFestival_Movement_8
# 352 "data//maps/IkiTown/scripts.pory"
	applymovement 7, IkiTown_Script_ManaloFestival_Movement_9
# 353 "data//maps/IkiTown/scripts.pory"
	delay 30
# 354 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 355 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 356 "data//maps/IkiTown/scripts.pory"
	applymovement 27, IkiTown_Script_ManaloFestival_Movement_10
# 357 "data//maps/IkiTown/scripts.pory"
	applymovement 28, IkiTown_Script_ManaloFestival_Movement_11
# 358 "data//maps/IkiTown/scripts.pory"
	delay 20
# 359 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 360 "data//maps/IkiTown/scripts.pory"
	waitmovement 27
# 361 "data//maps/IkiTown/scripts.pory"
	delay 10
# 362 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_1
# 363 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 364 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_14
# 365 "data//maps/IkiTown/scripts.pory"
	closemessage
# 366 "data//maps/IkiTown/scripts.pory"
	delay 20
# 368 "data//maps/IkiTown/scripts.pory"
	setvar VAR_INTRO_STATE, 7
# 369 "data//maps/IkiTown/scripts.pory"
	startsubquest QUEST_WELCOME_TO_ALOLA, QUEST_WELCOME_TO_ALOLA_SUBQUEST_5
# 371 "data//maps/IkiTown/scripts.pory"
	delay 20
# 372 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 373 "data//maps/IkiTown/scripts.pory"
	delay 30
# 374 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_LILLIE_IKI_TOWN
# 375 "data//maps/IkiTown/scripts.pory"
	removeobject 27
# 376 "data//maps/IkiTown/scripts.pory"
	removeobject 28
# 377 "data//maps/IkiTown/scripts.pory"
	removeobject 29
# 378 "data//maps/IkiTown/scripts.pory"
	removeobject 7
# 379 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_MOM_IKI_TOWN
# 380 "data//maps/IkiTown/scripts.pory"
	removeobject 30
# 381 "data//maps/IkiTown/scripts.pory"
	removeobject 31
# 382 "data//maps/IkiTown/scripts.pory"
	applymovement 11, IkiTown_Script_ManaloFestival_Movement_12
# 383 "data//maps/IkiTown/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 384 "data//maps/IkiTown/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 385 "data//maps/IkiTown/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 386 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_HAU_HALAS_HOME
# 387 "data//maps/IkiTown/scripts.pory"
	switch VAR_STARTER_MON
# 390 "data//maps/IkiTown/scripts.pory"
	case SPECIES_ROWLET, IkiTown_Script_ManaloFestival_12
# 392 "data//maps/IkiTown/scripts.pory"
	case SPECIES_LITTEN, IkiTown_Script_ManaloFestival_13
# 394 "data//maps/IkiTown/scripts.pory"
	case SPECIES_POPPLIO, IkiTown_Script_ManaloFestival_14
IkiTown_Script_ManaloFestival_12:
# 391 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_HAUS_LITTEN_HALAS_HOME
IkiTown_Script_ManaloFestival_10:
# 397 "data//maps/IkiTown/scripts.pory"
	delay 30
# 398 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 399 "data//maps/IkiTown/scripts.pory"
	delay 20
# 401 "data//maps/IkiTown/scripts.pory"
	releaseall
	end

IkiTown_Script_ManaloFestival_3:
# 224 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, IkiTown_Script_ManaloFestival_Movement_0
	goto IkiTown_Script_ManaloFestival_1

IkiTown_Script_ManaloFestival_8:
# 291 "data//maps/IkiTown/scripts.pory"
	trainerbattle_no_intro TRAINER_HAU_FESTIVAL_FIRE, IkiTown_Script_ManaloFestival_Text_7
	goto IkiTown_Script_ManaloFestival_5

IkiTown_Script_ManaloFestival_9:
# 293 "data//maps/IkiTown/scripts.pory"
	trainerbattle_no_intro TRAINER_HAU_FESTIVAL_WATER, IkiTown_Script_ManaloFestival_Text_7
	goto IkiTown_Script_ManaloFestival_5

IkiTown_Script_ManaloFestival_13:
# 393 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_HAUS_POPPLIO_HALAS_HOME
	goto IkiTown_Script_ManaloFestival_10

IkiTown_Script_ManaloFestival_14:
# 395 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_HAUS_ROWLET_HALAS_HOME
	goto IkiTown_Script_ManaloFestival_10


IkiTown_Script_BlockHalaHouse::
# 407 "data//maps/IkiTown/scripts.pory"
	lockall
# 408 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_BlockHalaHouse_Text_0
# 409 "data//maps/IkiTown/scripts.pory"
	closemessage
# 410 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 411 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 412 "data//maps/IkiTown/scripts.pory"
	releaseall
	end


IkiTown_NPC_Hala::
# 420 "data//maps/IkiTown/scripts.pory"
	lock
# 421 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 422 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 423 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 424 "data//maps/IkiTown/scripts.pory"
	goto_if_unset FLAG_HIDE_HAU_CORVISQUIRE_MAHALO_TRAIL, IkiTown_NPC_Hala_2
# 430 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hala_Text_1
# 431 "data//maps/IkiTown/scripts.pory"
	waitmessage
# 432 "data//maps/IkiTown/scripts.pory"
	removefieldmugshot
# 433 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 434 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hala_Text_2, MSGBOX_YESNO
# 435 "data//maps/IkiTown/scripts.pory"
	closemessage
# 436 "data//maps/IkiTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IkiTown_NPC_Hala_5
# 447 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 448 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 449 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hala_Text_4
IkiTown_NPC_Hala_1:
# 452 "data//maps/IkiTown/scripts.pory"
	closemessage
# 453 "data//maps/IkiTown/scripts.pory"
	release
	end

IkiTown_NPC_Hala_2:
# 426 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hala_Text_0
	goto IkiTown_NPC_Hala_1

IkiTown_NPC_Hala_5:
# 438 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 439 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HALA, EMOTION_LAUGH
# 440 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hala_Text_3
# 441 "data//maps/IkiTown/scripts.pory"
	closemessage
# 442 "data//maps/IkiTown/scripts.pory"
	delay 20
# 443 "data//maps/IkiTown/scripts.pory"
	goto IkiTown_Script_ManaloFestival
	goto IkiTown_NPC_Hala_1


IkiTown_NPC_KukuiWithExeggutor::
# 459 "data//maps/IkiTown/scripts.pory"
	lock
# 460 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 461 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_0
# 462 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_KUKUI
# 463 "data//maps/IkiTown/scripts.pory"
	goto_if_unset FLAG_HIDE_HAU_CORVISQUIRE_MAHALO_TRAIL, IkiTown_NPC_KukuiWithExeggutor_2
# 469 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_KukuiWithExeggutor_Text_1
IkiTown_NPC_KukuiWithExeggutor_1:
# 471 "data//maps/IkiTown/scripts.pory"
	closemessage
# 472 "data//maps/IkiTown/scripts.pory"
	release
	end

IkiTown_NPC_KukuiWithExeggutor_2:
# 465 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_KukuiWithExeggutor_Text_0
	goto IkiTown_NPC_KukuiWithExeggutor_1


IkiTown_NPC_AlolanExeggutor::
# 478 "data//maps/IkiTown/scripts.pory"
	lock
# 479 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 480 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_AlolanExeggutor_Text_0
# 481 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_EXEGGUTOR_ALOLA, CRY_MODE_NORMAL
# 482 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_AlolanExeggutor_Text_1
# 483 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 484 "data//maps/IkiTown/scripts.pory"
	closemessage
# 485 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_LassByFlowers::
# 491 "data//maps/IkiTown/scripts.pory"
	lock
# 492 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 493 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_LassByFlowers_Text_0
# 494 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_LassByFlowers_Text_1
# 495 "data//maps/IkiTown/scripts.pory"
	closemessage
# 496 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_SchoolBoy::
# 502 "data//maps/IkiTown/scripts.pory"
	lock
# 503 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 504 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_SchoolBoy_Text_0
# 505 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_SchoolBoy_Text_1
# 506 "data//maps/IkiTown/scripts.pory"
	closemessage
# 507 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_SchoolGirl::
# 513 "data//maps/IkiTown/scripts.pory"
	lock
# 514 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 515 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_SchoolGirl_Text_0
# 516 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_SchoolGirl_Text_1
# 517 "data//maps/IkiTown/scripts.pory"
	closemessage
# 518 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_ManWandering::
# 524 "data//maps/IkiTown/scripts.pory"
	lock
# 525 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 526 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_ManWandering_Text_0
# 527 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_ManWandering_Text_1
# 528 "data//maps/IkiTown/scripts.pory"
	closemessage
# 529 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_WomanWandering::
# 535 "data//maps/IkiTown/scripts.pory"
	lock
# 536 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 537 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_WomanWandering_Text_0
# 538 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_WomanWandering_Text_1
# 539 "data//maps/IkiTown/scripts.pory"
	closemessage
# 540 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_DancerWithOricorio::
# 546 "data//maps/IkiTown/scripts.pory"
	lock
# 547 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_DancerWithOricorio_Text_0
# 548 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_DancerWithOricorio_Text_1
# 549 "data//maps/IkiTown/scripts.pory"
	closemessage
# 552 "data//maps/IkiTown/scripts.pory"
	delay 10
# 553 "data//maps/IkiTown/scripts.pory"
	applymovement 12, IkiTown_NPC_DancerWithOricorio_Movement_0
# 554 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 555 "data//maps/IkiTown/scripts.pory"
	applymovement 13, IkiTown_NPC_DancerWithOricorio_Movement_1
# 556 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 558 "data//maps/IkiTown/scripts.pory"
	emote 11, EMOTE_X
# 559 "data//maps/IkiTown/scripts.pory"
	delay 10
# 560 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 561 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_DancerWithOricorio_Text_0
# 562 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_DancerWithOricorio_Text_2
# 563 "data//maps/IkiTown/scripts.pory"
	closemessage
# 564 "data//maps/IkiTown/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 565 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 566 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_OricorioPomPom::
# 572 "data//maps/IkiTown/scripts.pory"
	lock
# 573 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 574 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_OricorioPomPom_Text_0
# 575 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_ORICORIO_POM_POM, CRY_MODE_NORMAL
# 576 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_OricorioPomPom_Text_1
# 577 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 578 "data//maps/IkiTown/scripts.pory"
	closemessage
# 579 "data//maps/IkiTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 580 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 581 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_OricorioPau::
# 586 "data//maps/IkiTown/scripts.pory"
	lock
# 587 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 588 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_OricorioPomPom_Text_0
# 589 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_ORICORIO_POM_POM, CRY_MODE_NORMAL
# 590 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_OricorioPau_Text_0
# 591 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 592 "data//maps/IkiTown/scripts.pory"
	closemessage
# 593 "data//maps/IkiTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 594 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 595 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_YoungsterRockruff::
# 601 "data//maps/IkiTown/scripts.pory"
	lock
# 602 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 603 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_YoungsterRockruff_Text_0
# 604 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_YoungsterRockruff_Text_1
# 605 "data//maps/IkiTown/scripts.pory"
	closemessage
# 606 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_Lillie::
# 612 "data//maps/IkiTown/scripts.pory"
	lock
# 613 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 614 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_1
# 615 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 616 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Lillie_Text_0
# 617 "data//maps/IkiTown/scripts.pory"
	closemessage
# 618 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_Cosmog::
# 624 "data//maps/IkiTown/scripts.pory"
	lock
# 625 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 626 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_13
# 627 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_NORMAL
# 628 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_14
# 629 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 630 "data//maps/IkiTown/scripts.pory"
	closemessage
# 631 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_Hau::
# 637 "data//maps/IkiTown/scripts.pory"
	lock
# 638 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 639 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_4
# 640 "data//maps/IkiTown/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 641 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hau_Text_0
# 642 "data//maps/IkiTown/scripts.pory"
	closemessage
# 643 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_Nurse::
# 649 "data//maps/IkiTown/scripts.pory"
	lock
# 650 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 651 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_Nurse_Text_0
# 652 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Nurse_Text_1, MSGBOX_YESNO
# 653 "data//maps/IkiTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IkiTown_NPC_Nurse_2
# 670 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_Nurse_Text_0
# 671 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Nurse_Text_4
# 672 "data//maps/IkiTown/scripts.pory"
	closemessage
IkiTown_NPC_Nurse_1:
# 674 "data//maps/IkiTown/scripts.pory"
	release
	end

IkiTown_NPC_Nurse_2:
# 655 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_Nurse_Text_0
# 656 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Nurse_Text_2
# 657 "data//maps/IkiTown/scripts.pory"
	closemessage
# 658 "data//maps/IkiTown/scripts.pory"
	applymovement 26, IkiTown_NPC_Nurse_Movement_0
# 659 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 660 "data//maps/IkiTown/scripts.pory"
	special HealPlayerParty
# 661 "data//maps/IkiTown/scripts.pory"
	delay 10
# 662 "data//maps/IkiTown/scripts.pory"
	applymovement 26, Movement_PkmnCenterNurse_Bow
# 663 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 664 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_Nurse_Text_0
# 665 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Nurse_Text_3
# 666 "data//maps/IkiTown/scripts.pory"
	closemessage
	goto IkiTown_NPC_Nurse_1


IkiTown_Sign_LocationSign::
# 682 "data//maps/IkiTown/scripts.pory"
	lock
# 683 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Sign_LocationSign_Text_0, MSGBOX_SIGN
# 684 "data//maps/IkiTown/scripts.pory"
	closemessage
# 685 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_Sign_MahaloTrailUp::
# 691 "data//maps/IkiTown/scripts.pory"
	lock
# 692 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Sign_MahaloTrailUp_Text_0, MSGBOX_SIGN
# 693 "data//maps/IkiTown/scripts.pory"
	closemessage
# 694 "data//maps/IkiTown/scripts.pory"
	release
	end


# 13 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_0:
# 13 "data//maps/IkiTown/scripts.pory"
	walk_right
# 13 "data//maps/IkiTown/scripts.pory"
	walk_up
# 13 "data//maps/IkiTown/scripts.pory"
	walk_up
# 13 "data//maps/IkiTown/scripts.pory"
	delay_16
# 13 "data//maps/IkiTown/scripts.pory"
	delay_16
# 13 "data//maps/IkiTown/scripts.pory"
	face_right
# 13 "data//maps/IkiTown/scripts.pory"
	step_end

# 15 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_1:
# 15 "data//maps/IkiTown/scripts.pory"
	walk_left
# 15 "data//maps/IkiTown/scripts.pory"
	walk_up
# 15 "data//maps/IkiTown/scripts.pory"
	walk_up
# 15 "data//maps/IkiTown/scripts.pory"
	delay_16
# 15 "data//maps/IkiTown/scripts.pory"
	delay_16
# 15 "data//maps/IkiTown/scripts.pory"
	face_right
# 15 "data//maps/IkiTown/scripts.pory"
	step_end

# 24 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_2:
# 24 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 24 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 24 "data//maps/IkiTown/scripts.pory"
	walk_fast_left
# 24 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 24 "data//maps/IkiTown/scripts.pory"
	face_right
# 24 "data//maps/IkiTown/scripts.pory"
	step_end

# 25 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_3:
# 25 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 25 "data//maps/IkiTown/scripts.pory"
	walk_fast_left
# 25 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 25 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 25 "data//maps/IkiTown/scripts.pory"
	face_left
# 25 "data//maps/IkiTown/scripts.pory"
	step_end

# 31 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_4:
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_right
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	walk_up
# 31 "data//maps/IkiTown/scripts.pory"
	step_end

# 33 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_5:
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 33 "data//maps/IkiTown/scripts.pory"
	face_up
# 33 "data//maps/IkiTown/scripts.pory"
	delay_16
# 33 "data//maps/IkiTown/scripts.pory"
	jump_in_place_up
# 33 "data//maps/IkiTown/scripts.pory"
	jump_in_place_up
# 33 "data//maps/IkiTown/scripts.pory"
	step_end

# 41 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_6:
# 41 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 41 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 41 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 41 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 41 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 41 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 41 "data//maps/IkiTown/scripts.pory"
	step_end

# 49 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_7:
# 49 "data//maps/IkiTown/scripts.pory"
	walk_down
# 49 "data//maps/IkiTown/scripts.pory"
	walk_down
# 49 "data//maps/IkiTown/scripts.pory"
	walk_down
# 49 "data//maps/IkiTown/scripts.pory"
	face_up
# 49 "data//maps/IkiTown/scripts.pory"
	step_end

# 57 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_8:
# 57 "data//maps/IkiTown/scripts.pory"
	walk_down
# 57 "data//maps/IkiTown/scripts.pory"
	walk_down
# 57 "data//maps/IkiTown/scripts.pory"
	face_down
# 57 "data//maps/IkiTown/scripts.pory"
	step_end

# 86 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_0:
# 86 "data//maps/IkiTown/scripts.pory"
	walk_down
# 86 "data//maps/IkiTown/scripts.pory"
	walk_down
# 86 "data//maps/IkiTown/scripts.pory"
	step_end

# 98 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_1:
# 98 "data//maps/IkiTown/scripts.pory"
	walk_left
# 98 "data//maps/IkiTown/scripts.pory"
	walk_up
# 98 "data//maps/IkiTown/scripts.pory"
	walk_up
# 98 "data//maps/IkiTown/scripts.pory"
	face_up
# 98 "data//maps/IkiTown/scripts.pory"
	step_end

# 105 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_2:
# 105 "data//maps/IkiTown/scripts.pory"
	walk_in_place_down
# 105 "data//maps/IkiTown/scripts.pory"
	walk_in_place_down
# 105 "data//maps/IkiTown/scripts.pory"
	step_end

# 113 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_3:
# 113 "data//maps/IkiTown/scripts.pory"
	walk_in_place_right
# 113 "data//maps/IkiTown/scripts.pory"
	walk_in_place_right
	step_end

# 121 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_4:
# 121 "data//maps/IkiTown/scripts.pory"
	jump_in_place_down
# 121 "data//maps/IkiTown/scripts.pory"
	jump_in_place_down
# 121 "data//maps/IkiTown/scripts.pory"
	step_end

# 139 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_5:
# 139 "data//maps/IkiTown/scripts.pory"
	walk_right
# 139 "data//maps/IkiTown/scripts.pory"
	walk_up
# 139 "data//maps/IkiTown/scripts.pory"
	walk_up
# 139 "data//maps/IkiTown/scripts.pory"
	walk_up
# 139 "data//maps/IkiTown/scripts.pory"
	face_left
# 139 "data//maps/IkiTown/scripts.pory"
	step_end

# 140 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_6:
# 140 "data//maps/IkiTown/scripts.pory"
	walk_fast_left
# 140 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 140 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 140 "data//maps/IkiTown/scripts.pory"
	face_right
# 140 "data//maps/IkiTown/scripts.pory"
	step_end

# 161 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_7:
# 161 "data//maps/IkiTown/scripts.pory"
	walk_down
# 161 "data//maps/IkiTown/scripts.pory"
	walk_down
# 161 "data//maps/IkiTown/scripts.pory"
	walk_down
# 161 "data//maps/IkiTown/scripts.pory"
	walk_down
# 161 "data//maps/IkiTown/scripts.pory"
	walk_left
# 161 "data//maps/IkiTown/scripts.pory"
	walk_left
# 161 "data//maps/IkiTown/scripts.pory"
	walk_left
# 161 "data//maps/IkiTown/scripts.pory"
	walk_left
# 161 "data//maps/IkiTown/scripts.pory"
	walk_left
# 161 "data//maps/IkiTown/scripts.pory"
	walk_left
# 161 "data//maps/IkiTown/scripts.pory"
	walk_left
# 161 "data//maps/IkiTown/scripts.pory"
	walk_left
# 161 "data//maps/IkiTown/scripts.pory"
	step_end

# 162 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_8:
# 162 "data//maps/IkiTown/scripts.pory"
	walk_right
# 162 "data//maps/IkiTown/scripts.pory"
	walk_down
# 162 "data//maps/IkiTown/scripts.pory"
	walk_down
# 162 "data//maps/IkiTown/scripts.pory"
	walk_down
# 162 "data//maps/IkiTown/scripts.pory"
	walk_down
# 162 "data//maps/IkiTown/scripts.pory"
	walk_left
# 162 "data//maps/IkiTown/scripts.pory"
	walk_left
# 162 "data//maps/IkiTown/scripts.pory"
	walk_left
# 162 "data//maps/IkiTown/scripts.pory"
	walk_left
# 162 "data//maps/IkiTown/scripts.pory"
	walk_left
# 162 "data//maps/IkiTown/scripts.pory"
	walk_left
# 162 "data//maps/IkiTown/scripts.pory"
	walk_left
# 162 "data//maps/IkiTown/scripts.pory"
	walk_left
# 162 "data//maps/IkiTown/scripts.pory"
	step_end

# 169 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_9:
# 169 "data//maps/IkiTown/scripts.pory"
	walk_down
# 169 "data//maps/IkiTown/scripts.pory"
	walk_down
# 169 "data//maps/IkiTown/scripts.pory"
	walk_right
# 169 "data//maps/IkiTown/scripts.pory"
	step_end

# 179 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_10:
# 179 "data//maps/IkiTown/scripts.pory"
	jump_in_place_down
# 179 "data//maps/IkiTown/scripts.pory"
	jump_in_place_down
	step_end

# 224 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_0:
# 224 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 224 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 224 "data//maps/IkiTown/scripts.pory"
	face_left
# 224 "data//maps/IkiTown/scripts.pory"
	step_end

# 226 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_1:
# 226 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 226 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 226 "data//maps/IkiTown/scripts.pory"
	face_left
# 226 "data//maps/IkiTown/scripts.pory"
	step_end

# 231 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_2:
# 231 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 231 "data//maps/IkiTown/scripts.pory"
	walk_fast_left
# 231 "data//maps/IkiTown/scripts.pory"
	face_right
# 231 "data//maps/IkiTown/scripts.pory"
	step_end

# 249 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_3:
# 249 "data//maps/IkiTown/scripts.pory"
	jump_in_place_up
# 249 "data//maps/IkiTown/scripts.pory"
	jump_in_place_up
# 249 "data//maps/IkiTown/scripts.pory"
	step_end

# 306 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_4:
# 306 "data//maps/IkiTown/scripts.pory"
	walk_down
# 306 "data//maps/IkiTown/scripts.pory"
	walk_right
# 306 "data//maps/IkiTown/scripts.pory"
	step_end

# 313 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_5:
# 313 "data//maps/IkiTown/scripts.pory"
	walk_left
# 313 "data//maps/IkiTown/scripts.pory"
	walk_left
# 313 "data//maps/IkiTown/scripts.pory"
	step_end

# 323 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_6:
# 323 "data//maps/IkiTown/scripts.pory"
	walk_right
# 323 "data//maps/IkiTown/scripts.pory"
	walk_up
# 323 "data//maps/IkiTown/scripts.pory"
	face_down
# 323 "data//maps/IkiTown/scripts.pory"
	step_end

# 344 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_7:
# 344 "data//maps/IkiTown/scripts.pory"
	walk_right
# 344 "data//maps/IkiTown/scripts.pory"
	walk_right
# 344 "data//maps/IkiTown/scripts.pory"
	walk_right
# 344 "data//maps/IkiTown/scripts.pory"
	step_end

# 351 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_8:
# 351 "data//maps/IkiTown/scripts.pory"
	walk_left
# 351 "data//maps/IkiTown/scripts.pory"
	walk_left
# 351 "data//maps/IkiTown/scripts.pory"
	walk_left
# 351 "data//maps/IkiTown/scripts.pory"
	walk_left
# 351 "data//maps/IkiTown/scripts.pory"
	walk_left
# 351 "data//maps/IkiTown/scripts.pory"
	walk_left
# 351 "data//maps/IkiTown/scripts.pory"
	walk_left
# 351 "data//maps/IkiTown/scripts.pory"
	walk_left
# 351 "data//maps/IkiTown/scripts.pory"
	step_end

# 352 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_9:
# 352 "data//maps/IkiTown/scripts.pory"
	delay_16
# 352 "data//maps/IkiTown/scripts.pory"
	walk_down
# 352 "data//maps/IkiTown/scripts.pory"
	walk_left
# 352 "data//maps/IkiTown/scripts.pory"
	walk_left
# 352 "data//maps/IkiTown/scripts.pory"
	walk_left
# 352 "data//maps/IkiTown/scripts.pory"
	walk_left
# 352 "data//maps/IkiTown/scripts.pory"
	walk_left
# 352 "data//maps/IkiTown/scripts.pory"
	walk_left
# 352 "data//maps/IkiTown/scripts.pory"
	walk_left
# 352 "data//maps/IkiTown/scripts.pory"
	step_end

# 356 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_10:
# 356 "data//maps/IkiTown/scripts.pory"
	walk_left
# 356 "data//maps/IkiTown/scripts.pory"
	walk_left
# 356 "data//maps/IkiTown/scripts.pory"
	walk_left
# 356 "data//maps/IkiTown/scripts.pory"
	walk_left
# 356 "data//maps/IkiTown/scripts.pory"
	walk_down
# 356 "data//maps/IkiTown/scripts.pory"
	walk_down
# 356 "data//maps/IkiTown/scripts.pory"
	walk_down
# 356 "data//maps/IkiTown/scripts.pory"
	walk_down
# 356 "data//maps/IkiTown/scripts.pory"
	walk_right
# 356 "data//maps/IkiTown/scripts.pory"
	walk_right
# 356 "data//maps/IkiTown/scripts.pory"
	walk_right
# 356 "data//maps/IkiTown/scripts.pory"
	walk_right
# 356 "data//maps/IkiTown/scripts.pory"
	walk_right
# 356 "data//maps/IkiTown/scripts.pory"
	walk_right
# 356 "data//maps/IkiTown/scripts.pory"
	walk_right
# 356 "data//maps/IkiTown/scripts.pory"
	step_end

# 357 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_11:
# 357 "data//maps/IkiTown/scripts.pory"
	walk_left
# 357 "data//maps/IkiTown/scripts.pory"
	walk_left
# 357 "data//maps/IkiTown/scripts.pory"
	walk_left
# 357 "data//maps/IkiTown/scripts.pory"
	walk_left
# 357 "data//maps/IkiTown/scripts.pory"
	walk_left
# 357 "data//maps/IkiTown/scripts.pory"
	walk_down
# 357 "data//maps/IkiTown/scripts.pory"
	walk_down
# 357 "data//maps/IkiTown/scripts.pory"
	walk_down
# 357 "data//maps/IkiTown/scripts.pory"
	walk_down
# 357 "data//maps/IkiTown/scripts.pory"
	walk_right
# 357 "data//maps/IkiTown/scripts.pory"
	walk_right
# 357 "data//maps/IkiTown/scripts.pory"
	walk_right
# 357 "data//maps/IkiTown/scripts.pory"
	walk_right
# 357 "data//maps/IkiTown/scripts.pory"
	walk_right
# 357 "data//maps/IkiTown/scripts.pory"
	walk_right
# 357 "data//maps/IkiTown/scripts.pory"
	step_end

# 382 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_12:
# 382 "data//maps/IkiTown/scripts.pory"
	walk_down
# 382 "data//maps/IkiTown/scripts.pory"
	walk_down
# 382 "data//maps/IkiTown/scripts.pory"
	face_up
# 382 "data//maps/IkiTown/scripts.pory"
	step_end

# 553 "data//maps/IkiTown/scripts.pory"
IkiTown_NPC_DancerWithOricorio_Movement_0:
# 553 "data//maps/IkiTown/scripts.pory"
	jump_left
# 553 "data//maps/IkiTown/scripts.pory"
	jump_right
# 553 "data//maps/IkiTown/scripts.pory"
	jump_right
# 553 "data//maps/IkiTown/scripts.pory"
	jump_left
# 553 "data//maps/IkiTown/scripts.pory"
	face_down
# 553 "data//maps/IkiTown/scripts.pory"
	step_end

# 555 "data//maps/IkiTown/scripts.pory"
IkiTown_NPC_DancerWithOricorio_Movement_1:
# 555 "data//maps/IkiTown/scripts.pory"
	walk_in_place_down
# 555 "data//maps/IkiTown/scripts.pory"
	walk_in_place_down
# 555 "data//maps/IkiTown/scripts.pory"
	walk_in_place_right
# 555 "data//maps/IkiTown/scripts.pory"
	walk_in_place_right
# 555 "data//maps/IkiTown/scripts.pory"
	walk_in_place_up
# 555 "data//maps/IkiTown/scripts.pory"
	walk_in_place_up
# 555 "data//maps/IkiTown/scripts.pory"
	walk_in_place_left
# 555 "data//maps/IkiTown/scripts.pory"
	walk_in_place_left
# 555 "data//maps/IkiTown/scripts.pory"
	face_down
# 555 "data//maps/IkiTown/scripts.pory"
	step_end

# 658 "data//maps/IkiTown/scripts.pory"
IkiTown_NPC_Nurse_Movement_0:
# 658 "data//maps/IkiTown/scripts.pory"
	walk_in_place_slow_left
# 658 "data//maps/IkiTown/scripts.pory"
	walk_in_place_slow_left
# 658 "data//maps/IkiTown/scripts.pory"
	walk_in_place_slow_left
# 658 "data//maps/IkiTown/scripts.pory"
	face_down
# 658 "data//maps/IkiTown/scripts.pory"
	step_end

IkiTown_Script_HalaIntro_Text_0:
# 37 "data//maps/IkiTown/scripts.pory"
	.string "Prof. Kukui$"

IkiTown_Script_HalaIntro_Text_1:
# 39 "data//maps/IkiTown/scripts.pory"
	.string "Aue! Come on, just give me one good\n"
	.string "Dragon Hammer, {COLOR BLUE}Exeggutor{COLOR DARK_GRAY}!$"

IkiTown_Script_HalaIntro_Text_2:
# 52 "data//maps/IkiTown/scripts.pory"
	.string "???$"

IkiTown_Script_HalaIntro_Text_3:
# 54 "data//maps/IkiTown/scripts.pory"
	.string "Ohoho! Kukui never changes, does he?$"

IkiTown_Script_HalaIntro_Text_4:
# 59 "data//maps/IkiTown/scripts.pory"
	.string "Kahuna Hala$"

IkiTown_Script_HalaIntro_Text_5:
# 61 "data//maps/IkiTown/scripts.pory"
	.string "Alola! I'm glad to meet you, young\n"
	.string "Trainer. My name is {COLOR GREEN}Hala{COLOR DARK_GRAY}, {COLOR GREEN}Kahuna of\l"
	.string "Melemele Island{COLOR DARK_GRAY}.\p"
	.string "I've heard much and more about you.\n"
	.string "{PLAYER}, grandchild of the legendary\l"
	.string "Samson Oak, returning to their home\l"
	.string "island after so long away!\p"
	.string "The {COLOR GREEN}Manalo Festival{COLOR DARK_GRAY} begins soon.\n"
	.string "Before, this would be when you would be\l"
	.string "granted a Pokémon, but it seems they\l"
	.string "beat us to it!\p"
	.string "For now, please join in on the\n"
	.string "festivities. My grandson {COLOR GREEN}Hau{COLOR DARK_GRAY} just ran\l"
	.string "{COLOR GREEN}up Mahalo Trail{COLOR DARK_GRAY} - perhaps you could get\l"
	.string "to know him?$"

IkiTown_Script_SavedLillie_Text_0:
# 103 "data//maps/IkiTown/scripts.pory"
	.string "Oho, I wondered where you ran off to,\n"
	.string "Lillie! Now why'd you go up {COLOR GREEN}Mahalo Trail{COLOR DARK_GRAY}?\l"
	.string "You training with {COLOR BLUE}Cosmog{COLOR DARK_GRAY}?$"

IkiTown_Script_SavedLillie_Text_1:
# 107 "data//maps/IkiTown/scripts.pory"
	.string "Lillie$"

IkiTown_Script_SavedLillie_Text_2:
# 109 "data//maps/IkiTown/scripts.pory"
	.string "I- I didn't mean to... {COLOR BLUE}Nebbie{COLOR DARK_GRAY} ran off\n"
	.string "again! Hau came to help, but we were\l"
	.string "saved by... By...$"

IkiTown_Script_SavedLillie_Text_3:
# 117 "data//maps/IkiTown/scripts.pory"
	.string "Eek! I didn't even get their name...!$"

IkiTown_Script_SavedLillie_Text_4:
# 123 "data//maps/IkiTown/scripts.pory"
	.string "Hau$"

IkiTown_Script_SavedLillie_Text_5:
# 125 "data//maps/IkiTown/scripts.pory"
	.string "Yeah, {PLAYER} ran up and helped us\n"
	.string "out! They were trapped with {COLOR BLUE}Nebbie{COLOR DARK_GRAY} by a\l"
	.string "wild {COLOR BLUE}Corviknight{COLOR DARK_GRAY}, but at the last\l"
	.string "second, {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY} flew in and saved the\l"
	.string "day!$"

IkiTown_Script_SavedLillie_Text_6:
# 135 "data//maps/IkiTown/scripts.pory"
	.string "Hala$"

IkiTown_Script_SavedLillie_Text_7:
# 137 "data//maps/IkiTown/scripts.pory"
	.string "Hey, you three! What's this about {COLOR BLUE}Tapu\n"
	.string "Koko{COLOR DARK_GRAY}?$"

IkiTown_Script_SavedLillie_Text_8:
# 143 "data//maps/IkiTown/scripts.pory"
	.string "Hau told Kahuna Hala the whole story...$"

IkiTown_Script_SavedLillie_Text_9:
# 151 "data//maps/IkiTown/scripts.pory"
	.string "So, {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY} revealed itself to you\n"
	.string "three... Our {COLOR GREEN}Island Guardian{COLOR DARK_GRAY} can be\l"
	.string "quite the fickle being, so it must hold\l"
	.string "strong feelings to come protect you.\p"
	.string "The talk of rampaging Pokémon is\n"
	.string "concerning, but {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY}'s appearance\l"
	.string "must be a blessing for our Manalo\l"
	.string "Festival!\p"
	.string "Most festival preparations are\n"
	.string "complete. Come {COLOR GREEN}speak to me{COLOR DARK_GRAY} once you are\l"
	.string "ready to join!$"

IkiTown_Script_SavedLillie_Text_10:
# 157 "data//maps/IkiTown/scripts.pory"
	.string "Hau, follow me to the platform in town.\n"
	.string "You must be prepared to receive your\l"
	.string "first Pokémon!$"

IkiTown_Script_SavedLillie_Text_11:
# 167 "data//maps/IkiTown/scripts.pory"
	.string "Aue, the Manalo Festival is actually\n"
	.string "starting soon! I need to get {COLOR BLUE}Exeggutor{COLOR DARK_GRAY}\l"
	.string "ready to dance!$"

IkiTown_Script_SavedLillie_Text_12:
# 177 "data//maps/IkiTown/scripts.pory"
	.string "Ahem... So, {PLAYER}, I'm Lillie. It's\n"
	.string "nice to officially meet you!\p"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY} and I owe you for helping us.\n"
	.string "We'll be cheering for you during the\l"
	.string "festival!$"

IkiTown_Script_SavedLillie_Text_13:
# 181 "data//maps/IkiTown/scripts.pory"
	.string "Nebbie$"

IkiTown_Script_SavedLillie_Text_14:
# 183 "data//maps/IkiTown/scripts.pory"
	.string "Pew pew!$"

IkiTown_Script_ManaloFestival_Text_0:
# 247 "data//maps/IkiTown/scripts.pory"
	.string "Welcome, people of Iki Town, to the main\n"
	.string "event of our Manalo Festival!$"

IkiTown_Script_ManaloFestival_Text_1:
# 255 "data//maps/IkiTown/scripts.pory"
	.string "Tonight, we open ourselves to the light\n"
	.string "of {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY}, our great Island\l"
	.string "Guardian, and honor it through battle!\p"
	.string "Our first challenger is {COLOR GREEN}Hau{COLOR DARK_GRAY}, my own\n"
	.string "grandson, who has recently chosen his\l"
	.string "first Pokémon!\p"
	.string "Our second challenger is {COLOR GREEN}{PLAYER}{COLOR DARK_GRAY},\n"
	.string "grandchild of Samson Oak, ready to join\l"
	.string "the great Trainers of Alola!$"

IkiTown_Script_ManaloFestival_Text_2:
# 260 "data//maps/IkiTown/scripts.pory"
	.string "Mom$"

IkiTown_Script_ManaloFestival_Text_3:
# 262 "data//maps/IkiTown/scripts.pory"
	.string "WOO-HOO! Go get 'em, {PLAYER}!$"

IkiTown_Script_ManaloFestival_Text_4:
# 267 "data//maps/IkiTown/scripts.pory"
	.string "Ahem...$"

IkiTown_Script_ManaloFestival_Text_5:
# 273 "data//maps/IkiTown/scripts.pory"
	.string "Hau! {PLAYER}! Show us what it means\n"
	.string "to be true Trainers!$"

IkiTown_Script_ManaloFestival_Text_6:
# 281 "data//maps/IkiTown/scripts.pory"
	.string "As long as we have a good time, then I\n"
	.string "think we can call it a great battle, eh?\p"
	.string "Give it all you've got! C'mon!$"

IkiTown_Script_ManaloFestival_Text_7:
# 289 "data//maps/IkiTown/scripts.pory"
	.string "What? It's already over?!$"

IkiTown_Script_ManaloFestival_Text_8:
# 300 "data//maps/IkiTown/scripts.pory"
	.string "Hoo-ee! Another great battle this year.\n"
	.string "I'm sure {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY} enjoyed it too!$"

IkiTown_Script_ManaloFestival_Text_9:
# 304 "data//maps/IkiTown/scripts.pory"
	.string "You two have come of age and held your\n"
	.string "own at the Manalo Festival. Please, take\l"
	.string "these!$"

IkiTown_Script_ManaloFestival_Text_10:
# 320 "data//maps/IkiTown/scripts.pory"
	.string "So sparkly... Thanks, Tutu!$"

IkiTown_Script_ManaloFestival_Text_11:
# 327 "data//maps/IkiTown/scripts.pory"
	.string "Those are {COLOR GREEN}Z-Power Rings{COLOR DARK_GRAY}, enhanced with\n"
	.string "keystones blessed by the Island\l"
	.string "Guardians themselves.\p"
	.string "With {COLOR GREEN}Z-Power{COLOR DARK_GRAY}, you will be able to draw\n"
	.string "out the hidden power within your\l"
	.string "Pokémon, unleashing amazing {COLOR GREEN}Z-Moves{COLOR DARK_GRAY}\l"
	.string "and accessing the {COLOR GREEN}Z-Forms{COLOR DARK_GRAY} of some\l"
	.string "species.$"

IkiTown_Script_ManaloFestival_Text_12:
# 335 "data//maps/IkiTown/scripts.pory"
	.string "With that, you are now ready to embark\n"
	.string "on the {COLOR GREEN}Island Challenge{COLOR DARK_GRAY}! You must\l"
	.string "overcome trials on the four main\l"
	.string "islands of Alola to earn {COLOR GREEN}Z-Crystals{COLOR DARK_GRAY},\l"
	.string "unlocking the true potential of your\l"
	.string "Pokémon.\p"
	.string "That's it for the Manalo Festival! Until\n"
	.string "next year, everyone!$"

IkiTown_Script_ManaloFestival_Text_13:
# 348 "data//maps/IkiTown/scripts.pory"
	.string "I had a blast battling you, {PLAYER}!\n"
	.string "And now look at us, ready to take on the\l"
	.string "{COLOR GREEN}Island Challenge{COLOR DARK_GRAY}!\p"
	.string "I'm gonna head home with Hala and rest\n"
	.string "my Pokémon. You should drop by!$"

IkiTown_Script_ManaloFestival_Text_14:
# 364 "data//maps/IkiTown/scripts.pory"
	.string "{PLAYER}, that was amazing! I'm no\n"
	.string "Trainer, but I couldn't look away from\l"
	.string "that battle.\p"
	.string "I've been staying at {COLOR GREEN}Professor Kukui's\n"
	.string "Lab{COLOR DARK_GRAY}, on the beach in southern {COLOR GREEN}Hau'oli\l"
	.string "Outskirts{COLOR DARK_GRAY}. He's been planning a surprise\l"
	.string "for you, so come visit!$"

IkiTown_Script_BlockHalaHouse_Text_0:
# 408 "data//maps/IkiTown/scripts.pory"
	.string "Kahuna Hala is outside of his house\n"
	.string "right now.$"

IkiTown_NPC_Hala_Text_0:
# 426 "data//maps/IkiTown/scripts.pory"
	.string "{PLAYER}, Alola! The {COLOR GREEN}Manalo Festival{COLOR DARK_GRAY}\n"
	.string "is still being set up. Tonight, we honor\l"
	.string "our Island Guardian and call on them for\l"
	.string "their protection.\p"
	.string "{COLOR GREEN}Hau{COLOR DARK_GRAY}, my grandson, has gone {COLOR GREEN}up Mahalo\n"
	.string "Trail{COLOR DARK_GRAY} with Kukui's Assistant. You should\l"
	.string "try to find them.$"

IkiTown_NPC_Hala_Text_1:
# 430 "data//maps/IkiTown/scripts.pory"
	.string "{PLAYER}, come on up!$"

IkiTown_NPC_Hala_Text_2:
# 434 "data//maps/IkiTown/scripts.pory"
	.string "Are you ready to {COLOR GREEN}celebrate the Manalo\n"
	.string "Festival{COLOR DARK_GRAY} together?$"

IkiTown_NPC_Hala_Text_3:
# 440 "data//maps/IkiTown/scripts.pory"
	.string "Bahaha, great! I'll have you wait here\n"
	.string "while I get Hau and the townsfolk\l"
	.string "together...$"

IkiTown_NPC_Hala_Text_4:
# 449 "data//maps/IkiTown/scripts.pory"
	.string "I understand. This is a big night for\n"
	.string "you and my grandson both!\p"
	.string "Come back when you're ready for the\n"
	.string "festival to begin!$"

IkiTown_NPC_KukuiWithExeggutor_Text_0:
# 465 "data//maps/IkiTown/scripts.pory"
	.string "Check out this guy! {COLOR BLUE}Alolan Exeggutor{COLOR DARK_GRAY}\n"
	.string "towers over most Pokémon, yeah! It's so\l"
	.string "high up, it doesn't seem to hear me\l"
	.string "sometimes...\p"
	.string "You met {COLOR GREEN}Hala{COLOR DARK_GRAY}? He's the {COLOR GREEN}Kahuna{COLOR DARK_GRAY}, leader of\n"
	.string "Melemele Island. I thought it would be\l"
	.string "good for you two to chat!$"

IkiTown_NPC_KukuiWithExeggutor_Text_1:
# 469 "data//maps/IkiTown/scripts.pory"
	.string "Thanks again for helping Lillie, cousin.\n"
	.string "She may seem frail, but she's actually\l"
	.string "my assistant, yeah!\p"
	.string "You gettin' ready for the Manalo\n"
	.string "Festival? Head over to the main stage\l"
	.string "and {COLOR GREEN}talk to Hala{COLOR DARK_GRAY} when you're ready to\l"
	.string "party!$"

IkiTown_NPC_AlolanExeggutor_Text_0:
# 480 "data//maps/IkiTown/scripts.pory"
	.string "Exeggutor$"

IkiTown_NPC_AlolanExeggutor_Text_1:
# 482 "data//maps/IkiTown/scripts.pory"
	.string "BRUW-AAAH!$"

IkiTown_NPC_LassByFlowers_Text_0:
# 493 "data//maps/IkiTown/scripts.pory"
	.string "Lass$"

IkiTown_NPC_LassByFlowers_Text_1:
# 494 "data//maps/IkiTown/scripts.pory"
	.string "Iki Town is usually a sleepy spot on top\n"
	.string "of a hill, but it lights up during the\l"
	.string "Manalo Festival!$"

IkiTown_NPC_SchoolBoy_Text_0:
# 504 "data//maps/IkiTown/scripts.pory"
	.string "School Boy$"

IkiTown_NPC_SchoolBoy_Text_1:
# 505 "data//maps/IkiTown/scripts.pory"
	.string "Kehehe, I got today off school! I love\n"
	.string "this time of year!$"

IkiTown_NPC_SchoolGirl_Text_0:
# 515 "data//maps/IkiTown/scripts.pory"
	.string "School Girl$"

IkiTown_NPC_SchoolGirl_Text_1:
# 516 "data//maps/IkiTown/scripts.pory"
	.string "There are Pokémon in the grass! Maybe\n"
	.string "I'll catch one someday...$"

IkiTown_NPC_ManWandering_Text_0:
# 526 "data//maps/IkiTown/scripts.pory"
	.string "Man$"

IkiTown_NPC_ManWandering_Text_1:
# 527 "data//maps/IkiTown/scripts.pory"
	.string "Did you know? The Manalo Festival\n"
	.string "celebrates {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY}, the Guardian of\l"
	.string "Melemele Island.\p"
	.string "I read that some older stories refer to\n"
	.string "{COLOR RED}'The Blinding One'{COLOR DARK_GRAY}, but I don't know much\l"
	.string "about that.$"

IkiTown_NPC_WomanWandering_Text_0:
# 537 "data//maps/IkiTown/scripts.pory"
	.string "Woman$"

IkiTown_NPC_WomanWandering_Text_1:
# 538 "data//maps/IkiTown/scripts.pory"
	.string "Just having Pokémon at your side makes\n"
	.string "you feel all warm inside, doesn't it?\l"
	.string "Eating dinner together, playing\l"
	.string "together, spending time together... It's\l"
	.string "pure happiness!$"

IkiTown_NPC_DancerWithOricorio_Text_0:
# 547 "data//maps/IkiTown/scripts.pory"
	.string "Dancer$"

IkiTown_NPC_DancerWithOricorio_Text_1:
# 548 "data//maps/IkiTown/scripts.pory"
	.string "Okay, one more time... {COLOR BLUE}Oricorio{COLOR DARK_GRAY}, dance\n"
	.string "together!$"

IkiTown_NPC_DancerWithOricorio_Text_2:
# 562 "data//maps/IkiTown/scripts.pory"
	.string "{COLOR BLUE}Oricorio{COLOR DARK_GRAY} are wonderful dancers, but all\n"
	.string "have their own style. I'm hoping to\l"
	.string "dance with them in next year's Manalo\l"
	.string "Festival!$"

IkiTown_NPC_OricorioPomPom_Text_0:
# 574 "data//maps/IkiTown/scripts.pory"
	.string "Oricorio$"

IkiTown_NPC_OricorioPomPom_Text_1:
# 576 "data//maps/IkiTown/scripts.pory"
	.string "Chee-uh!$"

IkiTown_NPC_OricorioPau_Text_0:
# 590 "data//maps/IkiTown/scripts.pory"
	.string "Shee-ou!$"

IkiTown_NPC_YoungsterRockruff_Text_0:
# 603 "data//maps/IkiTown/scripts.pory"
	.string "Youngster$"

IkiTown_NPC_YoungsterRockruff_Text_1:
# 604 "data//maps/IkiTown/scripts.pory"
	.string "Didja know? When a Rockruff really\n"
	.string "likes you, it rubs against you with the\l"
	.string "stones on its neck!\p"
	.string "But... it does kinda hurt...$"

IkiTown_NPC_Lillie_Text_0:
# 616 "data//maps/IkiTown/scripts.pory"
	.string "I can't wait to see you and Hau in the\n"
	.string "Manalo Festival tonight!\p"
	.string "I'm not a Trainer, but I take care of\n"
	.string "little {COLOR BLUE}Nebbie{COLOR DARK_GRAY} here.$"

IkiTown_NPC_Hau_Text_0:
# 641 "data//maps/IkiTown/scripts.pory"
	.string "Alola, {PLAYER}! I can't wait to get my\n"
	.string "own Pokémon!\p"
	.string "In Mahalo Trail, I felt like I couldn't\n"
	.string "help... Once I get a Pokémon of my own,\l"
	.string "I'll be able to help whoever needs it!$"

IkiTown_NPC_Nurse_Text_0:
# 651 "data//maps/IkiTown/scripts.pory"
	.string "Nurse$"

IkiTown_NPC_Nurse_Text_1:
# 652 "data//maps/IkiTown/scripts.pory"
	.string "Alola! Would you like to heal your\n"
	.string "Pokémon?$"

IkiTown_NPC_Nurse_Text_2:
# 656 "data//maps/IkiTown/scripts.pory"
	.string "Sure! Let me see your Pokémon...$"

IkiTown_NPC_Nurse_Text_3:
# 665 "data//maps/IkiTown/scripts.pory"
	.string "Your Pokémon are feeling better. Have a\n"
	.string "good day!$"

IkiTown_NPC_Nurse_Text_4:
# 671 "data//maps/IkiTown/scripts.pory"
	.string "Come back soon!$"

IkiTown_Sign_LocationSign_Text_0:
# 683 "data//maps/IkiTown/scripts.pory"
	.string "Iki Town\n"
	.string "Where We Give Thanks to Pokémon.$"

IkiTown_Sign_MahaloTrailUp_Text_0:
# 692 "data//maps/IkiTown/scripts.pory"
	.string "{UP_ARROW} Mahalo Trail$"

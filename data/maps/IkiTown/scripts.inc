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
	msgbox IkiTown_Script_HalaIntro_Text_1
# 39 "data//maps/IkiTown/scripts.pory"
	closemessage
# 40 "data//maps/IkiTown/scripts.pory"
	applymovement 5, IkiTown_Script_HalaIntro_Movement_6
# 41 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 42 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_ALOLAN_EXEGGUTOR_IKI_TOWN
# 43 "data//maps/IkiTown/scripts.pory"
	removeobject 4
# 44 "data//maps/IkiTown/scripts.pory"
	removeobject 5
# 47 "data//maps/IkiTown/scripts.pory"
	delay 20
# 48 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_HALA_IKI, IkiTown_Script_HalaIntro_Movement_7
# 49 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 50 "data//maps/IkiTown/scripts.pory"
	emote LOCALID_HALA_IKI, EMOTE_QUESTION
# 51 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_2
# 52 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_HalaIntro_Text_3
# 53 "data//maps/IkiTown/scripts.pory"
	closemessage
# 54 "data//maps/IkiTown/scripts.pory"
	delay 10
# 55 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_HALA_IKI, IkiTown_Script_HalaIntro_Movement_8
# 56 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 57 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_4
# 58 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_HalaIntro_Text_5
# 59 "data//maps/IkiTown/scripts.pory"
	closemessage
# 61 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 62 "data//maps/IkiTown/scripts.pory"
	delay 30
# 63 "data//maps/IkiTown/scripts.pory"
	setvar VAR_INTRO_STATE, 5
# 64 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_HALA_INTRO_IKI_TOWN
# 65 "data//maps/IkiTown/scripts.pory"
	removeobject LOCALID_HALA_IKI
# 66 "data//maps/IkiTown/scripts.pory"
	delay 30
# 67 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 68 "data//maps/IkiTown/scripts.pory"
	delay 15
# 70 "data//maps/IkiTown/scripts.pory"
	startsubquest QUEST_01, SUB_QUEST_3
# 72 "data//maps/IkiTown/scripts.pory"
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
# 78 "data//maps/IkiTown/scripts.pory"
	lockall
# 79 "data//maps/IkiTown/scripts.pory"
	addobject 16
# 80 "data//maps/IkiTown/scripts.pory"
	addobject 17
# 81 "data//maps/IkiTown/scripts.pory"
	addobject 18
# 82 "data//maps/IkiTown/scripts.pory"
	addobject 19
# 83 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, IkiTown_Script_SavedLillie_Movement_0
# 84 "data//maps/IkiTown/scripts.pory"
	applymovement 16, IkiTown_Script_SavedLillie_Movement_0
# 85 "data//maps/IkiTown/scripts.pory"
	applymovement 17, IkiTown_Script_SavedLillie_Movement_0
# 86 "data//maps/IkiTown/scripts.pory"
	applymovement 18, IkiTown_Script_SavedLillie_Movement_0
# 87 "data//maps/IkiTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 88 "data//maps/IkiTown/scripts.pory"
	delay 25
# 89 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 91 "data//maps/IkiTown/scripts.pory"
	applymovement 8, Common_Movement_FaceUp
# 92 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 93 "data//maps/IkiTown/scripts.pory"
	emote 8, EMOTE_EXCLAM
# 94 "data//maps/IkiTown/scripts.pory"
	delay 10
# 95 "data//maps/IkiTown/scripts.pory"
	applymovement 8, IkiTown_Script_SavedLillie_Movement_1
# 96 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 97 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 98 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_0
# 99 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_0
# 100 "data//maps/IkiTown/scripts.pory"
	closemessage
# 101 "data//maps/IkiTown/scripts.pory"
	applymovement 16, IkiTown_Script_SavedLillie_Movement_2
# 102 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 103 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_1
# 104 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_2
# 105 "data//maps/IkiTown/scripts.pory"
	closemessage
# 106 "data//maps/IkiTown/scripts.pory"
	delay 30
# 107 "data//maps/IkiTown/scripts.pory"
	emote 16, EMOTE_EXCLAM
# 108 "data//maps/IkiTown/scripts.pory"
	applymovement 16, IkiTown_Script_SavedLillie_Movement_3
# 109 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 110 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_1
# 111 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_3
# 112 "data//maps/IkiTown/scripts.pory"
	closemessage
# 114 "data//maps/IkiTown/scripts.pory"
	delay 10
# 115 "data//maps/IkiTown/scripts.pory"
	applymovement 17, IkiTown_Script_SavedLillie_Movement_4
# 116 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 117 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_4
# 118 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_5
# 119 "data//maps/IkiTown/scripts.pory"
	closemessage
# 121 "data//maps/IkiTown/scripts.pory"
	delay 10
# 122 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 123 "data//maps/IkiTown/scripts.pory"
	applymovement 16, Common_Movement_FaceDown
# 124 "data//maps/IkiTown/scripts.pory"
	applymovement 19, Common_Movement_WalkUp2
# 125 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 126 "data//maps/IkiTown/scripts.pory"
	emote 19, EMOTE_QUESTION
# 127 "data//maps/IkiTown/scripts.pory"
	delay 10
# 128 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 129 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_7
# 130 "data//maps/IkiTown/scripts.pory"
	closemessage
# 131 "data//maps/IkiTown/scripts.pory"
	applymovement 19, IkiTown_Script_SavedLillie_Movement_5
# 132 "data//maps/IkiTown/scripts.pory"
	applymovement 17, IkiTown_Script_SavedLillie_Movement_6
# 133 "data//maps/IkiTown/scripts.pory"
	waitmovement 19
# 134 "data//maps/IkiTown/scripts.pory"
	delay 10
# 135 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_8
# 136 "data//maps/IkiTown/scripts.pory"
	closemessage
# 137 "data//maps/IkiTown/scripts.pory"
	delay 10
# 139 "data//maps/IkiTown/scripts.pory"
	applymovement 19, Common_Movement_FaceUp
# 140 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 141 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 142 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_9
# 143 "data//maps/IkiTown/scripts.pory"
	closemessage
# 144 "data//maps/IkiTown/scripts.pory"
	applymovement 19, Common_Movement_FaceLeft
# 145 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 146 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 147 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_10
# 148 "data//maps/IkiTown/scripts.pory"
	closemessage
# 150 "data//maps/IkiTown/scripts.pory"
	delay 10
# 151 "data//maps/IkiTown/scripts.pory"
	applymovement 19, IkiTown_Script_SavedLillie_Movement_7
# 152 "data//maps/IkiTown/scripts.pory"
	applymovement 17, IkiTown_Script_SavedLillie_Movement_8
# 153 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 154 "data//maps/IkiTown/scripts.pory"
	emote 8, EMOTE_EXCLAM
# 155 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_0
# 156 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_11
# 157 "data//maps/IkiTown/scripts.pory"
	closemessage
# 158 "data//maps/IkiTown/scripts.pory"
	applymovement 8, IkiTown_Script_SavedLillie_Movement_9
# 159 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 160 "data//maps/IkiTown/scripts.pory"
	delay 10
# 161 "data//maps/IkiTown/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 162 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 163 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 164 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_1
# 165 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_12
# 166 "data//maps/IkiTown/scripts.pory"
	closemessage
# 167 "data//maps/IkiTown/scripts.pory"
	applymovement 18, IkiTown_Script_SavedLillie_Movement_10
# 168 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 169 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_13
# 170 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_EXEGGUTOR_ALOLA, CRY_MODE_NORMAL
# 171 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_14
# 172 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 173 "data//maps/IkiTown/scripts.pory"
	closemessage
# 175 "data//maps/IkiTown/scripts.pory"
	delay 10
# 176 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 177 "data//maps/IkiTown/scripts.pory"
	delay 30
# 178 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_TAPU_KOKO_MAHALO_TRAIL
# 179 "data//maps/IkiTown/scripts.pory"
	removeobject 16
# 180 "data//maps/IkiTown/scripts.pory"
	removeobject 17
# 181 "data//maps/IkiTown/scripts.pory"
	removeobject 18
# 182 "data//maps/IkiTown/scripts.pory"
	removeobject 19
# 183 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_LILLIE_IKI_TOWN
# 184 "data//maps/IkiTown/scripts.pory"
	addobject 27
# 185 "data//maps/IkiTown/scripts.pory"
	addobject 28
# 186 "data//maps/IkiTown/scripts.pory"
	addobject 29
# 187 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceDown
# 188 "data//maps/IkiTown/scripts.pory"
	delay 30
# 189 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 190 "data//maps/IkiTown/scripts.pory"
	delay 20
# 192 "data//maps/IkiTown/scripts.pory"
	setvar VAR_INTRO_STATE, 6
# 193 "data//maps/IkiTown/scripts.pory"
	startsubquest QUEST_01, SUB_QUEST_4
# 195 "data//maps/IkiTown/scripts.pory"
	releaseall
	end


IkiTown_Script_ManaloFestival::
# 202 "data//maps/IkiTown/scripts.pory"
	lockall
# 203 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 204 "data//maps/IkiTown/scripts.pory"
	delay 30
# 205 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_MOM_IKI_TOWN
# 206 "data//maps/IkiTown/scripts.pory"
	addobject 30
# 207 "data//maps/IkiTown/scripts.pory"
	addobject 31
# 208 "data//maps/IkiTown/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 209 "data//maps/IkiTown/scripts.pory"
	switch VAR_TEMP_1
# 211 "data//maps/IkiTown/scripts.pory"
	case 18, IkiTown_Script_ManaloFestival_3
# 214 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, IkiTown_Script_ManaloFestival_Movement_1
IkiTown_Script_ManaloFestival_1:
# 217 "data//maps/IkiTown/scripts.pory"
	applymovement 27, Common_Movement_FaceDown
# 218 "data//maps/IkiTown/scripts.pory"
	applymovement 28, Common_Movement_FaceDown
# 219 "data//maps/IkiTown/scripts.pory"
	applymovement 29, IkiTown_Script_ManaloFestival_Movement_2
# 220 "data//maps/IkiTown/scripts.pory"
	applymovement 11, Common_Movement_WalkUp2
# 221 "data//maps/IkiTown/scripts.pory"
	applymovement 12, Common_Movement_WalkUp
# 222 "data//maps/IkiTown/scripts.pory"
	applymovement 13, Common_Movement_WalkUp
# 223 "data//maps/IkiTown/scripts.pory"
	applymovement 14, Common_Movement_WalkUp
# 224 "data//maps/IkiTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 225 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 226 "data//maps/IkiTown/scripts.pory"
	hidefollower
# 227 "data//maps/IkiTown/scripts.pory"
	fwdtime 22, 0
# 228 "data//maps/IkiTown/scripts.pory"
	addminutes 1
# 229 "data//maps/IkiTown/scripts.pory"
	delay 30
# 230 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 231 "data//maps/IkiTown/scripts.pory"
	delay 20
# 233 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 234 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_0
# 235 "data//maps/IkiTown/scripts.pory"
	closemessage
# 236 "data//maps/IkiTown/scripts.pory"
	applymovement 14, IkiTown_Script_ManaloFestival_Movement_3
# 237 "data//maps/IkiTown/scripts.pory"
	applymovement 30, IkiTown_Script_SavedLillie_Movement_4
# 238 "data//maps/IkiTown/scripts.pory"
	emote 11, EMOTE_HEART
# 239 "data//maps/IkiTown/scripts.pory"
	delay 30
# 240 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 241 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_1
# 242 "data//maps/IkiTown/scripts.pory"
	closemessage
# 243 "data//maps/IkiTown/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 244 "data//maps/IkiTown/scripts.pory"
	applymovement 30, IkiTown_Script_SavedLillie_Movement_4
# 245 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 246 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_ManaloFestival_Text_2
# 247 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_3
# 248 "data//maps/IkiTown/scripts.pory"
	closemessage
# 249 "data//maps/IkiTown/scripts.pory"
	delay 10
# 250 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 251 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_4
# 252 "data//maps/IkiTown/scripts.pory"
	closemessage
# 253 "data//maps/IkiTown/scripts.pory"
	applymovement 7, Common_Movement_FaceDown
# 254 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 255 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 256 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_5
# 257 "data//maps/IkiTown/scripts.pory"
	closemessage
# 259 "data//maps/IkiTown/scripts.pory"
	delay 15
# 260 "data//maps/IkiTown/scripts.pory"
	applymovement 29, IkiTown_Script_SavedLillie_Movement_3
# 261 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 262 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_4
# 263 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_6
# 264 "data//maps/IkiTown/scripts.pory"
	closemessage
# 267 "data//maps/IkiTown/scripts.pory"
	switch VAR_STARTER_MON
# 270 "data//maps/IkiTown/scripts.pory"
	case SPECIES_ROWLET, IkiTown_Script_ManaloFestival_7
# 272 "data//maps/IkiTown/scripts.pory"
	case SPECIES_LITTEN, IkiTown_Script_ManaloFestival_8
# 274 "data//maps/IkiTown/scripts.pory"
	case SPECIES_POPPLIO, IkiTown_Script_ManaloFestival_9
IkiTown_Script_ManaloFestival_7:
# 271 "data//maps/IkiTown/scripts.pory"
	trainerbattle_no_intro TRAINER_HAU_FESTIVAL_GRASS, IkiTown_Script_ManaloFestival_Text_7
IkiTown_Script_ManaloFestival_5:
# 278 "data//maps/IkiTown/scripts.pory"
	delay 20
# 279 "data//maps/IkiTown/scripts.pory"
	special HealPlayerParty
# 280 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 281 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_8
# 282 "data//maps/IkiTown/scripts.pory"
	closemessage
# 283 "data//maps/IkiTown/scripts.pory"
	applymovement 7, IkiTown_Script_ManaloFestival_Movement_4
# 284 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 286 "data//maps/IkiTown/scripts.pory"
	giveitem ITEM_Z_POWER_RING
# 287 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_RECEIVED_Z_RING
# 289 "data//maps/IkiTown/scripts.pory"
	closemessage
# 290 "data//maps/IkiTown/scripts.pory"
	applymovement 7, IkiTown_Script_ManaloFestival_Movement_5
# 291 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 292 "data//maps/IkiTown/scripts.pory"
	delay 20
# 293 "data//maps/IkiTown/scripts.pory"
	applymovement 29, IkiTown_Script_SavedLillie_Movement_3
# 294 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 295 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_4
# 296 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_9
# 297 "data//maps/IkiTown/scripts.pory"
	closemessage
# 298 "data//maps/IkiTown/scripts.pory"
	delay 10
# 299 "data//maps/IkiTown/scripts.pory"
	applymovement 7, IkiTown_Script_ManaloFestival_Movement_6
# 300 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 301 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 302 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_10
# 303 "data//maps/IkiTown/scripts.pory"
	closemessage
# 304 "data//maps/IkiTown/scripts.pory"
	delay 10
# 305 "data//maps/IkiTown/scripts.pory"
	applymovement 7, IkiTown_Script_SavedLillie_Movement_2
# 306 "data//maps/IkiTown/scripts.pory"
	waitmovement 7
# 307 "data//maps/IkiTown/scripts.pory"
	delay 10
# 308 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 309 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_11
# 310 "data//maps/IkiTown/scripts.pory"
	closemessage
# 311 "data//maps/IkiTown/scripts.pory"
	applymovement 14, IkiTown_Script_ManaloFestival_Movement_3
# 312 "data//maps/IkiTown/scripts.pory"
	applymovement 30, IkiTown_Script_SavedLillie_Movement_4
# 313 "data//maps/IkiTown/scripts.pory"
	emote 27, EMOTE_HEART
# 315 "data//maps/IkiTown/scripts.pory"
	delay 30
# 316 "data//maps/IkiTown/scripts.pory"
	applymovement 29, IkiTown_Script_ManaloFestival_Movement_7
# 317 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 318 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_4
# 319 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_12
# 320 "data//maps/IkiTown/scripts.pory"
	closemessage
# 321 "data//maps/IkiTown/scripts.pory"
	delay 10
# 322 "data//maps/IkiTown/scripts.pory"
	applymovement 29, IkiTown_Script_ManaloFestival_Movement_8
# 323 "data//maps/IkiTown/scripts.pory"
	applymovement 7, IkiTown_Script_ManaloFestival_Movement_9
# 324 "data//maps/IkiTown/scripts.pory"
	delay 30
# 325 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 326 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 327 "data//maps/IkiTown/scripts.pory"
	applymovement 27, IkiTown_Script_ManaloFestival_Movement_10
# 328 "data//maps/IkiTown/scripts.pory"
	applymovement 28, IkiTown_Script_ManaloFestival_Movement_11
# 329 "data//maps/IkiTown/scripts.pory"
	delay 20
# 330 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 331 "data//maps/IkiTown/scripts.pory"
	waitmovement 27
# 332 "data//maps/IkiTown/scripts.pory"
	delay 10
# 333 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_1
# 334 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_ManaloFestival_Text_13
# 335 "data//maps/IkiTown/scripts.pory"
	closemessage
# 336 "data//maps/IkiTown/scripts.pory"
	delay 20
# 338 "data//maps/IkiTown/scripts.pory"
	setvar VAR_INTRO_STATE, 7
# 339 "data//maps/IkiTown/scripts.pory"
	startsubquest QUEST_01, SUB_QUEST_5
# 341 "data//maps/IkiTown/scripts.pory"
	delay 20
# 342 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 343 "data//maps/IkiTown/scripts.pory"
	delay 30
# 344 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_LILLIE_IKI_TOWN
# 345 "data//maps/IkiTown/scripts.pory"
	removeobject 27
# 346 "data//maps/IkiTown/scripts.pory"
	removeobject 28
# 347 "data//maps/IkiTown/scripts.pory"
	removeobject 29
# 348 "data//maps/IkiTown/scripts.pory"
	removeobject 7
# 349 "data//maps/IkiTown/scripts.pory"
	setflag FLAG_HIDE_MOM_IKI_TOWN
# 350 "data//maps/IkiTown/scripts.pory"
	removeobject 30
# 351 "data//maps/IkiTown/scripts.pory"
	removeobject 31
# 352 "data//maps/IkiTown/scripts.pory"
	applymovement 11, IkiTown_Script_ManaloFestival_Movement_12
# 353 "data//maps/IkiTown/scripts.pory"
	applymovement 12, Common_Movement_WalkDown
# 354 "data//maps/IkiTown/scripts.pory"
	applymovement 13, Common_Movement_WalkDown
# 355 "data//maps/IkiTown/scripts.pory"
	applymovement 14, Common_Movement_WalkDown
# 356 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_HAU_HALAS_HOME
# 357 "data//maps/IkiTown/scripts.pory"
	switch VAR_STARTER_MON
# 360 "data//maps/IkiTown/scripts.pory"
	case SPECIES_ROWLET, IkiTown_Script_ManaloFestival_12
# 362 "data//maps/IkiTown/scripts.pory"
	case SPECIES_LITTEN, IkiTown_Script_ManaloFestival_13
# 364 "data//maps/IkiTown/scripts.pory"
	case SPECIES_POPPLIO, IkiTown_Script_ManaloFestival_14
IkiTown_Script_ManaloFestival_12:
# 361 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_HAUS_LITTEN_HALAS_HOME
IkiTown_Script_ManaloFestival_10:
# 367 "data//maps/IkiTown/scripts.pory"
	delay 30
# 368 "data//maps/IkiTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 369 "data//maps/IkiTown/scripts.pory"
	delay 20
# 371 "data//maps/IkiTown/scripts.pory"
	releaseall
	end

IkiTown_Script_ManaloFestival_3:
# 212 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, IkiTown_Script_ManaloFestival_Movement_0
	goto IkiTown_Script_ManaloFestival_1

IkiTown_Script_ManaloFestival_8:
# 273 "data//maps/IkiTown/scripts.pory"
	trainerbattle_no_intro TRAINER_HAU_FESTIVAL_FIRE, IkiTown_Script_ManaloFestival_Text_7
	goto IkiTown_Script_ManaloFestival_5

IkiTown_Script_ManaloFestival_9:
# 275 "data//maps/IkiTown/scripts.pory"
	trainerbattle_no_intro TRAINER_HAU_FESTIVAL_WATER, IkiTown_Script_ManaloFestival_Text_7
	goto IkiTown_Script_ManaloFestival_5

IkiTown_Script_ManaloFestival_13:
# 363 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_HAUS_POPPLIO_HALAS_HOME
	goto IkiTown_Script_ManaloFestival_10

IkiTown_Script_ManaloFestival_14:
# 365 "data//maps/IkiTown/scripts.pory"
	clearflag FLAG_HIDE_HAUS_ROWLET_HALAS_HOME
	goto IkiTown_Script_ManaloFestival_10


IkiTown_Script_BlockHalaHouse::
# 377 "data//maps/IkiTown/scripts.pory"
	lockall
# 378 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_BlockHalaHouse_Text_0
# 379 "data//maps/IkiTown/scripts.pory"
	closemessage
# 380 "data//maps/IkiTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkDown
# 381 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 382 "data//maps/IkiTown/scripts.pory"
	releaseall
	end


IkiTown_NPC_Hala::
# 390 "data//maps/IkiTown/scripts.pory"
	lock
# 391 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 392 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 393 "data//maps/IkiTown/scripts.pory"
	goto_if_unset FLAG_HIDE_HAU_CORVISQUIRE_MAHALO_TRAIL, IkiTown_NPC_Hala_2
# 399 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hala_Text_1, MSGBOX_YESNO
# 400 "data//maps/IkiTown/scripts.pory"
	closemessage
# 401 "data//maps/IkiTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IkiTown_NPC_Hala_5
# 411 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 412 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hala_Text_3
IkiTown_NPC_Hala_1:
# 415 "data//maps/IkiTown/scripts.pory"
	closemessage
# 416 "data//maps/IkiTown/scripts.pory"
	release
	end

IkiTown_NPC_Hala_2:
# 395 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hala_Text_0
	goto IkiTown_NPC_Hala_1

IkiTown_NPC_Hala_5:
# 403 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_6
# 404 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hala_Text_2
# 405 "data//maps/IkiTown/scripts.pory"
	closemessage
# 406 "data//maps/IkiTown/scripts.pory"
	delay 20
# 407 "data//maps/IkiTown/scripts.pory"
	goto IkiTown_Script_ManaloFestival
	goto IkiTown_NPC_Hala_1


IkiTown_NPC_KukuiWithExeggutor::
# 422 "data//maps/IkiTown/scripts.pory"
	lock
# 423 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 424 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_HalaIntro_Text_0
# 425 "data//maps/IkiTown/scripts.pory"
	goto_if_unset FLAG_HIDE_HAU_CORVISQUIRE_MAHALO_TRAIL, IkiTown_NPC_KukuiWithExeggutor_2
# 431 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_KukuiWithExeggutor_Text_1
IkiTown_NPC_KukuiWithExeggutor_1:
# 433 "data//maps/IkiTown/scripts.pory"
	closemessage
# 434 "data//maps/IkiTown/scripts.pory"
	release
	end

IkiTown_NPC_KukuiWithExeggutor_2:
# 427 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_KukuiWithExeggutor_Text_0
	goto IkiTown_NPC_KukuiWithExeggutor_1


IkiTown_NPC_AlolanExeggutor::
# 440 "data//maps/IkiTown/scripts.pory"
	lock
# 441 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 442 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_AlolanExeggutor_Text_0
# 443 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_EXEGGUTOR_ALOLA, CRY_MODE_NORMAL
# 444 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_AlolanExeggutor_Text_1
# 445 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 446 "data//maps/IkiTown/scripts.pory"
	closemessage
# 447 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_LassByFlowers::
# 453 "data//maps/IkiTown/scripts.pory"
	lock
# 454 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 455 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_LassByFlowers_Text_0
# 456 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_LassByFlowers_Text_1
# 457 "data//maps/IkiTown/scripts.pory"
	closemessage
# 458 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_SchoolBoy::
# 464 "data//maps/IkiTown/scripts.pory"
	lock
# 465 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 466 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_SchoolBoy_Text_0
# 467 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_SchoolBoy_Text_1
# 468 "data//maps/IkiTown/scripts.pory"
	closemessage
# 469 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_SchoolGirl::
# 475 "data//maps/IkiTown/scripts.pory"
	lock
# 476 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 477 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_SchoolGirl_Text_0
# 478 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_SchoolGirl_Text_1
# 479 "data//maps/IkiTown/scripts.pory"
	closemessage
# 480 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_ManWandering::
# 486 "data//maps/IkiTown/scripts.pory"
	lock
# 487 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 488 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_ManWandering_Text_0
# 489 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_ManWandering_Text_1
# 490 "data//maps/IkiTown/scripts.pory"
	closemessage
# 491 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_WomanWandering::
# 497 "data//maps/IkiTown/scripts.pory"
	lock
# 498 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 499 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_WomanWandering_Text_0
# 500 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_WomanWandering_Text_1
# 501 "data//maps/IkiTown/scripts.pory"
	closemessage
# 502 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_DancerWithOricorio::
# 508 "data//maps/IkiTown/scripts.pory"
	lock
# 509 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_DancerWithOricorio_Text_0
# 510 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_DancerWithOricorio_Text_1
# 511 "data//maps/IkiTown/scripts.pory"
	closemessage
# 514 "data//maps/IkiTown/scripts.pory"
	delay 10
# 515 "data//maps/IkiTown/scripts.pory"
	applymovement 12, IkiTown_NPC_DancerWithOricorio_Movement_0
# 516 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 517 "data//maps/IkiTown/scripts.pory"
	applymovement 13, IkiTown_NPC_DancerWithOricorio_Movement_1
# 518 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 520 "data//maps/IkiTown/scripts.pory"
	emote 11, EMOTE_X
# 521 "data//maps/IkiTown/scripts.pory"
	delay 10
# 522 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 523 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_DancerWithOricorio_Text_0
# 524 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_DancerWithOricorio_Text_2
# 525 "data//maps/IkiTown/scripts.pory"
	closemessage
# 526 "data//maps/IkiTown/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 527 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 528 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_OricorioPomPom::
# 534 "data//maps/IkiTown/scripts.pory"
	lock
# 535 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 536 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_OricorioPomPom_Text_0
# 537 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_ORICORIO_POM_POM, CRY_MODE_NORMAL
# 538 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_OricorioPomPom_Text_1
# 539 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 540 "data//maps/IkiTown/scripts.pory"
	closemessage
# 541 "data//maps/IkiTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 542 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 543 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_OricorioPau::
# 548 "data//maps/IkiTown/scripts.pory"
	lock
# 549 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 550 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_OricorioPomPom_Text_0
# 551 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_ORICORIO_POM_POM, CRY_MODE_NORMAL
# 552 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_OricorioPau_Text_0
# 553 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 554 "data//maps/IkiTown/scripts.pory"
	closemessage
# 555 "data//maps/IkiTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 556 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 557 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_YoungsterRockruff::
# 563 "data//maps/IkiTown/scripts.pory"
	lock
# 564 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 565 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_YoungsterRockruff_Text_0
# 566 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_YoungsterRockruff_Text_1
# 567 "data//maps/IkiTown/scripts.pory"
	closemessage
# 568 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_Lillie::
# 574 "data//maps/IkiTown/scripts.pory"
	lock
# 575 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 576 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_1
# 577 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Lillie_Text_0
# 578 "data//maps/IkiTown/scripts.pory"
	closemessage
# 579 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_Cosmog::
# 585 "data//maps/IkiTown/scripts.pory"
	lock
# 586 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 587 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_13
# 588 "data//maps/IkiTown/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_NORMAL
# 589 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Script_SavedLillie_Text_14
# 590 "data//maps/IkiTown/scripts.pory"
	waitmoncry
# 591 "data//maps/IkiTown/scripts.pory"
	closemessage
# 592 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_Hau::
# 598 "data//maps/IkiTown/scripts.pory"
	lock
# 599 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 600 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_Script_SavedLillie_Text_4
# 601 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Hau_Text_0
# 602 "data//maps/IkiTown/scripts.pory"
	closemessage
# 603 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_NPC_Nurse::
# 609 "data//maps/IkiTown/scripts.pory"
	lock
# 610 "data//maps/IkiTown/scripts.pory"
	faceplayer
# 611 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_Nurse_Text_0
# 612 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Nurse_Text_1, MSGBOX_YESNO
# 613 "data//maps/IkiTown/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq IkiTown_NPC_Nurse_2
# 630 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_Nurse_Text_0
# 631 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Nurse_Text_4
# 632 "data//maps/IkiTown/scripts.pory"
	closemessage
IkiTown_NPC_Nurse_1:
# 634 "data//maps/IkiTown/scripts.pory"
	release
	end

IkiTown_NPC_Nurse_2:
# 615 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_Nurse_Text_0
# 616 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Nurse_Text_2
# 617 "data//maps/IkiTown/scripts.pory"
	closemessage
# 618 "data//maps/IkiTown/scripts.pory"
	applymovement 26, IkiTown_NPC_Nurse_Movement_0
# 619 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 620 "data//maps/IkiTown/scripts.pory"
	special HealPlayerParty
# 621 "data//maps/IkiTown/scripts.pory"
	delay 10
# 622 "data//maps/IkiTown/scripts.pory"
	applymovement 26, Movement_PkmnCenterNurse_Bow
# 623 "data//maps/IkiTown/scripts.pory"
	waitmovement 0
# 624 "data//maps/IkiTown/scripts.pory"
	setspeaker IkiTown_NPC_Nurse_Text_0
# 625 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_NPC_Nurse_Text_3
# 626 "data//maps/IkiTown/scripts.pory"
	closemessage
	goto IkiTown_NPC_Nurse_1


IkiTown_Sign_LocationSign::
# 642 "data//maps/IkiTown/scripts.pory"
	lock
# 643 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Sign_LocationSign_Text_0
# 644 "data//maps/IkiTown/scripts.pory"
	closemessage
# 645 "data//maps/IkiTown/scripts.pory"
	release
	end


IkiTown_Sign_MahaloTrailUp::
# 651 "data//maps/IkiTown/scripts.pory"
	lock
# 652 "data//maps/IkiTown/scripts.pory"
	msgbox IkiTown_Sign_MahaloTrailUp_Text_0
# 653 "data//maps/IkiTown/scripts.pory"
	closemessage
# 654 "data//maps/IkiTown/scripts.pory"
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

# 40 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_6:
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	walk_fast_up
# 40 "data//maps/IkiTown/scripts.pory"
	step_end

# 48 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_7:
# 48 "data//maps/IkiTown/scripts.pory"
	walk_down
# 48 "data//maps/IkiTown/scripts.pory"
	walk_down
# 48 "data//maps/IkiTown/scripts.pory"
	walk_down
# 48 "data//maps/IkiTown/scripts.pory"
	face_up
# 48 "data//maps/IkiTown/scripts.pory"
	step_end

# 55 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_HalaIntro_Movement_8:
# 55 "data//maps/IkiTown/scripts.pory"
	walk_down
# 55 "data//maps/IkiTown/scripts.pory"
	walk_down
# 55 "data//maps/IkiTown/scripts.pory"
	face_down
# 55 "data//maps/IkiTown/scripts.pory"
	step_end

# 83 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_0:
# 83 "data//maps/IkiTown/scripts.pory"
	walk_down
# 83 "data//maps/IkiTown/scripts.pory"
	walk_down
# 83 "data//maps/IkiTown/scripts.pory"
	step_end

# 95 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_1:
# 95 "data//maps/IkiTown/scripts.pory"
	walk_left
# 95 "data//maps/IkiTown/scripts.pory"
	walk_up
# 95 "data//maps/IkiTown/scripts.pory"
	walk_up
# 95 "data//maps/IkiTown/scripts.pory"
	face_up
# 95 "data//maps/IkiTown/scripts.pory"
	step_end

# 101 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_2:
# 101 "data//maps/IkiTown/scripts.pory"
	walk_in_place_down
# 101 "data//maps/IkiTown/scripts.pory"
	walk_in_place_down
# 101 "data//maps/IkiTown/scripts.pory"
	step_end

# 108 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_3:
# 108 "data//maps/IkiTown/scripts.pory"
	walk_in_place_right
# 108 "data//maps/IkiTown/scripts.pory"
	walk_in_place_right
	step_end

# 115 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_4:
# 115 "data//maps/IkiTown/scripts.pory"
	jump_in_place_down
# 115 "data//maps/IkiTown/scripts.pory"
	jump_in_place_down
# 115 "data//maps/IkiTown/scripts.pory"
	step_end

# 131 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_5:
# 131 "data//maps/IkiTown/scripts.pory"
	walk_right
# 131 "data//maps/IkiTown/scripts.pory"
	walk_up
# 131 "data//maps/IkiTown/scripts.pory"
	walk_up
# 131 "data//maps/IkiTown/scripts.pory"
	walk_up
# 131 "data//maps/IkiTown/scripts.pory"
	face_left
# 131 "data//maps/IkiTown/scripts.pory"
	step_end

# 132 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_6:
# 132 "data//maps/IkiTown/scripts.pory"
	walk_fast_left
# 132 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 132 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 132 "data//maps/IkiTown/scripts.pory"
	face_right
# 132 "data//maps/IkiTown/scripts.pory"
	step_end

# 151 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_7:
# 151 "data//maps/IkiTown/scripts.pory"
	walk_down
# 151 "data//maps/IkiTown/scripts.pory"
	walk_down
# 151 "data//maps/IkiTown/scripts.pory"
	walk_down
# 151 "data//maps/IkiTown/scripts.pory"
	walk_down
# 151 "data//maps/IkiTown/scripts.pory"
	walk_left
# 151 "data//maps/IkiTown/scripts.pory"
	walk_left
# 151 "data//maps/IkiTown/scripts.pory"
	walk_left
# 151 "data//maps/IkiTown/scripts.pory"
	walk_left
# 151 "data//maps/IkiTown/scripts.pory"
	walk_left
# 151 "data//maps/IkiTown/scripts.pory"
	walk_left
# 151 "data//maps/IkiTown/scripts.pory"
	walk_left
# 151 "data//maps/IkiTown/scripts.pory"
	walk_left
# 151 "data//maps/IkiTown/scripts.pory"
	step_end

# 152 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_8:
# 152 "data//maps/IkiTown/scripts.pory"
	walk_right
# 152 "data//maps/IkiTown/scripts.pory"
	walk_down
# 152 "data//maps/IkiTown/scripts.pory"
	walk_down
# 152 "data//maps/IkiTown/scripts.pory"
	walk_down
# 152 "data//maps/IkiTown/scripts.pory"
	walk_down
# 152 "data//maps/IkiTown/scripts.pory"
	walk_left
# 152 "data//maps/IkiTown/scripts.pory"
	walk_left
# 152 "data//maps/IkiTown/scripts.pory"
	walk_left
# 152 "data//maps/IkiTown/scripts.pory"
	walk_left
# 152 "data//maps/IkiTown/scripts.pory"
	walk_left
# 152 "data//maps/IkiTown/scripts.pory"
	walk_left
# 152 "data//maps/IkiTown/scripts.pory"
	walk_left
# 152 "data//maps/IkiTown/scripts.pory"
	walk_left
# 152 "data//maps/IkiTown/scripts.pory"
	step_end

# 158 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_9:
# 158 "data//maps/IkiTown/scripts.pory"
	walk_down
# 158 "data//maps/IkiTown/scripts.pory"
	walk_down
# 158 "data//maps/IkiTown/scripts.pory"
	walk_right
# 158 "data//maps/IkiTown/scripts.pory"
	step_end

# 167 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_SavedLillie_Movement_10:
# 167 "data//maps/IkiTown/scripts.pory"
	jump_in_place_down
# 167 "data//maps/IkiTown/scripts.pory"
	jump_in_place_down
	step_end

# 212 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_0:
# 212 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 212 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 212 "data//maps/IkiTown/scripts.pory"
	face_left
# 212 "data//maps/IkiTown/scripts.pory"
	step_end

# 214 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_1:
# 214 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 214 "data//maps/IkiTown/scripts.pory"
	walk_fast_right
# 214 "data//maps/IkiTown/scripts.pory"
	face_left
# 214 "data//maps/IkiTown/scripts.pory"
	step_end

# 219 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_2:
# 219 "data//maps/IkiTown/scripts.pory"
	walk_fast_down
# 219 "data//maps/IkiTown/scripts.pory"
	walk_fast_left
# 219 "data//maps/IkiTown/scripts.pory"
	face_right
# 219 "data//maps/IkiTown/scripts.pory"
	step_end

# 236 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_3:
# 236 "data//maps/IkiTown/scripts.pory"
	jump_in_place_up
# 236 "data//maps/IkiTown/scripts.pory"
	jump_in_place_up
# 236 "data//maps/IkiTown/scripts.pory"
	step_end

# 283 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_4:
# 283 "data//maps/IkiTown/scripts.pory"
	walk_down
# 283 "data//maps/IkiTown/scripts.pory"
	walk_right
# 283 "data//maps/IkiTown/scripts.pory"
	step_end

# 290 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_5:
# 290 "data//maps/IkiTown/scripts.pory"
	walk_left
# 290 "data//maps/IkiTown/scripts.pory"
	walk_left
# 290 "data//maps/IkiTown/scripts.pory"
	step_end

# 299 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_6:
# 299 "data//maps/IkiTown/scripts.pory"
	walk_right
# 299 "data//maps/IkiTown/scripts.pory"
	walk_up
# 299 "data//maps/IkiTown/scripts.pory"
	face_down
# 299 "data//maps/IkiTown/scripts.pory"
	step_end

# 316 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_7:
# 316 "data//maps/IkiTown/scripts.pory"
	walk_right
# 316 "data//maps/IkiTown/scripts.pory"
	walk_right
# 316 "data//maps/IkiTown/scripts.pory"
	walk_right
# 316 "data//maps/IkiTown/scripts.pory"
	step_end

# 322 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_8:
# 322 "data//maps/IkiTown/scripts.pory"
	walk_left
# 322 "data//maps/IkiTown/scripts.pory"
	walk_left
# 322 "data//maps/IkiTown/scripts.pory"
	walk_left
# 322 "data//maps/IkiTown/scripts.pory"
	walk_left
# 322 "data//maps/IkiTown/scripts.pory"
	walk_left
# 322 "data//maps/IkiTown/scripts.pory"
	walk_left
# 322 "data//maps/IkiTown/scripts.pory"
	walk_left
# 322 "data//maps/IkiTown/scripts.pory"
	walk_left
# 322 "data//maps/IkiTown/scripts.pory"
	step_end

# 323 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_9:
# 323 "data//maps/IkiTown/scripts.pory"
	delay_16
# 323 "data//maps/IkiTown/scripts.pory"
	walk_down
# 323 "data//maps/IkiTown/scripts.pory"
	walk_left
# 323 "data//maps/IkiTown/scripts.pory"
	walk_left
# 323 "data//maps/IkiTown/scripts.pory"
	walk_left
# 323 "data//maps/IkiTown/scripts.pory"
	walk_left
# 323 "data//maps/IkiTown/scripts.pory"
	walk_left
# 323 "data//maps/IkiTown/scripts.pory"
	walk_left
# 323 "data//maps/IkiTown/scripts.pory"
	walk_left
# 323 "data//maps/IkiTown/scripts.pory"
	step_end

# 327 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_10:
# 327 "data//maps/IkiTown/scripts.pory"
	walk_left
# 327 "data//maps/IkiTown/scripts.pory"
	walk_left
# 327 "data//maps/IkiTown/scripts.pory"
	walk_left
# 327 "data//maps/IkiTown/scripts.pory"
	walk_left
# 327 "data//maps/IkiTown/scripts.pory"
	walk_down
# 327 "data//maps/IkiTown/scripts.pory"
	walk_down
# 327 "data//maps/IkiTown/scripts.pory"
	walk_down
# 327 "data//maps/IkiTown/scripts.pory"
	walk_down
# 327 "data//maps/IkiTown/scripts.pory"
	walk_right
# 327 "data//maps/IkiTown/scripts.pory"
	walk_right
# 327 "data//maps/IkiTown/scripts.pory"
	walk_right
# 327 "data//maps/IkiTown/scripts.pory"
	walk_right
# 327 "data//maps/IkiTown/scripts.pory"
	walk_right
# 327 "data//maps/IkiTown/scripts.pory"
	walk_right
# 327 "data//maps/IkiTown/scripts.pory"
	walk_right
# 327 "data//maps/IkiTown/scripts.pory"
	step_end

# 328 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_11:
# 328 "data//maps/IkiTown/scripts.pory"
	walk_left
# 328 "data//maps/IkiTown/scripts.pory"
	walk_left
# 328 "data//maps/IkiTown/scripts.pory"
	walk_left
# 328 "data//maps/IkiTown/scripts.pory"
	walk_left
# 328 "data//maps/IkiTown/scripts.pory"
	walk_left
# 328 "data//maps/IkiTown/scripts.pory"
	walk_down
# 328 "data//maps/IkiTown/scripts.pory"
	walk_down
# 328 "data//maps/IkiTown/scripts.pory"
	walk_down
# 328 "data//maps/IkiTown/scripts.pory"
	walk_down
# 328 "data//maps/IkiTown/scripts.pory"
	walk_right
# 328 "data//maps/IkiTown/scripts.pory"
	walk_right
# 328 "data//maps/IkiTown/scripts.pory"
	walk_right
# 328 "data//maps/IkiTown/scripts.pory"
	walk_right
# 328 "data//maps/IkiTown/scripts.pory"
	walk_right
# 328 "data//maps/IkiTown/scripts.pory"
	walk_right
# 328 "data//maps/IkiTown/scripts.pory"
	step_end

# 352 "data//maps/IkiTown/scripts.pory"
IkiTown_Script_ManaloFestival_Movement_12:
# 352 "data//maps/IkiTown/scripts.pory"
	walk_down
# 352 "data//maps/IkiTown/scripts.pory"
	walk_down
# 352 "data//maps/IkiTown/scripts.pory"
	face_up
# 352 "data//maps/IkiTown/scripts.pory"
	step_end

# 515 "data//maps/IkiTown/scripts.pory"
IkiTown_NPC_DancerWithOricorio_Movement_0:
# 515 "data//maps/IkiTown/scripts.pory"
	jump_left
# 515 "data//maps/IkiTown/scripts.pory"
	jump_right
# 515 "data//maps/IkiTown/scripts.pory"
	jump_right
# 515 "data//maps/IkiTown/scripts.pory"
	jump_left
# 515 "data//maps/IkiTown/scripts.pory"
	face_down
# 515 "data//maps/IkiTown/scripts.pory"
	step_end

# 517 "data//maps/IkiTown/scripts.pory"
IkiTown_NPC_DancerWithOricorio_Movement_1:
# 517 "data//maps/IkiTown/scripts.pory"
	walk_in_place_down
# 517 "data//maps/IkiTown/scripts.pory"
	walk_in_place_down
# 517 "data//maps/IkiTown/scripts.pory"
	walk_in_place_right
# 517 "data//maps/IkiTown/scripts.pory"
	walk_in_place_right
# 517 "data//maps/IkiTown/scripts.pory"
	walk_in_place_up
# 517 "data//maps/IkiTown/scripts.pory"
	walk_in_place_up
# 517 "data//maps/IkiTown/scripts.pory"
	walk_in_place_left
# 517 "data//maps/IkiTown/scripts.pory"
	walk_in_place_left
# 517 "data//maps/IkiTown/scripts.pory"
	face_down
# 517 "data//maps/IkiTown/scripts.pory"
	step_end

# 618 "data//maps/IkiTown/scripts.pory"
IkiTown_NPC_Nurse_Movement_0:
# 618 "data//maps/IkiTown/scripts.pory"
	walk_in_place_slow_left
# 618 "data//maps/IkiTown/scripts.pory"
	walk_in_place_slow_left
# 618 "data//maps/IkiTown/scripts.pory"
	walk_in_place_slow_left
# 618 "data//maps/IkiTown/scripts.pory"
	face_down
# 618 "data//maps/IkiTown/scripts.pory"
	step_end

IkiTown_Script_HalaIntro_Text_0:
# 37 "data//maps/IkiTown/scripts.pory"
	.string "Prof. Kukui$"

IkiTown_Script_HalaIntro_Text_1:
# 38 "data//maps/IkiTown/scripts.pory"
	.string "Aue! Come on, just give me one good\n"
	.string "Dragon Hammer, {COLOR BLUE}Exeggutor{COLOR DARK_GRAY}!$"

IkiTown_Script_HalaIntro_Text_2:
# 51 "data//maps/IkiTown/scripts.pory"
	.string "???$"

IkiTown_Script_HalaIntro_Text_3:
# 52 "data//maps/IkiTown/scripts.pory"
	.string "Ohoho! Kukui never changes, does he?$"

IkiTown_Script_HalaIntro_Text_4:
# 57 "data//maps/IkiTown/scripts.pory"
	.string "Kahuna Hala$"

IkiTown_Script_HalaIntro_Text_5:
# 58 "data//maps/IkiTown/scripts.pory"
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
# 99 "data//maps/IkiTown/scripts.pory"
	.string "Oho, I wondered where you ran off to,\n"
	.string "Lillie! Now why'd you go up {COLOR GREEN}Mahalo Trail{COLOR DARK_GRAY}?\l"
	.string "You training with {COLOR BLUE}Cosmog{COLOR DARK_GRAY}?$"

IkiTown_Script_SavedLillie_Text_1:
# 103 "data//maps/IkiTown/scripts.pory"
	.string "Lillie$"

IkiTown_Script_SavedLillie_Text_2:
# 104 "data//maps/IkiTown/scripts.pory"
	.string "I- I didn't mean to... {COLOR BLUE}Nebbie{COLOR DARK_GRAY} ran off\n"
	.string "again! Hau came to help, but we were\l"
	.string "saved by... By...$"

IkiTown_Script_SavedLillie_Text_3:
# 111 "data//maps/IkiTown/scripts.pory"
	.string "Eek! I didn't even get their name...!$"

IkiTown_Script_SavedLillie_Text_4:
# 117 "data//maps/IkiTown/scripts.pory"
	.string "Hau$"

IkiTown_Script_SavedLillie_Text_5:
# 118 "data//maps/IkiTown/scripts.pory"
	.string "Yeah, {PLAYER} ran up and helped us\n"
	.string "out! They were trapped with {COLOR BLUE}Nebbie{COLOR DARK_GRAY} by a\l"
	.string "wild {COLOR BLUE}Corviknight{COLOR DARK_GRAY}, but at the last\l"
	.string "second, {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY} flew in and saved the\l"
	.string "day!$"

IkiTown_Script_SavedLillie_Text_6:
# 128 "data//maps/IkiTown/scripts.pory"
	.string "Hala$"

IkiTown_Script_SavedLillie_Text_7:
# 129 "data//maps/IkiTown/scripts.pory"
	.string "Hey, you three! What's this about {COLOR BLUE}Tapu\n"
	.string "Koko{COLOR DARK_GRAY}?$"

IkiTown_Script_SavedLillie_Text_8:
# 135 "data//maps/IkiTown/scripts.pory"
	.string "Hau told Kahuna Hala the whole story...$"

IkiTown_Script_SavedLillie_Text_9:
# 142 "data//maps/IkiTown/scripts.pory"
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
# 147 "data//maps/IkiTown/scripts.pory"
	.string "Hau, follow me to the platform in town.\n"
	.string "You must be prepared to receive your\l"
	.string "first Pokémon!$"

IkiTown_Script_SavedLillie_Text_11:
# 156 "data//maps/IkiTown/scripts.pory"
	.string "Aue, the Manalo Festival is actually\n"
	.string "starting soon! I need to get {COLOR BLUE}Exeggutor{COLOR DARK_GRAY}\l"
	.string "ready to dance!$"

IkiTown_Script_SavedLillie_Text_12:
# 165 "data//maps/IkiTown/scripts.pory"
	.string "Ahem... So, {PLAYER}, I'm Lillie. It's\n"
	.string "nice to officially meet you!\p"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY} and I owe you for helping us.\n"
	.string "We'll be cheering for you during the\l"
	.string "festival!$"

IkiTown_Script_SavedLillie_Text_13:
# 169 "data//maps/IkiTown/scripts.pory"
	.string "Nebbie$"

IkiTown_Script_SavedLillie_Text_14:
# 171 "data//maps/IkiTown/scripts.pory"
	.string "Pew pew!$"

IkiTown_Script_ManaloFestival_Text_0:
# 234 "data//maps/IkiTown/scripts.pory"
	.string "Welcome, people of Iki Town, to the main\n"
	.string "event of our Manalo Festival!$"

IkiTown_Script_ManaloFestival_Text_1:
# 241 "data//maps/IkiTown/scripts.pory"
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
# 246 "data//maps/IkiTown/scripts.pory"
	.string "Mom$"

IkiTown_Script_ManaloFestival_Text_3:
# 247 "data//maps/IkiTown/scripts.pory"
	.string "WOO-HOO! Go get 'em, {PLAYER}!$"

IkiTown_Script_ManaloFestival_Text_4:
# 251 "data//maps/IkiTown/scripts.pory"
	.string "Ahem...$"

IkiTown_Script_ManaloFestival_Text_5:
# 256 "data//maps/IkiTown/scripts.pory"
	.string "Hau! {PLAYER}! Show us what it means\n"
	.string "to be true Trainers!$"

IkiTown_Script_ManaloFestival_Text_6:
# 263 "data//maps/IkiTown/scripts.pory"
	.string "As long as we have a good time, then I\n"
	.string "think we can call it a great battle, eh?\p"
	.string "Give it all you've got! C'mon!$"

IkiTown_Script_ManaloFestival_Text_7:
# 271 "data//maps/IkiTown/scripts.pory"
	.string "What? It's already over?!$"

IkiTown_Script_ManaloFestival_Text_8:
# 281 "data//maps/IkiTown/scripts.pory"
	.string "Hoo-ee! Another great battle this year.\n"
	.string "I'm sure {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY} enjoyed it too!\p"
	.string "You two have come of age and held your\n"
	.string "own at the Manalo Festival. Please, take\l"
	.string "these!$"

IkiTown_Script_ManaloFestival_Text_9:
# 296 "data//maps/IkiTown/scripts.pory"
	.string "So sparkly... Thanks, Tutu!$"

IkiTown_Script_ManaloFestival_Text_10:
# 302 "data//maps/IkiTown/scripts.pory"
	.string "Those are {COLOR GREEN}Z-Power Rings{COLOR DARK_GRAY}, enhanced with\n"
	.string "keystones blessed by the Island\l"
	.string "Guardians themselves.\p"
	.string "With {COLOR GREEN}Z-Power{COLOR DARK_GRAY}, you will be able to draw\n"
	.string "out the hidden power within your\l"
	.string "Pokémon, unleashing amazing {COLOR GREEN}Z-Moves{COLOR DARK_GRAY}\l"
	.string "and accessing the {COLOR GREEN}Z-Forms{COLOR DARK_GRAY} of some\l"
	.string "species.$"

IkiTown_Script_ManaloFestival_Text_11:
# 309 "data//maps/IkiTown/scripts.pory"
	.string "With that, you are now ready to embark\n"
	.string "on the {COLOR GREEN}Island Challenge{COLOR DARK_GRAY}! You must\l"
	.string "overcome trials on the four main\l"
	.string "islands of Alola to earn {COLOR GREEN}Z-Crystals{COLOR DARK_GRAY},\l"
	.string "unlocking the true potential of your\l"
	.string "Pokémon.\p"
	.string "That's it for the Manalo Festival! Until\n"
	.string "next year, everyone!$"

IkiTown_Script_ManaloFestival_Text_12:
# 319 "data//maps/IkiTown/scripts.pory"
	.string "I had a blast battling you, {PLAYER}!\n"
	.string "And now look at us, ready to take on the\l"
	.string "{COLOR GREEN}Island Challenge{COLOR DARK_GRAY}!\p"
	.string "I'm gonna head home with Hala and rest\n"
	.string "my Pokémon. You should drop by!$"

IkiTown_Script_ManaloFestival_Text_13:
# 334 "data//maps/IkiTown/scripts.pory"
	.string "{PLAYER}, that was amazing! I'm no\n"
	.string "Trainer, but I couldn't look away from\l"
	.string "that battle.\p"
	.string "I've been staying at {COLOR GREEN}Professor Kukui's\n"
	.string "Lab{COLOR DARK_GRAY}, on the beach in southern {COLOR GREEN}Hau'oli\l"
	.string "Outskirts{COLOR DARK_GRAY}. He's been planning a surprise\l"
	.string "for you, so come visit!$"

IkiTown_Script_BlockHalaHouse_Text_0:
# 378 "data//maps/IkiTown/scripts.pory"
	.string "Kahuna Hala is outside of his house\n"
	.string "right now.$"

IkiTown_NPC_Hala_Text_0:
# 395 "data//maps/IkiTown/scripts.pory"
	.string "{PLAYER}, Alola! The {COLOR GREEN}Manalo Festival{COLOR DARK_GRAY}\n"
	.string "is still being set up. Tonight, we honor\l"
	.string "our Island Guardian and call on them for\l"
	.string "their protection.\p"
	.string "{COLOR GREEN}Hau{COLOR DARK_GRAY}, my grandson, has gone {COLOR GREEN}up Mahalo\n"
	.string "Trail{COLOR DARK_GRAY} with Kukui's Assistant. You should\l"
	.string "try to find them.$"

IkiTown_NPC_Hala_Text_1:
# 399 "data//maps/IkiTown/scripts.pory"
	.string "{PLAYER}, come on up! Are you ready to\n"
	.string "{COLOR GREEN}celebrate the Manalo Festival{COLOR DARK_GRAY}\l"
	.string "together?$"

IkiTown_NPC_Hala_Text_2:
# 404 "data//maps/IkiTown/scripts.pory"
	.string "Bahaha, great! I'll have you wait here\n"
	.string "while I get Hau and the townsfolk\l"
	.string "together...$"

IkiTown_NPC_Hala_Text_3:
# 412 "data//maps/IkiTown/scripts.pory"
	.string "I understand. This is a big night for\n"
	.string "you and my grandson both!\p"
	.string "Come back when you're ready for the\n"
	.string "festival to begin!$"

IkiTown_NPC_KukuiWithExeggutor_Text_0:
# 427 "data//maps/IkiTown/scripts.pory"
	.string "Check out this guy! {COLOR BLUE}Alolan Exeggutor{COLOR DARK_GRAY}\n"
	.string "towers over most Pokémon, yeah! It's so\l"
	.string "high up, it doesn't seem to hear me\l"
	.string "sometimes...\p"
	.string "You met {COLOR GREEN}Hala{COLOR DARK_GRAY}? He's the {COLOR GREEN}Kahuna{COLOR DARK_GRAY}, leader of\n"
	.string "Melemele Island. I thought it would be\l"
	.string "good for you two to chat!$"

IkiTown_NPC_KukuiWithExeggutor_Text_1:
# 431 "data//maps/IkiTown/scripts.pory"
	.string "Thanks again for helping Lillie, cousin.\n"
	.string "She may seem frail, but she's actually\l"
	.string "my assistant, yeah!\p"
	.string "You gettin' ready for the Manalo\n"
	.string "Festival? Head over to the main stage\l"
	.string "and {COLOR GREEN}talk to Hala{COLOR DARK_GRAY} when you're ready to\l"
	.string "party!$"

IkiTown_NPC_AlolanExeggutor_Text_0:
# 442 "data//maps/IkiTown/scripts.pory"
	.string "Exeggutor$"

IkiTown_NPC_AlolanExeggutor_Text_1:
# 444 "data//maps/IkiTown/scripts.pory"
	.string "BRUW-AAAH!$"

IkiTown_NPC_LassByFlowers_Text_0:
# 455 "data//maps/IkiTown/scripts.pory"
	.string "Lass$"

IkiTown_NPC_LassByFlowers_Text_1:
# 456 "data//maps/IkiTown/scripts.pory"
	.string "Iki Town is usually a sleepy spot on top\n"
	.string "of a hill, but it lights up during the\l"
	.string "Manalo Festival!$"

IkiTown_NPC_SchoolBoy_Text_0:
# 466 "data//maps/IkiTown/scripts.pory"
	.string "School Boy$"

IkiTown_NPC_SchoolBoy_Text_1:
# 467 "data//maps/IkiTown/scripts.pory"
	.string "Kehehe, I got today off school! I love\n"
	.string "this time of year!$"

IkiTown_NPC_SchoolGirl_Text_0:
# 477 "data//maps/IkiTown/scripts.pory"
	.string "School Girl$"

IkiTown_NPC_SchoolGirl_Text_1:
# 478 "data//maps/IkiTown/scripts.pory"
	.string "There are Pokémon in the grass! Maybe\n"
	.string "I'll catch one someday...$"

IkiTown_NPC_ManWandering_Text_0:
# 488 "data//maps/IkiTown/scripts.pory"
	.string "Man$"

IkiTown_NPC_ManWandering_Text_1:
# 489 "data//maps/IkiTown/scripts.pory"
	.string "Did you know? The Manalo Festival\n"
	.string "celebrates {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY}, the Guardian of\l"
	.string "Melemele Island.\p"
	.string "I read that some older stories refer to\n"
	.string "{COLOR RED}'The Blinding One'{COLOR DARK_GRAY}, but I don't know much\l"
	.string "about that.$"

IkiTown_NPC_WomanWandering_Text_0:
# 499 "data//maps/IkiTown/scripts.pory"
	.string "Woman$"

IkiTown_NPC_WomanWandering_Text_1:
# 500 "data//maps/IkiTown/scripts.pory"
	.string "Just having Pokémon at your side makes\n"
	.string "you feel all warm inside, doesn't it?\l"
	.string "Eating dinner together, playing\l"
	.string "together, spending time together... It's\l"
	.string "pure happiness!$"

IkiTown_NPC_DancerWithOricorio_Text_0:
# 509 "data//maps/IkiTown/scripts.pory"
	.string "Dancer$"

IkiTown_NPC_DancerWithOricorio_Text_1:
# 510 "data//maps/IkiTown/scripts.pory"
	.string "Okay, one more time... {COLOR BLUE}Oricorio{COLOR DARK_GRAY}, dance\n"
	.string "together!$"

IkiTown_NPC_DancerWithOricorio_Text_2:
# 524 "data//maps/IkiTown/scripts.pory"
	.string "{COLOR BLUE}Oricorio{COLOR DARK_GRAY} are wonderful dancers, but all\n"
	.string "have their own style. I'm hoping to\l"
	.string "dance with them in next year's Manalo\l"
	.string "Festival!$"

IkiTown_NPC_OricorioPomPom_Text_0:
# 536 "data//maps/IkiTown/scripts.pory"
	.string "Oricorio$"

IkiTown_NPC_OricorioPomPom_Text_1:
# 538 "data//maps/IkiTown/scripts.pory"
	.string "Chee-uh!$"

IkiTown_NPC_OricorioPau_Text_0:
# 552 "data//maps/IkiTown/scripts.pory"
	.string "Shee-ou!$"

IkiTown_NPC_YoungsterRockruff_Text_0:
# 565 "data//maps/IkiTown/scripts.pory"
	.string "Youngster$"

IkiTown_NPC_YoungsterRockruff_Text_1:
# 566 "data//maps/IkiTown/scripts.pory"
	.string "Didja know? When a Rockruff really\n"
	.string "likes you, it rubs against you with the\l"
	.string "stones on its neck!\p"
	.string "But... it does kinda hurt...$"

IkiTown_NPC_Lillie_Text_0:
# 577 "data//maps/IkiTown/scripts.pory"
	.string "I can't wait to see you and Hau in the\n"
	.string "Manalo Festival tonight!\p"
	.string "I'm not a Trainer, but I take care of\n"
	.string "little {COLOR BLUE}Nebbie{COLOR DARK_GRAY} here.$"

IkiTown_NPC_Hau_Text_0:
# 601 "data//maps/IkiTown/scripts.pory"
	.string "Alola, {PLAYER}! I can't wait to get my\n"
	.string "own Pokémon!\p"
	.string "In Mahalo Trail, I felt like I couldn't\n"
	.string "help... Once I get a Pokémon of my own,\l"
	.string "I'll be able to help whoever needs it!$"

IkiTown_NPC_Nurse_Text_0:
# 611 "data//maps/IkiTown/scripts.pory"
	.string "Nurse$"

IkiTown_NPC_Nurse_Text_1:
# 612 "data//maps/IkiTown/scripts.pory"
	.string "Alola! Would you like to heal your\n"
	.string "Pokémon?$"

IkiTown_NPC_Nurse_Text_2:
# 616 "data//maps/IkiTown/scripts.pory"
	.string "Sure! Let me see your Pokémon...$"

IkiTown_NPC_Nurse_Text_3:
# 625 "data//maps/IkiTown/scripts.pory"
	.string "Your Pokémon are feeling better. Have a\n"
	.string "good day!$"

IkiTown_NPC_Nurse_Text_4:
# 631 "data//maps/IkiTown/scripts.pory"
	.string "Come back soon!$"

IkiTown_Sign_LocationSign_Text_0:
# 643 "data//maps/IkiTown/scripts.pory"
	.string "Iki Town\n"
	.string "Where We Give Thanks to Pokémon.$"

IkiTown_Sign_MahaloTrailUp_Text_0:
# 652 "data//maps/IkiTown/scripts.pory"
	.string "{UP_ARROW} Mahalo Trail$"

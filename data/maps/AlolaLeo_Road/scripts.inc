AlolaLeo_Road_MapScripts::
	.byte 0


AlolaLeo_Road_Script_RoadBlockedByTauros::
# 9 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 10 "data//maps/AlolaLeo_Road/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 11 "data//maps/AlolaLeo_Road/scripts.pory"
	switch VAR_TEMP_2
# 13 "data//maps/AlolaLeo_Road/scripts.pory"
	case 16, AlolaLeo_Road_Script_RoadBlockedByTauros_3
# 16 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_1
AlolaLeo_Road_Script_RoadBlockedByTauros_1:
# 18 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 19 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 20 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 22 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0
# 23 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 24 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Script_RoadBlockedByTauros_Text_1
# 25 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 26 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 27 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceLeft
# 28 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 29 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 3, Common_Movement_WalkRight
# 30 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 31 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_2
# 32 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 33 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Script_RoadBlockedByTauros_Text_3
# 34 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 35 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 36 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 3, AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_2
# 37 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 38 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 39 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 40 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 41 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0
# 42 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 43 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Script_RoadBlockedByTauros_Text_4
# 44 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 48 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 1, AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_3
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 2, AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_4
# 51 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 100
# 52 "data//maps/AlolaLeo_Road/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 53 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 30
# 54 "data//maps/AlolaLeo_Road/scripts.pory"
	setflag FLAG_HIDE_LILLIE_ALOLA_LEO_SCHOOL
# 55 "data//maps/AlolaLeo_Road/scripts.pory"
	removeobject 1
# 56 "data//maps/AlolaLeo_Road/scripts.pory"
	removeobject 2
# 57 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 30
# 58 "data//maps/AlolaLeo_Road/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 59 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 20
# 60 "data//maps/AlolaLeo_Road/scripts.pory"
	releaseall
	end

AlolaLeo_Road_Script_RoadBlockedByTauros_3:
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_0
	goto AlolaLeo_Road_Script_RoadBlockedByTauros_1


AlolaLeo_Road_Pokemon_Meowth::
# 66 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 67 "data//maps/AlolaLeo_Road/scripts.pory"
	faceplayer
# 68 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Pokemon_Meowth_Text_0
# 69 "data//maps/AlolaLeo_Road/scripts.pory"
	playmoncry SPECIES_MEOWTH_ALOLA, CRY_MODE_NORMAL
# 70 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Pokemon_Meowth_Text_1
# 71 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmoncry
# 72 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 73 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end


AlolaLeo_Road_Trainer_LassHiromi::
# 81 "data//maps/AlolaLeo_Road/scripts.pory"
	trainerbattle_single TRAINER_LASS_HIROMI, AlolaLeo_Road_Trainer_LassHiromi_Text_0, AlolaLeo_Road_Trainer_LassHiromi_Text_1
# 85 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_LassHiromi_Text_2
# 86 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_LassHiromi_Text_3
# 87 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 88 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end


AlolaLeo_Road_Trainer_RisingStarJoseph::
# 94 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 95 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_Text_0
# 97 "data//maps/AlolaLeo_Road/scripts.pory"
	checktrainerflag TRAINER_RISING_STAR_JOSEPH
	goto_if 1, AlolaLeo_Road_Trainer_RisingStarJoseph_2
# 106 "data//maps/AlolaLeo_Road/scripts.pory"
	hidefollower
# 107 "data//maps/AlolaLeo_Road/scripts.pory"
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
# 108 "data//maps/AlolaLeo_Road/scripts.pory"
	switch VAR_TEMP_1
# 110 "data//maps/AlolaLeo_Road/scripts.pory"
	case 16, AlolaLeo_Road_Trainer_RisingStarJoseph_6
# 112 "data//maps/AlolaLeo_Road/scripts.pory"
	case 17, AlolaLeo_Road_Trainer_RisingStarJoseph_7
# 115 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Trainer_RisingStarJoseph_Movement_2
AlolaLeo_Road_Trainer_RisingStarJoseph_4:
# 117 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 119 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_Text_2
# 120 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 121 "data//maps/AlolaLeo_Road/scripts.pory"
	createplayerfieldmugshot EMOTION_SAD
# 122 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_Text_3
# 123 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 124 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_Text_0
# 125 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_Text_4
# 126 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 128 "data//maps/AlolaLeo_Road/scripts.pory"
	checktrainerflag TRAINER_LASS_HIROMI
	goto_if 1, AlolaLeo_Road_Trainer_RisingStarJoseph_12
AlolaLeo_Road_Trainer_RisingStarJoseph_9:
# 137 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end

AlolaLeo_Road_Trainer_RisingStarJoseph_2:
# 99 "data//maps/AlolaLeo_Road/scripts.pory"
	faceplayer
# 100 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_Text_1
# 101 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 102 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end

AlolaLeo_Road_Trainer_RisingStarJoseph_6:
# 111 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Trainer_RisingStarJoseph_Movement_0
	goto AlolaLeo_Road_Trainer_RisingStarJoseph_4

AlolaLeo_Road_Trainer_RisingStarJoseph_7:
# 113 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Trainer_RisingStarJoseph_Movement_1
	goto AlolaLeo_Road_Trainer_RisingStarJoseph_4

AlolaLeo_Road_Trainer_RisingStarJoseph_10:
# 130 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 30
# 131 "data//maps/AlolaLeo_Road/scripts.pory"
	emote 9, EMOTE_EXCLAM
# 132 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 133 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_Text_0
# 134 "data//maps/AlolaLeo_Road/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, LOCALID_NONE, TRAINER_RISING_STAR_JOSEPH, AlolaLeo_Road_Trainer_RisingStarJoseph_Text_5, AlolaLeo_Road_Trainer_RisingStarJoseph_Text_6, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle, LOCALID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
	goto AlolaLeo_Road_Trainer_RisingStarJoseph_9

AlolaLeo_Road_Trainer_RisingStarJoseph_11:
# 128 "data//maps/AlolaLeo_Road/scripts.pory"
	checktrainerflag TRAINER_YOUNGSTER_JOEY
	goto_if 1, AlolaLeo_Road_Trainer_RisingStarJoseph_10
	goto AlolaLeo_Road_Trainer_RisingStarJoseph_9

AlolaLeo_Road_Trainer_RisingStarJoseph_12:
# 128 "data//maps/AlolaLeo_Road/scripts.pory"
	checktrainerflag TRAINER_SCHOOL_GIRL_MIA
	goto_if 1, AlolaLeo_Road_Trainer_RisingStarJoseph_11
	goto AlolaLeo_Road_Trainer_RisingStarJoseph_9


AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle::
# 143 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 144 "data//maps/AlolaLeo_Road/scripts.pory"
	faceplayer
# 145 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_Text_0
# 146 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_0
# 147 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 148 "data//maps/AlolaLeo_Road/scripts.pory"
	giveitem ITEM_GREAT_BALL, 10
# 149 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 150 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_Text_0
# 151 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_1
# 152 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 154 "data//maps/AlolaLeo_Road/scripts.pory"
	setflag FLAG_HIDE_LILLIE_INSIDE_SCHOOL
# 156 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 30
# 157 "data//maps/AlolaLeo_Road/scripts.pory"
	clearflag FLAG_HIDE_LILLIE_ALOLA_LEO_SCHOOL_2
# 158 "data//maps/AlolaLeo_Road/scripts.pory"
	addobject 10
# 159 "data//maps/AlolaLeo_Road/scripts.pory"
	addobject 11
# 160 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 10, Common_Movement_WalkDown
# 161 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 11, Common_Movement_WalkDown
# 162 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 163 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 164 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 165 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0
# 166 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 167 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_2
# 168 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 169 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 170 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 10, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_0
# 171 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 11, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_1
# 172 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 174 "data//maps/AlolaLeo_Road/scripts.pory"
	createplayerfieldmugshot
# 175 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_3
# 176 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 177 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_OTHER
# 178 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0
# 179 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_4
# 180 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 182 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_2
# 183 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 184 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_3
# 185 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 10, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_3
# 186 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 11, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_4
# 187 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 188 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 189 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0
# 190 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 191 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_5
# 192 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 193 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 13, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_5
# 194 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 195 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_6
# 196 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_LAUGH
# 197 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_7
# 198 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 199 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 200 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 13, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_6
# 201 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 202 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 203 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_6
# 204 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 205 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_8
# 206 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 207 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 208 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 209 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 210 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 211 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_2
# 212 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 213 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_9
# 214 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 215 "data//maps/AlolaLeo_Road/scripts.pory"
	emote LOCALID_PLAYER, EMOTE_EXCLAM
# 216 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 217 "data//maps/AlolaLeo_Road/scripts.pory"
	createplayerfieldmugshot EMOTION_SAD
# 218 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_10
# 219 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmessage
# 220 "data//maps/AlolaLeo_Road/scripts.pory"
	createplayerfieldmugshot
# 221 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_11
# 222 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 224 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 3, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_7
# 225 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 13, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_8
# 226 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 10, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_9
# 227 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 11, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_10
# 228 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_11
# 229 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 13
# 230 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 20
# 232 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_12
# 233 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 234 "data//maps/AlolaLeo_Road/scripts.pory"
	emote 4, EMOTE_HEART
# 235 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_12
# 236 "data//maps/AlolaLeo_Road/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_NORMAL
# 237 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_13
# 238 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmoncry
# 239 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 240 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 241 "data//maps/AlolaLeo_Road/scripts.pory"
	createplayerfieldmugshot
# 242 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_14
# 243 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 244 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 245 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 3, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_13
# 246 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 247 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_2
# 248 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_HALA, EMOTION_LAUGH
# 249 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_15
# 250 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmessage
# 251 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 252 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_2
# 253 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_16
# 254 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 256 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 4, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_14
# 257 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 258 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 259 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 3, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_15
# 260 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 4, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_15
# 261 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 262 "data//maps/AlolaLeo_Road/scripts.pory"
	setflag FLAG_HIDE_TAUROS_ALOLA_LEO
# 263 "data//maps/AlolaLeo_Road/scripts.pory"
	removeobject 3
# 264 "data//maps/AlolaLeo_Road/scripts.pory"
	removeobject 4
# 265 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 266 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 13, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_16
# 267 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 10, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_17
# 268 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 11, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_18
# 269 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 270 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 272 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_6
# 273 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_HAU, EMOTION_LAUGH
# 274 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_17
# 275 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 276 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 277 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 13, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_19
# 278 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 279 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 280 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_6
# 281 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_18
# 282 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 283 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 10, Common_Movement_FaceLeft
# 284 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 285 "data//maps/AlolaLeo_Road/scripts.pory"
	emote 10, EMOTE_EXCLAM
# 286 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 13, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_20
# 287 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 288 "data//maps/AlolaLeo_Road/scripts.pory"
	delay 10
# 289 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 290 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 291 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 292 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0
# 293 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_SAD
# 294 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_19
# 295 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmessage
# 296 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT
# 297 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0
# 298 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_20
# 299 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 10, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_21
# 301 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement 11, AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_21
# 302 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 304 "data//maps/AlolaLeo_Road/scripts.pory"
	setflag FLAG_HIDE_LILLIE_ALOLA_LEO_SCHOOL_2
# 305 "data//maps/AlolaLeo_Road/scripts.pory"
	removeobject 10
# 306 "data//maps/AlolaLeo_Road/scripts.pory"
	removeobject 11
# 307 "data//maps/AlolaLeo_Road/scripts.pory"
	removeobject 13
# 309 "data//maps/AlolaLeo_Road/scripts.pory"
	completequest QUEST_WELCOME_TO_ALOLA
# 312 "data//maps/AlolaLeo_Road/scripts.pory"
	startquest QUEST_TRIAL_ILIMA
# 313 "data//maps/AlolaLeo_Road/scripts.pory"
	completesubquest QUEST_ISLAND_CHALLENGE, QUEST_ISLAND_CHALLENGE_SUBQUEST_1
# 314 "data//maps/AlolaLeo_Road/scripts.pory"
	completesubquest QUEST_TRIAL_ILIMA, QUEST_TRIAL_ILIMA_SUBQUEST_1
# 320 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 321 "data//maps/AlolaLeo_Road/scripts.pory"
	releaseall
	end


AlolaLeo_Road_NPC_Backpacker::
# 329 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 330 "data//maps/AlolaLeo_Road/scripts.pory"
	faceplayer
# 331 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_NPC_Backpacker_Text_0
# 332 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_NPC_Backpacker_Text_1
# 333 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmessage
# 334 "data//maps/AlolaLeo_Road/scripts.pory"
	createplayerfieldmugshot
# 335 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_NPC_Backpacker_Text_2
# 336 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmessage
# 337 "data//maps/AlolaLeo_Road/scripts.pory"
	removefieldmugshot
# 338 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_NPC_Backpacker_Text_0
# 339 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_NPC_Backpacker_Text_3
# 340 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 341 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end


AlolaLeo_Road_NPC_Hala::
# 347 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 348 "data//maps/AlolaLeo_Road/scripts.pory"
	faceplayer
# 349 "data//maps/AlolaLeo_Road/scripts.pory"
	createplayerfieldmugshot
# 350 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_NPC_Hala_Text_0
# 351 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 352 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Script_RoadBlockedByTauros_Text_2
# 353 "data//maps/AlolaLeo_Road/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 354 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_NPC_Hala_Text_1
# 355 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 356 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 357 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 358 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end


AlolaLeo_Road_Pokemon_Tauros::
# 364 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 365 "data//maps/AlolaLeo_Road/scripts.pory"
	faceplayer
# 366 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_12
# 367 "data//maps/AlolaLeo_Road/scripts.pory"
	playmoncry SPECIES_TAUROS, CRY_MODE_NORMAL
# 368 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Pokemon_Tauros_Text_0
# 369 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmoncry
# 370 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 371 "data//maps/AlolaLeo_Road/scripts.pory"
	createplayerfieldmugshot EMOTION_SAD
# 372 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Pokemon_Tauros_Text_1
# 373 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 374 "data//maps/AlolaLeo_Road/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
# 375 "data//maps/AlolaLeo_Road/scripts.pory"
	waitmovement 0
# 376 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end


AlolaLeo_Road_Sign_SchoolSign::
# 382 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 383 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_Sign_SchoolSign_Text_0, MSGBOX_SIGN
# 384 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 385 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end


AlolaLeo_Road_NPC_Collector::
# 391 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 392 "data//maps/AlolaLeo_Road/scripts.pory"
	faceplayer
# 393 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_NPC_Collector_Text_0
# 394 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_NPC_Collector_Text_1
# 395 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 396 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end


AlolaLeo_Road_NPC_Artist::
# 402 "data//maps/AlolaLeo_Road/scripts.pory"
	lock
# 403 "data//maps/AlolaLeo_Road/scripts.pory"
	faceplayer
# 404 "data//maps/AlolaLeo_Road/scripts.pory"
	setspeaker AlolaLeo_Road_NPC_Artist_Text_0
# 405 "data//maps/AlolaLeo_Road/scripts.pory"
	msgbox AlolaLeo_Road_NPC_Artist_Text_1
# 406 "data//maps/AlolaLeo_Road/scripts.pory"
	closemessage
# 407 "data//maps/AlolaLeo_Road/scripts.pory"
	release
	end


# 14 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_0:
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	face_up
# 14 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 16 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_1:
# 16 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 16 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 16 "data//maps/AlolaLeo_Road/scripts.pory"
	face_up
# 16 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 36 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_2:
# 36 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 36 "data//maps/AlolaLeo_Road/scripts.pory"
	face_down
# 36 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 49 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_3:
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	face_down
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	delay_16
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	delay_16
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 49 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 50 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Script_RoadBlockedByTauros_Movement_4:
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	face_down
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	emote_heart
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	delay_16
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	delay_16
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 50 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 111 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_Movement_0:
# 111 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 111 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 111 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 111 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 111 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 111 "data//maps/AlolaLeo_Road/scripts.pory"
	face_left
# 111 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 113 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_Movement_1:
# 113 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 113 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 113 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 113 "data//maps/AlolaLeo_Road/scripts.pory"
	face_left
# 113 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 115 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_Movement_2:
# 115 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 115 "data//maps/AlolaLeo_Road/scripts.pory"
	face_left
# 115 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 170 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_0:
# 170 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 170 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 170 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 170 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 170 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 171 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_1:
# 171 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 171 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 171 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 171 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 171 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 182 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_2:
# 182 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 182 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 182 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 184 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_3:
# 184 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 184 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 184 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 184 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 184 "data//maps/AlolaLeo_Road/scripts.pory"
	face_left
# 184 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 186 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_4:
# 186 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 186 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 186 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 186 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 186 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 193 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_5:
# 193 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 193 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 193 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 200 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_6:
# 200 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 200 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_in_place_right
# 200 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_in_place_right
# 200 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 224 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_7:
# 224 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 224 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 224 "data//maps/AlolaLeo_Road/scripts.pory"
	face_right
# 224 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 225 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_8:
# 225 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 225 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 225 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 225 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 225 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 225 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 225 "data//maps/AlolaLeo_Road/scripts.pory"
	face_right
# 225 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 226 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_9:
# 226 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 226 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 226 "data//maps/AlolaLeo_Road/scripts.pory"
	face_left
# 226 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 227 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_10:
# 227 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 227 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 227 "data//maps/AlolaLeo_Road/scripts.pory"
	face_left
# 227 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 228 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_11:
# 228 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 228 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 228 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 232 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_12:
# 232 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_in_place_slow_left
# 232 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_in_place_slow_left
# 232 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_in_place_slow_left
# 232 "data//maps/AlolaLeo_Road/scripts.pory"
	face_left
# 232 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 245 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_13:
# 245 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_in_place_right
# 245 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_in_place_right
# 245 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 256 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_14:
# 256 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 256 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 256 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 259 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_15:
# 259 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 259 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 259 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 259 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 259 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 259 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 259 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 259 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 266 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_16:
# 266 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 266 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_right
# 266 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 267 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_17:
# 267 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 267 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 267 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 267 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 267 "data//maps/AlolaLeo_Road/scripts.pory"
	face_down
# 267 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 268 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_18:
# 268 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_down
# 268 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_up
# 268 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 268 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 268 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 277 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_19:
# 277 "data//maps/AlolaLeo_Road/scripts.pory"
	jump_in_place_right
# 277 "data//maps/AlolaLeo_Road/scripts.pory"
	jump_in_place_right
# 277 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 286 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_20:
# 286 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_fast_left
# 286 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_fast_left
# 286 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_fast_left
# 286 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_fast_left
# 286 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_fast_left
# 286 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_fast_left
# 286 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_fast_left
# 286 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_fast_left
# 286 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

# 300 "data//maps/AlolaLeo_Road/scripts.pory"
AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Movement_21:
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	walk_left
# 300 "data//maps/AlolaLeo_Road/scripts.pory"
	step_end

AlolaLeo_Road_Script_RoadBlockedByTauros_Text_0:
# 22 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Lillie$"

AlolaLeo_Road_Script_RoadBlockedByTauros_Text_1:
# 24 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{PLAYER}...! {COLOR BLUE}Nebbie{COLOR DARK_GRAY} and I were just\n"
	.string "coming to the Trainer School, but look...$"

AlolaLeo_Road_Script_RoadBlockedByTauros_Text_2:
# 31 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Hala$"

AlolaLeo_Road_Script_RoadBlockedByTauros_Text_3:
# 33 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "You two were right to stop. It seems\n"
	.string "like ol' {COLOR BLUE}Tauros{COLOR DARK_GRAY} here is feeling stubborn\l"
	.string "as, well, a {COLOR BLUE}Tauros{COLOR DARK_GRAY}!\p"
	.string "I'll stay here and try to calm it down.\n"
	.string "In the meantime, you should chat with\l"
	.string "the students at the Trainer School.\l"
	.string "Some might even want to {COLOR GREEN}battle you{COLOR DARK_GRAY}!$"

AlolaLeo_Road_Script_RoadBlockedByTauros_Text_4:
# 43 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Well, I guess that works out... ehehe!\p"
	.string "I've never had a Pokémon battle before,\n"
	.string "and {COLOR BLUE}Nebbie{COLOR DARK_GRAY} shouldn't draw too much\l"
	.string "attention... I think I'll head inside!$"

AlolaLeo_Road_Pokemon_Meowth_Text_0:
# 68 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Meowth$"

AlolaLeo_Road_Pokemon_Meowth_Text_1:
# 70 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Groww!$"

AlolaLeo_Road_Trainer_LassHiromi_Text_0:
# 82 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "If my precious Bonsly takes damage in\n"
	.string "battle, I'll want to use a Potion on it!$"

AlolaLeo_Road_Trainer_LassHiromi_Text_1:
# 83 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Don't worry, buddy! I'll heal you up!$"

AlolaLeo_Road_Trainer_LassHiromi_Text_2:
# 85 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Lass Hiromi$"

AlolaLeo_Road_Trainer_LassHiromi_Text_3:
# 86 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Some Trainers use items in battle to\n"
	.string "support their Pokémon.$"

AlolaLeo_Road_Trainer_RisingStarJoseph_Text_0:
# 95 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Rising Star Joseph$"

AlolaLeo_Road_Trainer_RisingStarJoseph_Text_1:
# 100 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "I can't believe you beat me...\p"
	.string "I'll just have to get stronger. WAY\n"
	.string "stronger!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_Text_2:
# 119 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "You wanna know why I'm standing here?\n"
	.string "Because I'm the STRONGEST, that's why!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_Text_3:
# 122 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}And the humblest, too...$"

AlolaLeo_Road_Trainer_RisingStarJoseph_Text_4:
# 125 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "I won't even bother battling you unless\n"
	.string "you can beat {COLOR GREEN}all the other students who\l"
	.string "want to battle{COLOR DARK_GRAY}!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_Text_5:
# 134 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Oh? You've battled the other students?\p"
	.string "Heh, let's see if you can handle THIS!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_Text_6:
# 134 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "But how?! I've never lost!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_0:
# 146 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Unbelieveable, I thought I had it for\n"
	.string "sure...\p"
	.string "Here, you should take these.$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_1:
# 151 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Those are a bit stronger than normal\n"
	.string "Poké balls. Maybe you could use them to\l"
	.string "catch some stronger Pokémon... Not that\l"
	.string "you need them!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_2:
# 167 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{PLAYER}! I thought I heard your\n"
	.string "Pokémon battling out here!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_3:
# 175 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Alola! Yeah, we managed to beat Joseph\n"
	.string "here.$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_4:
# 179 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "That's good! {COLOR BLUE}Nebbie{COLOR DARK_GRAY}'s getting super\n"
	.string "restless... Maybe we should check in on\l"
	.string "Hala and {COLOR BLUE}Tauros{COLOR DARK_GRAY}?$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_5:
# 191 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Hau, there you are! I wasn't sure where\n"
	.string "you went after you left Iki Town...$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_6:
# 195 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Hau$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_7:
# 197 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "I was out looking for s'more Pokémon to\n"
	.string "beef up my team after {PLAYER} beat\l"
	.string "me!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_8:
# 205 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Lucky for us, the {COLOR BLUE}Tauros{COLOR DARK_GRAY} seems to be\n"
	.string "calming down.$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_9:
# 213 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "That's right! I should be getting old\n"
	.string "{COLOR BLUE}Tauros{COLOR DARK_GRAY} back home.\p"
	.string "But first, I've got an idea... {PLAYER},\n"
	.string "give {COLOR BLUE}Tauros{COLOR DARK_GRAY} a pat!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_10:
# 218 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}The {COLOR BLUE}Tauros{COLOR DARK_GRAY} that was halfway to\n"
	.string "rampaging a few minutes ago?$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_11:
# 221 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}It would be rude to refuse the Island\n"
	.string "Kahuna... Here goes nothing!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_12:
# 235 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Tauros$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_13:
# 237 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Moo-or! Huff!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_14:
# 242 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Aw, you're just a sweet little guy,\n"
	.string "aren't you? You wouldn't hurt a\l"
	.string "{COLOR BLUE}Cutiefly{COLOR DARK_GRAY}!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_15:
# 249 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Oh ho ho, that's wonderful, {PLAYER}!\n"
	.string "You're a natural.$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_16:
# 253 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "I'll be taking {COLOR BLUE}Tauros{COLOR DARK_GRAY} back to his home.\n"
	.string "Enjoy Hau'oli City, you three!\p"
	.string "{PLAYER} and Hau, keep an eye out for\n"
	.string "a pink-haired young man named {COLOR GREEN}Ilima{COLOR DARK_GRAY}.\l"
	.string "He'll be the first Trial Captain in your\l"
	.string "Island Challenge!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_17:
# 274 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "I don't wanna brag, but man, Tutu is the\n"
	.string "best!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_18:
# 281 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Anyhow, let's explore Hau'oli City! I'm\n"
	.string "gonna find a place to eat!$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_19:
# 294 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Oh, Hau... He always jumps right into\n"
	.string "things, doesn't he?$"

AlolaLeo_Road_Trainer_RisingStarJoseph_AfterBattle_Text_20:
# 298 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "I have to admit, exploring Hau'oli City\n"
	.string "sounds lovely... Maybe we can meet up\l"
	.string "when you find that {COLOR GREEN}Trial Captain{COLOR DARK_GRAY} Hala\l"
	.string "was talking about!$"

AlolaLeo_Road_NPC_Backpacker_Text_0:
# 331 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Backpacker$"

AlolaLeo_Road_NPC_Backpacker_Text_1:
# 332 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Me? Oh, I'm not a student here.$"

AlolaLeo_Road_NPC_Backpacker_Text_2:
# 335 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Well then, what are you doing here?$"

AlolaLeo_Road_NPC_Backpacker_Text_3:
# 339 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "I'm catching Pokémon! Some species in\n"
	.string "the grass here are rare outside of\l"
	.string "school property.$"

AlolaLeo_Road_NPC_Hala_Text_0:
# 350 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Alola, Hala! How's {COLOR BLUE}Tauros{COLOR DARK_GRAY} holding up?$"

AlolaLeo_Road_NPC_Hala_Text_1:
# 354 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "He's alright! Seems like something\n"
	.string "whipped him into a {COLOR RED}frenzy{COLOR DARK_GRAY}... Not unlike\l"
	.string "the {COLOR BLUE}Corviknight{COLOR DARK_GRAY} you faced in Mahalo\l"
	.string "Trail.\p"
	.string "While I calm him down, you should {COLOR GREEN}face\n"
	.string "the Trainers{COLOR DARK_GRAY} in the Alola Leo School.\l"
	.string "More training could never hurt!$"

AlolaLeo_Road_Pokemon_Tauros_Text_0:
# 368 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Huff-Gruff!!$"

AlolaLeo_Road_Pokemon_Tauros_Text_1:
# 372 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Woah there, buddy! You're all riled up,\n"
	.string "hm?$"

AlolaLeo_Road_Sign_SchoolSign_Text_0:
# 383 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Alola Leo Trainer School\n"
	.string "Where New Stars Are Born!$"

AlolaLeo_Road_NPC_Collector_Text_0:
# 393 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Collector$"

AlolaLeo_Road_NPC_Collector_Text_1:
# 394 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "I just like watching people come and go\n"
	.string "with their Pokémon.\p"
	.string "...What? I'd never steal a Pokémon,\n"
	.string "that's wrong!$"

AlolaLeo_Road_NPC_Artist_Text_0:
# 404 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Artist$"

AlolaLeo_Road_NPC_Artist_Text_1:
# 405 "data//maps/AlolaLeo_Road/scripts.pory"
	.string "Pokémon Center Café's serve all sorts\n"
	.string "of drinks. They're for people and\l"
	.string "Pokémon both!$"

SeaOfAsteri_West_MapScripts::
# 2 "data/maps/SeaOfAsteri_West/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeaOfAsteri_West_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SeaOfAsteri_West_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/SeaOfAsteri_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/SeaOfAsteri_West/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 16 "data/maps/SeaOfAsteri_West/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 17 "data/maps/SeaOfAsteri_West/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 18 "data/maps/SeaOfAsteri_West/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_SURF
# 19 "data/maps/SeaOfAsteri_West/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_SURF
# 20 "data/maps/SeaOfAsteri_West/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_SURF
	return


AsteriSea_EventScript_DirectionSign::
# 26 "data/maps/SeaOfAsteri_West/scripts.pory"
	lock
# 27 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_DirectionSign_Text_0
# 28 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 29 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_UniversityStudentRouteCheck::
# 35 "data/maps/SeaOfAsteri_West/scripts.pory"
	lock
# 36 "data/maps/SeaOfAsteri_West/scripts.pory"
	faceplayer
# 37 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_UniversityStudentRouteCheck_Text_0
# 39 "data/maps/SeaOfAsteri_West/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_ASTERI_SEA, AsteriSea_EventScript_UniversityStudentRouteCheck_2
# 46 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_UniversityStudentRouteCheck_Text_2
# 47 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 48 "data/maps/SeaOfAsteri_West/scripts.pory"
	special CheckRouteCaptureProgress
# 49 "data/maps/SeaOfAsteri_West/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AsteriSea_EventScript_UniversityStudentRouteCheck_5
AsteriSea_EventScript_UniversityStudentRouteCheck_1:
# 66 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end

AsteriSea_EventScript_UniversityStudentRouteCheck_2:
# 41 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_UniversityStudentRouteCheck_Text_1
# 42 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
	goto AsteriSea_EventScript_UniversityStudentRouteCheck_1

AsteriSea_EventScript_UniversityStudentRouteCheck_5:
# 51 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 20
# 52 "data/maps/SeaOfAsteri_West/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 53 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_UniversityStudentRouteCheck_Text_0
# 54 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_UniversityStudentRouteCheck_Text_3
# 55 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 56 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 5
# 59 "data/maps/SeaOfAsteri_West/scripts.pory"
	giveitem ITEM_LIFE_ORB, 2
# 60 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 62 "data/maps/SeaOfAsteri_West/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_ASTERI_SEA
	goto AsteriSea_EventScript_UniversityStudentRouteCheck_1


AsteriSea_EventScript_Trainer_AsteriSea_Aeson::
# 72 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_AESON, AsteriSea_Text_Trainer_AsteriSea_AesonIntro, AsteriSea_Text_Trainer_AsteriSea_AesonDefeat
# 73 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Aeson_Text_0
# 74 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Aeson_Text_1
# 75 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 76 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Taleia::
# 90 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_TALEIA, AsteriSea_Text_Trainer_AsteriSea_TaleiaIntro, AsteriSea_Text_Trainer_AsteriSea_TaleiaDefeat
# 91 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Taleia_Text_0
# 92 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Taleia_Text_1
# 93 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 94 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Hamon::
# 108 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_HAMON, AsteriSea_Text_Trainer_AsteriSea_HamonIntro, AsteriSea_Text_Trainer_AsteriSea_HamonDefeat
# 109 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Hamon_Text_0
# 110 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Hamon_Text_1
# 111 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 112 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Georgia::
# 126 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_GEORGIA, AsteriSea_Text_Trainer_AsteriSea_GeorgiaIntro, AsteriSea_Text_Trainer_AsteriSea_GeorgiaDefeat
# 127 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Georgia_Text_0
# 128 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Georgia_Text_1
# 129 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 130 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_NPC_Picnicker::
# 144 "data/maps/SeaOfAsteri_West/scripts.pory"
	lock
# 145 "data/maps/SeaOfAsteri_West/scripts.pory"
	faceplayer
# 146 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_NPC_Picnicker_Text_0
# 147 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_Picnicker_Text_1
# 148 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 149 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Tryfon::
# 155 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_TRYFON, AsteriSea_Text_Trainer_AsteriSea_TryfonIntro, AsteriSea_Text_Trainer_AsteriSea_TryfonDefeat
# 156 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Tryfon_Text_0
# 157 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Tryfon_Text_1
# 158 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 159 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Willy::
# 173 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_WILLY, AsteriSea_Text_Trainer_AsteriSea_WillyIntro, AsteriSea_Text_Trainer_AsteriSea_WillyDefeat
# 174 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Willy_Text_0
# 175 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Willy_Text_1
# 176 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 177 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Celina::
# 191 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_CELINA, AsteriSea_Text_Trainer_AsteriSea_CelinaIntro, AsteriSea_Text_Trainer_AsteriSea_CelinaDefeat
# 192 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Celina_Text_0
# 193 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Celina_Text_1
# 194 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 195 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_NPC_ExpertM::
# 209 "data/maps/SeaOfAsteri_West/scripts.pory"
	lock
# 210 "data/maps/SeaOfAsteri_West/scripts.pory"
	faceplayer
# 211 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_NPC_ExpertM_Text_0
# 214 "data/maps/SeaOfAsteri_West/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ASTERI_SEA_PEARL_STRING
# 215 "data/maps/SeaOfAsteri_West/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AsteriSea_EventScript_NPC_ExpertM_2
# 224 "data/maps/SeaOfAsteri_West/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_ASTERI_SEA_PEARL_STRING
# 225 "data/maps/SeaOfAsteri_West/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AsteriSea_EventScript_NPC_ExpertM_5
# 237 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ExpertM_Text_3
# 238 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 240 "data/maps/SeaOfAsteri_West/scripts.pory"
	checkitem ITEM_PEARL_STRING
# 241 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 30
# 242 "data/maps/SeaOfAsteri_West/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AsteriSea_EventScript_NPC_ExpertM_8
# 254 "data/maps/SeaOfAsteri_West/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 255 "data/maps/SeaOfAsteri_West/scripts.pory"
	waitmovement 0
# 256 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 10
# 257 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_NPC_ExpertM_Text_0
# 258 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ExpertM_Text_5
# 259 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 260 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 5
# 261 "data/maps/SeaOfAsteri_West/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 262 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 264 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 20
# 265 "data/maps/SeaOfAsteri_West/scripts.pory"
	completequest QUEST_ASTERI_SEA_PEARL_STRING
AsteriSea_EventScript_NPC_ExpertM_4:
# 268 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end

AsteriSea_EventScript_NPC_ExpertM_2:
# 217 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ExpertM_Text_1
# 218 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 219 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end

AsteriSea_EventScript_NPC_ExpertM_5:
# 227 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ExpertM_Text_2
# 228 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 229 "data/maps/SeaOfAsteri_West/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 230 "data/maps/SeaOfAsteri_West/scripts.pory"
	waitmovement 0
# 232 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 20
# 233 "data/maps/SeaOfAsteri_West/scripts.pory"
	startquest QUEST_ASTERI_SEA_PEARL_STRING
	goto AsteriSea_EventScript_NPC_ExpertM_4

AsteriSea_EventScript_NPC_ExpertM_8:
# 244 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_NPC_ExpertM_Text_0
# 245 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ExpertM_Text_4
# 246 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 247 "data/maps/SeaOfAsteri_West/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 248 "data/maps/SeaOfAsteri_West/scripts.pory"
	waitmovement 0
# 249 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Kida::
# 274 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_KIDA, AsteriSea_Text_Trainer_AsteriSea_KidaIntro, AsteriSea_Text_Trainer_AsteriSea_KidaDefeat
# 275 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Kida_Text_0
# 276 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Kida_Text_1
# 277 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 278 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Sikar::
# 292 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_SIKAR, AsteriSea_Text_Trainer_AsteriSea_SikarIntro, AsteriSea_Text_Trainer_AsteriSea_SikarDefeat
# 293 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Sikar_Text_0
# 294 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Sikar_Text_1
# 295 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 296 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Hammon::
# 310 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_HAMMON, AsteriSea_Text_Trainer_AsteriSea_HammonIntro, AsteriSea_Text_Trainer_AsteriSea_HammonDefeat
# 311 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Hammon_Text_0
# 312 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Hammon_Text_1
# 313 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 314 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_NPC_ManExplainingDive::
# 328 "data/maps/SeaOfAsteri_West/scripts.pory"
	lock
# 329 "data/maps/SeaOfAsteri_West/scripts.pory"
	faceplayer
# 330 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_NPC_ManExplainingDive_Text_0
# 331 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ManExplainingDive_Text_1
# 332 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 333 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_DirectionSign_Text_0:
# 27 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Sea of Asteri - West\n"
	.string "A Diver's Delight\p"
	.string "{LEFT_ARROW} Sofos City\n"
	.string "Marmaro Island {RIGHT_ARROW}\n"
	.string "{DOWN_ARROW} Sea of Vulcai$"

AsteriSea_EventScript_UniversityStudentRouteCheck_Text_0:
# 37 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Uni. Student$"

AsteriSea_EventScript_UniversityStudentRouteCheck_Text_1:
# 41 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

AsteriSea_EventScript_UniversityStudentRouteCheck_Text_2:
# 46 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in the Sea of Asteri,\l"
	.string "both West and East sections. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

AsteriSea_EventScript_UniversityStudentRouteCheck_Text_3:
# 54 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

AsteriSea_EventScript_Trainer_AsteriSea_Aeson_Text_0:
# 73 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Aeson$"

AsteriSea_EventScript_Trainer_AsteriSea_Aeson_Text_1:
# 74 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "The water gets warmer as you swim\n"
	.string "further south.$"

AsteriSea_EventScript_Trainer_AsteriSea_Taleia_Text_0:
# 91 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Taleia$"

AsteriSea_EventScript_Trainer_AsteriSea_Taleia_Text_1:
# 92 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "With all these rocks and islands around,\n"
	.string "I guess it's not completely open ocean.$"

AsteriSea_EventScript_Trainer_AsteriSea_Hamon_Text_0:
# 109 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Hamon$"

AsteriSea_EventScript_Trainer_AsteriSea_Hamon_Text_1:
# 110 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Sliggoo can live on land and in the sea.\n"
	.string "It's the perfect combination!$"

AsteriSea_EventScript_Trainer_AsteriSea_Georgia_Text_0:
# 127 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Georgia$"

AsteriSea_EventScript_Trainer_AsteriSea_Georgia_Text_1:
# 128 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Some parts of the ocean are deep but\n"
	.string "safe enough to Dive in. I wish my\l"
	.string "Pokémon knew how to help me do that.$"

AsteriSea_EventScript_NPC_Picnicker_Text_0:
# 146 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Picnicker$"

AsteriSea_EventScript_NPC_Picnicker_Text_1:
# 147 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Little islands like this are scattered\n"
	.string "all over the sea. I wonder what Pokémon\l"
	.string "can be found here!$"

AsteriSea_EventScript_Trainer_AsteriSea_Tryfon_Text_0:
# 156 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Tryfon$"

AsteriSea_EventScript_Trainer_AsteriSea_Tryfon_Text_1:
# 157 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Some areas are too dangerous for\n"
	.string "people to Surf or swim through, because\l"
	.string "of bad currents or whirlpools. Everyone\l"
	.string "needs to take boats between islands in\l"
	.string "those places.$"

AsteriSea_EventScript_Trainer_AsteriSea_Willy_Text_0:
# 174 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Willy$"

AsteriSea_EventScript_Trainer_AsteriSea_Willy_Text_1:
# 175 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Sometimes I see people {COLOR GREEN}Dive into the\n"
	.string "Crescent Trench{COLOR DARK_GRAY}. That's the only way to\l"
	.string "swim {COLOR GREEN}south{COLOR DARK_GRAY}. I wanna try it someday!$"

AsteriSea_EventScript_Trainer_AsteriSea_Celina_Text_0:
# 192 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Celina$"

AsteriSea_EventScript_Trainer_AsteriSea_Celina_Text_1:
# 193 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "These little sandbars and atolls are\n"
	.string "perfect for some peaceful time alone.$"

AsteriSea_EventScript_NPC_ExpertM_Text_0:
# 211 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Old Man$"

AsteriSea_EventScript_NPC_ExpertM_Text_1:
# 217 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Thanks to you, my wife will have her\n"
	.string "Pearl String necklace back! Once I'm all\l"
	.string "rested up, I'll take a nice swim back to\l"
	.string "Marmaro Island.$"

AsteriSea_EventScript_NPC_ExpertM_Text_2:
# 227 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Perfect, a young Trainer is just who I\n"
	.string "needed! I'm in quite a pickle here...\p"
	.string "I bought a {COLOR GREEN}Pearl String{COLOR DARK_GRAY} necklace for my\n"
	.string "wife when we were married, and she's\l"
	.string "worn it every day since. When I was\l"
	.string "young, I made it out of Pearls I found\l"
	.string "here, so I bring it back every few\l"
	.string "months to wash it in the sea. But my old\l"
	.string "hands aren't what they used to be, so I\l"
	.string "dropped it into the Crescent Trench!\p"
	.string "Please, if you could {COLOR GREEN}Dive{COLOR DARK_GRAY} into the water\n"
	.string "and {COLOR GREEN}bring the Pearl String{COLOR DARK_GRAY}, it would\l"
	.string "mean the world!$"

AsteriSea_EventScript_NPC_ExpertM_Text_3:
# 237 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Oh, hi there. Did you happen to find the\n"
	.string "{COLOR GREEN}Pearl String{COLOR DARK_GRAY} I lost?$"

AsteriSea_EventScript_NPC_ExpertM_Text_4:
# 245 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Nothing, huh? It's alright, I knew it was\n"
	.string "a long shot, anyway...\p"
	.string "If you happen to find a {COLOR GREEN}Pearl String{COLOR DARK_GRAY},\n"
	.string "please bring it back to me!$"

AsteriSea_EventScript_NPC_ExpertM_Text_5:
# 258 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "That's it! A {COLOR GREEN}Pearl String{COLOR DARK_GRAY} necklace! It\n"
	.string "must be the one I dropped!\p"
	.string "This was an important keepsake for us.\n"
	.string "Please, take this as my thanks.$"

AsteriSea_EventScript_Trainer_AsteriSea_Kida_Text_0:
# 275 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Kida$"

AsteriSea_EventScript_Trainer_AsteriSea_Kida_Text_1:
# 276 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "You're a pretty strong Trainer. We can\n"
	.string "share the island!$"

AsteriSea_EventScript_Trainer_AsteriSea_Sikar_Text_0:
# 293 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Sikar$"

AsteriSea_EventScript_Trainer_AsteriSea_Sikar_Text_1:
# 294 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I guess I'm a little jumpy after sitting\n"
	.string "here fishing all day.$"

AsteriSea_EventScript_Trainer_AsteriSea_Hammon_Text_0:
# 311 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Hammon$"

AsteriSea_EventScript_Trainer_AsteriSea_Hammon_Text_1:
# 312 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Ancient athletes used to train in harsh\n"
	.string "conditions like this.$"

AsteriSea_EventScript_NPC_ManExplainingDive_Text_0:
# 330 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Man$"

AsteriSea_EventScript_NPC_ManExplainingDive_Text_1:
# 331 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Hmm, what to do...\p"
	.string "The only way to head {COLOR GREEN}south to the\n"
	.string "Fresco Isles{COLOR DARK_GRAY} is by {COLOR GREEN}Diving in the\l"
	.string "Crescent Trench{COLOR DARK_GRAY}. Problem is, I don't\l"
	.string "know how to Dive yet!$"

AsteriSea_Text_Trainer_AsteriSea_AesonIntro::
# 79 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "There are so many tiny islands and\n"
	.string "atolls in this part of the sea!$"

AsteriSea_Text_Trainer_AsteriSea_AesonDefeat::
# 83 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I better swim to an island to rest!$"

AsteriSea_Text_Trainer_AsteriSea_TaleiaIntro::
# 97 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I made it, it's the open sea! Let's\n"
	.string "battle to celebrate!$"

AsteriSea_Text_Trainer_AsteriSea_TaleiaDefeat::
# 101 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Back to shore I go...$"

AsteriSea_Text_Trainer_AsteriSea_HamonIntro::
# 115 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Look at this Pokémon I found!$"

AsteriSea_Text_Trainer_AsteriSea_HamonDefeat::
# 119 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "No! My Sliggoo!$"

AsteriSea_Text_Trainer_AsteriSea_GeorgiaIntro::
# 133 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "The water gets way deeper over here!$"

AsteriSea_Text_Trainer_AsteriSea_GeorgiaDefeat::
# 137 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Aw, I've been sunk!$"

AsteriSea_Text_Trainer_AsteriSea_TryfonIntro::
# 162 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I've battled a ton of Pokémon just by\n"
	.string "swimming around!$"

AsteriSea_Text_Trainer_AsteriSea_TryfonDefeat::
# 166 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Looks like I need more training.$"

AsteriSea_Text_Trainer_AsteriSea_WillyIntro::
# 180 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Ehehe, look how close I can get to the\n"
	.string "{COLOR GREEN}Crescent Trench{COLOR DARK_GRAY}! Maybe I'll Dive down\l"
	.string "and swim to the {COLOR GREEN}Sea of Vulcai{COLOR DARK_GRAY}!$"

AsteriSea_Text_Trainer_AsteriSea_WillyDefeat::
# 184 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Eek! Swim away!$"

AsteriSea_Text_Trainer_AsteriSea_CelinaIntro::
# 198 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I swam here for time alone. Find another\n"
	.string "island!$"

AsteriSea_Text_Trainer_AsteriSea_CelinaDefeat::
# 202 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Fine, I guess you can stay.$"

AsteriSea_Text_Trainer_AsteriSea_KidaIntro::
# 281 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Bwahaha, finally! An island to claim as\n"
	.string "my own!\p"
	.string "Huh? There's someone else here?$"

AsteriSea_Text_Trainer_AsteriSea_KidaDefeat::
# 285 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Hey, it's still my island!$"

AsteriSea_Text_Trainer_AsteriSea_SikarIntro::
# 299 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "AIE!! Hey, don't scare me like that!$"

AsteriSea_Text_Trainer_AsteriSea_SikarDefeat::
# 303 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "You only won because I was surprised!$"

AsteriSea_Text_Trainer_AsteriSea_HammonIntro::
# 317 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I heard that intense training leads to\n"
	.string "intense muscles. I hope that's true!$"

AsteriSea_Text_Trainer_AsteriSea_HammonDefeat::
# 321 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Huff... puff...$"

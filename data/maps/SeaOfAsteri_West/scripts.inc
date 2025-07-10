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


AsteriSea_EventScript_Trainer_AsteriSea_Aeson::
# 35 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_AESON, AsteriSea_Text_Trainer_AsteriSea_AesonIntro, AsteriSea_Text_Trainer_AsteriSea_AesonDefeat
# 36 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Aeson_Text_0
# 37 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Aeson_Text_1
# 38 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 39 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Taleia::
# 53 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_TALEIA, AsteriSea_Text_Trainer_AsteriSea_TaleiaIntro, AsteriSea_Text_Trainer_AsteriSea_TaleiaDefeat
# 54 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Taleia_Text_0
# 55 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Taleia_Text_1
# 56 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 57 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Hamon::
# 71 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_HAMON, AsteriSea_Text_Trainer_AsteriSea_HamonIntro, AsteriSea_Text_Trainer_AsteriSea_HamonDefeat
# 72 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Hamon_Text_0
# 73 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Hamon_Text_1
# 74 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 75 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Georgia::
# 89 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_GEORGIA, AsteriSea_Text_Trainer_AsteriSea_GeorgiaIntro, AsteriSea_Text_Trainer_AsteriSea_GeorgiaDefeat
# 90 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Georgia_Text_0
# 91 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Georgia_Text_1
# 92 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 93 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_NPC_Picnicker::
# 107 "data/maps/SeaOfAsteri_West/scripts.pory"
	lock
# 108 "data/maps/SeaOfAsteri_West/scripts.pory"
	faceplayer
# 109 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_NPC_Picnicker_Text_0
# 110 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_Picnicker_Text_1
# 111 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 112 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Tryfon::
# 118 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_TRYFON, AsteriSea_Text_Trainer_AsteriSea_TryfonIntro, AsteriSea_Text_Trainer_AsteriSea_TryfonDefeat
# 119 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Tryfon_Text_0
# 120 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Tryfon_Text_1
# 121 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 122 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Willy::
# 136 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_WILLY, AsteriSea_Text_Trainer_AsteriSea_WillyIntro, AsteriSea_Text_Trainer_AsteriSea_WillyDefeat
# 137 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Willy_Text_0
# 138 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Willy_Text_1
# 139 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 140 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Celina::
# 154 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_CELINA, AsteriSea_Text_Trainer_AsteriSea_CelinaIntro, AsteriSea_Text_Trainer_AsteriSea_CelinaDefeat
# 155 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Celina_Text_0
# 156 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Celina_Text_1
# 157 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 158 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_NPC_ExpertM::
# 172 "data/maps/SeaOfAsteri_West/scripts.pory"
	lock
# 173 "data/maps/SeaOfAsteri_West/scripts.pory"
	faceplayer
# 174 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_NPC_ExpertM_Text_0
# 177 "data/maps/SeaOfAsteri_West/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_ASTERI_SEA_PEARL_STRING
# 178 "data/maps/SeaOfAsteri_West/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AsteriSea_EventScript_NPC_ExpertM_2
# 187 "data/maps/SeaOfAsteri_West/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_ASTERI_SEA_PEARL_STRING
# 188 "data/maps/SeaOfAsteri_West/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AsteriSea_EventScript_NPC_ExpertM_5
# 200 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ExpertM_Text_3
# 201 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 203 "data/maps/SeaOfAsteri_West/scripts.pory"
	checkitem ITEM_PEARL_STRING
# 204 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 30
# 205 "data/maps/SeaOfAsteri_West/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq AsteriSea_EventScript_NPC_ExpertM_8
# 217 "data/maps/SeaOfAsteri_West/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 218 "data/maps/SeaOfAsteri_West/scripts.pory"
	waitmovement 0
# 219 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 10
# 220 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_NPC_ExpertM_Text_0
# 221 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ExpertM_Text_5
# 222 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 223 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 5
# 224 "data/maps/SeaOfAsteri_West/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 225 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 227 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 20
# 228 "data/maps/SeaOfAsteri_West/scripts.pory"
	completequest QUEST_ASTERI_SEA_PEARL_STRING
AsteriSea_EventScript_NPC_ExpertM_4:
# 231 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end

AsteriSea_EventScript_NPC_ExpertM_2:
# 180 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ExpertM_Text_1
# 181 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 182 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end

AsteriSea_EventScript_NPC_ExpertM_5:
# 190 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ExpertM_Text_2
# 191 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 192 "data/maps/SeaOfAsteri_West/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 193 "data/maps/SeaOfAsteri_West/scripts.pory"
	waitmovement 0
# 195 "data/maps/SeaOfAsteri_West/scripts.pory"
	delay 20
# 196 "data/maps/SeaOfAsteri_West/scripts.pory"
	startquest QUEST_ASTERI_SEA_PEARL_STRING
	goto AsteriSea_EventScript_NPC_ExpertM_4

AsteriSea_EventScript_NPC_ExpertM_8:
# 207 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_NPC_ExpertM_Text_0
# 208 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ExpertM_Text_4
# 209 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 210 "data/maps/SeaOfAsteri_West/scripts.pory"
	applymovement 9, Common_Movement_FaceLeft
# 211 "data/maps/SeaOfAsteri_West/scripts.pory"
	waitmovement 0
# 212 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Kida::
# 237 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_KIDA, AsteriSea_Text_Trainer_AsteriSea_KidaIntro, AsteriSea_Text_Trainer_AsteriSea_KidaDefeat
# 238 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Kida_Text_0
# 239 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Kida_Text_1
# 240 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 241 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Sikar::
# 255 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_SIKAR, AsteriSea_Text_Trainer_AsteriSea_SikarIntro, AsteriSea_Text_Trainer_AsteriSea_SikarDefeat
# 256 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Sikar_Text_0
# 257 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Sikar_Text_1
# 258 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 259 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_Trainer_AsteriSea_Hammon::
# 273 "data/maps/SeaOfAsteri_West/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_HAMMON, AsteriSea_Text_Trainer_AsteriSea_HammonIntro, AsteriSea_Text_Trainer_AsteriSea_HammonDefeat
# 274 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_Trainer_AsteriSea_Hammon_Text_0
# 275 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_Trainer_AsteriSea_Hammon_Text_1
# 276 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 277 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_NPC_ManExplainingDive::
# 291 "data/maps/SeaOfAsteri_West/scripts.pory"
	lock
# 292 "data/maps/SeaOfAsteri_West/scripts.pory"
	faceplayer
# 293 "data/maps/SeaOfAsteri_West/scripts.pory"
	speakername AsteriSea_EventScript_NPC_ManExplainingDive_Text_0
# 294 "data/maps/SeaOfAsteri_West/scripts.pory"
	msgbox AsteriSea_EventScript_NPC_ManExplainingDive_Text_1
# 295 "data/maps/SeaOfAsteri_West/scripts.pory"
	closemessage
# 296 "data/maps/SeaOfAsteri_West/scripts.pory"
	release
	end


AsteriSea_EventScript_DirectionSign_Text_0:
# 27 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Sea of Asteri - West\n"
	.string "A Diver's Delight\p"
	.string "{LEFT_ARROW} Sofos City\n"
	.string "Marmaro Island {RIGHT_ARROW}\n"
	.string "{DOWN_ARROW} Sea of Vulcai$"

AsteriSea_EventScript_Trainer_AsteriSea_Aeson_Text_0:
# 36 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Aeson$"

AsteriSea_EventScript_Trainer_AsteriSea_Aeson_Text_1:
# 37 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "The water gets warmer as you swim\n"
	.string "further south.$"

AsteriSea_EventScript_Trainer_AsteriSea_Taleia_Text_0:
# 54 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Taleia$"

AsteriSea_EventScript_Trainer_AsteriSea_Taleia_Text_1:
# 55 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "With all these rocks and islands around,\n"
	.string "I guess it's not completely open ocean.$"

AsteriSea_EventScript_Trainer_AsteriSea_Hamon_Text_0:
# 72 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Hamon$"

AsteriSea_EventScript_Trainer_AsteriSea_Hamon_Text_1:
# 73 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Sliggoo can live on land and in the sea.\n"
	.string "It's the perfect combination!$"

AsteriSea_EventScript_Trainer_AsteriSea_Georgia_Text_0:
# 90 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Georgia$"

AsteriSea_EventScript_Trainer_AsteriSea_Georgia_Text_1:
# 91 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Some parts of the ocean are deep but\n"
	.string "safe enough to Dive in. I wish my\l"
	.string "Pokémon knew how to help me do that.$"

AsteriSea_EventScript_NPC_Picnicker_Text_0:
# 109 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Picnicker$"

AsteriSea_EventScript_NPC_Picnicker_Text_1:
# 110 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Little islands like this are scattered\n"
	.string "all over the sea. I wonder what Pokémon\l"
	.string "can be found here!$"

AsteriSea_EventScript_Trainer_AsteriSea_Tryfon_Text_0:
# 119 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Tryfon$"

AsteriSea_EventScript_Trainer_AsteriSea_Tryfon_Text_1:
# 120 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Some areas are too dangerous for\n"
	.string "people to Surf or swim through, because\l"
	.string "of bad currents or whirlpools. Everyone\l"
	.string "needs to take boats between islands in\l"
	.string "those places.$"

AsteriSea_EventScript_Trainer_AsteriSea_Willy_Text_0:
# 137 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Willy$"

AsteriSea_EventScript_Trainer_AsteriSea_Willy_Text_1:
# 138 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Sometimes I see people {COLOR GREEN}Dive into the\n"
	.string "Crescent Trench{COLOR DARK_GRAY}. That's the only way to\l"
	.string "swim {COLOR GREEN}south{COLOR DARK_GRAY}. I wanna try it someday!$"

AsteriSea_EventScript_Trainer_AsteriSea_Celina_Text_0:
# 155 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Celina$"

AsteriSea_EventScript_Trainer_AsteriSea_Celina_Text_1:
# 156 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "These little sandbars and atolls are\n"
	.string "perfect for some peaceful time alone.$"

AsteriSea_EventScript_NPC_ExpertM_Text_0:
# 174 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Old Man$"

AsteriSea_EventScript_NPC_ExpertM_Text_1:
# 180 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Thanks to you, my wife will have her\n"
	.string "Pearl String necklace back! Once I'm all\l"
	.string "rested up, I'll take a nice swim back to\l"
	.string "Marmaro Island.$"

AsteriSea_EventScript_NPC_ExpertM_Text_2:
# 190 "data/maps/SeaOfAsteri_West/scripts.pory"
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
# 200 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Oh, hi there. Did you happen to find the\n"
	.string "{COLOR GREEN}Pearl String{COLOR DARK_GRAY} I lost?$"

AsteriSea_EventScript_NPC_ExpertM_Text_4:
# 208 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Nothing, huh? It's alright, I knew it was\n"
	.string "a long shot, anyway...\p"
	.string "If you happen to find a {COLOR GREEN}Pearl String{COLOR DARK_GRAY},\n"
	.string "please bring it back to me!$"

AsteriSea_EventScript_NPC_ExpertM_Text_5:
# 221 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "That's it! A {COLOR GREEN}Pearl String{COLOR DARK_GRAY} necklace! It\n"
	.string "must be the one I dropped!\p"
	.string "This was an important keepsake for us.\n"
	.string "Please, take this as my thanks.$"

AsteriSea_EventScript_Trainer_AsteriSea_Kida_Text_0:
# 238 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Kida$"

AsteriSea_EventScript_Trainer_AsteriSea_Kida_Text_1:
# 239 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "You're a pretty strong Trainer. We can\n"
	.string "share the island!$"

AsteriSea_EventScript_Trainer_AsteriSea_Sikar_Text_0:
# 256 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Sikar$"

AsteriSea_EventScript_Trainer_AsteriSea_Sikar_Text_1:
# 257 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I guess I'm a little jumpy after sitting\n"
	.string "here fishing all day.$"

AsteriSea_EventScript_Trainer_AsteriSea_Hammon_Text_0:
# 274 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Hammon$"

AsteriSea_EventScript_Trainer_AsteriSea_Hammon_Text_1:
# 275 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Ancient athletes used to train in harsh\n"
	.string "conditions like this.$"

AsteriSea_EventScript_NPC_ManExplainingDive_Text_0:
# 293 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Man$"

AsteriSea_EventScript_NPC_ManExplainingDive_Text_1:
# 294 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Hmm, what to do...\p"
	.string "The only way to head {COLOR GREEN}south to the\n"
	.string "Fresco Isles{COLOR DARK_GRAY} is by {COLOR GREEN}Diving in the\l"
	.string "Crescent Trench{COLOR DARK_GRAY}. Problem is, I don't\l"
	.string "know how to Dive yet!$"

AsteriSea_Text_Trainer_AsteriSea_AesonIntro::
# 42 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "There are so many tiny islands and\n"
	.string "atolls in this part of the sea!$"

AsteriSea_Text_Trainer_AsteriSea_AesonDefeat::
# 46 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I better swim to an island to rest!$"

AsteriSea_Text_Trainer_AsteriSea_TaleiaIntro::
# 60 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I made it, it's the open sea! Let's\n"
	.string "battle to celebrate!$"

AsteriSea_Text_Trainer_AsteriSea_TaleiaDefeat::
# 64 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Back to shore I go...$"

AsteriSea_Text_Trainer_AsteriSea_HamonIntro::
# 78 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Look at this Pokémon I found!$"

AsteriSea_Text_Trainer_AsteriSea_HamonDefeat::
# 82 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "No! My Sliggoo!$"

AsteriSea_Text_Trainer_AsteriSea_GeorgiaIntro::
# 96 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "The water gets way deeper over here!$"

AsteriSea_Text_Trainer_AsteriSea_GeorgiaDefeat::
# 100 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Aw, I've been sunk!$"

AsteriSea_Text_Trainer_AsteriSea_TryfonIntro::
# 125 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I've battled a ton of Pokémon just by\n"
	.string "swimming around!$"

AsteriSea_Text_Trainer_AsteriSea_TryfonDefeat::
# 129 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Looks like I need more training.$"

AsteriSea_Text_Trainer_AsteriSea_WillyIntro::
# 143 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Ehehe, look how close I can get to the\n"
	.string "{COLOR GREEN}Crescent Trench{COLOR DARK_GRAY}! Maybe I'll Dive down\l"
	.string "and swim to the {COLOR GREEN}Sea of Vulcai{COLOR DARK_GRAY}!$"

AsteriSea_Text_Trainer_AsteriSea_WillyDefeat::
# 147 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Eek! Swim away!$"

AsteriSea_Text_Trainer_AsteriSea_CelinaIntro::
# 161 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I swam here for time alone. Find another\n"
	.string "island!$"

AsteriSea_Text_Trainer_AsteriSea_CelinaDefeat::
# 165 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Fine, I guess you can stay.$"

AsteriSea_Text_Trainer_AsteriSea_KidaIntro::
# 244 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Bwahaha, finally! An island to claim as\n"
	.string "my own!\p"
	.string "Huh? There's someone else here?$"

AsteriSea_Text_Trainer_AsteriSea_KidaDefeat::
# 248 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Hey, it's still my island!$"

AsteriSea_Text_Trainer_AsteriSea_SikarIntro::
# 262 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "AIE!! Hey, don't scare me like that!$"

AsteriSea_Text_Trainer_AsteriSea_SikarDefeat::
# 266 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "You only won because I was surprised!$"

AsteriSea_Text_Trainer_AsteriSea_HammonIntro::
# 280 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "I heard that intense training leads to\n"
	.string "intense muscles. I hope that's true!$"

AsteriSea_Text_Trainer_AsteriSea_HammonDefeat::
# 284 "data/maps/SeaOfAsteri_West/scripts.pory"
	.string "Huff... puff...$"

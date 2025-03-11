JusmailTown_MapScripts::
# 2 "data/maps/JusmailTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JusmailTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 9 "data/maps/JusmailTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, JusmailTown_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
	.byte 0

JusmailTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_VISITED_JUSMAIL_TOWN
# 6 "data/maps/JusmailTown/scripts.pory"
	clearflag FLAG_TRIGGERED_WINDMILL_SPAWN
	return

JusmailTown_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 10 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_SpawnWindmillVirtualObjects
	return


JusmailTown_EventScript_TriggerWindmillSpawn::
# 16 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_TRIGGERED_WINDMILL_SPAWN
# 17 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_SpawnWindmillVirtualObjects
	return


JusmailTown_SpawnWindmillVirtualObjects::
# 24 "data/maps/JusmailTown/scripts.pory"
	goto_if_set FLAG_TRIGGERED_WINDMILL_SPAWN, JusmailTown_SpawnWindmillVirtualObjects_2
JusmailTown_SpawnWindmillVirtualObjects_1:
# 32 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_SpawnWindmillVirtualObjects_2:
# 26 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TL, 16, 20, 19, 4, DIR_SOUTH
# 27 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TR, 17, 24, 19, 4, DIR_SOUTH
# 28 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BL, 18, 20, 23, 4, DIR_SOUTH
# 29 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BR, 19, 24, 23, 4, DIR_SOUTH
	goto JusmailTown_SpawnWindmillVirtualObjects_1


JusmailTown_Sign_GymSign::
# 38 "data/maps/JusmailTown/scripts.pory"
	lock
# 39 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_Sign_GymSign_Text_0
# 40 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 41 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Woman::
# 47 "data/maps/JusmailTown/scripts.pory"
	lock
# 48 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 49 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Woman_Text_0
# 50 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Woman_Text_1
# 51 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 52 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Boy::
# 58 "data/maps/JusmailTown/scripts.pory"
	lock
# 59 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 60 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Boy_Text_0
# 61 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Boy_Text_1
# 62 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 63 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Farmer::
# 69 "data/maps/JusmailTown/scripts.pory"
	lock
# 70 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 71 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Farmer_Text_0
# 72 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Farmer_Text_1
# 73 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 74 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_MarketMan::
# 80 "data/maps/JusmailTown/scripts.pory"
	lock
# 81 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 82 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_MarketMan_Text_0
# 83 "data/maps/JusmailTown/scripts.pory"
	message JusmailTown_EventScript_MarketMan_Text_1
# 84 "data/maps/JusmailTown/scripts.pory"
	waitmessage
# 85 "data/maps/JusmailTown/scripts.pory"
	pokemart JusmailTown_Mart
# 86 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_MarketMan_Text_0
# 87 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_MarketMan_Text_2
# 88 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 89 "data/maps/JusmailTown/scripts.pory"
	release
	end


	.align 2
# 93 "data/maps/JusmailTown/scripts.pory"
JusmailTown_Mart:
# 95 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 96 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_POTION
# 97 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 98 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

JusmailTown_EventScript_RockSmashHiker::
# 103 "data/maps/JusmailTown/scripts.pory"
	lock
# 104 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 105 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_BROKE_JUSMAIL_TOWN_ROCKS, JusmailTown_EventScript_RockSmashHiker_2
# 113 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RockSmashHiker_Text_0
# 114 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RockSmashHiker_Text_2
# 115 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_RockSmashHiker_1:
# 117 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_RockSmashHiker_2:
# 107 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RockSmashHiker_Text_0
# 108 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RockSmashHiker_Text_1
# 109 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_RockSmashHiker_1


JusmailTown_EventScript_RaniaEventTrigger::
# 125 "data/maps/JusmailTown/scripts.pory"
	lock
# 126 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 127 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 128 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_EventScript_RaniaEvent
	end


JusmailTown_EventScript_RaniaEvent::
# 134 "data/maps/JusmailTown/scripts.pory"
	lockall
# 135 "data/maps/JusmailTown/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 136 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 137 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 138 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_1, MSGBOX_YESNO
# 139 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_EventScript_RaniaEvent_2
# 149 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 150 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_3
# 152 "data/maps/JusmailTown/scripts.pory"
	trainerbattle_no_intro TRAINER_JUSMAIL_RANIA, JusmailTown_Text_RaniaDefeated
# 155 "data/maps/JusmailTown/scripts.pory"
	lockall
# 156 "data/maps/JusmailTown/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 157 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 159 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_4
# 160 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 161 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_HM_CUT
# 162 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 163 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_5
# 164 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 167 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
# 168 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_RANIA_STATE, 1
# 169 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_NIKO_STATE, 1
# 170 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 171 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 172 "data/maps/JusmailTown/scripts.pory"
	removeobject 11
# 173 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 174 "data/maps/JusmailTown/scripts.pory"
	delay 20
JusmailTown_EventScript_RaniaEvent_1:
# 176 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_RaniaEvent_2:
# 141 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 142 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_2
# 143 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 144 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 145 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
	goto JusmailTown_EventScript_RaniaEvent_1


JusmailTown_EventScript_WishingWell::
# 192 "data/maps/JusmailTown/scripts.pory"
	lockall
# 193 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_0
# 194 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 196 "data/maps/JusmailTown/scripts.pory"
	checkitem ITEM_WISHING_STAR
# 198 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_2
JusmailTown_EventScript_WishingWell_1:
# 414 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_WishingWell_2:
# 200 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_1, MSGBOX_YESNO
# 202 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_4
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_4:
# 205 "data/maps/JusmailTown/scripts.pory"
	removeitem ITEM_WISHING_STAR
# 207 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_2
# 208 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 209 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_3
# 210 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 213 "data/maps/JusmailTown/scripts.pory"
	randomelement SPECIES_ROWLET, SPECIES_LITTEN, SPECIES_POPPLIO, SPECIES_CHESPIN, SPECIES_FENNEKIN, SPECIES_FROAKIE, SPECIES_SPRIGATITO, SPECIES_FUECOCO, SPECIES_QUAXLY, SPECIES_PANSAGE, SPECIES_PANSEAR, SPECIES_PANPOUR, SPECIES_LILLIPUP, SPECIES_PIKIPEK, SPECIES_DUCKLETT, SPECIES_HOPPIP, SPECIES_NINCADA, SPECIES_GRUBBIN, SPECIES_PARAS, SPECIES_PHANPY, SPECIES_SNOM, SPECIES_CUBONE, SPECIES_MUDBRAY, SPECIES_MAREEP, SPECIES_CUTIEFLY, SPECIES_GRIMER, SPECIES_GRIMER_ALOLAN, SPECIES_WURMPLE, SPECIES_TROPIUS, SPECIES_RALTS, SPECIES_EEVEE, SPECIES_SKIDDO, SPECIES_MURKROW, SPECIES_ORICORIO_BAILE, SPECIES_ORICORIO_POM_POM, SPECIES_ORICORIO_PAU, SPECIES_ORICORIO_SENSU, SPECIES_SANDSHREW, SPECIES_SANDSHREW_ALOLAN, SPECIES_NOSEPASS, SPECIES_MAWILE, SPECIES_ROCKRUFF, SPECIES_VULLABY, SPECIES_WOOBAT, SPECIES_ARON, SPECIES_TIMBURR, SPECIES_KLAWF, SPECIES_POLIWAG, SPECIES_PUMPKABOO, SPECIES_SHROOMISH, SPECIES_HERACROSS, SPECIES_SHUPPET, SPECIES_AIPOM, SPECIES_WOOPER, SPECIES_WOOPER_PALDEAN, SPECIES_TOEDSCOOL, SPECIES_BLITZLE, SPECIES_HOOTHOOT, SPECIES_MIENFOO, SPECIES_FLITTLE, SPECIES_VULPIX, SPECIES_VULPIX_ALOLAN, SPECIES_HONEDGE, SPECIES_DWEBBLE, SPECIES_MINIOR, SPECIES_GASTLY, SPECIES_BALTOY, SPECIES_SALANDIT, SPECIES_TOGEPI, SPECIES_CHERUBI, SPECIES_HOUNDOUR, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_SKORUPI, SPECIES_SPINARAK, SPECIES_ONIX, SPECIES_KOMALA, SPECIES_WINGULL, SPECIES_STANTLER, SPECIES_SNORUNT, SPECIES_SPHEAL, SPECIES_SEEL, SPECIES_BRONZOR, SPECIES_ZORUA, SPECIES_ZORUA_HISUI, SPECIES_SNEASEL, SPECIES_SNEASEL_HISUI, SPECIES_MEOWTH, SPECIES_MEOWTH_ALOLAN, SPECIES_MEOWTH_GALAR, SPECIES_PACHIRISU, SPECIES_TYRUNT, SPECIES_AMAURA, SPECIES_ELECTRIKE, SPECIES_PAWMI, SPECIES_SHROODLE, SPECIES_BUIZEL, SPECIES_STUNKY, SPECIES_CORSOLA, SPECIES_CORSOLA_GALAR, SPECIES_FINNEON, SPECIES_WAILMER, SPECIES_TENTACOOL, SPECIES_CLAUNCHER, SPECIES_SCYTHER, SPECIES_STUFFUL, SPECIES_BAGON, SPECIES_TOGEDEMARU, SPECIES_CRABRAWLER, SPECIES_LILEEP, SPECIES_ANORITH, SPECIES_DEDENNE, SPECIES_CHATOT, SPECIES_MEDITITE, SPECIES_DROWZEE, SPECIES_EKANS, SPECIES_BASCULIN_WHITE_STRIPED, SPECIES_PANCHAM, SPECIES_SKRELP, SPECIES_GOTHITA, SPECIES_SOLOSIS, SPECIES_LITWICK, SPECIES_CHARCADET, SPECIES_CHINCHOU, SPECIES_SHELLDER, SPECIES_CLAMPERL, SPECIES_FLABEBE, SPECIES_IGGLYBUFF, SPECIES_HELIOPTILE, SPECIES_TRAPINCH, SPECIES_DODUO, SPECIES_TINKATINK, SPECIES_SCRAGGY, SPECIES_GLIGAR, SPECIES_TORKOAL, SPECIES_NUMEL, SPECIES_RELICANTH, SPECIES_BARBOACH, SPECIES_MUNNA, SPECIES_KECLEON, SPECIES_MAGIKARP, SPECIES_FOMANTIS, SPECIES_ORANGURU, SPECIES_PASSIMIAN, SPECIES_ZIGZAGOON, SPECIES_ZIGZAGOON_GALAR, SPECIES_GOOMY, SPECIES_BRUXISH, SPECIES_IMPIDIMP, SPECIES_SWABLU, SPECIES_MANKEY, SPECIES_VOLTORB, SPECIES_VOLTORB_HISUI, SPECIES_LAPRAS, SPECIES_GIRAFARIG, SPECIES_BUDEW, SPECIES_MAGNEMITE, SPECIES_CUBCHOO, SPECIES_GROWLITHE, SPECIES_GROWLITHE_HISUI, SPECIES_PSYDUCK, SPECIES_YANMA, SPECIES_AERODACTYL, SPECIES_REMORAID, SPECIES_RUFFLET, SPECIES_NATU, SPECIES_SNOVER, SPECIES_DUSKULL, SPECIES_SWINUB, SPECIES_CORPHISH, SPECIES_UNOWN, SPECIES_TIRTOUGA, SPECIES_ARCHEN, SPECIES_LARVITAR, SPECIES_DHELMISE, SPECIES_DRATINI, SPECIES_BOUNSWEET, SPECIES_CUFANT, SPECIES_FINIZEN, SPECIES_APPLIN, SPECIES_SANDILE, SPECIES_FALINKS
# 396 "data/maps/JusmailTown/scripts.pory"
	givemon VAR_RESULT, 1
# 397 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_4
# 398 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 399 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq JusmailTown_EventScript_WishingWell_6
# 406 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 407 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_5
# 408 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_6:
# 401 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 402 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto JusmailTown_EventScript_WishingWell_1


JusmailTown_EventScript_LittleGirlWithWishingStar::
# 422 "data/maps/JusmailTown/scripts.pory"
	lock
# 423 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 424 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 425 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL, JusmailTown_EventScript_LittleGirlWithWishingStar_2
# 437 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3
# 438 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_LittleGirlWithWishingStar_1:
# 440 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_LittleGirlWithWishingStar_2:
# 427 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1
# 428 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 429 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 430 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2
# 431 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 432 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_WISHING_STAR, 3
# 433 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL
	goto JusmailTown_EventScript_LittleGirlWithWishingStar_1


JusmailTown_EventScript_WishingWellSign::
# 448 "data/maps/JusmailTown/scripts.pory"
	lock
# 449 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_0
# 450 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 451 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_1
# 452 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 453 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_Sign_GymSign_Text_0:
# 39 "data/maps/JusmailTown/scripts.pory"
	.string "Gym Leader: Deo\n"
	.string "The Plant-Friendly Farmer$"

JusmailTown_EventScript_NPC_Woman_Text_0:
# 49 "data/maps/JusmailTown/scripts.pory"
	.string "Woman$"

JusmailTown_EventScript_NPC_Woman_Text_1:
# 50 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town is a really small community,\n"
	.string "but I love it like this. We live alongside\l"
	.string "nature here, not in conflict with it.$"

JusmailTown_EventScript_NPC_Boy_Text_0:
# 60 "data/maps/JusmailTown/scripts.pory"
	.string "Boy$"

JusmailTown_EventScript_NPC_Boy_Text_1:
# 61 "data/maps/JusmailTown/scripts.pory"
	.string "Flying-type Pokémon are good against\n"
	.string "Deo's Pokémon, Bug and Grass-type\l"
	.string "Pokémon.\p"
	.string "I hear most Gym Leaders have a Pokémon\n"
	.string "that is strong against whatever the\l"
	.string "Leader is weak against. Sounds like\l"
	.string "they're tough fights!$"

JusmailTown_EventScript_NPC_Farmer_Text_0:
# 71 "data/maps/JusmailTown/scripts.pory"
	.string "Farmer$"

JusmailTown_EventScript_NPC_Farmer_Text_1:
# 72 "data/maps/JusmailTown/scripts.pory"
	.string "Bleugh, lots of bugs around here...\n"
	.string "they're cute, but their little legs\l"
	.string "scare me!$"

JusmailTown_EventScript_MarketMan_Text_0:
# 82 "data/maps/JusmailTown/scripts.pory"
	.string "Market Man$"

JusmailTown_EventScript_MarketMan_Text_1:
# 83 "data/maps/JusmailTown/scripts.pory"
	.string "Welcome to the Jusmail Town Farmer's\n"
	.string "Market? How can I help you?$"

JusmailTown_EventScript_MarketMan_Text_2:
# 87 "data/maps/JusmailTown/scripts.pory"
	.string "Make sure to come back soon!$"

JusmailTown_EventScript_RockSmashHiker_Text_0:
# 107 "data/maps/JusmailTown/scripts.pory"
	.string "Hiker$"

JusmailTown_EventScript_RockSmashHiker_Text_1:
# 108 "data/maps/JusmailTown/scripts.pory"
	.string "Trying to head south too, huh? Well,\n"
	.string "these rocks are blocking the only way.\p"
	.string "Someone with {COLOR GREEN}Rock Smash{COLOR DARK_GRAY} could break\n"
	.string "these rocks, though.$"

JusmailTown_EventScript_RockSmashHiker_Text_2:
# 114 "data/maps/JusmailTown/scripts.pory"
	.string "Woah, thanks for clearing the path! Now\n"
	.string "I can finally head south!$"

JusmailTown_EventScript_RaniaEvent_Text_0:
# 137 "data/maps/JusmailTown/scripts.pory"
	.string "Rania$"

JusmailTown_EventScript_RaniaEvent_Text_1:
# 138 "data/maps/JusmailTown/scripts.pory"
	.string "Chaire, {PLAYER}! I see you've won\n"
	.string "your first Gym Badge!\p"
	.string "Since you left, Niko and I have decided\n"
	.string "to do some more field research\l"
	.string "ourselves, which means training up our\l"
	.string "own Pokémon teams! What do you say,\l"
	.string "wanna battle?$"

JusmailTown_EventScript_RaniaEvent_Text_2:
# 142 "data/maps/JusmailTown/scripts.pory"
	.string "Need more time to train? I get you. Let\n"
	.string "me know when you wanna battle!$"

JusmailTown_EventScript_RaniaEvent_Text_3:
# 150 "data/maps/JusmailTown/scripts.pory"
	.string "Alright, here I come!$"

JusmailTown_EventScript_RaniaEvent_Text_4:
# 159 "data/maps/JusmailTown/scripts.pory"
	.string "Phew, what a battle! Even against a\n"
	.string "strong type trio like mine, you still\l"
	.string "held your own. Looks like that Gym\l"
	.string "Badge really means something!\p"
	.string "Ah, right, another thing. Professor Elia\n"
	.string "sent me to give you this HM. Here!$"

JusmailTown_EventScript_RaniaEvent_Text_5:
# 163 "data/maps/JusmailTown/scripts.pory"
	.string "With that HM, you can {COLOR GREEN}cut down small\n"
	.string "trees{COLOR DARK_GRAY} that might be blocking your path.\p"
	.string "You heading {COLOR GREEN}back to the University{COLOR DARK_GRAY}? I'm\n"
	.string "doing the same. Meet you there!$"

JusmailTown_EventScript_WishingWell_Text_0:
# 193 "data/maps/JusmailTown/scripts.pory"
	.string "You peer down the Wishing Well...\n"
	.string "The air begins to sparkle.$"

JusmailTown_EventScript_WishingWell_Text_1:
# 200 "data/maps/JusmailTown/scripts.pory"
	.string "Toss a Wishing Star into the Well?$"

JusmailTown_EventScript_WishingWell_Text_2:
# 207 "data/maps/JusmailTown/scripts.pory"
	.string "The Wishing Star shines as it falls...$"

JusmailTown_EventScript_WishingWell_Text_3:
# 209 "data/maps/JusmailTown/scripts.pory"
	.string "...  ...  ...  ...!$"

JusmailTown_EventScript_WishingWell_Text_4:
# 397 "data/maps/JusmailTown/scripts.pory"
	.string "A Poké ball appeared... containing a\n"
	.string "Pokémon!$"

JusmailTown_EventScript_WishingWell_Text_5:
# 407 "data/maps/JusmailTown/scripts.pory"
	.string "The Pokémon was sent to the PC.$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0:
# 424 "data/maps/JusmailTown/scripts.pory"
	.string "Little Girl$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1:
# 427 "data/maps/JusmailTown/scripts.pory"
	.string "See that broken well?\n"
	.string "It's actually a Wishing Well, and it\l"
	.string "grants wishes! Really!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2:
# 430 "data/maps/JusmailTown/scripts.pory"
	.string "Sometimes, my friends and me throw\n"
	.string "Wishing Stars down the Wishing Well!\l"
	.string "Here's a few for you!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3:
# 437 "data/maps/JusmailTown/scripts.pory"
	.string "Did you get anything cool from the\n"
	.string "Wishing Well?$"

JusmailTown_EventScript_WishingWellSign_Text_0:
# 449 "data/maps/JusmailTown/scripts.pory"
	.string "JUSMAIL TOWN WELL\n"
	.string "More than meets the eye.$"

JusmailTown_EventScript_WishingWellSign_Text_1:
# 451 "data/maps/JusmailTown/scripts.pory"
	.string "There's more scribbled on here...\p"
	.string "Use Wishing Stars at the Wishing Well!\n"
	.string "POKéMON are granted to those who seek\l"
	.string "them!$"

JusmailTown_Text_RaniaDefeated::
# 180 "data/maps/JusmailTown/scripts.pory"
	.string "Aw, I thought I balanced my team\n"
	.string "perfectly!$"

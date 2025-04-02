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


JusmailTown_EventScript_DirectionSign::
# 16 "data/maps/JusmailTown/scripts.pory"
	lock
# 17 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_DirectionSign_Text_0
# 18 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 19 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_TriggerWindmillSpawn::
# 25 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_TRIGGERED_WINDMILL_SPAWN
# 26 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_SpawnWindmillVirtualObjects
	return


JusmailTown_SpawnWindmillVirtualObjects::
# 33 "data/maps/JusmailTown/scripts.pory"
	goto_if_set FLAG_TRIGGERED_WINDMILL_SPAWN, JusmailTown_SpawnWindmillVirtualObjects_2
JusmailTown_SpawnWindmillVirtualObjects_1:
# 41 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_SpawnWindmillVirtualObjects_2:
# 35 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TL, 16, 20, 19, 4, DIR_SOUTH
# 36 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TR, 17, 24, 19, 4, DIR_SOUTH
# 37 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BL, 18, 20, 23, 4, DIR_SOUTH
# 38 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BR, 19, 24, 23, 4, DIR_SOUTH
	goto JusmailTown_SpawnWindmillVirtualObjects_1


JusmailTown_Sign_GymSign::
# 47 "data/maps/JusmailTown/scripts.pory"
	lock
# 48 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_Sign_GymSign_Text_0
# 49 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 50 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Woman::
# 56 "data/maps/JusmailTown/scripts.pory"
	lock
# 57 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 58 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Woman_Text_0
# 59 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Woman_Text_1
# 60 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 61 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Boy::
# 67 "data/maps/JusmailTown/scripts.pory"
	lock
# 68 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 69 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Boy_Text_0
# 70 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Boy_Text_1
# 71 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 72 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Farmer::
# 78 "data/maps/JusmailTown/scripts.pory"
	lock
# 79 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 80 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Farmer_Text_0
# 81 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Farmer_Text_1
# 82 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 83 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_MarketMan::
# 89 "data/maps/JusmailTown/scripts.pory"
	lock
# 90 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 91 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_MarketMan_Text_0
# 92 "data/maps/JusmailTown/scripts.pory"
	message JusmailTown_EventScript_MarketMan_Text_1
# 93 "data/maps/JusmailTown/scripts.pory"
	waitmessage
# 94 "data/maps/JusmailTown/scripts.pory"
	pokemart JusmailTown_Mart
# 95 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 96 "data/maps/JusmailTown/scripts.pory"
	delay 1
# 97 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_MarketMan_Text_0
# 98 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_MarketMan_Text_2
# 99 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 100 "data/maps/JusmailTown/scripts.pory"
	release
	end


	.align 2
# 104 "data/maps/JusmailTown/scripts.pory"
JusmailTown_Mart:
# 106 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 107 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_POTION
# 108 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 109 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

JusmailTown_EventScript_RockSmashHiker::
# 114 "data/maps/JusmailTown/scripts.pory"
	lock
# 115 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 116 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_BROKE_JUSMAIL_TOWN_ROCKS, JusmailTown_EventScript_RockSmashHiker_2
# 124 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RockSmashHiker_Text_0
# 125 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RockSmashHiker_Text_2
# 126 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_RockSmashHiker_1:
# 128 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_RockSmashHiker_2:
# 118 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RockSmashHiker_Text_0
# 119 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RockSmashHiker_Text_1
# 120 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_RockSmashHiker_1


JusmailTown_EventScript_RaniaEventTrigger::
# 136 "data/maps/JusmailTown/scripts.pory"
	lock
# 137 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 138 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 139 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_EventScript_RaniaEvent
	end


JusmailTown_EventScript_RaniaEvent::
# 145 "data/maps/JusmailTown/scripts.pory"
	lockall
# 146 "data/maps/JusmailTown/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 147 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 148 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 149 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_1, MSGBOX_YESNO
# 150 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_EventScript_RaniaEvent_2
# 160 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 161 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_3
# 163 "data/maps/JusmailTown/scripts.pory"
	trainerbattle_no_intro TRAINER_JUSMAIL_RANIA, JusmailTown_Text_RaniaDefeated
# 166 "data/maps/JusmailTown/scripts.pory"
	lockall
# 167 "data/maps/JusmailTown/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 168 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 169 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 170 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_4
# 171 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 172 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_HM_CUT
# 173 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 174 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_5
# 175 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 178 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
# 179 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_RANIA_STATE, 1
# 180 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_NIKO_STATE, 1
# 181 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 182 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 183 "data/maps/JusmailTown/scripts.pory"
	removeobject 11
# 184 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 185 "data/maps/JusmailTown/scripts.pory"
	delay 20
JusmailTown_EventScript_RaniaEvent_1:
# 187 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_RaniaEvent_2:
# 152 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 153 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_2
# 154 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 155 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 156 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
	goto JusmailTown_EventScript_RaniaEvent_1


JusmailTown_EventScript_WishingWell::
# 203 "data/maps/JusmailTown/scripts.pory"
	lockall
# 204 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_0
# 205 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 207 "data/maps/JusmailTown/scripts.pory"
	checkitem ITEM_WISHING_STAR
# 209 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_2
JusmailTown_EventScript_WishingWell_1:
# 425 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_WishingWell_2:
# 211 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_1, MSGBOX_YESNO
# 213 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_4
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_4:
# 216 "data/maps/JusmailTown/scripts.pory"
	removeitem ITEM_WISHING_STAR
# 218 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_2
# 219 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 220 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_3
# 221 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 224 "data/maps/JusmailTown/scripts.pory"
	randomelement SPECIES_ROWLET, SPECIES_LITTEN, SPECIES_POPPLIO, SPECIES_CHESPIN, SPECIES_FENNEKIN, SPECIES_FROAKIE, SPECIES_SPRIGATITO, SPECIES_FUECOCO, SPECIES_QUAXLY, SPECIES_PANSAGE, SPECIES_PANSEAR, SPECIES_PANPOUR, SPECIES_LILLIPUP, SPECIES_PIKIPEK, SPECIES_DUCKLETT, SPECIES_HOPPIP, SPECIES_NINCADA, SPECIES_GRUBBIN, SPECIES_PARAS, SPECIES_PHANPY, SPECIES_SNOM, SPECIES_CUBONE, SPECIES_MUDBRAY, SPECIES_MAREEP, SPECIES_CUTIEFLY, SPECIES_GRIMER, SPECIES_GRIMER_ALOLAN, SPECIES_WURMPLE, SPECIES_TROPIUS, SPECIES_RALTS, SPECIES_EEVEE, SPECIES_SKIDDO, SPECIES_MURKROW, SPECIES_ORICORIO_BAILE, SPECIES_ORICORIO_POM_POM, SPECIES_ORICORIO_PAU, SPECIES_ORICORIO_SENSU, SPECIES_SANDSHREW, SPECIES_SANDSHREW_ALOLAN, SPECIES_NOSEPASS, SPECIES_MAWILE, SPECIES_ROCKRUFF, SPECIES_VULLABY, SPECIES_WOOBAT, SPECIES_ARON, SPECIES_TIMBURR, SPECIES_KLAWF, SPECIES_POLIWAG, SPECIES_PUMPKABOO, SPECIES_SHROOMISH, SPECIES_HERACROSS, SPECIES_SHUPPET, SPECIES_AIPOM, SPECIES_WOOPER, SPECIES_WOOPER_PALDEAN, SPECIES_TOEDSCOOL, SPECIES_BLITZLE, SPECIES_HOOTHOOT, SPECIES_MIENFOO, SPECIES_FLITTLE, SPECIES_VULPIX, SPECIES_VULPIX_ALOLAN, SPECIES_HONEDGE, SPECIES_DWEBBLE, SPECIES_MINIOR, SPECIES_GASTLY, SPECIES_BALTOY, SPECIES_SALANDIT, SPECIES_TOGEPI, SPECIES_CHERUBI, SPECIES_HOUNDOUR, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_SKORUPI, SPECIES_SPINARAK, SPECIES_ONIX, SPECIES_KOMALA, SPECIES_WINGULL, SPECIES_STANTLER, SPECIES_SNORUNT, SPECIES_SPHEAL, SPECIES_SEEL, SPECIES_BRONZOR, SPECIES_ZORUA, SPECIES_ZORUA_HISUI, SPECIES_SNEASEL, SPECIES_SNEASEL_HISUI, SPECIES_MEOWTH, SPECIES_MEOWTH_ALOLAN, SPECIES_MEOWTH_GALAR, SPECIES_PACHIRISU, SPECIES_TYRUNT, SPECIES_AMAURA, SPECIES_ELECTRIKE, SPECIES_PAWMI, SPECIES_SHROODLE, SPECIES_BUIZEL, SPECIES_STUNKY, SPECIES_CORSOLA, SPECIES_CORSOLA_GALAR, SPECIES_FINNEON, SPECIES_WAILMER, SPECIES_TENTACOOL, SPECIES_CLAUNCHER, SPECIES_SCYTHER, SPECIES_STUFFUL, SPECIES_BAGON, SPECIES_TOGEDEMARU, SPECIES_CRABRAWLER, SPECIES_LILEEP, SPECIES_ANORITH, SPECIES_DEDENNE, SPECIES_CHATOT, SPECIES_MEDITITE, SPECIES_DROWZEE, SPECIES_EKANS, SPECIES_BASCULIN_WHITE_STRIPED, SPECIES_PANCHAM, SPECIES_SKRELP, SPECIES_GOTHITA, SPECIES_SOLOSIS, SPECIES_LITWICK, SPECIES_CHARCADET, SPECIES_CHINCHOU, SPECIES_SHELLDER, SPECIES_CLAMPERL, SPECIES_FLABEBE, SPECIES_IGGLYBUFF, SPECIES_HELIOPTILE, SPECIES_TRAPINCH, SPECIES_DODUO, SPECIES_TINKATINK, SPECIES_SCRAGGY, SPECIES_GLIGAR, SPECIES_TORKOAL, SPECIES_NUMEL, SPECIES_RELICANTH, SPECIES_BARBOACH, SPECIES_MUNNA, SPECIES_KECLEON, SPECIES_MAGIKARP, SPECIES_FOMANTIS, SPECIES_ORANGURU, SPECIES_PASSIMIAN, SPECIES_ZIGZAGOON, SPECIES_ZIGZAGOON_GALAR, SPECIES_GOOMY, SPECIES_BRUXISH, SPECIES_IMPIDIMP, SPECIES_SWABLU, SPECIES_MANKEY, SPECIES_VOLTORB, SPECIES_VOLTORB_HISUI, SPECIES_LAPRAS, SPECIES_GIRAFARIG, SPECIES_BUDEW, SPECIES_MAGNEMITE, SPECIES_CUBCHOO, SPECIES_GROWLITHE, SPECIES_GROWLITHE_HISUI, SPECIES_PSYDUCK, SPECIES_YANMA, SPECIES_AERODACTYL, SPECIES_REMORAID, SPECIES_RUFFLET, SPECIES_NATU, SPECIES_SNOVER, SPECIES_DUSKULL, SPECIES_SWINUB, SPECIES_CORPHISH, SPECIES_UNOWN, SPECIES_TIRTOUGA, SPECIES_ARCHEN, SPECIES_LARVITAR, SPECIES_DHELMISE, SPECIES_DRATINI, SPECIES_BOUNSWEET, SPECIES_CUFANT, SPECIES_FINIZEN, SPECIES_APPLIN, SPECIES_SANDILE, SPECIES_FALINKS
# 407 "data/maps/JusmailTown/scripts.pory"
	givemon VAR_RESULT, 1
# 408 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_4
# 409 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 410 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq JusmailTown_EventScript_WishingWell_6
# 417 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 418 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_5
# 419 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_6:
# 412 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 413 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto JusmailTown_EventScript_WishingWell_1


JusmailTown_EventScript_LittleGirlWithWishingStar::
# 433 "data/maps/JusmailTown/scripts.pory"
	lock
# 434 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 435 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 436 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL, JusmailTown_EventScript_LittleGirlWithWishingStar_2
# 448 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3
# 449 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_LittleGirlWithWishingStar_1:
# 451 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_LittleGirlWithWishingStar_2:
# 438 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1
# 439 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 440 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 441 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2
# 442 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 443 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_WISHING_STAR, 3
# 444 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL
	goto JusmailTown_EventScript_LittleGirlWithWishingStar_1


JusmailTown_EventScript_WishingWellSign::
# 459 "data/maps/JusmailTown/scripts.pory"
	lock
# 460 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_0
# 461 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 462 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_1
# 463 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 464 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_DirectionSign_Text_0:
# 17 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town\n"
	.string "The Breadbasket of Ilios\p"
	.string "{UP_ARROW} Bronze Fields\n"
	.string "Wanderers' Woods {DOWN_ARROW}$"

JusmailTown_Sign_GymSign_Text_0:
# 48 "data/maps/JusmailTown/scripts.pory"
	.string "Gym Leader: Deo\n"
	.string "The Plant-Friendly Farmer$"

JusmailTown_EventScript_NPC_Woman_Text_0:
# 58 "data/maps/JusmailTown/scripts.pory"
	.string "Woman$"

JusmailTown_EventScript_NPC_Woman_Text_1:
# 59 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town is a really small community,\n"
	.string "but I love it like this. We live alongside\l"
	.string "nature here, not in conflict with it.$"

JusmailTown_EventScript_NPC_Boy_Text_0:
# 69 "data/maps/JusmailTown/scripts.pory"
	.string "Boy$"

JusmailTown_EventScript_NPC_Boy_Text_1:
# 70 "data/maps/JusmailTown/scripts.pory"
	.string "Flying-type Pokémon are good against\n"
	.string "Deo's Pokémon, Bug and Grass-type\l"
	.string "Pokémon.\p"
	.string "I hear most Gym Leaders have a Pokémon\n"
	.string "that is strong against whatever the\l"
	.string "Leader is weak against. Sounds like\l"
	.string "they're tough fights!$"

JusmailTown_EventScript_NPC_Farmer_Text_0:
# 80 "data/maps/JusmailTown/scripts.pory"
	.string "Farmer$"

JusmailTown_EventScript_NPC_Farmer_Text_1:
# 81 "data/maps/JusmailTown/scripts.pory"
	.string "Bleugh, lots of bugs around here...\n"
	.string "they're cute, but their little legs\l"
	.string "scare me!$"

JusmailTown_EventScript_MarketMan_Text_0:
# 91 "data/maps/JusmailTown/scripts.pory"
	.string "Market Man$"

JusmailTown_EventScript_MarketMan_Text_1:
# 92 "data/maps/JusmailTown/scripts.pory"
	.string "Welcome to the Jusmail Town Farmer's\n"
	.string "Market? How can I help you?$"

JusmailTown_EventScript_MarketMan_Text_2:
# 98 "data/maps/JusmailTown/scripts.pory"
	.string "Make sure to come back soon!$"

JusmailTown_EventScript_RockSmashHiker_Text_0:
# 118 "data/maps/JusmailTown/scripts.pory"
	.string "Hiker$"

JusmailTown_EventScript_RockSmashHiker_Text_1:
# 119 "data/maps/JusmailTown/scripts.pory"
	.string "Trying to head south too, huh? Well,\n"
	.string "these rocks are blocking the only way.\p"
	.string "Someone with {COLOR GREEN}Rock Smash{COLOR DARK_GRAY} could break\n"
	.string "these rocks, though.$"

JusmailTown_EventScript_RockSmashHiker_Text_2:
# 125 "data/maps/JusmailTown/scripts.pory"
	.string "Woah, thanks for clearing the path! Now\n"
	.string "I can finally head south!$"

JusmailTown_EventScript_RaniaEvent_Text_0:
# 148 "data/maps/JusmailTown/scripts.pory"
	.string "Rania$"

JusmailTown_EventScript_RaniaEvent_Text_1:
# 149 "data/maps/JusmailTown/scripts.pory"
	.string "Chaire, {PLAYER}! I see you've won\n"
	.string "your first Gym Badge!\p"
	.string "Since you left, Niko and I have decided\n"
	.string "to do some more field research\l"
	.string "ourselves, which means training up our\l"
	.string "own Pokémon teams! What do you say,\l"
	.string "wanna battle?$"

JusmailTown_EventScript_RaniaEvent_Text_2:
# 153 "data/maps/JusmailTown/scripts.pory"
	.string "Need more time to train? I get you. Let\n"
	.string "me know when you wanna battle!$"

JusmailTown_EventScript_RaniaEvent_Text_3:
# 161 "data/maps/JusmailTown/scripts.pory"
	.string "Alright, here I come!$"

JusmailTown_EventScript_RaniaEvent_Text_4:
# 170 "data/maps/JusmailTown/scripts.pory"
	.string "Phew, what a battle! Even against a\n"
	.string "strong type trio like mine, you still\l"
	.string "held your own. Looks like that Gym\l"
	.string "Badge really means something!\p"
	.string "Ah, right, another thing. Professor Elia\n"
	.string "sent me to give you this HM. Here!$"

JusmailTown_EventScript_RaniaEvent_Text_5:
# 174 "data/maps/JusmailTown/scripts.pory"
	.string "With that HM, you can {COLOR GREEN}cut down small\n"
	.string "trees{COLOR DARK_GRAY} that might be blocking your path.\p"
	.string "You heading {COLOR GREEN}back to the University{COLOR DARK_GRAY}? I'm\n"
	.string "doing the same. Meet you there!$"

JusmailTown_EventScript_WishingWell_Text_0:
# 204 "data/maps/JusmailTown/scripts.pory"
	.string "You peer down the Wishing Well...\n"
	.string "The air begins to sparkle.$"

JusmailTown_EventScript_WishingWell_Text_1:
# 211 "data/maps/JusmailTown/scripts.pory"
	.string "Toss a Wishing Star into the Well?$"

JusmailTown_EventScript_WishingWell_Text_2:
# 218 "data/maps/JusmailTown/scripts.pory"
	.string "The Wishing Star shines as it falls...$"

JusmailTown_EventScript_WishingWell_Text_3:
# 220 "data/maps/JusmailTown/scripts.pory"
	.string "...  ...  ...  ...!$"

JusmailTown_EventScript_WishingWell_Text_4:
# 408 "data/maps/JusmailTown/scripts.pory"
	.string "A Poké ball appeared... containing a\n"
	.string "Pokémon!$"

JusmailTown_EventScript_WishingWell_Text_5:
# 418 "data/maps/JusmailTown/scripts.pory"
	.string "The Pokémon was sent to the PC.$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0:
# 435 "data/maps/JusmailTown/scripts.pory"
	.string "Little Girl$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1:
# 438 "data/maps/JusmailTown/scripts.pory"
	.string "See that broken well?\n"
	.string "It's actually a Wishing Well, and it\l"
	.string "grants wishes! Really!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2:
# 441 "data/maps/JusmailTown/scripts.pory"
	.string "Sometimes, my friends and me throw\n"
	.string "Wishing Stars down the Wishing Well!\l"
	.string "Here's a few for you!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3:
# 448 "data/maps/JusmailTown/scripts.pory"
	.string "Did you get anything cool from the\n"
	.string "Wishing Well?$"

JusmailTown_EventScript_WishingWellSign_Text_0:
# 460 "data/maps/JusmailTown/scripts.pory"
	.string "JUSMAIL TOWN WELL\n"
	.string "More than meets the eye.$"

JusmailTown_EventScript_WishingWellSign_Text_1:
# 462 "data/maps/JusmailTown/scripts.pory"
	.string "There's more scribbled on here...\p"
	.string "Use Wishing Stars at the Wishing Well!\n"
	.string "POKéMON are granted to those who seek\l"
	.string "them!$"

JusmailTown_Text_RaniaDefeated::
# 191 "data/maps/JusmailTown/scripts.pory"
	.string "Aw, I thought I balanced my team\n"
	.string "perfectly!$"

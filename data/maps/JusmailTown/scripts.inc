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


JusmailTown_Sign_MartSign::
# 25 "data/maps/JusmailTown/scripts.pory"
	lock
# 26 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_Sign_MartSign_Text_0
# 27 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 28 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_TriggerWindmillSpawn::
# 34 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_TRIGGERED_WINDMILL_SPAWN
# 35 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_SpawnWindmillVirtualObjects
	return


JusmailTown_SpawnWindmillVirtualObjects::
# 42 "data/maps/JusmailTown/scripts.pory"
	goto_if_set FLAG_TRIGGERED_WINDMILL_SPAWN, JusmailTown_SpawnWindmillVirtualObjects_2
JusmailTown_SpawnWindmillVirtualObjects_1:
# 51 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_SpawnWindmillVirtualObjects_2:
# 44 "data/maps/JusmailTown/scripts.pory"
	special DestroyVirtualObjects
# 45 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TL, 16, 20, 19, 4, DIR_SOUTH
# 46 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TR, 17, 24, 19, 4, DIR_SOUTH
# 47 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BL, 18, 20, 23, 4, DIR_SOUTH
# 48 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BR, 19, 24, 23, 4, DIR_SOUTH
	goto JusmailTown_SpawnWindmillVirtualObjects_1


JusmailTown_Sign_GymSign::
# 57 "data/maps/JusmailTown/scripts.pory"
	lock
# 58 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_Sign_GymSign_Text_0
# 59 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 60 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Woman::
# 66 "data/maps/JusmailTown/scripts.pory"
	lock
# 67 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 68 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Woman_Text_0
# 69 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Woman_Text_1
# 70 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 71 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Boy::
# 77 "data/maps/JusmailTown/scripts.pory"
	lock
# 78 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 79 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Boy_Text_0
# 80 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Boy_Text_1
# 81 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 82 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Farmer::
# 88 "data/maps/JusmailTown/scripts.pory"
	lock
# 89 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 90 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Farmer_Text_0
# 91 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Farmer_Text_1
# 92 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 93 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_MarketMan::
# 99 "data/maps/JusmailTown/scripts.pory"
	lock
# 100 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 101 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_MarketMan_Text_0
# 102 "data/maps/JusmailTown/scripts.pory"
	message JusmailTown_EventScript_MarketMan_Text_1
# 103 "data/maps/JusmailTown/scripts.pory"
	waitmessage
# 104 "data/maps/JusmailTown/scripts.pory"
	pokemart JusmailTown_Mart
# 105 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 106 "data/maps/JusmailTown/scripts.pory"
	delay 1
# 107 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_MarketMan_Text_0
# 108 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_MarketMan_Text_2
# 109 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 110 "data/maps/JusmailTown/scripts.pory"
	release
	end


	.align 2
# 114 "data/maps/JusmailTown/scripts.pory"
JusmailTown_Mart:
# 116 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 117 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_POTION
# 118 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 119 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

JusmailTown_EventScript_RockSmashHiker::
# 124 "data/maps/JusmailTown/scripts.pory"
	lock
# 125 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 126 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_BROKE_JUSMAIL_TOWN_ROCKS, JusmailTown_EventScript_RockSmashHiker_2
# 134 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RockSmashHiker_Text_0
# 135 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RockSmashHiker_Text_2
# 136 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_RockSmashHiker_1:
# 138 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_RockSmashHiker_2:
# 128 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RockSmashHiker_Text_0
# 129 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RockSmashHiker_Text_1
# 130 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_RockSmashHiker_1


JusmailTown_EventScript_RaniaEventTrigger::
# 146 "data/maps/JusmailTown/scripts.pory"
	lock
# 147 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 148 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 149 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_EventScript_RaniaEvent
	end


JusmailTown_EventScript_RaniaEvent::
# 155 "data/maps/JusmailTown/scripts.pory"
	lockall
# 156 "data/maps/JusmailTown/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 157 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 159 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_1, MSGBOX_YESNO
# 160 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_EventScript_RaniaEvent_2
# 170 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 171 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_3
# 173 "data/maps/JusmailTown/scripts.pory"
	trainerbattle_no_intro TRAINER_JUSMAIL_RANIA, JusmailTown_Text_RaniaDefeated
# 176 "data/maps/JusmailTown/scripts.pory"
	lockall
# 177 "data/maps/JusmailTown/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 178 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 179 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 180 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_4
# 181 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 182 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_HM_CUT
# 183 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 184 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_5
# 185 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 188 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
# 189 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_RANIA_STATE, 1
# 190 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_NIKO_STATE, 1
# 191 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 192 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 193 "data/maps/JusmailTown/scripts.pory"
	removeobject 11
# 194 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 195 "data/maps/JusmailTown/scripts.pory"
	delay 20
JusmailTown_EventScript_RaniaEvent_1:
# 197 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_RaniaEvent_2:
# 162 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 163 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_2
# 164 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 165 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 166 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
	goto JusmailTown_EventScript_RaniaEvent_1


JusmailTown_EventScript_WishingWell::
# 213 "data/maps/JusmailTown/scripts.pory"
	lockall
# 214 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_0
# 215 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 217 "data/maps/JusmailTown/scripts.pory"
	checkitem ITEM_WISHING_STAR
# 219 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_2
JusmailTown_EventScript_WishingWell_1:
# 444 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_WishingWell_2:
# 221 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_1, MSGBOX_YESNO
# 223 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_4
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_4:
# 226 "data/maps/JusmailTown/scripts.pory"
	removeitem ITEM_WISHING_STAR
# 228 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_2
# 229 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 230 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_3
# 231 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 234 "data/maps/JusmailTown/scripts.pory"
	randomelement SPECIES_ROWLET, SPECIES_LITTEN, SPECIES_POPPLIO, SPECIES_CHESPIN, SPECIES_FENNEKIN, SPECIES_FROAKIE, SPECIES_SPRIGATITO, SPECIES_FUECOCO, SPECIES_QUAXLY, SPECIES_PANSAGE, SPECIES_PANSEAR, SPECIES_PANPOUR, SPECIES_LILLIPUP, SPECIES_PIKIPEK, SPECIES_DUCKLETT, SPECIES_HOPPIP, SPECIES_NINCADA, SPECIES_GRUBBIN, SPECIES_PARAS, SPECIES_PHANPY, SPECIES_SNOM, SPECIES_CUBONE, SPECIES_MUDBRAY, SPECIES_MAREEP, SPECIES_CUTIEFLY, SPECIES_GRIMER, SPECIES_GRIMER_ALOLAN, SPECIES_WURMPLE, SPECIES_TROPIUS, SPECIES_RALTS, SPECIES_EEVEE, SPECIES_SKIDDO, SPECIES_MURKROW, SPECIES_ORICORIO_BAILE, SPECIES_ORICORIO_POM_POM, SPECIES_ORICORIO_PAU, SPECIES_ORICORIO_SENSU, SPECIES_SANDSHREW, SPECIES_SANDSHREW_ALOLAN, SPECIES_NOSEPASS, SPECIES_MAWILE, SPECIES_ROCKRUFF, SPECIES_VULLABY, SPECIES_WOOBAT, SPECIES_ARON, SPECIES_TIMBURR, SPECIES_KLAWF, SPECIES_POLIWAG, SPECIES_PUMPKABOO, SPECIES_SHROOMISH, SPECIES_HERACROSS, SPECIES_SHUPPET, SPECIES_AIPOM, SPECIES_WOOPER, SPECIES_WOOPER_PALDEAN, SPECIES_TOEDSCOOL, SPECIES_BLITZLE, SPECIES_HOOTHOOT, SPECIES_MIENFOO, SPECIES_FLITTLE, SPECIES_VULPIX, SPECIES_VULPIX_ALOLAN, SPECIES_HONEDGE, SPECIES_DWEBBLE, SPECIES_MINIOR, SPECIES_GASTLY, SPECIES_BALTOY, SPECIES_SALANDIT, SPECIES_TOGEPI, SPECIES_CHERUBI, SPECIES_HOUNDOUR, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_SKORUPI, SPECIES_SPINARAK, SPECIES_ONIX, SPECIES_KOMALA, SPECIES_WINGULL, SPECIES_STANTLER, SPECIES_SNORUNT, SPECIES_SPHEAL, SPECIES_SEEL, SPECIES_BRONZOR, SPECIES_ZORUA, SPECIES_ZORUA_HISUI, SPECIES_SNEASEL, SPECIES_SNEASEL_HISUI, SPECIES_MEOWTH, SPECIES_MEOWTH_ALOLAN, SPECIES_MEOWTH_GALAR, SPECIES_PACHIRISU, SPECIES_CHIKORITA, SPECIES_CYNDAQUIL, SPECIES_TOTODILE, SPECIES_JANGMO_O, SPECIES_FLAMIGO, SPECIES_SIZZLIPEDE, SPECIES_CRANIDOS, SPECIES_SHIELDON, SPECIES_SPIRITOMB, SPECIES_TYRUNT, SPECIES_AMAURA, SPECIES_ELECTRIKE, SPECIES_PAWMI, SPECIES_SHROODLE, SPECIES_BUIZEL, SPECIES_STUNKY, SPECIES_CORSOLA, SPECIES_CORSOLA_GALAR, SPECIES_FINNEON, SPECIES_WAILMER, SPECIES_TENTACOOL, SPECIES_CLAUNCHER, SPECIES_SCYTHER, SPECIES_STUFFUL, SPECIES_BAGON, SPECIES_TOGEDEMARU, SPECIES_CRABRAWLER, SPECIES_LILEEP, SPECIES_ANORITH, SPECIES_DEDENNE, SPECIES_CHATOT, SPECIES_MEDITITE, SPECIES_DROWZEE, SPECIES_EKANS, SPECIES_BASCULIN_WHITE_STRIPED, SPECIES_PANCHAM, SPECIES_SKRELP, SPECIES_GOTHITA, SPECIES_SOLOSIS, SPECIES_LITWICK, SPECIES_CHARCADET, SPECIES_CHINCHOU, SPECIES_SHELLDER, SPECIES_CLAMPERL, SPECIES_FLABEBE, SPECIES_IGGLYBUFF, SPECIES_HELIOPTILE, SPECIES_TRAPINCH, SPECIES_DODUO, SPECIES_TINKATINK, SPECIES_SCRAGGY, SPECIES_GLIGAR, SPECIES_TORKOAL, SPECIES_NUMEL, SPECIES_RELICANTH, SPECIES_BARBOACH, SPECIES_MUNNA, SPECIES_KECLEON, SPECIES_MAGIKARP, SPECIES_FOMANTIS, SPECIES_ORANGURU, SPECIES_PASSIMIAN, SPECIES_ZIGZAGOON, SPECIES_ZIGZAGOON_GALAR, SPECIES_GOOMY, SPECIES_BRUXISH, SPECIES_IMPIDIMP, SPECIES_SWABLU, SPECIES_MANKEY, SPECIES_VOLTORB, SPECIES_VOLTORB_HISUI, SPECIES_LAPRAS, SPECIES_GIRAFARIG, SPECIES_BUDEW, SPECIES_MAGNEMITE, SPECIES_CUBCHOO, SPECIES_GROWLITHE, SPECIES_GROWLITHE_HISUI, SPECIES_PSYDUCK, SPECIES_YANMA, SPECIES_AERODACTYL, SPECIES_REMORAID, SPECIES_RUFFLET, SPECIES_NATU, SPECIES_SNOVER, SPECIES_DUSKULL, SPECIES_SWINUB, SPECIES_CORPHISH, SPECIES_UNOWN, SPECIES_TIRTOUGA, SPECIES_ARCHEN, SPECIES_LARVITAR, SPECIES_DHELMISE, SPECIES_DRATINI, SPECIES_BOUNSWEET, SPECIES_CUFANT, SPECIES_FINIZEN, SPECIES_APPLIN, SPECIES_SANDILE, SPECIES_FALINKS
# 426 "data/maps/JusmailTown/scripts.pory"
	givemon VAR_RESULT, 1
# 427 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_4
# 428 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 429 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq JusmailTown_EventScript_WishingWell_6
# 436 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 437 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_5
# 438 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_6:
# 431 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 432 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto JusmailTown_EventScript_WishingWell_1


JusmailTown_EventScript_LittleGirlWithWishingStar::
# 452 "data/maps/JusmailTown/scripts.pory"
	lock
# 453 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 454 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 455 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL, JusmailTown_EventScript_LittleGirlWithWishingStar_2
# 467 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3
# 468 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_LittleGirlWithWishingStar_1:
# 470 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_LittleGirlWithWishingStar_2:
# 457 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1
# 458 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 459 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 460 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2
# 461 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 462 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_WISHING_STAR, 3
# 463 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL
	goto JusmailTown_EventScript_LittleGirlWithWishingStar_1


JusmailTown_EventScript_WishingWellSign::
# 478 "data/maps/JusmailTown/scripts.pory"
	lock
# 479 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_0
# 480 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 481 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_1
# 482 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 483 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_CyclingMan::
# 490 "data/maps/JusmailTown/scripts.pory"
	lock
# 491 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 492 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingMan_Text_0
# 495 "data/maps/JusmailTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_LOVESTRUCK_BIKER
# 496 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_CyclingMan_2
# 505 "data/maps/JusmailTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_LOVESTRUCK_BIKER
# 506 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_EventScript_CyclingMan_4
# 516 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_3
# 517 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 519 "data/maps/JusmailTown/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 520 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 522 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_EventScript_CyclingMan_7
# 530 "data/maps/JusmailTown/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 531 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 532 "data/maps/JusmailTown/scripts.pory"
	delay 15
# 533 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingMan_Text_0
# 534 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_5
# 535 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 537 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 538 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 539 "data/maps/JusmailTown/scripts.pory"
	clearflag FLAG_HIDE_CYCLING_WOMAN_JUSMAIL
# 540 "data/maps/JusmailTown/scripts.pory"
	addobject 17
# 541 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 542 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 543 "data/maps/JusmailTown/scripts.pory"
	delay 20
# 545 "data/maps/JusmailTown/scripts.pory"
	applymovement 16, Common_Movement_Heart
# 546 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 547 "data/maps/JusmailTown/scripts.pory"
	delay 15
# 548 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingMan_Text_0
# 549 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_6
# 550 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 551 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_LOVE_BALL, 5
# 552 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 553 "data/maps/JusmailTown/scripts.pory"
	delay 5
# 554 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingMan_Text_0
# 555 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_7
# 556 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 558 "data/maps/JusmailTown/scripts.pory"
	delay 20
# 559 "data/maps/JusmailTown/scripts.pory"
	completequest QUEST_LOVESTRUCK_BIKER
	return

JusmailTown_EventScript_CyclingMan_2:
# 498 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_1
# 499 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 500 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_CyclingMan_4:
# 508 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_2
# 509 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 511 "data/maps/JusmailTown/scripts.pory"
	delay 20
# 512 "data/maps/JusmailTown/scripts.pory"
	startquest QUEST_LOVESTRUCK_BIKER
	return

JusmailTown_EventScript_CyclingMan_7:
# 524 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingMan_Text_0
# 525 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_4
# 526 "data/maps/JusmailTown/scripts.pory"
	closemessage
	return


JusmailTown_EventScript_CyclingWoman::
# 566 "data/maps/JusmailTown/scripts.pory"
	lock
# 567 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 568 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingWoman_Text_0
# 569 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingWoman_Text_1
# 570 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 571 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_Bounsweet::
# 577 "data/maps/JusmailTown/scripts.pory"
	lock
# 578 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 579 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_Bounsweet_Text_0
# 580 "data/maps/JusmailTown/scripts.pory"
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
# 581 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_Bounsweet_Text_1
# 582 "data/maps/JusmailTown/scripts.pory"
	waitmoncry
# 583 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 584 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_CoralOutfitBeauty::
# 590 "data/maps/JusmailTown/scripts.pory"
	lock
# 591 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 592 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CoralOutfitBeauty_Text_0
# 593 "data/maps/JusmailTown/scripts.pory"
	checkoutfitflag OUTFIT_CORAL
# 595 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JusmailTown_EventScript_CoralOutfitBeauty_2
# 645 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_7
# 646 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_CoralOutfitBeauty_1:
# 648 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_CoralOutfitBeauty_2:
# 597 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_1
# 598 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 599 "data/maps/JusmailTown/scripts.pory"
	delay 5
# 600 "data/maps/JusmailTown/scripts.pory"
	showmoneybox 0, 0
# 601 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CoralOutfitBeauty_Text_0
# 602 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_2, MSGBOX_YESNO
# 603 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 604 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JusmailTown_EventScript_CoralOutfitBeauty_5
# 616 "data/maps/JusmailTown/scripts.pory"
	checkmoney 1900
# 617 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JusmailTown_EventScript_CoralOutfitBeauty_8
# 628 "data/maps/JusmailTown/scripts.pory"
	removemoney 1900
# 629 "data/maps/JusmailTown/scripts.pory"
	updatemoneybox
# 630 "data/maps/JusmailTown/scripts.pory"
	delay 5
# 631 "data/maps/JusmailTown/scripts.pory"
	unlockoutfit OUTFIT_CORAL
# 632 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_5
# 633 "data/maps/JusmailTown/scripts.pory"
	delay 20
# 634 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 635 "data/maps/JusmailTown/scripts.pory"
	hidemoneybox
# 636 "data/maps/JusmailTown/scripts.pory"
	delay 5
# 637 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CoralOutfitBeauty_Text_0
# 638 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_6
# 639 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_CoralOutfitBeauty_1

JusmailTown_EventScript_CoralOutfitBeauty_5:
# 606 "data/maps/JusmailTown/scripts.pory"
	hidemoneybox
# 607 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CoralOutfitBeauty_Text_0
# 608 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_3
# 609 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 610 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_CoralOutfitBeauty_8:
# 619 "data/maps/JusmailTown/scripts.pory"
	hidemoneybox
# 620 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CoralOutfitBeauty_Text_0
# 621 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_4
# 622 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 623 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_DirectionSign_Text_0:
# 17 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town\n"
	.string "The Breadbasket of Ilios\p"
	.string "{UP_ARROW} Bronze Fields\n"
	.string "Wanderers' Woods {DOWN_ARROW}$"

JusmailTown_Sign_MartSign_Text_0:
# 26 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town Roadside Market$"

JusmailTown_Sign_GymSign_Text_0:
# 58 "data/maps/JusmailTown/scripts.pory"
	.string "Gym Leader: Deo\n"
	.string "The Plant-Friendly Farmer$"

JusmailTown_EventScript_NPC_Woman_Text_0:
# 68 "data/maps/JusmailTown/scripts.pory"
	.string "Woman$"

JusmailTown_EventScript_NPC_Woman_Text_1:
# 69 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town is a really small community,\n"
	.string "but I love it like this. We live alongside\l"
	.string "nature here, not in conflict with it.$"

JusmailTown_EventScript_NPC_Boy_Text_0:
# 79 "data/maps/JusmailTown/scripts.pory"
	.string "Boy$"

JusmailTown_EventScript_NPC_Boy_Text_1:
# 80 "data/maps/JusmailTown/scripts.pory"
	.string "Flying-type Pokémon are good against\n"
	.string "Deo's Pokémon, Bug and Grass-type\l"
	.string "Pokémon.\p"
	.string "I hear most Gym Leaders have a Pokémon\n"
	.string "that is strong against whatever the\l"
	.string "Leader is weak against. Sounds like\l"
	.string "they're tough fights!$"

JusmailTown_EventScript_NPC_Farmer_Text_0:
# 90 "data/maps/JusmailTown/scripts.pory"
	.string "Farmer$"

JusmailTown_EventScript_NPC_Farmer_Text_1:
# 91 "data/maps/JusmailTown/scripts.pory"
	.string "Bleugh, lots of bugs around here...\n"
	.string "they're cute, but their little legs\l"
	.string "scare me!$"

JusmailTown_EventScript_MarketMan_Text_0:
# 101 "data/maps/JusmailTown/scripts.pory"
	.string "Market Man$"

JusmailTown_EventScript_MarketMan_Text_1:
# 102 "data/maps/JusmailTown/scripts.pory"
	.string "Welcome to the Jusmail Town Farmer's\n"
	.string "Market? How can I help you?$"

JusmailTown_EventScript_MarketMan_Text_2:
# 108 "data/maps/JusmailTown/scripts.pory"
	.string "Make sure to come back soon!$"

JusmailTown_EventScript_RockSmashHiker_Text_0:
# 128 "data/maps/JusmailTown/scripts.pory"
	.string "Hiker$"

JusmailTown_EventScript_RockSmashHiker_Text_1:
# 129 "data/maps/JusmailTown/scripts.pory"
	.string "Trying to head south too, huh? Well,\n"
	.string "these rocks are blocking the only way.\p"
	.string "Someone with {COLOR GREEN}Rock Smash{COLOR DARK_GRAY} could break\n"
	.string "these rocks, though.$"

JusmailTown_EventScript_RockSmashHiker_Text_2:
# 135 "data/maps/JusmailTown/scripts.pory"
	.string "Woah, thanks for clearing the path! Now\n"
	.string "I can finally head south!$"

JusmailTown_EventScript_RaniaEvent_Text_0:
# 158 "data/maps/JusmailTown/scripts.pory"
	.string "Rania$"

JusmailTown_EventScript_RaniaEvent_Text_1:
# 159 "data/maps/JusmailTown/scripts.pory"
	.string "Chaire, {PLAYER}! I see you've won\n"
	.string "your first Gym Badge!\p"
	.string "Since you left, Niko and I have decided\n"
	.string "to do some more field research\l"
	.string "ourselves, which means training up our\l"
	.string "own Pokémon teams! What do you say,\l"
	.string "wanna battle?$"

JusmailTown_EventScript_RaniaEvent_Text_2:
# 163 "data/maps/JusmailTown/scripts.pory"
	.string "Need more time to train? I get you. Let\n"
	.string "me know when you wanna battle!$"

JusmailTown_EventScript_RaniaEvent_Text_3:
# 171 "data/maps/JusmailTown/scripts.pory"
	.string "Alright, here I come!$"

JusmailTown_EventScript_RaniaEvent_Text_4:
# 180 "data/maps/JusmailTown/scripts.pory"
	.string "Phew, what a battle! Even against a\n"
	.string "strong type trio like mine, you still\l"
	.string "held your own. Looks like that Gym\l"
	.string "Badge really means something!\p"
	.string "Ah, right, another thing. Professor Elia\n"
	.string "sent me to give you this HM. Here!$"

JusmailTown_EventScript_RaniaEvent_Text_5:
# 184 "data/maps/JusmailTown/scripts.pory"
	.string "With that HM, you can {COLOR GREEN}cut down small\n"
	.string "trees{COLOR DARK_GRAY} that might be blocking your path.\p"
	.string "You heading {COLOR GREEN}back to the University{COLOR DARK_GRAY}? I'm\n"
	.string "doing the same. Meet you there!$"

JusmailTown_EventScript_WishingWell_Text_0:
# 214 "data/maps/JusmailTown/scripts.pory"
	.string "You peer down the Wishing Well...\n"
	.string "The air begins to sparkle.$"

JusmailTown_EventScript_WishingWell_Text_1:
# 221 "data/maps/JusmailTown/scripts.pory"
	.string "Toss a Wishing Star into the Well?$"

JusmailTown_EventScript_WishingWell_Text_2:
# 228 "data/maps/JusmailTown/scripts.pory"
	.string "The Wishing Star shines as it falls...$"

JusmailTown_EventScript_WishingWell_Text_3:
# 230 "data/maps/JusmailTown/scripts.pory"
	.string "...  ...  ...  ...!$"

JusmailTown_EventScript_WishingWell_Text_4:
# 427 "data/maps/JusmailTown/scripts.pory"
	.string "A Poké ball appeared... containing a\n"
	.string "Pokémon!$"

JusmailTown_EventScript_WishingWell_Text_5:
# 437 "data/maps/JusmailTown/scripts.pory"
	.string "The Pokémon was sent to the PC.$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0:
# 454 "data/maps/JusmailTown/scripts.pory"
	.string "Little Girl$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1:
# 457 "data/maps/JusmailTown/scripts.pory"
	.string "See that broken well?\n"
	.string "It's actually a Wishing Well, and it\l"
	.string "grants wishes! Really!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2:
# 460 "data/maps/JusmailTown/scripts.pory"
	.string "Sometimes, my friends and me throw\n"
	.string "Wishing Stars down the Wishing Well!\l"
	.string "Here's a few for you!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3:
# 467 "data/maps/JusmailTown/scripts.pory"
	.string "Did you get anything cool from the\n"
	.string "Wishing Well?$"

JusmailTown_EventScript_WishingWellSign_Text_0:
# 479 "data/maps/JusmailTown/scripts.pory"
	.string "JUSMAIL TOWN WELL\n"
	.string "More than meets the eye.$"

JusmailTown_EventScript_WishingWellSign_Text_1:
# 481 "data/maps/JusmailTown/scripts.pory"
	.string "There's more scribbled on here...\p"
	.string "Use Wishing Stars at the Wishing Well!\n"
	.string "POKéMON are granted to those who seek\l"
	.string "them!$"

JusmailTown_EventScript_CyclingMan_Text_0:
# 492 "data/maps/JusmailTown/scripts.pory"
	.string "Cycling Man$"

JusmailTown_EventScript_CyclingMan_Text_1:
# 498 "data/maps/JusmailTown/scripts.pory"
	.string "Thanks again for helping us get\n"
	.string "together! Now we can go cycling\l"
	.string "together every day!$"

JusmailTown_EventScript_CyclingMan_Text_2:
# 508 "data/maps/JusmailTown/scripts.pory"
	.string "Sigh... SIGHHH...\p"
	.string "Oh? Sorry, I've just been so down in the\n"
	.string "dumps. I saw online that girls only like\l"
	.string "you if you give them a Heart Scale, but\l"
	.string "I can't find one...\p"
	.string "I know! You seem nice, help a guy out! If\n"
	.string "you could find a {COLOR GREEN}Heart Scale{COLOR DARK_GRAY} for me, I'll\l"
	.string "be in your debt!$"

JusmailTown_EventScript_CyclingMan_Text_3:
# 516 "data/maps/JusmailTown/scripts.pory"
	.string "Hm? Oh, I remember you! Did you find a\n"
	.string "{COLOR GREEN}Heart Scale{COLOR DARK_GRAY} for me?$"

JusmailTown_EventScript_CyclingMan_Text_4:
# 525 "data/maps/JusmailTown/scripts.pory"
	.string "No? That's alright, I've been trying to\n"
	.string "find one, but it takes forever.\p"
	.string "I heard that wild Finneon can be found\n"
	.string "carrying them, and that sometimes they\l"
	.string "show up as Hidden Items around the\l"
	.string "region. Please, help me find a {COLOR GREEN}Heart\l"
	.string "Scale{COLOR DARK_GRAY}!$"

JusmailTown_EventScript_CyclingMan_Text_5:
# 534 "data/maps/JusmailTown/scripts.pory"
	.string "A Heart Scale! It's even more beautiful\n"
	.string "than I imagined... she'll definitely like\l"
	.string "this!\p"
	.string "I'll ride to her house and give it to her\n"
	.string "right now! Stay right there!$"

JusmailTown_EventScript_CyclingMan_Text_6:
# 549 "data/maps/JusmailTown/scripts.pory"
	.string "It totally worked, she loved it! Look\n"
	.string "who's got a girlfriend now!\p"
	.string "I'm so happy right now! Here, take this -\n"
	.string "it's all thanks to you!$"

JusmailTown_EventScript_CyclingMan_Text_7:
# 555 "data/maps/JusmailTown/scripts.pory"
	.string "Those are {COLOR GREEN}5 Love Balls{COLOR DARK_GRAY}. I'm so in love, I\n"
	.string "ended up buying a bunch while I was out\l"
	.string "shopping, ehehe!$"

JusmailTown_EventScript_CyclingWoman_Text_0:
# 568 "data/maps/JusmailTown/scripts.pory"
	.string "Cycling Woman$"

JusmailTown_EventScript_CyclingWoman_Text_1:
# 569 "data/maps/JusmailTown/scripts.pory"
	.string "Ahaha, he's so funny! Why'd he think he\n"
	.string "needed a Heart Scale to ask me out? We\l"
	.string "literally ride our bikes together every\l"
	.string "day, of course I liked him back!$"

JusmailTown_EventScript_Bounsweet_Text_0:
# 579 "data/maps/JusmailTown/scripts.pory"
	.string "Bounsweet$"

JusmailTown_EventScript_Bounsweet_Text_1:
# 581 "data/maps/JusmailTown/scripts.pory"
	.string "Ee-hee!$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_0:
# 592 "data/maps/JusmailTown/scripts.pory"
	.string "Fashionista$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_1:
# 597 "data/maps/JusmailTown/scripts.pory"
	.string "My cute, pink Bounsweet has inspired me\n"
	.string "to put together a new outfit!$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_2:
# 602 "data/maps/JusmailTown/scripts.pory"
	.string "You're a new Trainer, right? I'll cut you\n"
	.string "a deal! I'll give you this {COLOR GREEN}Casual Coral\l"
	.string "Outfit{COLOR DARK_GRAY} for just ¥1900. How about it?$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_3:
# 608 "data/maps/JusmailTown/scripts.pory"
	.string "No? Your loss!$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_4:
# 621 "data/maps/JusmailTown/scripts.pory"
	.string "Hey, you don't have the money for that!$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_5:
# 632 "data/maps/JusmailTown/scripts.pory"
	.string "The Casual Coral Outfit has been added\n"
	.string "to the Outfit Box!$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_6:
# 638 "data/maps/JusmailTown/scripts.pory"
	.string "Thanks! I tried my best to make the\n"
	.string "Casual Coral Outfit as comfortable as\l"
	.string "possible.$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_7:
# 645 "data/maps/JusmailTown/scripts.pory"
	.string "I hope you like the Casual Coral Outfit!\n"
	.string "I tried to make it as cute and\l"
	.string "comfortable as possible, perfect for\l"
	.string "the Ilios Region heat!$"

JusmailTown_Text_RaniaDefeated::
# 201 "data/maps/JusmailTown/scripts.pory"
	.string "Aw, I thought I balanced my team\n"
	.string "perfectly!$"

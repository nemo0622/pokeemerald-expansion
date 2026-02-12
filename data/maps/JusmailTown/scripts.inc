JusmailTown_MapScripts::
# 2 "data/maps/JusmailTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JusmailTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 14 "data/maps/JusmailTown/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, JusmailTown_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
	.byte 0

JusmailTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_VISITED_JUSMAIL_TOWN
# 5 "data/maps/JusmailTown/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, JusmailTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
JusmailTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 11 "data/maps/JusmailTown/scripts.pory"
	clearflag FLAG_TRIGGERED_WINDMILL_SPAWN
	return

JusmailTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/JusmailTown/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto JusmailTown_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

JusmailTown_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 15 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_SpawnWindmillVirtualObjects
	return


JusmailTown_EventScript_DirectionSign::
# 21 "data/maps/JusmailTown/scripts.pory"
	lock
# 22 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_DirectionSign_Text_0
# 23 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 24 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_Sign_MartSign::
# 30 "data/maps/JusmailTown/scripts.pory"
	lock
# 31 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_Sign_MartSign_Text_0
# 32 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 33 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_TriggerWindmillSpawn::
# 39 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_TRIGGERED_WINDMILL_SPAWN
# 40 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_SpawnWindmillVirtualObjects
	return


JusmailTown_SpawnWindmillVirtualObjects::
# 47 "data/maps/JusmailTown/scripts.pory"
	goto_if_set FLAG_TRIGGERED_WINDMILL_SPAWN, JusmailTown_SpawnWindmillVirtualObjects_2
JusmailTown_SpawnWindmillVirtualObjects_1:
# 56 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_SpawnWindmillVirtualObjects_2:
# 49 "data/maps/JusmailTown/scripts.pory"
	special DestroyVirtualObjects
# 50 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TL, 16, 20, 19, 4, DIR_SOUTH
# 51 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TR, 17, 24, 19, 4, DIR_SOUTH
# 52 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BL, 18, 20, 23, 4, DIR_SOUTH
# 53 "data/maps/JusmailTown/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BR, 19, 24, 23, 4, DIR_SOUTH
	goto JusmailTown_SpawnWindmillVirtualObjects_1


JusmailTown_Sign_GymSign::
# 62 "data/maps/JusmailTown/scripts.pory"
	lock
# 63 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_Sign_GymSign_Text_0
# 64 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 65 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Woman::
# 71 "data/maps/JusmailTown/scripts.pory"
	lock
# 72 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 73 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Woman_Text_0
# 74 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Woman_Text_1
# 75 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 76 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Boy::
# 82 "data/maps/JusmailTown/scripts.pory"
	lock
# 83 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 84 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Boy_Text_0
# 85 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Boy_Text_1
# 86 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 87 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Farmer::
# 93 "data/maps/JusmailTown/scripts.pory"
	lock
# 94 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 95 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Farmer_Text_0
# 96 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Farmer_Text_1
# 97 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 98 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_MarketMan::
# 104 "data/maps/JusmailTown/scripts.pory"
	lock
# 105 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 106 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_MarketMan_Text_0
# 107 "data/maps/JusmailTown/scripts.pory"
	message JusmailTown_EventScript_MarketMan_Text_1
# 108 "data/maps/JusmailTown/scripts.pory"
	waitmessage
# 109 "data/maps/JusmailTown/scripts.pory"
	pokemart JusmailTown_Mart
# 110 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 111 "data/maps/JusmailTown/scripts.pory"
	delay 1
# 112 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_MarketMan_Text_0
# 113 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_MarketMan_Text_2
# 114 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 115 "data/maps/JusmailTown/scripts.pory"
	release
	end


	.align 2
# 119 "data/maps/JusmailTown/scripts.pory"
JusmailTown_Mart:
# 121 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 122 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_POTION
# 123 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 124 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

JusmailTown_EventScript_RockSmashHiker::
# 129 "data/maps/JusmailTown/scripts.pory"
	lock
# 130 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 131 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_BROKE_JUSMAIL_TOWN_ROCKS, JusmailTown_EventScript_RockSmashHiker_2
# 139 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RockSmashHiker_Text_0
# 140 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RockSmashHiker_Text_2
# 141 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_RockSmashHiker_1:
# 143 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_RockSmashHiker_2:
# 133 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RockSmashHiker_Text_0
# 134 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RockSmashHiker_Text_1
# 135 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_RockSmashHiker_1


JusmailTown_EventScript_PsychicM::
# 149 "data/maps/JusmailTown/scripts.pory"
	lock
# 150 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 151 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_PsychicM_Text_0
# 152 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_PsychicM_Text_1
# 153 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 154 "data/maps/JusmailTown/scripts.pory"
	delay 20
# 155 "data/maps/JusmailTown/scripts.pory"
	emote 18, EMOTE_QUESTION
# 156 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_PsychicM_Text_0
# 157 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_PsychicM_Text_2
# 158 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 159 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_RaniaEventTrigger::
# 167 "data/maps/JusmailTown/scripts.pory"
	lock
# 168 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 169 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_EventScript_RaniaEvent
	end


JusmailTown_EventScript_RaniaEvent::
# 176 "data/maps/JusmailTown/scripts.pory"
	lockall
# 177 "data/maps/JusmailTown/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 178 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 179 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 180 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_1, MSGBOX_YESNO
# 181 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_EventScript_RaniaEvent_2
# 191 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 192 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_3
# 194 "data/maps/JusmailTown/scripts.pory"
	trainerbattle_no_intro TRAINER_JUSMAIL_RANIA, JusmailTown_Text_RaniaDefeated
# 197 "data/maps/JusmailTown/scripts.pory"
	lockall
# 198 "data/maps/JusmailTown/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 199 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 200 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 201 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_4
# 202 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 203 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_HM_CUT
# 204 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 205 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_5
# 206 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 209 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
# 210 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_RANIA_STATE, 1
# 211 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_NIKO_STATE, 1
# 212 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 213 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 214 "data/maps/JusmailTown/scripts.pory"
	removeobject 11
# 215 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 216 "data/maps/JusmailTown/scripts.pory"
	delay 20
JusmailTown_EventScript_RaniaEvent_1:
# 218 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_RaniaEvent_2:
# 183 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 184 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_2
# 185 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 186 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 187 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
	goto JusmailTown_EventScript_RaniaEvent_1


JusmailTown_EventScript_WishingWell::
# 234 "data/maps/JusmailTown/scripts.pory"
	lockall
# 235 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_0
# 236 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 238 "data/maps/JusmailTown/scripts.pory"
	checkitem ITEM_WISHING_STAR
# 240 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_2
JusmailTown_EventScript_WishingWell_1:
# 471 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_WishingWell_2:
# 242 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_1, MSGBOX_YESNO
# 244 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_4
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_4:
# 247 "data/maps/JusmailTown/scripts.pory"
	removeitem ITEM_WISHING_STAR
# 249 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_2
# 250 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 251 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_3
# 252 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 255 "data/maps/JusmailTown/scripts.pory"
	randomelement SPECIES_ROWLET, SPECIES_LITTEN, SPECIES_POPPLIO, SPECIES_CHESPIN, SPECIES_FENNEKIN, SPECIES_FROAKIE, SPECIES_SPRIGATITO, SPECIES_FUECOCO, SPECIES_QUAXLY, SPECIES_PANSAGE, SPECIES_PANSEAR, SPECIES_PANPOUR, SPECIES_LILLIPUP, SPECIES_PIKIPEK, SPECIES_DUCKLETT, SPECIES_HOPPIP, SPECIES_NINCADA, SPECIES_GRUBBIN, SPECIES_PARAS, SPECIES_PHANPY, SPECIES_SNOM, SPECIES_CUBONE, SPECIES_MUDBRAY, SPECIES_MAREEP, SPECIES_CUTIEFLY, SPECIES_GRIMER, SPECIES_GRIMER_ALOLAN, SPECIES_WURMPLE, SPECIES_TROPIUS, SPECIES_RALTS, SPECIES_EEVEE, SPECIES_SKIDDO, SPECIES_MURKROW, SPECIES_ORICORIO_BAILE, SPECIES_ORICORIO_POM_POM, SPECIES_ORICORIO_PAU, SPECIES_ORICORIO_SENSU, SPECIES_SANDSHREW, SPECIES_SANDSHREW_ALOLAN, SPECIES_NOSEPASS, SPECIES_MAWILE, SPECIES_ROCKRUFF, SPECIES_VULLABY, SPECIES_WOOBAT, SPECIES_ARON, SPECIES_TIMBURR, SPECIES_KLAWF, SPECIES_POLIWAG, SPECIES_PUMPKABOO, SPECIES_SHROOMISH, SPECIES_HERACROSS, SPECIES_SHUPPET, SPECIES_AIPOM, SPECIES_WOOPER, SPECIES_WOOPER_PALDEAN, SPECIES_TOEDSCOOL, SPECIES_BLITZLE, SPECIES_HOOTHOOT, SPECIES_MIENFOO, SPECIES_FLITTLE, SPECIES_VULPIX, SPECIES_VULPIX_ALOLAN, SPECIES_HONEDGE, SPECIES_DWEBBLE, SPECIES_MINIOR, SPECIES_GASTLY, SPECIES_BALTOY, SPECIES_SALANDIT, SPECIES_TOGEPI, SPECIES_CHERUBI, SPECIES_HOUNDOUR, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_SKORUPI, SPECIES_SPINARAK, SPECIES_ONIX, SPECIES_KOMALA, SPECIES_WINGULL, SPECIES_STANTLER, SPECIES_SNORUNT, SPECIES_SPHEAL, SPECIES_SEEL, SPECIES_BRONZOR, SPECIES_ZORUA, SPECIES_ZORUA_HISUI, SPECIES_SNEASEL, SPECIES_SNEASEL_HISUI, SPECIES_MEOWTH, SPECIES_MEOWTH_ALOLAN, SPECIES_MEOWTH_GALAR, SPECIES_PACHIRISU, SPECIES_CHIKORITA, SPECIES_CYNDAQUIL, SPECIES_TOTODILE, SPECIES_JANGMO_O, SPECIES_HAWLUCHA, SPECIES_SIZZLIPEDE, SPECIES_CRANIDOS, SPECIES_SHIELDON, SPECIES_SPIRITOMB, SPECIES_TYRUNT, SPECIES_AMAURA, SPECIES_YAMPER, SPECIES_PAWMI, SPECIES_SHROODLE, SPECIES_BUIZEL, SPECIES_STUNKY, SPECIES_CORSOLA, SPECIES_CORSOLA_GALAR, SPECIES_FINNEON, SPECIES_WAILMER, SPECIES_TENTACOOL, SPECIES_CLAUNCHER, SPECIES_SCYTHER, SPECIES_STUFFUL, SPECIES_DREEPY, SPECIES_TOGEDEMARU, SPECIES_CRABRAWLER, SPECIES_LILEEP, SPECIES_ANORITH, SPECIES_DEDENNE, SPECIES_CHATOT, SPECIES_MEDITITE, SPECIES_DROWZEE, SPECIES_EKANS, SPECIES_BASCULIN_WHITE_STRIPED, SPECIES_PANCHAM, SPECIES_SKRELP, SPECIES_GOTHITA, SPECIES_SOLOSIS, SPECIES_LITWICK, SPECIES_CHARCADET, SPECIES_CHINCHOU, SPECIES_SHELLDER, SPECIES_CLAMPERL, SPECIES_FLABEBE, SPECIES_IGGLYBUFF, SPECIES_HELIOPTILE, SPECIES_TRAPINCH, SPECIES_DODUO, SPECIES_TINKATINK, SPECIES_SCRAGGY, SPECIES_GLIGAR, SPECIES_TORKOAL, SPECIES_NUMEL, SPECIES_RELICANTH, SPECIES_BARBOACH, SPECIES_MUNNA, SPECIES_KECLEON, SPECIES_MAGIKARP, SPECIES_FOMANTIS, SPECIES_ORANGURU, SPECIES_PASSIMIAN, SPECIES_ZIGZAGOON, SPECIES_ZIGZAGOON_GALAR, SPECIES_GOOMY, SPECIES_BRUXISH, SPECIES_IMPIDIMP, SPECIES_SWABLU, SPECIES_MANKEY, SPECIES_VOLTORB, SPECIES_VOLTORB_HISUI, SPECIES_LAPRAS, SPECIES_GIRAFARIG, SPECIES_BELLSPROUT, SPECIES_MAGNEMITE, SPECIES_CUBCHOO, SPECIES_GROWLITHE, SPECIES_GROWLITHE_HISUI, SPECIES_PSYDUCK, SPECIES_YANMA, SPECIES_AERODACTYL, SPECIES_REMORAID, SPECIES_RUFFLET, SPECIES_NATU, SPECIES_SNOVER, SPECIES_DUSKULL, SPECIES_SWINUB, SPECIES_CORPHISH, SPECIES_COMFEY, SPECIES_UNOWN, SPECIES_TIRTOUGA, SPECIES_ARCHEN, SPECIES_DRACOZOLT, SPECIES_ARCTOZOLT, SPECIES_DRACOVISH, SPECIES_ARCTOVISH, SPECIES_TYPE_NULL, SPECIES_LARVITAR, SPECIES_DHELMISE, SPECIES_DRATINI, SPECIES_BOUNSWEET, SPECIES_CUFANT, SPECIES_FINIZEN, SPECIES_APPLIN, SPECIES_SANDILE, SPECIES_FALINKS
# 453 "data/maps/JusmailTown/scripts.pory"
	givemon VAR_RESULT, 1, ITEM_NONE, ITEM_CHERISH_BALL
# 454 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_4
# 455 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 456 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq JusmailTown_EventScript_WishingWell_6
# 463 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 464 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_5
# 465 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_6:
# 458 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 459 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto JusmailTown_EventScript_WishingWell_1


JusmailTown_EventScript_LittleGirlWithWishingStar::
# 479 "data/maps/JusmailTown/scripts.pory"
	lock
# 480 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 481 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 482 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL, JusmailTown_EventScript_LittleGirlWithWishingStar_2
# 494 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3
# 495 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_LittleGirlWithWishingStar_1:
# 497 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_LittleGirlWithWishingStar_2:
# 484 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1
# 485 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 486 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 487 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2
# 488 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 489 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_WISHING_STAR, 3
# 490 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL
	goto JusmailTown_EventScript_LittleGirlWithWishingStar_1


JusmailTown_EventScript_WishingWellSign::
# 505 "data/maps/JusmailTown/scripts.pory"
	lock
# 506 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_0
# 507 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 508 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_1
# 509 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 510 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_CyclingMan::
# 517 "data/maps/JusmailTown/scripts.pory"
	lock
# 518 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 519 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingMan_Text_0
# 522 "data/maps/JusmailTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_LOVESTRUCK_BIKER
# 523 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_CyclingMan_2
# 532 "data/maps/JusmailTown/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_LOVESTRUCK_BIKER
# 533 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_EventScript_CyclingMan_4
# 543 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_3
# 544 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 546 "data/maps/JusmailTown/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 547 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 549 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_EventScript_CyclingMan_7
# 557 "data/maps/JusmailTown/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 558 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 559 "data/maps/JusmailTown/scripts.pory"
	delay 15
# 560 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingMan_Text_0
# 561 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_5
# 562 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 564 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 565 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 566 "data/maps/JusmailTown/scripts.pory"
	clearflag FLAG_HIDE_CYCLING_WOMAN_JUSMAIL
# 567 "data/maps/JusmailTown/scripts.pory"
	addobject 17
# 568 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 569 "data/maps/JusmailTown/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 570 "data/maps/JusmailTown/scripts.pory"
	delay 20
# 572 "data/maps/JusmailTown/scripts.pory"
	applymovement 16, Common_Movement_Heart
# 573 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 574 "data/maps/JusmailTown/scripts.pory"
	delay 15
# 575 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingMan_Text_0
# 576 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_6
# 577 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 578 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_LOVE_BALL, 5
# 579 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 580 "data/maps/JusmailTown/scripts.pory"
	delay 5
# 581 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingMan_Text_0
# 582 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_7
# 583 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 585 "data/maps/JusmailTown/scripts.pory"
	delay 20
# 586 "data/maps/JusmailTown/scripts.pory"
	completequest QUEST_LOVESTRUCK_BIKER
	return

JusmailTown_EventScript_CyclingMan_2:
# 525 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_1
# 526 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 527 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_CyclingMan_4:
# 535 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_2
# 536 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 538 "data/maps/JusmailTown/scripts.pory"
	delay 20
# 539 "data/maps/JusmailTown/scripts.pory"
	startquest QUEST_LOVESTRUCK_BIKER
	return

JusmailTown_EventScript_CyclingMan_7:
# 551 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingMan_Text_0
# 552 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingMan_Text_4
# 553 "data/maps/JusmailTown/scripts.pory"
	closemessage
	return


JusmailTown_EventScript_CyclingWoman::
# 593 "data/maps/JusmailTown/scripts.pory"
	lock
# 594 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 595 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CyclingWoman_Text_0
# 596 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CyclingWoman_Text_1
# 597 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 598 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_Bounsweet::
# 604 "data/maps/JusmailTown/scripts.pory"
	lock
# 605 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 606 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_Bounsweet_Text_0
# 607 "data/maps/JusmailTown/scripts.pory"
	playmoncry SPECIES_BOUNSWEET, CRY_MODE_NORMAL
# 608 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_Bounsweet_Text_1
# 609 "data/maps/JusmailTown/scripts.pory"
	waitmoncry
# 610 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 611 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_CoralOutfitBeauty::
# 617 "data/maps/JusmailTown/scripts.pory"
	lock
# 618 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 619 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CoralOutfitBeauty_Text_0
# 620 "data/maps/JusmailTown/scripts.pory"
	checkoutfitflag OUTFIT_CORAL
# 622 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JusmailTown_EventScript_CoralOutfitBeauty_2
# 672 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_7
# 673 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_CoralOutfitBeauty_1:
# 675 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_CoralOutfitBeauty_2:
# 624 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_1
# 625 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 626 "data/maps/JusmailTown/scripts.pory"
	delay 5
# 627 "data/maps/JusmailTown/scripts.pory"
	showmoneybox 0, 0
# 628 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CoralOutfitBeauty_Text_0
# 629 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_2, MSGBOX_YESNO
# 630 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 631 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JusmailTown_EventScript_CoralOutfitBeauty_5
# 643 "data/maps/JusmailTown/scripts.pory"
	checkmoney 1900
# 644 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq JusmailTown_EventScript_CoralOutfitBeauty_8
# 655 "data/maps/JusmailTown/scripts.pory"
	removemoney 1900
# 656 "data/maps/JusmailTown/scripts.pory"
	updatemoneybox
# 657 "data/maps/JusmailTown/scripts.pory"
	delay 5
# 658 "data/maps/JusmailTown/scripts.pory"
	unlockoutfit OUTFIT_CORAL
# 659 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_5
# 660 "data/maps/JusmailTown/scripts.pory"
	delay 20
# 661 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 662 "data/maps/JusmailTown/scripts.pory"
	hidemoneybox
# 663 "data/maps/JusmailTown/scripts.pory"
	delay 5
# 664 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CoralOutfitBeauty_Text_0
# 665 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_6
# 666 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_CoralOutfitBeauty_1

JusmailTown_EventScript_CoralOutfitBeauty_5:
# 633 "data/maps/JusmailTown/scripts.pory"
	hidemoneybox
# 634 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CoralOutfitBeauty_Text_0
# 635 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_3
# 636 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 637 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_CoralOutfitBeauty_8:
# 646 "data/maps/JusmailTown/scripts.pory"
	hidemoneybox
# 647 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_CoralOutfitBeauty_Text_0
# 648 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_CoralOutfitBeauty_Text_4
# 649 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 650 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_DirectionSign_Text_0:
# 22 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town\n"
	.string "The Breadbasket of Ilios\p"
	.string "{UP_ARROW} Bronze Fields\n"
	.string "Wanderers' Woods {DOWN_ARROW}$"

JusmailTown_Sign_MartSign_Text_0:
# 31 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town Roadside Market$"

JusmailTown_Sign_GymSign_Text_0:
# 63 "data/maps/JusmailTown/scripts.pory"
	.string "Gym Leader: Polymnia\n"
	.string "Muse of Nature's Hymns$"

JusmailTown_EventScript_NPC_Woman_Text_0:
# 73 "data/maps/JusmailTown/scripts.pory"
	.string "Woman$"

JusmailTown_EventScript_NPC_Woman_Text_1:
# 74 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town is a really small community,\n"
	.string "but I love it like this. We live alongside\l"
	.string "nature here, not in conflict with it.$"

JusmailTown_EventScript_NPC_Boy_Text_0:
# 84 "data/maps/JusmailTown/scripts.pory"
	.string "Boy$"

JusmailTown_EventScript_NPC_Boy_Text_1:
# 85 "data/maps/JusmailTown/scripts.pory"
	.string "Flying-type Pokémon are good against\n"
	.string "Polymnia's Pokémon, Bug and Grass-type\l"
	.string "Pokémon.\p"
	.string "I hear most Gym Leaders have a Pokémon\n"
	.string "that is strong against whatever the\l"
	.string "Leader is weak against. Sounds like\l"
	.string "they're tough fights!$"

JusmailTown_EventScript_NPC_Farmer_Text_0:
# 95 "data/maps/JusmailTown/scripts.pory"
	.string "Farmer$"

JusmailTown_EventScript_NPC_Farmer_Text_1:
# 96 "data/maps/JusmailTown/scripts.pory"
	.string "Bleugh, lots of bugs around here...\n"
	.string "they're cute, but their little legs\l"
	.string "scare me!$"

JusmailTown_EventScript_MarketMan_Text_0:
# 106 "data/maps/JusmailTown/scripts.pory"
	.string "Market Man$"

JusmailTown_EventScript_MarketMan_Text_1:
# 107 "data/maps/JusmailTown/scripts.pory"
	.string "Welcome to the Jusmail Town Farmer's\n"
	.string "Market? How can I help you?$"

JusmailTown_EventScript_MarketMan_Text_2:
# 113 "data/maps/JusmailTown/scripts.pory"
	.string "Make sure to come back soon!$"

JusmailTown_EventScript_RockSmashHiker_Text_0:
# 133 "data/maps/JusmailTown/scripts.pory"
	.string "Hiker$"

JusmailTown_EventScript_RockSmashHiker_Text_1:
# 134 "data/maps/JusmailTown/scripts.pory"
	.string "Trying to head south too, huh? Well,\n"
	.string "these rocks are blocking the only way.\p"
	.string "Someone with {COLOR GREEN}Rock Smash{COLOR DARK_GRAY} could break\n"
	.string "these rocks, though.$"

JusmailTown_EventScript_RockSmashHiker_Text_2:
# 140 "data/maps/JusmailTown/scripts.pory"
	.string "Woah, thanks for clearing the path! Now\n"
	.string "I can finally head south!$"

JusmailTown_EventScript_PsychicM_Text_0:
# 151 "data/maps/JusmailTown/scripts.pory"
	.string "Psychic$"

JusmailTown_EventScript_PsychicM_Text_1:
# 152 "data/maps/JusmailTown/scripts.pory"
	.string "I believe in the old rumors about the\n"
	.string "Wishing Well. Maybe I'll get a Pokémon\l"
	.string "strong enough to defend the town...$"

JusmailTown_EventScript_PsychicM_Text_2:
# 157 "data/maps/JusmailTown/scripts.pory"
	.string "Hm? Haven't you heard? Team Chimera\n"
	.string "raided Areios Town, and their Gym\l"
	.string "Leader has gone missing. That was\l"
	.string "supposed to be the strongest Gym\l"
	.string "Leader in the Ilios Region, but Team\l"
	.string "Chimera still overran it!$"

JusmailTown_EventScript_RaniaEvent_Text_0:
# 179 "data/maps/JusmailTown/scripts.pory"
	.string "Rania$"

JusmailTown_EventScript_RaniaEvent_Text_1:
# 180 "data/maps/JusmailTown/scripts.pory"
	.string "Chaire, {PLAYER}! I see you've won\n"
	.string "your first Gym Badge!\p"
	.string "Since you left, Niko and I have decided\n"
	.string "to do some more field research\l"
	.string "ourselves, which means training up our\l"
	.string "own Pokémon teams! What do you say,\l"
	.string "wanna battle?$"

JusmailTown_EventScript_RaniaEvent_Text_2:
# 184 "data/maps/JusmailTown/scripts.pory"
	.string "Need more time to train? I get you. Let\n"
	.string "me know when you wanna battle!$"

JusmailTown_EventScript_RaniaEvent_Text_3:
# 192 "data/maps/JusmailTown/scripts.pory"
	.string "Alright, here I come!$"

JusmailTown_EventScript_RaniaEvent_Text_4:
# 201 "data/maps/JusmailTown/scripts.pory"
	.string "Phew, what a battle! Even against a\n"
	.string "strong type trio like mine, you still\l"
	.string "held your own. Looks like that Gym\l"
	.string "Badge really means something!\p"
	.string "Ah, right, another thing. Professor Elia\n"
	.string "sent me to give you this HM. Here!$"

JusmailTown_EventScript_RaniaEvent_Text_5:
# 205 "data/maps/JusmailTown/scripts.pory"
	.string "With that HM, you can {COLOR GREEN}cut down small\n"
	.string "trees{COLOR DARK_GRAY} that might be blocking your path.\p"
	.string "You heading {COLOR GREEN}back to the University{COLOR DARK_GRAY}? I'm\n"
	.string "doing the same. Meet you there!$"

JusmailTown_EventScript_WishingWell_Text_0:
# 235 "data/maps/JusmailTown/scripts.pory"
	.string "You peer down the Wishing Well...\n"
	.string "The air begins to sparkle.$"

JusmailTown_EventScript_WishingWell_Text_1:
# 242 "data/maps/JusmailTown/scripts.pory"
	.string "Toss a Wishing Star into the Well?$"

JusmailTown_EventScript_WishingWell_Text_2:
# 249 "data/maps/JusmailTown/scripts.pory"
	.string "The Wishing Star shines as it falls...$"

JusmailTown_EventScript_WishingWell_Text_3:
# 251 "data/maps/JusmailTown/scripts.pory"
	.string "...  ...  ...  ...!$"

JusmailTown_EventScript_WishingWell_Text_4:
# 454 "data/maps/JusmailTown/scripts.pory"
	.string "A Poké ball appeared... containing a\n"
	.string "Pokémon!$"

JusmailTown_EventScript_WishingWell_Text_5:
# 464 "data/maps/JusmailTown/scripts.pory"
	.string "The Pokémon was sent to the PC.$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0:
# 481 "data/maps/JusmailTown/scripts.pory"
	.string "Little Girl$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1:
# 484 "data/maps/JusmailTown/scripts.pory"
	.string "See that broken well?\n"
	.string "It's actually a Wishing Well, and it\l"
	.string "grants wishes! Really!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2:
# 487 "data/maps/JusmailTown/scripts.pory"
	.string "Sometimes, my friends and me throw\n"
	.string "Wishing Stars down the Wishing Well!\l"
	.string "Here's a few for you!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3:
# 494 "data/maps/JusmailTown/scripts.pory"
	.string "Did you get anything cool from the\n"
	.string "Wishing Well?$"

JusmailTown_EventScript_WishingWellSign_Text_0:
# 506 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town Well\n"
	.string "More than meets the eye.$"

JusmailTown_EventScript_WishingWellSign_Text_1:
# 508 "data/maps/JusmailTown/scripts.pory"
	.string "There's more scribbled on here...\p"
	.string "Use Wishing Stars at the Wishing Well!\n"
	.string "Pokémon are granted to those who seek\l"
	.string "them!$"

JusmailTown_EventScript_CyclingMan_Text_0:
# 519 "data/maps/JusmailTown/scripts.pory"
	.string "Cycling Man$"

JusmailTown_EventScript_CyclingMan_Text_1:
# 525 "data/maps/JusmailTown/scripts.pory"
	.string "Thanks again for helping us get\n"
	.string "together! Now we can go cycling\l"
	.string "together every day!$"

JusmailTown_EventScript_CyclingMan_Text_2:
# 535 "data/maps/JusmailTown/scripts.pory"
	.string "Sigh... SIGHHH...\p"
	.string "Oh? Sorry, I've just been so down in the\n"
	.string "dumps. I saw online that girls only like\l"
	.string "you if you give them a Heart Scale, but\l"
	.string "I can't find one...\p"
	.string "I know! You seem nice, help a guy out! If\n"
	.string "you could find a {COLOR GREEN}Heart Scale{COLOR DARK_GRAY} for me, I'll\l"
	.string "be in your debt!$"

JusmailTown_EventScript_CyclingMan_Text_3:
# 543 "data/maps/JusmailTown/scripts.pory"
	.string "Hm? Oh, I remember you! Did you find a\n"
	.string "{COLOR GREEN}Heart Scale{COLOR DARK_GRAY} for me?$"

JusmailTown_EventScript_CyclingMan_Text_4:
# 552 "data/maps/JusmailTown/scripts.pory"
	.string "No? That's alright, I've been trying to\n"
	.string "find one, but it takes forever.\p"
	.string "I heard that wild Finneon can be found\n"
	.string "carrying them, and that sometimes they\l"
	.string "show up as Hidden Items around the\l"
	.string "region. Please, help me find a {COLOR GREEN}Heart\l"
	.string "Scale{COLOR DARK_GRAY}!$"

JusmailTown_EventScript_CyclingMan_Text_5:
# 561 "data/maps/JusmailTown/scripts.pory"
	.string "A Heart Scale! It's even more beautiful\n"
	.string "than I imagined... she'll definitely like\l"
	.string "this!\p"
	.string "I'll ride to her house and give it to her\n"
	.string "right now! Stay right there!$"

JusmailTown_EventScript_CyclingMan_Text_6:
# 576 "data/maps/JusmailTown/scripts.pory"
	.string "It totally worked, she loved it! Look\n"
	.string "who's got a girlfriend now!\p"
	.string "I'm so happy right now! Here, take this -\n"
	.string "it's all thanks to you!$"

JusmailTown_EventScript_CyclingMan_Text_7:
# 582 "data/maps/JusmailTown/scripts.pory"
	.string "Those are {COLOR GREEN}5 Love Balls{COLOR DARK_GRAY}. I'm so in love, I\n"
	.string "ended up buying a bunch while I was out\l"
	.string "shopping, ehehe!$"

JusmailTown_EventScript_CyclingWoman_Text_0:
# 595 "data/maps/JusmailTown/scripts.pory"
	.string "Cycling Woman$"

JusmailTown_EventScript_CyclingWoman_Text_1:
# 596 "data/maps/JusmailTown/scripts.pory"
	.string "Ahaha, he's so funny! Why'd he think he\n"
	.string "needed a Heart Scale to ask me out? We\l"
	.string "literally ride our bikes together every\l"
	.string "day, of course I liked him back!$"

JusmailTown_EventScript_Bounsweet_Text_0:
# 606 "data/maps/JusmailTown/scripts.pory"
	.string "Bounsweet$"

JusmailTown_EventScript_Bounsweet_Text_1:
# 608 "data/maps/JusmailTown/scripts.pory"
	.string "Ee-hee!$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_0:
# 619 "data/maps/JusmailTown/scripts.pory"
	.string "Fashionista$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_1:
# 624 "data/maps/JusmailTown/scripts.pory"
	.string "My cute, pink Bounsweet has inspired me\n"
	.string "to put together a new outfit!$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_2:
# 629 "data/maps/JusmailTown/scripts.pory"
	.string "You're a new Trainer, right? I'll cut you\n"
	.string "a deal! I'll give you this {COLOR GREEN}Casual Coral\l"
	.string "Outfit{COLOR DARK_GRAY} for just ¥1900. How about it?$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_3:
# 635 "data/maps/JusmailTown/scripts.pory"
	.string "No? Your loss!$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_4:
# 648 "data/maps/JusmailTown/scripts.pory"
	.string "Hey, you don't have the money for that!$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_5:
# 659 "data/maps/JusmailTown/scripts.pory"
	.string "The Casual Coral Outfit has been added\n"
	.string "to the Outfit Box!$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_6:
# 665 "data/maps/JusmailTown/scripts.pory"
	.string "Thanks! I tried my best to make the\n"
	.string "Casual Coral Outfit as comfortable as\l"
	.string "possible.$"

JusmailTown_EventScript_CoralOutfitBeauty_Text_7:
# 672 "data/maps/JusmailTown/scripts.pory"
	.string "I hope you like the Casual Coral Outfit!\n"
	.string "I tried to make it as cute and\l"
	.string "comfortable as possible, perfect for\l"
	.string "the Ilios Region heat!$"

JusmailTown_Text_RaniaDefeated::
# 222 "data/maps/JusmailTown/scripts.pory"
	.string "Aw, I thought I balanced my team\n"
	.string "perfectly!$"

JusmailTown_MapScripts::
	.byte 0


JusmailTown_Sign_GymSign::
# 5 "data/maps/JusmailTown/scripts.pory"
	lock
# 6 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_Sign_GymSign_Text_0
# 7 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 8 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Woman::
# 14 "data/maps/JusmailTown/scripts.pory"
	lock
# 15 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 16 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Woman_Text_0
# 17 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Woman_Text_1
# 18 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 19 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Boy::
# 25 "data/maps/JusmailTown/scripts.pory"
	lock
# 26 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 27 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Boy_Text_0
# 28 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Boy_Text_1
# 29 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 30 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_NPC_Farmer::
# 36 "data/maps/JusmailTown/scripts.pory"
	lock
# 37 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 38 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_NPC_Farmer_Text_0
# 39 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_NPC_Farmer_Text_1
# 40 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 41 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_EventScript_MarketMan::
# 47 "data/maps/JusmailTown/scripts.pory"
	lock
# 48 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 49 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_MarketMan_Text_0
# 50 "data/maps/JusmailTown/scripts.pory"
	message JusmailTown_EventScript_MarketMan_Text_1
# 51 "data/maps/JusmailTown/scripts.pory"
	waitmessage
# 52 "data/maps/JusmailTown/scripts.pory"
	pokemart JusmailTown_Mart
# 53 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_MarketMan_Text_0
# 54 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_MarketMan_Text_2
# 55 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 56 "data/maps/JusmailTown/scripts.pory"
	release
	end


	.align 2
# 60 "data/maps/JusmailTown/scripts.pory"
JusmailTown_Mart:
# 62 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_POKE_BALL
# 63 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_POTION
# 64 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 65 "data/maps/JusmailTown/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

JusmailTown_EventScript_RaniaEventTrigger::
# 70 "data/maps/JusmailTown/scripts.pory"
	lock
# 71 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 72 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 73 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_EventScript_RaniaEvent
	end


JusmailTown_EventScript_RaniaEvent::
# 79 "data/maps/JusmailTown/scripts.pory"
	lockall
# 80 "data/maps/JusmailTown/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 81 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 82 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 83 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_1, MSGBOX_YESNO
# 84 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_EventScript_RaniaEvent_2
# 94 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 95 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_3
# 97 "data/maps/JusmailTown/scripts.pory"
	trainerbattle_no_intro TRAINER_JUSMAIL_RANIA, JusmailTown_Text_RaniaDefeated
# 100 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 101 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_4
# 102 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 103 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_HM_CUT
# 104 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 105 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_5
# 106 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 109 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
# 110 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_RANIA_STATE, 1
# 111 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_NIKO_STATE, 1
# 112 "data/maps/JusmailTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 113 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 114 "data/maps/JusmailTown/scripts.pory"
	removeobject 11
# 115 "data/maps/JusmailTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 116 "data/maps/JusmailTown/scripts.pory"
	delay 20
JusmailTown_EventScript_RaniaEvent_1:
# 118 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_RaniaEvent_2:
# 86 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 87 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_2
# 88 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 89 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 90 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
	goto JusmailTown_EventScript_RaniaEvent_1


JusmailTown_EventScript_WishingWell::
# 134 "data/maps/JusmailTown/scripts.pory"
	lockall
# 135 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_0
# 136 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 138 "data/maps/JusmailTown/scripts.pory"
	checkitem ITEM_WISHING_STAR
# 140 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_2
JusmailTown_EventScript_WishingWell_1:
# 390 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_WishingWell_2:
# 142 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_1, MSGBOX_YESNO
# 144 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_4
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_4:
# 147 "data/maps/JusmailTown/scripts.pory"
	removeitem ITEM_WISHING_STAR
# 149 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_2
# 150 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 151 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_3
# 152 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 155 "data/maps/JusmailTown/scripts.pory"
	randomelement SPECIES_BULBASAUR, SPECIES_CHARMANDER, SPECIES_SQUIRTLE, SPECIES_CATERPIE, SPECIES_CATERPIE, SPECIES_WEEDLE, SPECIES_WEEDLE, SPECIES_PIDGEY, SPECIES_PIDGEY, SPECIES_RATTATA, SPECIES_RATTATA, SPECIES_SPEAROW, SPECIES_SPEAROW, SPECIES_EKANS, SPECIES_EKANS, SPECIES_SANDSHREW, SPECIES_SANDSHREW, SPECIES_NIDORAN_F, SPECIES_NIDORAN_F, SPECIES_NIDORAN_M, SPECIES_NIDORAN_M, SPECIES_VULPIX, SPECIES_ZUBAT, SPECIES_ODDISH, SPECIES_PARAS, SPECIES_VENONAT, SPECIES_DIGLETT, SPECIES_MEOWTH, SPECIES_PSYDUCK, SPECIES_MANKEY, SPECIES_GROWLITHE, SPECIES_POLIWAG, SPECIES_POLIWAG, SPECIES_ABRA, SPECIES_MACHOP, SPECIES_BELLSPROUT, SPECIES_TENTACOOL, SPECIES_GEODUDE, SPECIES_PONYTA, SPECIES_SLOWPOKE, SPECIES_SLOWPOKE, SPECIES_MAGNEMITE, SPECIES_FARFETCHD, SPECIES_DODUO, SPECIES_SEEL, SPECIES_GRIMER, SPECIES_SHELLDER, SPECIES_GASTLY, SPECIES_ONIX, SPECIES_DROWZEE, SPECIES_KRABBY, SPECIES_VOLTORB, SPECIES_EXEGGCUTE, SPECIES_CUBONE, SPECIES_CUBONE, SPECIES_LICKITUNG, SPECIES_KOFFING, SPECIES_RHYHORN, SPECIES_HAPPINY, SPECIES_TANGELA, SPECIES_TANGELA, SPECIES_KANGASKHAN, SPECIES_HORSEA, SPECIES_GOLDEEN, SPECIES_STARYU, SPECIES_MIME_JR, SPECIES_SCYTHER, SPECIES_PINSIR, SPECIES_TAUROS, SPECIES_MAGIKARP, SPECIES_MAGIKARP, SPECIES_LAPRAS, SPECIES_DITTO, SPECIES_EEVEE, SPECIES_PORYGON, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_AERODACTYL, SPECIES_MUNCHLAX, SPECIES_DRATINI, SPECIES_CHIKORITA, SPECIES_TOTODILE, SPECIES_SENTRET, SPECIES_SENTRET, SPECIES_HOOTHOOT, SPECIES_HOOTHOOT, SPECIES_LEDYBA, SPECIES_LEDYBA, SPECIES_SPINARAK, SPECIES_CHINCHOU, SPECIES_PICHU, SPECIES_CLEFFA, SPECIES_IGGLYBUFF, SPECIES_TOGEPI, SPECIES_NATU, SPECIES_MAREEP, SPECIES_BONSLY, SPECIES_HOPPIP, SPECIES_HOPPIP, SPECIES_AIPOM, SPECIES_AIPOM, SPECIES_SUNKERN, SPECIES_SUNKERN, SPECIES_YANMA, SPECIES_WOOPER, SPECIES_MURKROW, SPECIES_MISDREAVUS, SPECIES_GIRAFARIG, SPECIES_PINECO, SPECIES_DUNSPARCE, SPECIES_GLIGAR, SPECIES_SNUBBULL, SPECIES_SNUBBULL, SPECIES_QWILFISH, SPECIES_SHUCKLE, SPECIES_HERACROSS, SPECIES_SNEASEL, SPECIES_TEDDIURSA, SPECIES_SLUGMA, SPECIES_SWINUB, SPECIES_CORSOLA, SPECIES_REMORAID, SPECIES_DELIBIRD, SPECIES_MANTYKE, SPECIES_SKARMORY, SPECIES_HOUNDOUR, SPECIES_PHANPY, SPECIES_PHANPY, SPECIES_STANTLER, SPECIES_SMEARGLE, SPECIES_TYROGUE, SPECIES_SMOOCHUM, SPECIES_ELEKID, SPECIES_MAGBY, SPECIES_MILTANK, SPECIES_LARVITAR, SPECIES_TREECKO, SPECIES_TORCHIC, SPECIES_MUDKIP, SPECIES_POOCHYENA, SPECIES_POOCHYENA, SPECIES_ZIGZAGOON, SPECIES_ZIGZAGOON, SPECIES_WURMPLE, SPECIES_WURMPLE, SPECIES_LOTAD, SPECIES_LOTAD, SPECIES_SEEDOT, SPECIES_SEEDOT, SPECIES_NINCADA, SPECIES_NINCADA, SPECIES_TAILLOW, SPECIES_TAILLOW, SPECIES_SHROOMISH, SPECIES_SHROOMISH, SPECIES_SPINDA, SPECIES_WINGULL, SPECIES_SURSKIT, SPECIES_WAILMER, SPECIES_SKITTY, SPECIES_SKITTY, SPECIES_KECLEON, SPECIES_BALTOY, SPECIES_NOSEPASS, SPECIES_TORKOAL, SPECIES_SABLEYE, SPECIES_BARBOACH, SPECIES_LUVDISC, SPECIES_CORPHISH, SPECIES_FEEBAS, SPECIES_CARVANHA, SPECIES_TRAPINCH, SPECIES_MAKUHITA, SPECIES_ELECTRIKE, SPECIES_NUMEL, SPECIES_SPHEAL, SPECIES_CACNEA, SPECIES_SNORUNT, SPECIES_LUNATONE, SPECIES_SOLROCK, SPECIES_AZURILL, SPECIES_SPOINK, SPECIES_PLUSLE, SPECIES_MINUN, SPECIES_MAWILE, SPECIES_MEDITITE, SPECIES_MEDITITE, SPECIES_SWABLU, SPECIES_SWABLU, SPECIES_WYNAUT, SPECIES_DUSKULL, SPECIES_BUDEW, SPECIES_SLAKOTH, SPECIES_GULPIN, SPECIES_TROPIUS, SPECIES_WHISMUR, SPECIES_CLAMPERL, SPECIES_ABSOL, SPECIES_SHUPPET, SPECIES_SEVIPER, SPECIES_ZANGOOSE, SPECIES_RELICANTH, SPECIES_ARON, SPECIES_CASTFORM, SPECIES_VOLBEAT, SPECIES_ILLUMISE, SPECIES_LILEEP, SPECIES_ANORITH, SPECIES_RALTS, SPECIES_BAGON, SPECIES_BELDUM, SPECIES_CHINGLING, SPECIES_SANDSHREW_ALOLAN, SPECIES_VULPIX_ALOLAN, SPECIES_DIGLETT_ALOLAN, SPECIES_GEODUDE_ALOLAN
# 372 "data/maps/JusmailTown/scripts.pory"
	givemon VAR_RESULT, 1
# 373 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_4
# 374 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 375 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq JusmailTown_EventScript_WishingWell_6
# 382 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 383 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_5
# 384 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_6:
# 377 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 378 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto JusmailTown_EventScript_WishingWell_1


JusmailTown_EventScript_LittleGirlWithWishingStar::
# 398 "data/maps/JusmailTown/scripts.pory"
	lock
# 399 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 400 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 401 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL, JusmailTown_EventScript_LittleGirlWithWishingStar_2
# 413 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3
# 414 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_LittleGirlWithWishingStar_1:
# 416 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_LittleGirlWithWishingStar_2:
# 403 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1
# 404 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 405 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 406 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2
# 407 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 408 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_WISHING_STAR, 3
# 409 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL
	goto JusmailTown_EventScript_LittleGirlWithWishingStar_1


JusmailTown_EventScript_WishingWellSign::
# 424 "data/maps/JusmailTown/scripts.pory"
	lock
# 425 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_0
# 426 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 427 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_1
# 428 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 429 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_Sign_GymSign_Text_0:
# 6 "data/maps/JusmailTown/scripts.pory"
	.string "Gym Leader: Deo\n"
	.string "The Plant-Friendly Farmer$"

JusmailTown_EventScript_NPC_Woman_Text_0:
# 16 "data/maps/JusmailTown/scripts.pory"
	.string "Woman$"

JusmailTown_EventScript_NPC_Woman_Text_1:
# 17 "data/maps/JusmailTown/scripts.pory"
	.string "Jusmail Town is a really small community,\n"
	.string "but I love it like this. We live alongside\l"
	.string "nature here, not in conflict with it.$"

JusmailTown_EventScript_NPC_Boy_Text_0:
# 27 "data/maps/JusmailTown/scripts.pory"
	.string "Boy$"

JusmailTown_EventScript_NPC_Boy_Text_1:
# 28 "data/maps/JusmailTown/scripts.pory"
	.string "Flying-type Pokémon are good against\n"
	.string "Deo's Pokémon, Bug and Grass-type\l"
	.string "Pokémon.\p"
	.string "I hear most Gym Leaders have a Pokémon\n"
	.string "that is strong against whatever the\l"
	.string "Leader is weak against. Sounds like\l"
	.string "they're tough fights!$"

JusmailTown_EventScript_NPC_Farmer_Text_0:
# 38 "data/maps/JusmailTown/scripts.pory"
	.string "Farmer$"

JusmailTown_EventScript_NPC_Farmer_Text_1:
# 39 "data/maps/JusmailTown/scripts.pory"
	.string "Bleugh, lots of bugs around here...\n"
	.string "they're cute, but their little legs\l"
	.string "scare me!$"

JusmailTown_EventScript_MarketMan_Text_0:
# 49 "data/maps/JusmailTown/scripts.pory"
	.string "Market Man$"

JusmailTown_EventScript_MarketMan_Text_1:
# 50 "data/maps/JusmailTown/scripts.pory"
	.string "Welcome to the Jusmail Town Farmer's\n"
	.string "Market? How can I help you?$"

JusmailTown_EventScript_MarketMan_Text_2:
# 54 "data/maps/JusmailTown/scripts.pory"
	.string "Make sure to come back soon!$"

JusmailTown_EventScript_RaniaEvent_Text_0:
# 82 "data/maps/JusmailTown/scripts.pory"
	.string "Rania$"

JusmailTown_EventScript_RaniaEvent_Text_1:
# 83 "data/maps/JusmailTown/scripts.pory"
	.string "Yia sou, {PLAYER}! I see you've won\n"
	.string "your first Gym Badge!\p"
	.string "Since you left, Niko and I have decided\n"
	.string "to do some more field research\l"
	.string "ourselves, which means training up our\l"
	.string "own Pokémon teams! What do you say,\l"
	.string "wanna battle?$"

JusmailTown_EventScript_RaniaEvent_Text_2:
# 87 "data/maps/JusmailTown/scripts.pory"
	.string "Need more time to train? I get you. Let\n"
	.string "me know when you wanna battle!$"

JusmailTown_EventScript_RaniaEvent_Text_3:
# 95 "data/maps/JusmailTown/scripts.pory"
	.string "Alright, here I come!$"

JusmailTown_EventScript_RaniaEvent_Text_4:
# 101 "data/maps/JusmailTown/scripts.pory"
	.string "Phew, what a battle! Even against a\n"
	.string "strong type trio like mine, you still\l"
	.string "held your own. Looks like that Gym\l"
	.string "Badge really means something!\p"
	.string "Ah, right, another thing. Professor Elia\n"
	.string "sent me to give you this HM. Here!$"

JusmailTown_EventScript_RaniaEvent_Text_5:
# 105 "data/maps/JusmailTown/scripts.pory"
	.string "With that HM, you can {COLOR GREEN}cut down small\n"
	.string "trees{COLOR DARK_GRAY} that might be blocking your path.\p"
	.string "You heading {COLOR GREEN}back to the University{COLOR DARK_GRAY}? I'm\n"
	.string "doing the same. Meet you there!$"

JusmailTown_EventScript_WishingWell_Text_0:
# 135 "data/maps/JusmailTown/scripts.pory"
	.string "You peer down the Wishing Well...\n"
	.string "The air begins to sparkle.$"

JusmailTown_EventScript_WishingWell_Text_1:
# 142 "data/maps/JusmailTown/scripts.pory"
	.string "Toss a Wishing Star into the Well?$"

JusmailTown_EventScript_WishingWell_Text_2:
# 149 "data/maps/JusmailTown/scripts.pory"
	.string "The Wishing Star shines as it falls...$"

JusmailTown_EventScript_WishingWell_Text_3:
# 151 "data/maps/JusmailTown/scripts.pory"
	.string "...  ...  ...  ...!$"

JusmailTown_EventScript_WishingWell_Text_4:
# 373 "data/maps/JusmailTown/scripts.pory"
	.string "A POKé BALL appeared... containing a\n"
	.string "POKéMON!$"

JusmailTown_EventScript_WishingWell_Text_5:
# 383 "data/maps/JusmailTown/scripts.pory"
	.string "The POKéMON was sent to the PC.$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0:
# 400 "data/maps/JusmailTown/scripts.pory"
	.string "Little Girl$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1:
# 403 "data/maps/JusmailTown/scripts.pory"
	.string "See that broken well?\n"
	.string "It's actually a Wishing Well, and it\l"
	.string "grants wishes! Really!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2:
# 406 "data/maps/JusmailTown/scripts.pory"
	.string "Sometimes, my friends and me throw\n"
	.string "Wishing Stars down the Wishing Well!\l"
	.string "Here's a few for you!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3:
# 413 "data/maps/JusmailTown/scripts.pory"
	.string "Did you get anything cool from the\n"
	.string "Wishing Well?$"

JusmailTown_EventScript_WishingWellSign_Text_0:
# 425 "data/maps/JusmailTown/scripts.pory"
	.string "JUSMAIL TOWN WELL\n"
	.string "More than meets the eye.$"

JusmailTown_EventScript_WishingWellSign_Text_1:
# 427 "data/maps/JusmailTown/scripts.pory"
	.string "There's more scribbled on here...\p"
	.string "Use Wishing Stars at the Wishing Well!\n"
	.string "POKéMON are granted to those who seek\l"
	.string "them!$"

JusmailTown_Text_RaniaDefeated::
# 122 "data/maps/JusmailTown/scripts.pory"
	.string "Aw, I thought I balanced my team\n"
	.string "perfectly!$"

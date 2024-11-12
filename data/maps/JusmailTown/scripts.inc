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


JusmailTown_EventScript_WishingWell::
# 15 "data/maps/JusmailTown/scripts.pory"
	lockall
# 16 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_0
# 17 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 19 "data/maps/JusmailTown/scripts.pory"
	checkitem ITEM_WISHING_STAR
# 21 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_2
JusmailTown_EventScript_WishingWell_1:
# 271 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_WishingWell_2:
# 23 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_1, MSGBOX_YESNO
# 25 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_4
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_4:
# 28 "data/maps/JusmailTown/scripts.pory"
	removeitem ITEM_WISHING_STAR
# 30 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_2
# 31 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 32 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_3
# 33 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 36 "data/maps/JusmailTown/scripts.pory"
	randomelement SPECIES_BULBASAUR, SPECIES_CHARMANDER, SPECIES_SQUIRTLE, SPECIES_CATERPIE, SPECIES_CATERPIE, SPECIES_WEEDLE, SPECIES_WEEDLE, SPECIES_PIDGEY, SPECIES_PIDGEY, SPECIES_RATTATA, SPECIES_RATTATA, SPECIES_SPEAROW, SPECIES_SPEAROW, SPECIES_EKANS, SPECIES_EKANS, SPECIES_SANDSHREW, SPECIES_SANDSHREW, SPECIES_NIDORAN_F, SPECIES_NIDORAN_F, SPECIES_NIDORAN_M, SPECIES_NIDORAN_M, SPECIES_VULPIX, SPECIES_ZUBAT, SPECIES_ODDISH, SPECIES_PARAS, SPECIES_VENONAT, SPECIES_DIGLETT, SPECIES_MEOWTH, SPECIES_PSYDUCK, SPECIES_MANKEY, SPECIES_GROWLITHE, SPECIES_POLIWAG, SPECIES_POLIWAG, SPECIES_ABRA, SPECIES_MACHOP, SPECIES_BELLSPROUT, SPECIES_TENTACOOL, SPECIES_GEODUDE, SPECIES_PONYTA, SPECIES_SLOWPOKE, SPECIES_SLOWPOKE, SPECIES_MAGNEMITE, SPECIES_FARFETCHD, SPECIES_DODUO, SPECIES_SEEL, SPECIES_GRIMER, SPECIES_SHELLDER, SPECIES_GASTLY, SPECIES_ONIX, SPECIES_DROWZEE, SPECIES_KRABBY, SPECIES_VOLTORB, SPECIES_EXEGGCUTE, SPECIES_CUBONE, SPECIES_CUBONE, SPECIES_LICKITUNG, SPECIES_KOFFING, SPECIES_RHYHORN, SPECIES_HAPPINY, SPECIES_TANGELA, SPECIES_TANGELA, SPECIES_KANGASKHAN, SPECIES_HORSEA, SPECIES_GOLDEEN, SPECIES_STARYU, SPECIES_MIME_JR, SPECIES_SCYTHER, SPECIES_PINSIR, SPECIES_TAUROS, SPECIES_MAGIKARP, SPECIES_MAGIKARP, SPECIES_LAPRAS, SPECIES_DITTO, SPECIES_EEVEE, SPECIES_PORYGON, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_AERODACTYL, SPECIES_MUNCHLAX, SPECIES_DRATINI, SPECIES_CHIKORITA, SPECIES_TOTODILE, SPECIES_SENTRET, SPECIES_SENTRET, SPECIES_HOOTHOOT, SPECIES_HOOTHOOT, SPECIES_LEDYBA, SPECIES_LEDYBA, SPECIES_SPINARAK, SPECIES_CHINCHOU, SPECIES_PICHU, SPECIES_CLEFFA, SPECIES_IGGLYBUFF, SPECIES_TOGEPI, SPECIES_NATU, SPECIES_MAREEP, SPECIES_BONSLY, SPECIES_HOPPIP, SPECIES_HOPPIP, SPECIES_AIPOM, SPECIES_AIPOM, SPECIES_SUNKERN, SPECIES_SUNKERN, SPECIES_YANMA, SPECIES_WOOPER, SPECIES_MURKROW, SPECIES_MISDREAVUS, SPECIES_GIRAFARIG, SPECIES_PINECO, SPECIES_DUNSPARCE, SPECIES_GLIGAR, SPECIES_SNUBBULL, SPECIES_SNUBBULL, SPECIES_QWILFISH, SPECIES_SHUCKLE, SPECIES_HERACROSS, SPECIES_SNEASEL, SPECIES_TEDDIURSA, SPECIES_SLUGMA, SPECIES_SWINUB, SPECIES_CORSOLA, SPECIES_REMORAID, SPECIES_DELIBIRD, SPECIES_MANTYKE, SPECIES_SKARMORY, SPECIES_HOUNDOUR, SPECIES_PHANPY, SPECIES_PHANPY, SPECIES_STANTLER, SPECIES_SMEARGLE, SPECIES_TYROGUE, SPECIES_SMOOCHUM, SPECIES_ELEKID, SPECIES_MAGBY, SPECIES_MILTANK, SPECIES_LARVITAR, SPECIES_TREECKO, SPECIES_TORCHIC, SPECIES_MUDKIP, SPECIES_POOCHYENA, SPECIES_POOCHYENA, SPECIES_ZIGZAGOON, SPECIES_ZIGZAGOON, SPECIES_WURMPLE, SPECIES_WURMPLE, SPECIES_LOTAD, SPECIES_LOTAD, SPECIES_SEEDOT, SPECIES_SEEDOT, SPECIES_NINCADA, SPECIES_NINCADA, SPECIES_TAILLOW, SPECIES_TAILLOW, SPECIES_SHROOMISH, SPECIES_SHROOMISH, SPECIES_SPINDA, SPECIES_WINGULL, SPECIES_SURSKIT, SPECIES_WAILMER, SPECIES_SKITTY, SPECIES_SKITTY, SPECIES_KECLEON, SPECIES_BALTOY, SPECIES_NOSEPASS, SPECIES_TORKOAL, SPECIES_SABLEYE, SPECIES_BARBOACH, SPECIES_LUVDISC, SPECIES_CORPHISH, SPECIES_FEEBAS, SPECIES_CARVANHA, SPECIES_TRAPINCH, SPECIES_MAKUHITA, SPECIES_ELECTRIKE, SPECIES_NUMEL, SPECIES_SPHEAL, SPECIES_CACNEA, SPECIES_SNORUNT, SPECIES_LUNATONE, SPECIES_SOLROCK, SPECIES_AZURILL, SPECIES_SPOINK, SPECIES_PLUSLE, SPECIES_MINUN, SPECIES_MAWILE, SPECIES_MEDITITE, SPECIES_MEDITITE, SPECIES_SWABLU, SPECIES_SWABLU, SPECIES_WYNAUT, SPECIES_DUSKULL, SPECIES_BUDEW, SPECIES_SLAKOTH, SPECIES_GULPIN, SPECIES_TROPIUS, SPECIES_WHISMUR, SPECIES_CLAMPERL, SPECIES_ABSOL, SPECIES_SHUPPET, SPECIES_SEVIPER, SPECIES_ZANGOOSE, SPECIES_RELICANTH, SPECIES_ARON, SPECIES_CASTFORM, SPECIES_VOLBEAT, SPECIES_ILLUMISE, SPECIES_LILEEP, SPECIES_ANORITH, SPECIES_RALTS, SPECIES_BAGON, SPECIES_BELDUM, SPECIES_CHINGLING, SPECIES_SANDSHREW_ALOLAN, SPECIES_VULPIX_ALOLAN, SPECIES_DIGLETT_ALOLAN, SPECIES_GEODUDE_ALOLAN
# 253 "data/maps/JusmailTown/scripts.pory"
	givemon VAR_RESULT, 1
# 254 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_4
# 255 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 256 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq JusmailTown_EventScript_WishingWell_6
# 263 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 264 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_5
# 265 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_6:
# 258 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 259 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto JusmailTown_EventScript_WishingWell_1


JusmailTown_EventScript_LittleGirlWithWishingStar::
# 279 "data/maps/JusmailTown/scripts.pory"
	lock
# 280 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 281 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL, JusmailTown_EventScript_LittleGirlWithWishingStar_2
# 292 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2
# 293 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_LittleGirlWithWishingStar_1:
# 295 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_LittleGirlWithWishingStar_2:
# 283 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 284 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 285 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1
# 286 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 287 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_WISHING_STAR, 5
# 288 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL
	goto JusmailTown_EventScript_LittleGirlWithWishingStar_1


JusmailTown_EventScript_WishingWellSign::
# 303 "data/maps/JusmailTown/scripts.pory"
	lock
# 304 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_0
# 305 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 306 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_1
# 307 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 308 "data/maps/JusmailTown/scripts.pory"
	release
	end


JusmailTown_Sign_GymSign_Text_0:
# 6 "data/maps/JusmailTown/scripts.pory"
	.string "Gym Leader: Deo\n"
	.string "The Plant-Friendly Farmer$"

JusmailTown_EventScript_WishingWell_Text_0:
# 16 "data/maps/JusmailTown/scripts.pory"
	.string "You peer down the Wishing Well...\n"
	.string "The air begins to sparkle.$"

JusmailTown_EventScript_WishingWell_Text_1:
# 23 "data/maps/JusmailTown/scripts.pory"
	.string "Toss a Wishing Star into the Well?$"

JusmailTown_EventScript_WishingWell_Text_2:
# 30 "data/maps/JusmailTown/scripts.pory"
	.string "The Wishing Star shines as it falls...$"

JusmailTown_EventScript_WishingWell_Text_3:
# 32 "data/maps/JusmailTown/scripts.pory"
	.string "...  ...  ...  ...!$"

JusmailTown_EventScript_WishingWell_Text_4:
# 254 "data/maps/JusmailTown/scripts.pory"
	.string "A POKé BALL appeared... containing a\n"
	.string "POKéMON!$"

JusmailTown_EventScript_WishingWell_Text_5:
# 264 "data/maps/JusmailTown/scripts.pory"
	.string "The POKéMON was sent to the PC.$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0:
# 283 "data/maps/JusmailTown/scripts.pory"
	.string "See that broken well?\n"
	.string "It's actually a Wishing Well, and it\l"
	.string "grants wishes! Really!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1:
# 285 "data/maps/JusmailTown/scripts.pory"
	.string "Sometimes, my friends and me throw\n"
	.string "Wishing Stars down the Wishing Well!\l"
	.string "Here's a few for you!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2:
# 292 "data/maps/JusmailTown/scripts.pory"
	.string "Did you get anything cool from the\n"
	.string "Wishing Well?$"

JusmailTown_EventScript_WishingWellSign_Text_0:
# 304 "data/maps/JusmailTown/scripts.pory"
	.string "JUSMAIL TOWN WELL\n"
	.string "More than meets the eye.$"

JusmailTown_EventScript_WishingWellSign_Text_1:
# 306 "data/maps/JusmailTown/scripts.pory"
	.string "There's more scribbled on here...\p"
	.string "Use Wishing Stars at the Wishing Well!\n"
	.string "POKéMON are granted to those who seek\l"
	.string "them!$"

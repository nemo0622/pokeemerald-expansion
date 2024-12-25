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

JusmailTown_EventScript_RockSmashHiker::
# 70 "data/maps/JusmailTown/scripts.pory"
	lock
# 71 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 72 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_BROKE_JUSMAIL_TOWN_ROCKS, JusmailTown_EventScript_RockSmashHiker_2
# 80 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RockSmashHiker_Text_0
# 81 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RockSmashHiker_Text_2
# 82 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_RockSmashHiker_1:
# 84 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_RockSmashHiker_2:
# 74 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RockSmashHiker_Text_0
# 75 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RockSmashHiker_Text_1
# 76 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_RockSmashHiker_1


JusmailTown_EventScript_RaniaEventTrigger::
# 92 "data/maps/JusmailTown/scripts.pory"
	lock
# 93 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 94 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 95 "data/maps/JusmailTown/scripts.pory"
	goto JusmailTown_EventScript_RaniaEvent
	end


JusmailTown_EventScript_RaniaEvent::
# 101 "data/maps/JusmailTown/scripts.pory"
	lockall
# 102 "data/maps/JusmailTown/scripts.pory"
	applymovement 11, Common_Movement_FacePlayer
# 103 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
# 104 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 105 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_1, MSGBOX_YESNO
# 106 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JusmailTown_EventScript_RaniaEvent_2
# 116 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 117 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_3
# 119 "data/maps/JusmailTown/scripts.pory"
	trainerbattle_no_intro TRAINER_JUSMAIL_RANIA, JusmailTown_Text_RaniaDefeated
# 122 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 123 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_4
# 124 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 125 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_HM_CUT
# 126 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 127 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_5
# 128 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 131 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_HIDE_RANIA_JUSMAIL
# 132 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_RANIA_STATE, 1
# 133 "data/maps/JusmailTown/scripts.pory"
	setvar VAR_NIKO_STATE, 1
# 134 "data/maps/JusmailTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 135 "data/maps/JusmailTown/scripts.pory"
	delay 30
# 136 "data/maps/JusmailTown/scripts.pory"
	removeobject 11
# 137 "data/maps/JusmailTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 138 "data/maps/JusmailTown/scripts.pory"
	delay 20
JusmailTown_EventScript_RaniaEvent_1:
# 140 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_RaniaEvent_2:
# 108 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_RaniaEvent_Text_0
# 109 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_RaniaEvent_Text_2
# 110 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 111 "data/maps/JusmailTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 112 "data/maps/JusmailTown/scripts.pory"
	waitmovement 0
	goto JusmailTown_EventScript_RaniaEvent_1


JusmailTown_EventScript_WishingWell::
# 156 "data/maps/JusmailTown/scripts.pory"
	lockall
# 157 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_0
# 158 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 160 "data/maps/JusmailTown/scripts.pory"
	checkitem ITEM_WISHING_STAR
# 162 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_2
JusmailTown_EventScript_WishingWell_1:
# 345 "data/maps/JusmailTown/scripts.pory"
	releaseall
	end

JusmailTown_EventScript_WishingWell_2:
# 164 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_1, MSGBOX_YESNO
# 166 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JusmailTown_EventScript_WishingWell_4
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_4:
# 169 "data/maps/JusmailTown/scripts.pory"
	removeitem ITEM_WISHING_STAR
# 171 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_2
# 172 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 173 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_3
# 174 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 177 "data/maps/JusmailTown/scripts.pory"
	randomelement SPECIES_ROWLET, SPECIES_LITTEN, SPECIES_POPPLIO, SPECIES_CHESPIN, SPECIES_FENNEKIN, SPECIES_FROAKIE, SPECIES_PANSAGE, SPECIES_PANSEAR, SPECIES_PANPOUR, SPECIES_SENTRET, SPECIES_LILLIPUP, SPECIES_PIKIPEK, SPECIES_DUCKLETT, SPECIES_HOPPIP, SPECIES_NINCADA, SPECIES_GRUBBIN, SPECIES_PARAS, SPECIES_PHANPY, SPECIES_CUBONE, SPECIES_MUDBRAY, SPECIES_MAREEP, SPECIES_FLABEBE, SPECIES_CUTIEFLY, SPECIES_CATERPIE, SPECIES_WEEDLE, SPECIES_RALTS, SPECIES_EEVEE, SPECIES_SKIDDO, SPECIES_MURKROW, SPECIES_ORICORIO, SPECIES_SANDSHREW, SPECIES_NOSEPASS, SPECIES_MAWILE, SPECIES_ROCKRUFF, SPECIES_VULLABY, SPECIES_WOOBAT, SPECIES_ARON, SPECIES_TIMBURR, SPECIES_KLAWF, SPECIES_POLIWAG, SPECIES_PUMPKABOO, SPECIES_SHROOMISH, SPECIES_HERACROSS, SPECIES_SHUPPET, SPECIES_AIPOM, SPECIES_WOOPER, SPECIES_TOEDSCOOL, SPECIES_BLITZLE, SPECIES_HOOTHOOT, SPECIES_MIENFOO, SPECIES_FLITTLE, SPECIES_VULPIX, SPECIES_HONEDGE, SPECIES_DWEBBLE, SPECIES_MINIOR, SPECIES_GASTLY, SPECIES_BALTOY, SPECIES_SALANDIT, SPECIES_TOGEPI, SPECIES_CHERUBI, SPECIES_HOUNDOUR, SPECIES_OMANYTE, SPECIES_KABUTO, SPECIES_SKORUPI, SPECIES_SPINARAK, SPECIES_ELEKID, SPECIES_MAGBY, SPECIES_SNORUNT, SPECIES_SPHEAL, SPECIES_SEEL, SPECIES_BRONZOR, SPECIES_ZORUA_HISUI, SPECIES_SNEASEL_HISUI, SPECIES_VULPIX_ALOLA, SPECIES_NOIBAT, SPECIES_MEOWTH_GALAR, SPECIES_PACHIRISU, SPECIES_CHINGLING, SPECIES_TYNAMO, SPECIES_PAWMI, SPECIES_SHROODLE, SPECIES_BUIZEL, SPECIES_STUNKY, SPECIES_CORSOLA_GALAR, SPECIES_FINNEON, SPECIES_WAILMER, SPECIES_TENTACOOL, SPECIES_CLAUNCHER, SPECIES_SCYTHER, SPECIES_STUFFUL, SPECIES_BAGON, SPECIES_TOGEDEMARU, SPECIES_CRABRAWLER, SPECIES_LILEEP, SPECIES_ANORITH, SPECIES_DEDENNE, SPECIES_MEDITITE, SPECIES_DROWZEE, SPECIES_EKANS, SPECIES_BASCULIN_WHITE_STRIPED, SPECIES_PANCHAM, SPECIES_SKRELP, SPECIES_CHINCHOU, SPECIES_SHELLDER, SPECIES_CLAMPERL, SPECIES_CLEFFA, SPECIES_IGGLYBUFF, SPECIES_TRAPINCH, SPECIES_DODUO, SPECIES_TINKATINK, SPECIES_SCRAGGY, SPECIES_DARUMAKA, SPECIES_TORKOAL, SPECIES_NUMEL, SPECIES_MUNNA, SPECIES_KECLEON, SPECIES_MAGIKARP, SPECIES_FOMANTIS, SPECIES_ORANGURU, SPECIES_PASSIMIAN, SPECIES_ZIGZAGOON_GALAR, SPECIES_GOOMY, SPECIES_BRUXISH, SPECIES_IMPIDIMP, SPECIES_SWABLU, SPECIES_FARFETCHD, SPECIES_MANKEY, SPECIES_VOLTORB_HISUI, SPECIES_LAPRAS, SPECIES_GIRAFARIG, SPECIES_BUDEW, SPECIES_MAGNEMITE, SPECIES_CUBCHOO, SPECIES_GROWLITHE_HISUI, SPECIES_PSYDUCK, SPECIES_YANMA, SPECIES_SKARMORY, SPECIES_REMORAID, SPECIES_RUFFLET, SPECIES_PHANTUMP, SPECIES_SNOVER, SPECIES_DUSKULL, SPECIES_VANILLITE, SPECIES_PAWNIARD, SPECIES_LARVESTA, SPECIES_TIRTOUGA, SPECIES_ARCHEN, SPECIES_LARVITAR, SPECIES_DHELMISE
# 327 "data/maps/JusmailTown/scripts.pory"
	givemon VAR_RESULT, 1
# 328 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_4
# 329 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 330 "data/maps/JusmailTown/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq JusmailTown_EventScript_WishingWell_6
# 337 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 338 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWell_Text_5
# 339 "data/maps/JusmailTown/scripts.pory"
	closemessage
	goto JusmailTown_EventScript_WishingWell_1

JusmailTown_EventScript_WishingWell_6:
# 332 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 333 "data/maps/JusmailTown/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto JusmailTown_EventScript_WishingWell_1


JusmailTown_EventScript_LittleGirlWithWishingStar::
# 353 "data/maps/JusmailTown/scripts.pory"
	lock
# 354 "data/maps/JusmailTown/scripts.pory"
	faceplayer
# 355 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 356 "data/maps/JusmailTown/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL, JusmailTown_EventScript_LittleGirlWithWishingStar_2
# 368 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3
# 369 "data/maps/JusmailTown/scripts.pory"
	closemessage
JusmailTown_EventScript_LittleGirlWithWishingStar_1:
# 371 "data/maps/JusmailTown/scripts.pory"
	release
	end

JusmailTown_EventScript_LittleGirlWithWishingStar_2:
# 358 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1
# 359 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 360 "data/maps/JusmailTown/scripts.pory"
	speakername JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0
# 361 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2
# 362 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 363 "data/maps/JusmailTown/scripts.pory"
	giveitem ITEM_WISHING_STAR, 3
# 364 "data/maps/JusmailTown/scripts.pory"
	setflag FLAG_SPOKE_TO_WISHING_STAR_LITTLE_GIRL
	goto JusmailTown_EventScript_LittleGirlWithWishingStar_1


JusmailTown_EventScript_WishingWellSign::
# 379 "data/maps/JusmailTown/scripts.pory"
	lock
# 380 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_0
# 381 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 382 "data/maps/JusmailTown/scripts.pory"
	msgbox JusmailTown_EventScript_WishingWellSign_Text_1
# 383 "data/maps/JusmailTown/scripts.pory"
	closemessage
# 384 "data/maps/JusmailTown/scripts.pory"
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

JusmailTown_EventScript_RockSmashHiker_Text_0:
# 74 "data/maps/JusmailTown/scripts.pory"
	.string "Hiker$"

JusmailTown_EventScript_RockSmashHiker_Text_1:
# 75 "data/maps/JusmailTown/scripts.pory"
	.string "Trying to head south too, huh? Well,\n"
	.string "these rocks are blocking the only way.\p"
	.string "Someone with {COLOR GREEN}Rock Smash{COLOR DARK_GRAY} could break\n"
	.string "these rocks, though.$"

JusmailTown_EventScript_RockSmashHiker_Text_2:
# 81 "data/maps/JusmailTown/scripts.pory"
	.string "Woah, thanks for clearing the path! Now\n"
	.string "I can finally head south!$"

JusmailTown_EventScript_RaniaEvent_Text_0:
# 104 "data/maps/JusmailTown/scripts.pory"
	.string "Rania$"

JusmailTown_EventScript_RaniaEvent_Text_1:
# 105 "data/maps/JusmailTown/scripts.pory"
	.string "Yia sou, {PLAYER}! I see you've won\n"
	.string "your first Gym Badge!\p"
	.string "Since you left, Niko and I have decided\n"
	.string "to do some more field research\l"
	.string "ourselves, which means training up our\l"
	.string "own Pokémon teams! What do you say,\l"
	.string "wanna battle?$"

JusmailTown_EventScript_RaniaEvent_Text_2:
# 109 "data/maps/JusmailTown/scripts.pory"
	.string "Need more time to train? I get you. Let\n"
	.string "me know when you wanna battle!$"

JusmailTown_EventScript_RaniaEvent_Text_3:
# 117 "data/maps/JusmailTown/scripts.pory"
	.string "Alright, here I come!$"

JusmailTown_EventScript_RaniaEvent_Text_4:
# 123 "data/maps/JusmailTown/scripts.pory"
	.string "Phew, what a battle! Even against a\n"
	.string "strong type trio like mine, you still\l"
	.string "held your own. Looks like that Gym\l"
	.string "Badge really means something!\p"
	.string "Ah, right, another thing. Professor Elia\n"
	.string "sent me to give you this HM. Here!$"

JusmailTown_EventScript_RaniaEvent_Text_5:
# 127 "data/maps/JusmailTown/scripts.pory"
	.string "With that HM, you can {COLOR GREEN}cut down small\n"
	.string "trees{COLOR DARK_GRAY} that might be blocking your path.\p"
	.string "You heading {COLOR GREEN}back to the University{COLOR DARK_GRAY}? I'm\n"
	.string "doing the same. Meet you there!$"

JusmailTown_EventScript_WishingWell_Text_0:
# 157 "data/maps/JusmailTown/scripts.pory"
	.string "You peer down the Wishing Well...\n"
	.string "The air begins to sparkle.$"

JusmailTown_EventScript_WishingWell_Text_1:
# 164 "data/maps/JusmailTown/scripts.pory"
	.string "Toss a Wishing Star into the Well?$"

JusmailTown_EventScript_WishingWell_Text_2:
# 171 "data/maps/JusmailTown/scripts.pory"
	.string "The Wishing Star shines as it falls...$"

JusmailTown_EventScript_WishingWell_Text_3:
# 173 "data/maps/JusmailTown/scripts.pory"
	.string "...  ...  ...  ...!$"

JusmailTown_EventScript_WishingWell_Text_4:
# 328 "data/maps/JusmailTown/scripts.pory"
	.string "A POKé BALL appeared... containing a\n"
	.string "POKéMON!$"

JusmailTown_EventScript_WishingWell_Text_5:
# 338 "data/maps/JusmailTown/scripts.pory"
	.string "The POKéMON was sent to the PC.$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_0:
# 355 "data/maps/JusmailTown/scripts.pory"
	.string "Little Girl$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_1:
# 358 "data/maps/JusmailTown/scripts.pory"
	.string "See that broken well?\n"
	.string "It's actually a Wishing Well, and it\l"
	.string "grants wishes! Really!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_2:
# 361 "data/maps/JusmailTown/scripts.pory"
	.string "Sometimes, my friends and me throw\n"
	.string "Wishing Stars down the Wishing Well!\l"
	.string "Here's a few for you!$"

JusmailTown_EventScript_LittleGirlWithWishingStar_Text_3:
# 368 "data/maps/JusmailTown/scripts.pory"
	.string "Did you get anything cool from the\n"
	.string "Wishing Well?$"

JusmailTown_EventScript_WishingWellSign_Text_0:
# 380 "data/maps/JusmailTown/scripts.pory"
	.string "JUSMAIL TOWN WELL\n"
	.string "More than meets the eye.$"

JusmailTown_EventScript_WishingWellSign_Text_1:
# 382 "data/maps/JusmailTown/scripts.pory"
	.string "There's more scribbled on here...\p"
	.string "Use Wishing Stars at the Wishing Well!\n"
	.string "POKéMON are granted to those who seek\l"
	.string "them!$"

JusmailTown_Text_RaniaDefeated::
# 144 "data/maps/JusmailTown/scripts.pory"
	.string "Aw, I thought I balanced my team\n"
	.string "perfectly!$"

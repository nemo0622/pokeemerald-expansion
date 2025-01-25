TheDelphis_MapScripts::
	.byte 0


TheDelphis_EventScript_CabinSign::
# 5 "data/maps/TheDelphis/scripts.pory"
	lock
# 6 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_CabinSign_Text_0
# 7 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 8 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_Bardas::
# 14 "data/maps/TheDelphis/scripts.pory"
	lock
# 15 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 16 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_Bardas_Text_0
# 17 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_Bardas_Text_1, MSGBOX_YESNO
# 18 "data/maps/TheDelphis/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TheDelphis_EventScript_Bardas_2
# 27 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 1
	goto_if_eq TheDelphis_EventScript_Bardas_5
# 32 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 2
	goto_if_eq TheDelphis_EventScript_Bardas_6
# 37 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 3
	goto_if_eq TheDelphis_EventScript_Bardas_7
# 42 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 4
	goto_if_eq TheDelphis_EventScript_Bardas_8
# 47 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 5
	goto_if_eq TheDelphis_EventScript_Bardas_9
# 52 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 6
	goto_if_eq TheDelphis_EventScript_Bardas_10
# 57 "data/maps/TheDelphis/scripts.pory"
	compare VAR_CHOSEN_SAIL_LOCATION, 7
	goto_if_eq TheDelphis_EventScript_Bardas_11
# 64 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PYTHIOS_TOWN, 9, 7
# 65 "data/maps/TheDelphis/scripts.pory"
	waitstate
TheDelphis_EventScript_Bardas_1:
# 68 "data/maps/TheDelphis/scripts.pory"
	release
	end

TheDelphis_EventScript_Bardas_2:
# 20 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_Bardas_Text_0
# 21 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_Bardas_Text_2
# 22 "data/maps/TheDelphis/scripts.pory"
	closemessage
	goto TheDelphis_EventScript_Bardas_1

TheDelphis_EventScript_Bardas_5:
# 29 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PYTHIOS_TOWN, 17, 21
# 30 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_Bardas_1

TheDelphis_EventScript_Bardas_6:
# 34 "data/maps/TheDelphis/scripts.pory"
	warp MAP_SOFOS_CITY, 22, 30
# 35 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_Bardas_1

TheDelphis_EventScript_Bardas_7:
# 39 "data/maps/TheDelphis/scripts.pory"
	warp MAP_MARMARO_ISLAND, 19, 32
# 40 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_Bardas_1

TheDelphis_EventScript_Bardas_8:
# 44 "data/maps/TheDelphis/scripts.pory"
	warp MAP_MYRRINI_ISLAND, 23, 38
# 45 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_Bardas_1

TheDelphis_EventScript_Bardas_9:
# 49 "data/maps/TheDelphis/scripts.pory"
	warp MAP_FRESCO_ISLAND, 65, 27
# 50 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_Bardas_1

TheDelphis_EventScript_Bardas_10:
# 54 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PALATI_CITY, 39, 19
# 55 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_Bardas_1

TheDelphis_EventScript_Bardas_11:
# 59 "data/maps/TheDelphis/scripts.pory"
	warp MAP_PORT_PELLO, 22, 19
# 60 "data/maps/TheDelphis/scripts.pory"
	waitstate
	goto TheDelphis_EventScript_Bardas_1


TheDelphis_EventScript_SailorBlockingCabin::
# 74 "data/maps/TheDelphis/scripts.pory"
	lock
# 75 "data/maps/TheDelphis/scripts.pory"
	faceplayer
# 76 "data/maps/TheDelphis/scripts.pory"
	speakername TheDelphis_EventScript_SailorBlockingCabin_Text_0
# 77 "data/maps/TheDelphis/scripts.pory"
	msgbox TheDelphis_EventScript_SailorBlockingCabin_Text_1
# 78 "data/maps/TheDelphis/scripts.pory"
	closemessage
# 79 "data/maps/TheDelphis/scripts.pory"
	release
	end


TheDelphis_EventScript_CabinSign_Text_0:
# 6 "data/maps/TheDelphis/scripts.pory"
	.string "{PLAYER}'s Cabin$"

TheDelphis_EventScript_Bardas_Text_0:
# 16 "data/maps/TheDelphis/scripts.pory"
	.string "Bardas$"

TheDelphis_EventScript_Bardas_Text_1:
# 17 "data/maps/TheDelphis/scripts.pory"
	.string "How're you liking The Delphis,\n"
	.string "{PLAYER}? Make sure to check out\l"
	.string "{COLOR GREEN}your Cabin{COLOR DARK_GRAY} and decorate it!\p"
	.string "I can feel the boat slowing down, so we\n"
	.string "must be near our destination. Are you\l"
	.string "ready to leave?$"

TheDelphis_EventScript_Bardas_Text_2:
# 21 "data/maps/TheDelphis/scripts.pory"
	.string "No rush! You're always welcome on The\n"
	.string "Delphis!$"

TheDelphis_EventScript_SailorBlockingCabin_Text_0:
# 76 "data/maps/TheDelphis/scripts.pory"
	.string "Sailor$"

TheDelphis_EventScript_SailorBlockingCabin_Text_1:
# 77 "data/maps/TheDelphis/scripts.pory"
	.string "Sorry, the Cabin isn't available right\n"
	.string "now.$"

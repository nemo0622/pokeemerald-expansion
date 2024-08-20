# 1 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"

# 2 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
ShoalCave_LowTideIceRoom_MapScripts::
# 3 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.byte 0

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter::
# 10 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	lock
# 11 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	faceplayer
# 12 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	goto_if_unset FLAG_BATTLED_LEGENDARY_DOG, ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_1
# 109 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_5
# 110 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 111 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_1:
# 14 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_0
# 15 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 16 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_1, MSGBOX_YESNO
# 18 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_4
# 27 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_3
# 28 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 29 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_4
# 30 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmessage
# 32 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setvar VAR_RESULT, 0
# 33 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	getcaughtmon SPECIES_RAIKOU
# 34 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_8
# 40 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	getcaughtmon SPECIES_ENTEI
# 41 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_14
# 47 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	getcaughtmon SPECIES_SUICUNE
# 48 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_23
ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_7:
# 56 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_12
ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_11:
# 61 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, SPECIES_RAIKOU
	goto_if_eq ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_18
# 73 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, SPECIES_ENTEI
	goto_if_eq ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_19
# 87 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 88 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 120
# 89 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 90 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 91 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 92 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 93 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 94 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	seteventmon SPECIES_SUICUNE, 50
# 95 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_17:
# 98 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitstate
# 99 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 100 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_5
# 101 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 102 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_BATTLED_LEGENDARY_DOG
# 103 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_4:
# 20 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_2
# 21 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 22 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	release
	end

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_8:
# 36 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	randomelement SPECIES_ENTEI, SPECIES_SUICUNE
	goto ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_7

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_12:
# 58 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	randomelement SPECIES_RAIKOU, SPECIES_ENTEI, SPECIES_SUICUNE
	goto ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_11

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_14:
# 43 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	randomelement SPECIES_RAIKOU, SPECIES_SUICUNE
	goto ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_7

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_18:
# 63 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 64 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 120
# 65 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 66 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 67 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_RAIKOU, CRY_MODE_ENCOUNTER
# 68 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 69 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 70 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	seteventmon SPECIES_RAIKOU, 50
# 71 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
	goto ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_17

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_19:
# 75 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 76 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 120
# 77 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 78 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 79 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_ENTEI, CRY_MODE_ENCOUNTER
# 80 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 81 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 82 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	seteventmon SPECIES_ENTEI, 50
# 83 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
	goto ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_17

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_23:
# 50 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	randomelement SPECIES_ENTEI, SPECIES_RAIKOU
	goto ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_7


ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_0:
# 14 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Brrr... A-ahoy, li'l sailor! I see ya've\n"
	.string "found yerself searching for more\l"
	.string "LEGENDARY POKéMON!$"

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_1:
# 16 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Are ya interested in lookin' fer RAIKOU,\n"
	.string "ENTEI, or SUICUNE right now?$"

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_2:
# 20 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Ah, need more POKé BALLS, eh? Come\n"
	.string "right on back when ye're ready!$"

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_3:
# 27 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "Wond'rful! This room seems to have a\n"
	.string "connection to the LEGENDARY trio of\l"
	.string "JOHTO. I'll call fer them, and ya get\l"
	.string "ready fer catchin'!$"

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_4:
# 29 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "... ... ... ...!$"

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_5:
# 100 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "How 'bout that, li'l sailor? Looks like\n"
	.string "only one of the trio comes at once!\l"
	.string "Maybe we can try fer another later!$"

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
# 82 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_5
# 83 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 84 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
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
	randomelement SPECIES_RAIKOU, SPECIES_ENTEI, SPECIES_SUICUNE
# 34 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, SPECIES_RAIKOU
	goto_if_eq ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_8
# 46 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	compare VAR_RESULT, SPECIES_ENTEI
	goto_if_eq ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_9
# 60 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 61 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 120
# 62 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 63 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 64 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_SUICUNE, CRY_MODE_ENCOUNTER
# 65 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 66 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 67 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	seteventmon SPECIES_SUICUNE, 50
# 68 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_7:
# 71 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitstate
# 72 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 73 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	msgbox ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_Text_5
# 74 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	closemessage
# 75 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	setflag FLAG_BATTLED_LEGENDARY_DOG
# 76 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
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
	fadescreen FADE_TO_WHITE
# 37 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 120
# 38 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 39 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 40 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_RAIKOU, CRY_MODE_ENCOUNTER
# 41 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 42 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 43 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	seteventmon SPECIES_RAIKOU, 50
# 44 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
	goto ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_7

ShoalCave_EventScript_ExploringSailorLegendaryDogEncounter_9:
# 48 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 49 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 120
# 50 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 51 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 30
# 52 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	playmoncry SPECIES_ENTEI, CRY_MODE_ENCOUNTER
# 53 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	delay 40
# 54 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	waitmoncry
# 55 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	seteventmon SPECIES_ENTEI, 50
# 56 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	special BattleSetup_StartLegendaryBattle
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
# 73 "data/maps/ShoalCave_LowTideIceRoom/scripts.pory"
	.string "How 'bout that, li'l sailor? Looks like\n"
	.string "only one of the trio comes at once!\l"
	.string "Maybe we can try fer another later!$"

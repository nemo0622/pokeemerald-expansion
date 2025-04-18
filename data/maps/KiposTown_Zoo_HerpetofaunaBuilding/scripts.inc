KiposTown_Zoo_HerpetofaunaBuilding_MapScripts::
# 2 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KiposTown_Zoo_HerpetofaunaBuilding_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KiposTown_Zoo_HerpetofaunaBuilding_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special UpdateZooGraphics_HerpetofaunaBuilding
	return


KiposTown_Zoo_PokemonSign_Herp_Badlands::
# 10 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 13 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_1
# 14 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_2
# 15 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Badlands_2
KiposTown_Zoo_PokemonSign_Herp_Badlands_1:
# 19 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Badlands_5
KiposTown_Zoo_PokemonSign_Herp_Badlands_4:
# 25 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_1
# 26 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 29 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Herp_Badlands_8
KiposTown_Zoo_PokemonSign_Herp_Badlands_7:
# 55 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Badlands_11
# 64 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Badlands_12
KiposTown_Zoo_PokemonSign_Herp_Badlands_10:
# 74 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Herp_Badlands_2:
# 17 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_0
	goto KiposTown_Zoo_PokemonSign_Herp_Badlands_1

KiposTown_Zoo_PokemonSign_Herp_Badlands_5:
# 21 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_0
	goto KiposTown_Zoo_PokemonSign_Herp_Badlands_4

KiposTown_Zoo_PokemonSign_Herp_Badlands_8:
# 32 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_2, MSGBOX_YESNO
# 33 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 34 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Badlands_15
	goto KiposTown_Zoo_PokemonSign_Herp_Badlands_7

KiposTown_Zoo_PokemonSign_Herp_Badlands_11:
# 58 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	setvar VAR_TEMP_0, 39
# 60 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_3, MSGBOX_YESNO
# 61 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 62 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Herp_Badlands_10

KiposTown_Zoo_PokemonSign_Herp_Badlands_12:
# 67 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	setvar VAR_TEMP_0, 40
# 69 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_4, MSGBOX_YESNO
# 70 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 71 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Herp_Badlands_10

KiposTown_Zoo_PokemonSign_Herp_Badlands_15:
# 36 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_1
# 37 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 38 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 30
# 39 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	waitbuttonpress
# 40 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 42 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Herp_Badlands_17
	goto KiposTown_Zoo_PokemonSign_Herp_Badlands_7

KiposTown_Zoo_PokemonSign_Herp_Badlands_17:
# 44 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 20
# 45 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_HRP_01_2
# 46 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 47 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 30
# 48 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	waitbuttonpress
# 49 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Herp_Badlands_7


KiposTown_Zoo_EnvironmentSign_Herp_Badlands::
# 80 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 81 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Herp_Badlands_Text_0
# 82 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 83 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Herp_Jungle::
# 90 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 93 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_1
# 94 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_2
# 95 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Jungle_2
KiposTown_Zoo_PokemonSign_Herp_Jungle_1:
# 99 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Jungle_5
KiposTown_Zoo_PokemonSign_Herp_Jungle_4:
# 105 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Jungle_Text_0
# 106 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 109 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Herp_Jungle_8
KiposTown_Zoo_PokemonSign_Herp_Jungle_7:
# 135 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Jungle_11
# 144 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Jungle_12
KiposTown_Zoo_PokemonSign_Herp_Jungle_10:
# 154 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Herp_Jungle_2:
# 97 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_0
	goto KiposTown_Zoo_PokemonSign_Herp_Jungle_1

KiposTown_Zoo_PokemonSign_Herp_Jungle_5:
# 101 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_0
	goto KiposTown_Zoo_PokemonSign_Herp_Jungle_4

KiposTown_Zoo_PokemonSign_Herp_Jungle_8:
# 112 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_2, MSGBOX_YESNO
# 113 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 114 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Jungle_15
	goto KiposTown_Zoo_PokemonSign_Herp_Jungle_7

KiposTown_Zoo_PokemonSign_Herp_Jungle_11:
# 138 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	setvar VAR_TEMP_0, 41
# 140 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_3, MSGBOX_YESNO
# 141 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 142 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Herp_Jungle_10

KiposTown_Zoo_PokemonSign_Herp_Jungle_12:
# 147 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	setvar VAR_TEMP_0, 42
# 149 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_4, MSGBOX_YESNO
# 150 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 151 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Herp_Jungle_10

KiposTown_Zoo_PokemonSign_Herp_Jungle_15:
# 116 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_1
# 117 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 118 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 30
# 119 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	waitbuttonpress
# 120 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 122 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Herp_Jungle_17
	goto KiposTown_Zoo_PokemonSign_Herp_Jungle_7

KiposTown_Zoo_PokemonSign_Herp_Jungle_17:
# 124 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 20
# 125 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_HRP_02_2
# 126 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 127 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 30
# 128 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	waitbuttonpress
# 129 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Herp_Jungle_7


KiposTown_Zoo_EnvironmentSign_Herp_Jungle::
# 160 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 161 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Herp_Jungle_Text_0
# 162 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 163 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Herp_Swamp::
# 170 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 173 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_1
# 174 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_2
# 175 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Swamp_2
KiposTown_Zoo_PokemonSign_Herp_Swamp_1:
# 179 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Swamp_5
KiposTown_Zoo_PokemonSign_Herp_Swamp_4:
# 185 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Swamp_Text_0
# 186 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 189 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Herp_Swamp_8
KiposTown_Zoo_PokemonSign_Herp_Swamp_7:
# 215 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Swamp_11
# 224 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Swamp_12
KiposTown_Zoo_PokemonSign_Herp_Swamp_10:
# 234 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Herp_Swamp_2:
# 177 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_0
	goto KiposTown_Zoo_PokemonSign_Herp_Swamp_1

KiposTown_Zoo_PokemonSign_Herp_Swamp_5:
# 181 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_0
	goto KiposTown_Zoo_PokemonSign_Herp_Swamp_4

KiposTown_Zoo_PokemonSign_Herp_Swamp_8:
# 192 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_2, MSGBOX_YESNO
# 193 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 194 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Swamp_15
	goto KiposTown_Zoo_PokemonSign_Herp_Swamp_7

KiposTown_Zoo_PokemonSign_Herp_Swamp_11:
# 218 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	setvar VAR_TEMP_0, 43
# 220 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_3, MSGBOX_YESNO
# 221 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 222 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Herp_Swamp_10

KiposTown_Zoo_PokemonSign_Herp_Swamp_12:
# 227 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	setvar VAR_TEMP_0, 44
# 229 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_4, MSGBOX_YESNO
# 230 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 231 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Herp_Swamp_10

KiposTown_Zoo_PokemonSign_Herp_Swamp_15:
# 196 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_1
# 197 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 198 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 30
# 199 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	waitbuttonpress
# 200 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 202 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Herp_Swamp_17
	goto KiposTown_Zoo_PokemonSign_Herp_Swamp_7

KiposTown_Zoo_PokemonSign_Herp_Swamp_17:
# 204 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 20
# 205 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_HRP_03_2
# 206 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 207 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 30
# 208 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	waitbuttonpress
# 209 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Herp_Swamp_7


KiposTown_Zoo_EnvironmentSign_Herp_Swamp::
# 240 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 241 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Herp_Swamp_Text_0
# 242 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 243 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Herp_Birds::
# 250 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 253 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1
# 254 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2
# 255 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Birds_2
KiposTown_Zoo_PokemonSign_Herp_Birds_1:
# 259 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Birds_5
KiposTown_Zoo_PokemonSign_Herp_Birds_4:
# 265 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Birds_Text_0
# 266 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 269 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Herp_Birds_8
KiposTown_Zoo_PokemonSign_Herp_Birds_7:
# 295 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Birds_11
# 304 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Birds_12
KiposTown_Zoo_PokemonSign_Herp_Birds_10:
# 314 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Herp_Birds_2:
# 257 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_0
	goto KiposTown_Zoo_PokemonSign_Herp_Birds_1

KiposTown_Zoo_PokemonSign_Herp_Birds_5:
# 261 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_0
	goto KiposTown_Zoo_PokemonSign_Herp_Birds_4

KiposTown_Zoo_PokemonSign_Herp_Birds_8:
# 272 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_2, MSGBOX_YESNO
# 273 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 274 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Herp_Birds_15
	goto KiposTown_Zoo_PokemonSign_Herp_Birds_7

KiposTown_Zoo_PokemonSign_Herp_Birds_11:
# 298 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	setvar VAR_TEMP_0, 45
# 300 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_3, MSGBOX_YESNO
# 301 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 302 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Herp_Birds_10

KiposTown_Zoo_PokemonSign_Herp_Birds_12:
# 307 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	setvar VAR_TEMP_0, 46
# 309 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_4, MSGBOX_YESNO
# 310 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 311 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Herp_Birds_10

KiposTown_Zoo_PokemonSign_Herp_Birds_15:
# 276 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1
# 277 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 278 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 30
# 279 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	waitbuttonpress
# 280 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 282 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Herp_Birds_17
	goto KiposTown_Zoo_PokemonSign_Herp_Birds_7

KiposTown_Zoo_PokemonSign_Herp_Birds_17:
# 284 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 20
# 285 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2
# 286 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 287 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	delay 30
# 288 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	waitbuttonpress
# 289 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Herp_Birds_7


KiposTown_Zoo_EnvironmentSign_Herp_Birds::
# 320 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 321 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Herp_Birds_Text_0
# 322 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 323 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_BirdPokemonInteraction_1::
# 329 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 330 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	faceplayer
# 331 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1
# 332 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1, CRY_MODE_NORMAL
# 333 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	waitmoncry
# 334 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_BirdPokemonInteraction_1_Text_0
# 335 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 336 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_BirdPokemonInteraction_2::
# 341 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 342 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	faceplayer
# 343 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2
# 344 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_2, CRY_MODE_NORMAL
# 345 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	waitmoncry
# 346 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_BirdPokemonInteraction_1_Text_0
# 347 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 348 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_Building_NPC_BugCatcher::
# 358 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 359 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	faceplayer
# 360 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	speakername KiposTown_Zoo_Building_NPC_BugCatcher_Text_0
# 361 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_Building_NPC_BugCatcher_Text_1
# 362 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 363 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_Building_NPC_SchoolKid::
# 369 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 370 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	faceplayer
# 371 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	speakername KiposTown_Zoo_Building_NPC_SchoolKid_Text_0
# 372 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_Building_NPC_SchoolKid_Text_1
# 373 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
# 374 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_Building_NPC_BirdGirl::
# 380 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	lock
# 381 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	faceplayer
# 382 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	speakername KiposTown_Zoo_Building_NPC_BirdGirl_Text_0
# 383 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_HRP_04_1, 0
	goto_if_gt KiposTown_Zoo_Building_NPC_BirdGirl_2
# 390 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_Building_NPC_BirdGirl_Text_2
# 391 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
KiposTown_Zoo_Building_NPC_BirdGirl_1:
# 393 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	release
	end

KiposTown_Zoo_Building_NPC_BirdGirl_2:
# 385 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	msgbox KiposTown_Zoo_Building_NPC_BirdGirl_Text_1
# 386 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	closemessage
	goto KiposTown_Zoo_Building_NPC_BirdGirl_1


KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_0:
# 17 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "---$"

KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_1:
# 25 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Herpetofauna Enclosure No. 1: Badlands\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_2:
# 32 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "There's information about each Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_3:
# 60 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "There are no Pokémon in the exhibit.\n"
	.string "Would you like to {COLOR GREEN}donate a Pokémon to\l"
	.string "the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Herp_Badlands_Text_4:
# 69 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "There is room for a second Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_EnvironmentSign_Herp_Badlands_Text_0:
# 81 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Herpetofauna Enclosure No. 1: {COLOR GREEN}Badlands{COLOR DARK_GRAY}\p"
	.string "Badlands are defined by their lack of\n"
	.string "water or plant growth, making for a\l"
	.string "difficult environment to survive in.\l"
	.string "Some reptilian Pokémon species have\l"
	.string "defied the odds to thrive here,\l"
	.string "absorbing sunlight on the rocks and\l"
	.string "burrowing through the sands.\p"
	.string "Only {COLOR GREEN}Herpetofauna (Reptiles and\n"
	.string "Amphibians){COLOR DARK_GRAY} are housed in this building.\l"
	.string "{COLOR GREEN}Ground and Fire-type{COLOR DARK_GRAY} Pokémon most\l"
	.string "commonly thrive in these conditions.$"

KiposTown_Zoo_PokemonSign_Herp_Jungle_Text_0:
# 105 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Herpetofauna Enclosure No. 2: Jungle\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Herp_Jungle_Text_0:
# 161 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Herpetofauna Enclosure No. 2: {COLOR GREEN}Jungle{COLOR DARK_GRAY}\p"
	.string "The complex layers of canopy hanging\n"
	.string "over jungles allows for a complex\l"
	.string "ecosystem to form. Many reptiles make\l"
	.string "their homes here, ranging from small\l"
	.string "species hiding between leaves to\l"
	.string "massive, gentle giants.\p"
	.string "Only {COLOR GREEN}Herpetofauna (Reptiles and\n"
	.string "Amphibians){COLOR DARK_GRAY} are housed in this building.\l"
	.string "{COLOR GREEN}Grass and Normal-type{COLOR DARK_GRAY} Pokémon are most\l"
	.string "commonly found in these environments.$"

KiposTown_Zoo_PokemonSign_Herp_Swamp_Text_0:
# 185 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Herpetofauna Enclosure No. 3: Mangrove\n"
	.string "Swamp\p"
	.string "Pokémon in Exhibit: {STR_VAR_1},\n"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Herp_Swamp_Text_0:
# 241 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Herpetofauna Enclosure No. 3: {COLOR GREEN}Mangrove\n"
	.string "Swamp{COLOR DARK_GRAY}\p"
	.string "A huge range of reptiles can be found in\n"
	.string "damp, semi-flooded areas. Pokémon\l"
	.string "found here vary from passing\l"
	.string "individuals looking for a drink to\l"
	.string "species which rely entirely on water.\l"
	.string "Amphibians, which rely largely on water,\l"
	.string "can also be found here.\p"
	.string "{COLOR GREEN}Water-type{COLOR DARK_GRAY} Pokémon and species which\n"
	.string "{COLOR GREEN}swim{COLOR DARK_GRAY} thrive in these ecosystems.$"

KiposTown_Zoo_PokemonSign_Herp_Birds_Text_0:
# 265 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Special Enclosure: Avian Encounter!\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Herp_Birds_Text_0:
# 321 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Special Enclosure: {COLOR GREEN}Avian Encounter!{COLOR DARK_GRAY}\p"
	.string "Although traditionally kept separate\n"
	.string "from the category of Herpetofauna,\l"
	.string "birds are actually an evolutionary\l"
	.string "branch of reptiles! Here at the\l"
	.string "Conservation Center, we are allowing\l"
	.string "close contact with these species to\l"
	.string "help visitors form a connection with\l"
	.string "wildlife.\p"
	.string "{COLOR GREEN}Bird{COLOR DARK_GRAY} Pokémon can be found roaming\n"
	.string "inside. Take a seat and feel connected\l"
	.string "with nature!$"

KiposTown_Zoo_EventScript_BirdPokemonInteraction_1_Text_0:
# 334 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "The {STR_VAR_1} huffed out a\n"
	.string "greeting!$"

KiposTown_Zoo_Building_NPC_BugCatcher_Text_0:
# 360 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Bug Catcher$"

KiposTown_Zoo_Building_NPC_BugCatcher_Text_1:
# 361 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Herpet- uhhh... Um, Herpayto- no, that's\n"
	.string "not right...\p"
	.string "Her-pet-o-fau-na... Hey, I did it! It's a\n"
	.string "weird name, but it's a grouping of\l"
	.string "{COLOR GREEN}reptiles and amphibians{COLOR DARK_GRAY}. Pretty cool!$"

KiposTown_Zoo_Building_NPC_SchoolKid_Text_0:
# 371 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "School Kid$"

KiposTown_Zoo_Building_NPC_SchoolKid_Text_1:
# 372 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "We came on a school trip here a few\n"
	.string "weeks ago, right before Team Chimera\l"
	.string "came in and took all the Pokémon. Now, I\l"
	.string "keep tagging along with my parents to\l"
	.string "check up on the Zoo!$"

KiposTown_Zoo_Building_NPC_BirdGirl_Text_0:
# 382 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "Bird Lady$"

KiposTown_Zoo_Building_NPC_BirdGirl_Text_1:
# 385 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "If I stay still enough, the birds are\n"
	.string "sure to come to me. I've always wanted\l"
	.string "one to land on me!$"

KiposTown_Zoo_Building_NPC_BirdGirl_Text_2:
# 390 "data/maps/KiposTown_Zoo_HerpetofaunaBuilding/scripts.pory"
	.string "I came in here to see the new bird\n"
	.string "exhibit, but the Pokémon are all gone!\l"
	.string "How am I gonna bond with the birds now?$"

KiposTown_Zoo_SpecialtyBuilding_MapScripts::
# 2 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KiposTown_Zoo_SpecialtyBuilding_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KiposTown_Zoo_SpecialtyBuilding_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special UpdateZooGraphics_SpecialtyBuilding
	return


KiposTown_Zoo_PokemonSign_Indoor_WarmWater::
# 10 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 13 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1
# 14 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_IN_01_2
# 15 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_ZOO_POKEMON_ENCLOSURE_IN_01_3
# 16 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_WarmWater_2
KiposTown_Zoo_PokemonSign_Indoor_WarmWater_1:
# 20 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_WarmWater_5
KiposTown_Zoo_PokemonSign_Indoor_WarmWater_4:
# 24 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_01_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_WarmWater_8
KiposTown_Zoo_PokemonSign_Indoor_WarmWater_7:
# 30 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_1
# 31 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 34 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Indoor_WarmWater_11
KiposTown_Zoo_PokemonSign_Indoor_WarmWater_10:
# 70 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_WarmWater_14
# 79 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_01_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_WarmWater_15
# 88 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_01_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_WarmWater_16
KiposTown_Zoo_PokemonSign_Indoor_WarmWater_13:
# 98 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_2:
# 18 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_0
	goto KiposTown_Zoo_PokemonSign_Indoor_WarmWater_1

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_5:
# 22 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_0
	goto KiposTown_Zoo_PokemonSign_Indoor_WarmWater_4

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_8:
# 26 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferstring STR_VAR_3, KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_0
	goto KiposTown_Zoo_PokemonSign_Indoor_WarmWater_7

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_11:
# 37 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_2, MSGBOX_YESNO
# 38 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 39 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_WarmWater_20
	goto KiposTown_Zoo_PokemonSign_Indoor_WarmWater_10

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_14:
# 73 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	setvar VAR_TEMP_0, 32
# 75 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_3, MSGBOX_YESNO
# 76 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 77 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Indoor_WarmWater_13

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_15:
# 82 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	setvar VAR_TEMP_0, 33
# 84 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_4, MSGBOX_YESNO
# 85 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 86 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Indoor_WarmWater_13

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_16:
# 91 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	setvar VAR_TEMP_0, 34
# 93 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_5, MSGBOX_YESNO
# 94 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 95 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Indoor_WarmWater_13

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_20:
# 41 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1
# 42 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 43 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 30
# 44 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitbuttonpress
# 45 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 47 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_01_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Indoor_WarmWater_23
KiposTown_Zoo_PokemonSign_Indoor_WarmWater_22:
# 57 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_01_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Indoor_WarmWater_25
	goto KiposTown_Zoo_PokemonSign_Indoor_WarmWater_10

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_23:
# 49 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 20
# 50 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_IN_01_2
# 51 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 52 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 30
# 53 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitbuttonpress
# 54 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Indoor_WarmWater_22

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_25:
# 59 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 20
# 60 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_IN_01_3
# 61 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 62 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 30
# 63 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitbuttonpress
# 64 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Indoor_WarmWater_10


KiposTown_Zoo_EnvironmentSign_Indoors_WarmWater::
# 104 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 105 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Indoors_WarmWater_Text_0
# 106 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 107 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Indoor_Gymnasium::
# 114 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 117 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1
# 118 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2
# 119 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_2
KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_1:
# 123 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_5
KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_4:
# 129 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_Text_0
# 130 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 133 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_8
KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_7:
# 159 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_11
# 168 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_12
KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_10:
# 178 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_2:
# 121 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_0
	goto KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_1

KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_5:
# 125 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_0
	goto KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_4

KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_8:
# 136 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_2, MSGBOX_YESNO
# 137 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 138 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_15
	goto KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_7

KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_11:
# 162 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	setvar VAR_TEMP_0, 35
# 164 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_3, MSGBOX_YESNO
# 165 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 166 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_10

KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_12:
# 171 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	setvar VAR_TEMP_0, 36
# 173 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_4, MSGBOX_YESNO
# 174 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 175 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_10

KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_15:
# 140 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1
# 141 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 142 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 30
# 143 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitbuttonpress
# 144 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 146 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_17
	goto KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_7

KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_17:
# 148 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 20
# 149 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2
# 150 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 151 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 30
# 152 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitbuttonpress
# 153 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_7


KiposTown_Zoo_EnvironmentSign_Indoors_Gymnasium::
# 184 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 185 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Indoors_Gymnasium_Text_0
# 186 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 187 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter::
# 194 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 197 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1
# 198 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2
# 199 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_2
KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_1:
# 203 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_5
KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_4:
# 209 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_Text_0
# 210 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 213 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_8
KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_7:
# 239 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_11
# 248 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_12
KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_10:
# 258 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_2:
# 201 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_0
	goto KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_1

KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_5:
# 205 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_0
	goto KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_4

KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_8:
# 216 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_2, MSGBOX_YESNO
# 217 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 218 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_15
	goto KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_7

KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_11:
# 242 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	setvar VAR_TEMP_0, 37
# 244 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_3, MSGBOX_YESNO
# 245 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 246 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_10

KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_12:
# 251 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	setvar VAR_TEMP_0, 38
# 253 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_4, MSGBOX_YESNO
# 254 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 255 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_10

KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_15:
# 220 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1
# 221 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 222 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 30
# 223 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitbuttonpress
# 224 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 226 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_17
	goto KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_7

KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_17:
# 228 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 20
# 229 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2
# 230 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 231 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	delay 30
# 232 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitbuttonpress
# 233 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_7


KiposTown_Zoo_EnvironmentSign_Indoors_SpiritCenter::
# 264 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 265 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Indoors_SpiritCenter_Text_0
# 266 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 267 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_FightingPokemonInteraction_1::
# 273 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 274 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	faceplayer
# 275 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1
# 276 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1, CRY_MODE_NORMAL
# 277 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitmoncry
# 278 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_FightingPokemonInteraction_1_Text_0
# 279 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 280 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_FightingPokemonInteraction_2::
# 285 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 286 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	faceplayer
# 287 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2
# 288 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_IN_02_2, CRY_MODE_NORMAL
# 289 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitmoncry
# 290 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_FightingPokemonInteraction_1_Text_0
# 291 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 292 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_SpiritPokemonInteraction_1::
# 297 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 298 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	faceplayer
# 299 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1
# 300 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_IN_03_1, CRY_MODE_NORMAL
# 301 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitmoncry
# 302 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_FightingPokemonInteraction_1_Text_0
# 303 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 304 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_EventScript_SpiritPokemonInteraction_2::
# 309 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 310 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	faceplayer
# 311 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2
# 312 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	playmoncry VAR_ZOO_POKEMON_ENCLOSURE_IN_03_2, CRY_MODE_NORMAL
# 313 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitmoncry
# 314 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_EventScript_FightingPokemonInteraction_1_Text_0
# 315 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 316 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_Building_NPC_Sailor::
# 326 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 327 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	faceplayer
# 328 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	speakername KiposTown_Zoo_Building_NPC_Sailor_Text_0
# 329 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_01_1, 0
	goto_if_gt KiposTown_Zoo_Building_NPC_Sailor_2
# 336 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_Building_NPC_Sailor_Text_2
# 337 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
KiposTown_Zoo_Building_NPC_Sailor_1:
# 339 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	applymovement 8, Common_Movement_FaceOriginalDirection
# 340 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitmovement 0
# 341 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	release
	end

KiposTown_Zoo_Building_NPC_Sailor_2:
# 331 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_Building_NPC_Sailor_Text_1
# 332 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
	goto KiposTown_Zoo_Building_NPC_Sailor_1


KiposTown_Zoo_Building_NPC_Beauty::
# 347 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 348 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	faceplayer
# 349 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	speakername KiposTown_Zoo_Building_NPC_Beauty_Text_0
# 350 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_Building_NPC_Beauty_Text_1
# 351 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
# 352 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 353 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitmovement 0
# 354 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	release
	end


KiposTown_Zoo_Building_NPC_BlackBelt::
# 360 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	lock
# 361 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	faceplayer
# 362 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	speakername KiposTown_Zoo_Building_NPC_BlackBelt_Text_0
# 363 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1, 0
	goto_if_gt KiposTown_Zoo_Building_NPC_BlackBelt_2
# 371 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_Building_NPC_BlackBelt_Text_2
# 372 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
KiposTown_Zoo_Building_NPC_BlackBelt_1:
# 374 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	applymovement 10, Common_Movement_FaceOriginalDirection
# 375 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	waitmovement 0
# 376 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	release
	end

KiposTown_Zoo_Building_NPC_BlackBelt_2:
# 365 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_IN_02_1
# 366 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	msgbox KiposTown_Zoo_Building_NPC_BlackBelt_Text_1
# 367 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	closemessage
	goto KiposTown_Zoo_Building_NPC_BlackBelt_1


KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_0:
# 18 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "---$"

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_1:
# 30 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "Indoors Enclosure No. 1: Warm Water\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}, {STR_VAR_3}$"

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_2:
# 37 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "There's information about each Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_3:
# 75 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "There are no Pokémon in the exhibit.\n"
	.string "Would you like to {COLOR GREEN}donate a Pokémon to\l"
	.string "the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_4:
# 84 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "There is room for a second Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Indoor_WarmWater_Text_5:
# 93 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "There is room for a third Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_EnvironmentSign_Indoors_WarmWater_Text_0:
# 105 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "Indoors Enclosure No. 1: {COLOR GREEN}Warm Water{COLOR DARK_GRAY}\p"
	.string "Due to the sheer abundance of Pokémon\n"
	.string "species living in water biomes, the\l"
	.string "Conservation Center has reserved an\l"
	.string "extra area to be a home for these\l"
	.string "amazing Pokémon! Preserving these\l"
	.string "habitats is a key component of our\l"
	.string "mission, saving threatened ecosystems\l"
	.string "and species alike from complete\l"
	.string "extinction.\p"
	.string "{COLOR GREEN}Water-type{COLOR DARK_GRAY} Pokémon, true to their name,\n"
	.string "are most commonly found here.\l"
	.string "Furthermore, many Pokémon associated\l"
	.string "with {COLOR GREEN}semi-aquatic lifestyles{COLOR DARK_GRAY} can be\l"
	.string "seen splashing through the waves.$"

KiposTown_Zoo_PokemonSign_Indoor_Gymnasium_Text_0:
# 129 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "Indoors Enclosure No. 2: Gymnasium\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Indoors_Gymnasium_Text_0:
# 185 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "Indoors Enclosure No. 2: {COLOR GREEN}Gymnasium{COLOR DARK_GRAY}\p"
	.string "Although they are human-constructed\n"
	.string "environments, Gymnasiums provide\l"
	.string "important training locations for a wide\l"
	.string "range of physically active Pokémon. To\l"
	.string "further enrich their activity, please\l"
	.string "feel free to engage with these Pokémon\l"
	.string "during their training, while staying\l"
	.string "respectful of their boundaries!\p"
	.string "Traditionally, most Pokémon that take\n"
	.string "extra time to physically train are\l"
	.string "{COLOR GREEN}Fighting-type{COLOR DARK_GRAY} species. Certain other\l"
	.string "{COLOR GREEN}physically fit{COLOR DARK_GRAY} Pokémon also enjoy\l"
	.string "training in this enclosure.$"

KiposTown_Zoo_PokemonSign_Indoor_SpiritCenter_Text_0:
# 209 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "Indoors Enclosure No. 3: Spirit Center\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Indoors_SpiritCenter_Text_0:
# 265 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "Indoors Enclosure No. 3: {COLOR GREEN}Spirit Center{COLOR DARK_GRAY}\p"
	.string "Many Pokémon have deep connections to\n"
	.string "powers beyond our understanding. This\l"
	.string "enclosure allows for human-Pokémon\l"
	.string "contact in their preferred habitat,\l"
	.string "around decaying logs and replicas of\l"
	.string "old ruins. Contact with humans has been\l"
	.string "deemed safe for these tamed\l"
	.string "individuals, but please be respectful\l"
	.string "of their space and intelligence.\p"
	.string "{COLOR GREEN}Psychic and Ghost-type{COLOR DARK_GRAY} Pokémon love\n"
	.string "this area, alongside other Pokémon with\l"
	.string "{COLOR GREEN}strong spiritual powes{COLOR DARK_GRAY}.$"

KiposTown_Zoo_EventScript_FightingPokemonInteraction_1_Text_0:
# 278 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "The {STR_VAR_1} huffed out a\n"
	.string "greeting!$"

KiposTown_Zoo_Building_NPC_Sailor_Text_0:
# 328 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "Sailor$"

KiposTown_Zoo_Building_NPC_Sailor_Text_1:
# 331 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "Seeing Pokémon and learning more about\n"
	.string "them here makes me appreciate them\l"
	.string "more outside. I see a ton of Pokémon\l"
	.string "when I'm sailing, now I know more about\l"
	.string "them!$"

KiposTown_Zoo_Building_NPC_Sailor_Text_2:
# 336 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "I came here to learn more about Pokémon\n"
	.string "I see when I'm sailing, but it looks like\l"
	.string "all the Pokémon are gone...$"

KiposTown_Zoo_Building_NPC_Beauty_Text_0:
# 349 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "Beauty$"

KiposTown_Zoo_Building_NPC_Beauty_Text_1:
# 350 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "The red leaves of this area reminds me\n"
	.string "of my childhood in Pythios Town. Maybe I\l"
	.string "should pay it a visit.$"

KiposTown_Zoo_Building_NPC_BlackBelt_Text_0:
# 362 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "Black Belt$"

KiposTown_Zoo_Building_NPC_BlackBelt_Text_1:
# 366 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "{STR_VAR_1} is pretty strong, so\n"
	.string "it's making a great training buddy!\l"
	.string "Hyah!$"

KiposTown_Zoo_Building_NPC_BlackBelt_Text_2:
# 371 "data/maps/KiposTown_Zoo_SpecialtyBuilding/scripts.pory"
	.string "A Pokémon here to train with would be\n"
	.string "nice. For now, this boxing dummy will\l"
	.string "have to be enough!$"

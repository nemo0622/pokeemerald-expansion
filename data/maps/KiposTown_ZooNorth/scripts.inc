KiposTown_ZooNorth_MapScripts::
# 2 "data/maps/KiposTown_ZooNorth/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KiposTown_ZooNorth_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KiposTown_ZooNorth_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special UpdateZooGraphics_North
	return


KiposTown_Zoo_DirectionSign_North_1::
# 9 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 10 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_DirectionSign_North_1_Text_0
# 11 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 12 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_DirectionSign_North_2::
# 17 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 18 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_DirectionSign_North_2_Text_0
# 19 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 20 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Beach::
# 31 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 34 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_07_1
# 35 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_07_2
# 36 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Beach_2
KiposTown_Zoo_PokemonSign_Beach_1:
# 40 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Beach_5
KiposTown_Zoo_PokemonSign_Beach_4:
# 46 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_1
# 47 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 50 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Beach_8
KiposTown_Zoo_PokemonSign_Beach_7:
# 76 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Beach_11
# 85 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Beach_12
KiposTown_Zoo_PokemonSign_Beach_10:
# 95 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Beach_2:
# 38 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Beach_1

KiposTown_Zoo_PokemonSign_Beach_5:
# 42 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Beach_4

KiposTown_Zoo_PokemonSign_Beach_8:
# 53 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 54 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 55 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Beach_15
	goto KiposTown_Zoo_PokemonSign_Beach_7

KiposTown_Zoo_PokemonSign_Beach_11:
# 79 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 16
# 81 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 82 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 83 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Beach_10

KiposTown_Zoo_PokemonSign_Beach_12:
# 88 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 17
# 90 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 91 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 92 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Beach_10

KiposTown_Zoo_PokemonSign_Beach_15:
# 57 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_07_1
# 58 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 59 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 60 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 61 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 63 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Beach_17
	goto KiposTown_Zoo_PokemonSign_Beach_7

KiposTown_Zoo_PokemonSign_Beach_17:
# 65 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 66 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_07_2
# 67 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 68 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 69 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 70 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Beach_7


KiposTown_Zoo_EnvironmentSign_Beach::
# 101 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 102 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Beach_Text_0
# 103 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 104 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Desert::
# 111 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 114 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_08_1
# 115 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_08_2
# 116 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Desert_2
KiposTown_Zoo_PokemonSign_Desert_1:
# 120 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Desert_5
KiposTown_Zoo_PokemonSign_Desert_4:
# 126 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Desert_Text_0
# 127 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 130 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Desert_8
KiposTown_Zoo_PokemonSign_Desert_7:
# 156 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Desert_11
# 165 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Desert_12
KiposTown_Zoo_PokemonSign_Desert_10:
# 175 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Desert_2:
# 118 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Desert_1

KiposTown_Zoo_PokemonSign_Desert_5:
# 122 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Desert_4

KiposTown_Zoo_PokemonSign_Desert_8:
# 133 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 134 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 135 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Desert_15
	goto KiposTown_Zoo_PokemonSign_Desert_7

KiposTown_Zoo_PokemonSign_Desert_11:
# 159 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 18
# 161 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 162 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 163 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Desert_10

KiposTown_Zoo_PokemonSign_Desert_12:
# 168 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 19
# 170 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 171 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 172 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Desert_10

KiposTown_Zoo_PokemonSign_Desert_15:
# 137 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_08_1
# 138 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 139 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 140 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 141 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 143 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Desert_17
	goto KiposTown_Zoo_PokemonSign_Desert_7

KiposTown_Zoo_PokemonSign_Desert_17:
# 145 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 146 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_08_2
# 147 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 148 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 149 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 150 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Desert_7


KiposTown_Zoo_EnvironmentSign_Desert::
# 181 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 182 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Desert_Text_0
# 183 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 184 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_LazarusTaxa::
# 191 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 194 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_09_1
# 195 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_09_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_LazarusTaxa_2
KiposTown_Zoo_PokemonSign_LazarusTaxa_1:
# 201 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_LazarusTaxa_Text_0
# 202 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 205 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_09_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_LazarusTaxa_5
KiposTown_Zoo_PokemonSign_LazarusTaxa_4:
# 221 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_09_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_LazarusTaxa_8
KiposTown_Zoo_PokemonSign_LazarusTaxa_7:
# 231 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_LazarusTaxa_2:
# 197 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_LazarusTaxa_1

KiposTown_Zoo_PokemonSign_LazarusTaxa_5:
# 208 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_LazarusTaxa_Text_1, MSGBOX_YESNO
# 209 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 210 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_LazarusTaxa_10
	goto KiposTown_Zoo_PokemonSign_LazarusTaxa_4

KiposTown_Zoo_PokemonSign_LazarusTaxa_8:
# 224 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 20
# 226 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 227 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 228 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_LazarusTaxa_7

KiposTown_Zoo_PokemonSign_LazarusTaxa_10:
# 212 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_09_1
# 213 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 214 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 215 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 216 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_LazarusTaxa_4


KiposTown_Zoo_EnvironmentSign_LazarusTaxa::
# 237 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 238 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_LazarusTaxa_Text_0
# 239 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 240 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Mountains::
# 247 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 250 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_10_1
# 251 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_10_2
# 252 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_ZOO_POKEMON_ENCLOSURE_10_3
# 253 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_2
KiposTown_Zoo_PokemonSign_Mountains_1:
# 257 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_5
KiposTown_Zoo_PokemonSign_Mountains_4:
# 261 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_8
KiposTown_Zoo_PokemonSign_Mountains_7:
# 267 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Mountains_Text_0
# 268 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 271 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Mountains_11
KiposTown_Zoo_PokemonSign_Mountains_10:
# 306 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_14
# 315 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_15
# 324 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_16
KiposTown_Zoo_PokemonSign_Mountains_13:
# 334 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Mountains_2:
# 255 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Mountains_1

KiposTown_Zoo_PokemonSign_Mountains_5:
# 259 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Mountains_4

KiposTown_Zoo_PokemonSign_Mountains_8:
# 263 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_3, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Mountains_7

KiposTown_Zoo_PokemonSign_Mountains_11:
# 274 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 275 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 276 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_20
	goto KiposTown_Zoo_PokemonSign_Mountains_10

KiposTown_Zoo_PokemonSign_Mountains_14:
# 309 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 21
# 311 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 312 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 313 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Mountains_13

KiposTown_Zoo_PokemonSign_Mountains_15:
# 318 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 22
# 320 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 321 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 322 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Mountains_13

KiposTown_Zoo_PokemonSign_Mountains_16:
# 327 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 23
# 329 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Mountains_Text_1, MSGBOX_YESNO
# 330 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 331 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Mountains_13

KiposTown_Zoo_PokemonSign_Mountains_20:
# 278 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_10_1
# 279 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 280 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 281 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 282 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 284 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Mountains_23
KiposTown_Zoo_PokemonSign_Mountains_22:
# 293 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Mountains_25
	goto KiposTown_Zoo_PokemonSign_Mountains_10

KiposTown_Zoo_PokemonSign_Mountains_23:
# 286 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 287 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_10_2
# 288 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 289 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 290 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 291 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Mountains_22

KiposTown_Zoo_PokemonSign_Mountains_25:
# 295 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 296 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_10_3
# 297 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 298 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 299 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 300 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Mountains_10


KiposTown_Zoo_EnvironmentSign_Mountains::
# 340 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 341 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Mountains_Text_0
# 342 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 343 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Volcano::
# 350 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 353 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_11_1
# 354 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_11_2
# 355 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Volcano_2
KiposTown_Zoo_PokemonSign_Volcano_1:
# 359 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Volcano_5
KiposTown_Zoo_PokemonSign_Volcano_4:
# 365 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Volcano_Text_0
# 366 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 369 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Volcano_8
KiposTown_Zoo_PokemonSign_Volcano_7:
# 395 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Volcano_11
# 404 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Volcano_12
KiposTown_Zoo_PokemonSign_Volcano_10:
# 414 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Volcano_2:
# 357 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Volcano_1

KiposTown_Zoo_PokemonSign_Volcano_5:
# 361 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Volcano_4

KiposTown_Zoo_PokemonSign_Volcano_8:
# 372 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 373 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 374 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Volcano_15
	goto KiposTown_Zoo_PokemonSign_Volcano_7

KiposTown_Zoo_PokemonSign_Volcano_11:
# 398 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 24
# 400 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 401 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 402 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Volcano_10

KiposTown_Zoo_PokemonSign_Volcano_12:
# 407 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 25
# 409 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 410 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 411 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Volcano_10

KiposTown_Zoo_PokemonSign_Volcano_15:
# 376 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_11_1
# 377 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 378 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 379 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 380 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 382 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Volcano_17
	goto KiposTown_Zoo_PokemonSign_Volcano_7

KiposTown_Zoo_PokemonSign_Volcano_17:
# 384 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 385 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_11_2
# 386 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 387 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 388 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 389 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Volcano_7


KiposTown_Zoo_EnvironmentSign_Volcano::
# 420 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 421 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Volcano_Text_0
# 422 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 423 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Tundra::
# 430 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 433 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_12_1
# 434 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_12_2
# 435 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Tundra_2
KiposTown_Zoo_PokemonSign_Tundra_1:
# 439 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Tundra_5
KiposTown_Zoo_PokemonSign_Tundra_4:
# 445 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Tundra_Text_0
# 446 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 449 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Tundra_8
KiposTown_Zoo_PokemonSign_Tundra_7:
# 475 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Tundra_11
# 484 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Tundra_12
KiposTown_Zoo_PokemonSign_Tundra_10:
# 494 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Tundra_2:
# 437 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Tundra_1

KiposTown_Zoo_PokemonSign_Tundra_5:
# 441 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Tundra_4

KiposTown_Zoo_PokemonSign_Tundra_8:
# 452 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 453 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 454 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Tundra_15
	goto KiposTown_Zoo_PokemonSign_Tundra_7

KiposTown_Zoo_PokemonSign_Tundra_11:
# 478 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 26
# 480 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 481 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 482 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Tundra_10

KiposTown_Zoo_PokemonSign_Tundra_12:
# 487 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 27
# 489 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 490 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 491 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Tundra_10

KiposTown_Zoo_PokemonSign_Tundra_15:
# 456 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_12_1
# 457 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 458 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 459 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 460 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 462 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Tundra_17
	goto KiposTown_Zoo_PokemonSign_Tundra_7

KiposTown_Zoo_PokemonSign_Tundra_17:
# 464 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 465 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_12_2
# 466 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 467 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 468 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 469 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Tundra_7


KiposTown_Zoo_EnvironmentSign_Tundra::
# 500 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 501 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Tundra_Text_0
# 502 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 503 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Ruins::
# 510 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 513 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_13_1
# 514 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_13_2
# 515 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Ruins_2
KiposTown_Zoo_PokemonSign_Ruins_1:
# 519 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Ruins_5
KiposTown_Zoo_PokemonSign_Ruins_4:
# 525 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Ruins_Text_0
# 526 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 529 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Ruins_8
KiposTown_Zoo_PokemonSign_Ruins_7:
# 555 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Ruins_11
# 564 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Ruins_12
KiposTown_Zoo_PokemonSign_Ruins_10:
# 574 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Ruins_2:
# 517 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Ruins_1

KiposTown_Zoo_PokemonSign_Ruins_5:
# 521 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Ruins_4

KiposTown_Zoo_PokemonSign_Ruins_8:
# 532 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 533 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 534 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Ruins_15
	goto KiposTown_Zoo_PokemonSign_Ruins_7

KiposTown_Zoo_PokemonSign_Ruins_11:
# 558 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 28
# 560 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 561 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 562 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Ruins_10

KiposTown_Zoo_PokemonSign_Ruins_12:
# 567 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 29
# 569 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 570 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 571 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Ruins_10

KiposTown_Zoo_PokemonSign_Ruins_15:
# 536 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_13_1
# 537 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 538 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 539 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 540 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 542 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Ruins_17
	goto KiposTown_Zoo_PokemonSign_Ruins_7

KiposTown_Zoo_PokemonSign_Ruins_17:
# 544 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 545 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_13_2
# 546 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 547 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 548 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 549 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Ruins_7


KiposTown_Zoo_EnvironmentSign_Ruins::
# 580 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 581 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Ruins_Text_0
# 582 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 583 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Shallows::
# 590 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 593 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_14_1
# 594 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_14_2
# 595 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Shallows_2
KiposTown_Zoo_PokemonSign_Shallows_1:
# 599 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Shallows_5
KiposTown_Zoo_PokemonSign_Shallows_4:
# 605 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Shallows_Text_0
# 606 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 609 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Shallows_8
KiposTown_Zoo_PokemonSign_Shallows_7:
# 635 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Shallows_11
# 644 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Shallows_12
KiposTown_Zoo_PokemonSign_Shallows_10:
# 654 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Shallows_2:
# 597 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Shallows_1

KiposTown_Zoo_PokemonSign_Shallows_5:
# 601 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Shallows_4

KiposTown_Zoo_PokemonSign_Shallows_8:
# 612 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 613 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 614 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Shallows_15
	goto KiposTown_Zoo_PokemonSign_Shallows_7

KiposTown_Zoo_PokemonSign_Shallows_11:
# 638 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 30
# 640 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 641 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 642 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Shallows_10

KiposTown_Zoo_PokemonSign_Shallows_12:
# 647 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 31
# 649 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 650 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 651 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Shallows_10

KiposTown_Zoo_PokemonSign_Shallows_15:
# 616 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_14_1
# 617 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 618 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 619 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 620 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 622 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Shallows_17
	goto KiposTown_Zoo_PokemonSign_Shallows_7

KiposTown_Zoo_PokemonSign_Shallows_17:
# 624 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 625 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_14_2
# 626 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 627 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 628 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 629 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Shallows_7


KiposTown_Zoo_EnvironmentSign_Shallows::
# 660 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 661 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Shallows_Text_0
# 662 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 663 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_North_NPC_Officer::
# 673 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 674 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 675 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Officer_Text_0
# 676 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Officer_Text_1
# 677 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 678 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_North_NPC_Tuber::
# 684 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 685 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 686 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Tuber_Text_0
# 687 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Tuber_Text_1
# 688 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 689 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 22, Common_Movement_FaceOriginalDirection
# 690 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 691 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_North_NPC_Hiker::
# 697 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 698 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 699 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Hiker_Text_0
# 700 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Hiker_Text_1
# 701 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 702 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 23, Common_Movement_FaceUp
# 703 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 704 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_North_NPC_PaleoGirl::
# 710 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 711 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 712 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_PaleoGirl_Text_0
# 715 "data/maps/KiposTown_ZooNorth/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FILL_LAZARUS_ZOO
# 716 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_North_NPC_PaleoGirl_2
# 726 "data/maps/KiposTown_ZooNorth/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FILL_LAZARUS_ZOO
# 727 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KiposTown_Zoo_North_NPC_PaleoGirl_5
# 737 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_PaleoGirl_Text_3
# 738 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 739 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 24, Common_Movement_FaceLeft
# 740 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 742 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 743 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_09_1, 0
	goto_if_gt KiposTown_Zoo_North_NPC_PaleoGirl_8
# 766 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 24, Common_Movement_FacePlayer
# 767 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 768 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_PaleoGirl_Text_0
# 769 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_PaleoGirl_Text_6
# 770 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
KiposTown_Zoo_North_NPC_PaleoGirl_4:
# 773 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end

KiposTown_Zoo_North_NPC_PaleoGirl_2:
# 718 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_09_1
# 719 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_PaleoGirl_Text_1
# 720 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 721 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end

KiposTown_Zoo_North_NPC_PaleoGirl_5:
# 729 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_PaleoGirl_Text_2
# 730 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 732 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 733 "data/maps/KiposTown_ZooNorth/scripts.pory"
	startquest QUEST_FILL_LAZARUS_ZOO
	goto KiposTown_Zoo_North_NPC_PaleoGirl_4

KiposTown_Zoo_North_NPC_PaleoGirl_8:
# 745 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 24, Common_Movement_ExclamationMark
# 746 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 747 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 10
# 748 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_09_1
# 749 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_PaleoGirl_Text_0
# 750 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_PaleoGirl_Text_4
# 751 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 752 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 24, Common_Movement_FacePlayer
# 753 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 754 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_PaleoGirl_Text_0
# 755 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_PaleoGirl_Text_5
# 756 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 757 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 5
# 758 "data/maps/KiposTown_ZooNorth/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 759 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 761 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 762 "data/maps/KiposTown_ZooNorth/scripts.pory"
	completequest QUEST_FILL_LAZARUS_ZOO
	goto KiposTown_Zoo_North_NPC_PaleoGirl_4


KiposTown_Zoo_North_NPC_Athlete::
# 779 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 780 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 781 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Athlete_Text_0
# 782 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_1, 0
	goto_if_gt KiposTown_Zoo_North_NPC_Athlete_4
KiposTown_Zoo_North_NPC_Athlete_3:
# 789 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Athlete_Text_2
# 790 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
KiposTown_Zoo_North_NPC_Athlete_1:
# 792 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 25, Common_Movement_FaceOriginalDirection
# 793 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 794 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end

KiposTown_Zoo_North_NPC_Athlete_2:
# 784 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Athlete_Text_1
# 785 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
	goto KiposTown_Zoo_North_NPC_Athlete_1

KiposTown_Zoo_North_NPC_Athlete_4:
# 782 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_2, 0
	goto_if_gt KiposTown_Zoo_North_NPC_Athlete_2
	goto KiposTown_Zoo_North_NPC_Athlete_3


KiposTown_Zoo_North_NPC_Lass::
# 800 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 801 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 802 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Lass_Text_0
# 803 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Lass_Text_1
# 804 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 805 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 27, Common_Movement_FaceOriginalDirection
# 806 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 807 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_North_NPC_Dad::
# 813 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 814 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 815 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Dad_Text_0
# 816 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Dad_Text_1
# 817 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 818 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 26, Common_Movement_FaceOriginalDirection
# 819 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 820 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_North_NPC_Artist::
# 826 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 827 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 828 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Artist_Text_0
# 829 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Artist_Text_1
# 830 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 831 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_North_NPC_Camper::
# 837 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 838 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 839 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Camper_Text_0
# 840 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_1, 0
	goto_if_gt KiposTown_Zoo_North_NPC_Camper_2
# 847 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Camper_Text_2
# 848 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
KiposTown_Zoo_North_NPC_Camper_1:
# 850 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 29, Common_Movement_FaceOriginalDirection
# 851 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 852 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end

KiposTown_Zoo_North_NPC_Camper_2:
# 842 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Camper_Text_1
# 843 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
	goto KiposTown_Zoo_North_NPC_Camper_1


KiposTown_Zoo_North_NPC_Psychic::
# 858 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 859 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 860 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Psychic_Text_0
# 861 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Psychic_Text_1
# 862 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 863 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 30, Common_Movement_FaceOriginalDirection
# 864 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 865 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_North_NPC_HexManiac::
# 871 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 872 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 873 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_HexManiac_Text_0
# 874 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_1, 0
	goto_if_gt KiposTown_Zoo_North_NPC_HexManiac_2
# 882 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_HexManiac_Text_2
# 883 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
KiposTown_Zoo_North_NPC_HexManiac_1:
# 885 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 31, Common_Movement_FaceOriginalDirection
# 886 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 887 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end

KiposTown_Zoo_North_NPC_HexManiac_2:
# 876 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_13_1
# 877 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_HexManiac_Text_1
# 878 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
	goto KiposTown_Zoo_North_NPC_HexManiac_1


KiposTown_Zoo_North_NPC_PerformerM::
# 893 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 894 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 895 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_PerformerM_Text_0
# 896 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_PerformerM_Text_1
# 897 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 898 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_North_NPC_Boy::
# 904 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 905 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 906 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Boy_Text_0
# 907 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Boy_Text_1
# 908 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 909 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 33, Common_Movement_FaceOriginalDirection
# 910 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 911 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_North_NPC_Scientist::
# 917 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 918 "data/maps/KiposTown_ZooNorth/scripts.pory"
	faceplayer
# 919 "data/maps/KiposTown_ZooNorth/scripts.pory"
	speakername KiposTown_Zoo_North_NPC_Scientist_Text_0
# 920 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_1, 0
	goto_if_gt KiposTown_Zoo_North_NPC_Scientist_5
KiposTown_Zoo_North_NPC_Scientist_3:
# 929 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Scientist_Text_2
# 930 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
KiposTown_Zoo_North_NPC_Scientist_1:
# 932 "data/maps/KiposTown_ZooNorth/scripts.pory"
	applymovement 34, Common_Movement_FaceOriginalDirection
# 933 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitmovement 0
# 934 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end

KiposTown_Zoo_North_NPC_Scientist_2:
# 922 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_10_2
# 923 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_10_3
# 924 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_North_NPC_Scientist_Text_1
# 925 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
	goto KiposTown_Zoo_North_NPC_Scientist_1

KiposTown_Zoo_North_NPC_Scientist_4:
# 920 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_3, 0
	goto_if_gt KiposTown_Zoo_North_NPC_Scientist_2
	goto KiposTown_Zoo_North_NPC_Scientist_3

KiposTown_Zoo_North_NPC_Scientist_5:
# 920 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_2, 0
	goto_if_gt KiposTown_Zoo_North_NPC_Scientist_4
	goto KiposTown_Zoo_North_NPC_Scientist_3


KiposTown_Zoo_DirectionSign_North_1_Text_0:
# 10 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "{LEFT_ARROW} Beach Exhibit\n"
	.string "{UP_ARROW} Lazarus Taxa & Desert Exhibit\p"
	.string "Volcano & Tundra Exhibits {RIGHT_ARROW}\n"
	.string "'Backyard Friends' Zoo Exhibits {DOWN_ARROW}$"

KiposTown_Zoo_DirectionSign_North_2_Text_0:
# 18 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "{LEFT_ARROW} Desert & Mountain Exhibits\n"
	.string "{UP_ARROW} Ruins Exhibit\p"
	.string "Tundra Exhibit {RIGHT_ARROW}\n"
	.string "Lazarus Taxa & Volcano Exhibits {DOWN_ARROW}$"

KiposTown_Zoo_PokemonSign_Beach_Text_0:
# 38 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "---$"

KiposTown_Zoo_PokemonSign_Beach_Text_1:
# 46 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 7: Beach\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Beach_Text_2:
# 53 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "There's information about each Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_PokemonSign_Beach_Text_3:
# 81 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "There are no Pokémon in the exhibit.\n"
	.string "Would you like to {COLOR GREEN}donate a Pokémon to\l"
	.string "the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Beach_Text_4:
# 90 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "There is room for a second Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_EnvironmentSign_Beach_Text_0:
# 102 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 7: {COLOR GREEN}Beach{COLOR DARK_GRAY}\p"
	.string "Both terrestrial and water-dwelling\n"
	.string "Pokémon make their homes on beaches,\l"
	.string "where water meets the land. From\l"
	.string "burrowing in the sand to splashing in\l"
	.string "the waves, a variety of lifestyles are\l"
	.string "supported by this environment.\p"
	.string "A range of {COLOR GREEN}Water and Flying-type{COLOR DARK_GRAY}\n"
	.string "Pokémon make their homes here, often\l"
	.string "being {COLOR GREEN}semi-aquatic{COLOR DARK_GRAY} in nature.$"

KiposTown_Zoo_PokemonSign_Desert_Text_0:
# 126 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 8: Desert\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Desert_Text_0:
# 182 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 8: {COLOR GREEN}Desert{COLOR DARK_GRAY}\p"
	.string "Arid and dotted with rocks, desert\n"
	.string "environments provide difficult ways of\l"
	.string "life for Pokémon species living there.\l"
	.string "Despite the lack of water and little\l"
	.string "plant growth besides shrubs, vibrant\l"
	.string "ecosystems can still develop in the\l"
	.string "harsh conditions.\p"
	.string "Naturally, {COLOR GREEN}Ground and Rock-type{COLOR DARK_GRAY}\n"
	.string "Pokémon thrive in the dry, stony\l"
	.string "conditions. Species which prefer {COLOR GREEN}wide,\l"
	.string "open ranges{COLOR DARK_GRAY} or {COLOR GREEN}direct sunlight{COLOR DARK_GRAY} may also\l"
	.string "be found in desert habitats.$"

KiposTown_Zoo_PokemonSign_LazarusTaxa_Text_0:
# 201 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 9: Lazarus Taxa\n"
	.string "Pokémon in Exhibit: {STR_VAR_1}$"

KiposTown_Zoo_PokemonSign_LazarusTaxa_Text_1:
# 208 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "There's information about the Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_EnvironmentSign_LazarusTaxa_Text_0:
# 238 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 9: {COLOR GREEN}Lazarus Taxa{COLOR DARK_GRAY}\p"
	.string "This exhibit has been created to house\n"
	.string "species which have been recently\l"
	.string "rediscovered, as a part of the {COLOR GREEN}Lazarus\l"
	.string "Taxa phenomenon{COLOR DARK_GRAY} sweeping across the\l"
	.string "Ilios Region. These Pokémon are\l"
	.string "extremely rare, being thought\l"
	.string "long-extinct.\p"
	.string "Lazarus Taxa include Pokémon once\n"
	.string "known from {COLOR GREEN}fossils{COLOR DARK_GRAY}, which have been\l"
	.string "discovered living in many environments\l"
	.string "around Ilios.$"

KiposTown_Zoo_PokemonSign_Mountains_Text_0:
# 267 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 10: Mountains\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}, {STR_VAR_3}$"

KiposTown_Zoo_PokemonSign_Mountains_Text_1:
# 329 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "There is room for a third Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_EnvironmentSign_Mountains_Text_0:
# 341 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 10: {COLOR GREEN}Mountains{COLOR DARK_GRAY}\p"
	.string "Mountains are often remote, rocky, and\n"
	.string "rugged, pushing Pokémon to adapt if\l"
	.string "they're going to survive. Sadly, these\l"
	.string "once-peaceful landscapes are\l"
	.string "threatened by mining and resource\l"
	.string "extraction, tearing up the mountain\l"
	.string "homes of countless Pokémon species.\p"
	.string "{COLOR GREEN}Rock, Steel, and Fighting-type{COLOR DARK_GRAY} Pokémon\n"
	.string "seek out mountainous locations. In\l"
	.string "general, Pokémon with {COLOR GREEN}rugged natures{COLOR DARK_GRAY}\l"
	.string "can also be found in these spaces.$"

KiposTown_Zoo_PokemonSign_Volcano_Text_0:
# 365 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 11: Volcano\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Volcano_Text_0:
# 421 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 11: {COLOR GREEN}Volcano{COLOR DARK_GRAY}\p"
	.string "Combining the rugged terrain of\n"
	.string "traditional mountain ecosystems with\l"
	.string "the scorching heat of lava, volcanoes\l"
	.string "are only for the toughest of Pokémon.\l"
	.string "Although they are associated with\l"
	.string "destruction, volcanoes are just as\l"
	.string "important in creation. For example, many\l"
	.string "islands in the Ilios Region were first\l"
	.string "formed by volcanoes!\p"
	.string "Most Pokémon species found here are\n"
	.string "{COLOR GREEN}Fire-type{COLOR DARK_GRAY}, helping them withstand the\l"
	.string "intense heat. Some {COLOR GREEN}Poison and\l"
	.string "Rock-type{COLOR DARK_GRAY} Pokémon can also survive\l"
	.string "here.$"

KiposTown_Zoo_PokemonSign_Tundra_Text_0:
# 445 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 12: Tundra\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Tundra_Text_0:
# 501 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 12: {COLOR GREEN}Tundra{COLOR DARK_GRAY}\p"
	.string "Tundras are blanketed in snow, creating\n"
	.string "a vast winter wonderland for Pokémon\l"
	.string "to inhabit. These icy areas range from\l"
	.string "boreal forests to ice-tipped mountain\l"
	.string "peaks, so elements of each have been\l"
	.string "incorporated into this exhibit.\n"
	.string "Unfortunately, as climate change\l"
	.string "continues to worsen, these ice-covered\l"
	.string "ecosystems are becoming seriously\l"
	.string "threatened. Major changes must be made\l"
	.string "to prevent the total loss of these\l"
	.string "environments.\p"
	.string "Many {COLOR GREEN}Ice-type{COLOR DARK_GRAY} Pokémon can only be\n"
	.string "found in these chilly locations. Some\l"
	.string "{COLOR GREEN}high mountain{COLOR DARK_GRAY} species and Pokémon with\l"
	.string "{COLOR GREEN}thick fur{COLOR DARK_GRAY} also call these ecosystems\l"
	.string "home.$"

KiposTown_Zoo_PokemonSign_Ruins_Text_0:
# 525 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 13: Ruins\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Ruins_Text_0:
# 581 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 13: {COLOR GREEN}Ruins{COLOR DARK_GRAY}\p"
	.string "Ruins and cemeteries are often left\n"
	.string "behind long after the creators leave an\l"
	.string "area, developing a unique ecosystem of\l"
	.string "Pokémon around them. For one reason or\l"
	.string "another, certain species of Pokémon\l"
	.string "are drawn to these locations, haunting\l"
	.string "the remains of graves or crumbling\l"
	.string "towers.\p"
	.string "Pokémon with {COLOR GREEN}spiritual energy{COLOR DARK_GRAY} tend to\n"
	.string "be found near old graves, such as\l"
	.string "{COLOR GREEN}Ghost, Dark, and Psychic-type{COLOR DARK_GRAY} species.$"

KiposTown_Zoo_PokemonSign_Shallows_Text_0:
# 605 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 14: Shallows\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Shallows_Text_0:
# 661 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 14: {COLOR GREEN}Shallows{COLOR DARK_GRAY}\p"
	.string "Thanks to easy access to sunlight,\n"
	.string "coastal shallows are blooming with\l"
	.string "plant and Pokémon life alike. Coral\l"
	.string "reefs supporting countless species\l"
	.string "further enhance the local diversity,\l"
	.string "despite being threatened globally by\l"
	.string "water pollution and warming seas.\p"
	.string "{COLOR GREEN}Water-type{COLOR DARK_GRAY} Pokémon, true to their name,\n"
	.string "are most commonly found here.\l"
	.string "Furthermore, many Pokémon associated\l"
	.string "with {COLOR GREEN}semi-aquatic lifestyles{COLOR DARK_GRAY} can be\l"
	.string "seen splashing through the waves.$"

KiposTown_Zoo_North_NPC_Officer_Text_0:
# 675 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Officer$"

KiposTown_Zoo_North_NPC_Officer_Text_1:
# 676 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "After Team Chimera's crimes here, I'm on\n"
	.string "watch to keep them out. But I keep\l"
	.string "getting distracted by Pokémon!$"

KiposTown_Zoo_North_NPC_Tuber_Text_0:
# 686 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Tuber$"

KiposTown_Zoo_North_NPC_Tuber_Text_1:
# 687 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Aw... I brought my swimming tube and\n"
	.string "floaties, but we can't even swim with\l"
	.string "the Pokémon!$"

KiposTown_Zoo_North_NPC_Hiker_Text_0:
# 699 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Hiker$"

KiposTown_Zoo_North_NPC_Hiker_Text_1:
# 700 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Woah, I've hiked through some harsh\n"
	.string "areas, but nothing as rough as this\l"
	.string "Enclosure. How do Pokémon live in\l"
	.string "there?$"

KiposTown_Zoo_North_NPC_PaleoGirl_Text_0:
# 712 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Battle Girl$"

KiposTown_Zoo_North_NPC_PaleoGirl_Text_1:
# 719 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "I'm so obsessed with the\n"
	.string "{STR_VAR_1} you donated! It's a real\l"
	.string "living fossil!$"

KiposTown_Zoo_North_NPC_PaleoGirl_Text_2:
# 729 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "I can't believe Team Chimera even stole\n"
	.string "the Lazarus Taxa Pokémon. They're\l"
	.string "already so new and rare... how could\l"
	.string "they do something so cold?\p"
	.string "Oh, I recognize you. You're donating\n"
	.string "Pokémon to the Zoo, right? If you can,\l"
	.string "you should get a {COLOR GREEN}Lazarus Taxa Pokémon{COLOR DARK_GRAY}\l"
	.string "back into this enclosure! I'd love to\l"
	.string "see a real {COLOR GREEN}living fossil{COLOR DARK_GRAY}!$"

KiposTown_Zoo_North_NPC_PaleoGirl_Text_3:
# 737 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Hiya! Oh, did you donate a Lazarus Taxa\n"
	.string "Pokémon?$"

KiposTown_Zoo_North_NPC_PaleoGirl_Text_4:
# 750 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Woah, no way! It's a real\n"
	.string "{STR_VAR_1}! I never thought I'd\l"
	.string "actually get to see one!$"

KiposTown_Zoo_North_NPC_PaleoGirl_Text_5:
# 755 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Think of all the battles it could win, all\n"
	.string "the new strategies around it... I'm\l"
	.string "totally blown away!\p"
	.string "Here, take this as my thanks.$"

KiposTown_Zoo_North_NPC_PaleoGirl_Text_6:
# 769 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "No, I still don't see anything. Let me\n"
	.string "know when you donate a {COLOR GREEN}Lazarus Taxa{COLOR DARK_GRAY}\l"
	.string "Pokémon to this area. Remember, those\l"
	.string "are {COLOR GREEN}living fossil{COLOR DARK_GRAY} Pokémon!$"

KiposTown_Zoo_North_NPC_Athlete_Text_0:
# 781 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Athlete$"

KiposTown_Zoo_North_NPC_Athlete_Text_1:
# 784 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Pokémon are incredible! I get too warm\n"
	.string "to do anything after a quick workout,\l"
	.string "but these Pokémon are always\l"
	.string "scorching. I guess life really does find\l"
	.string "a way!$"

KiposTown_Zoo_North_NPC_Athlete_Text_2:
# 789 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Hmm... I feel like there used to be more\n"
	.string "Pokémon in this exhibit. Now it's just\l"
	.string "boiling lava and some dead trees.$"

KiposTown_Zoo_North_NPC_Lass_Text_0:
# 802 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Lass$"

KiposTown_Zoo_North_NPC_Lass_Text_1:
# 803 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "I wonder how they keep this area cold\n"
	.string "enough for snow? It's super cool...\l"
	.string "ehehe, no pun intended!$"

KiposTown_Zoo_North_NPC_Dad_Text_0:
# 815 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Man$"

KiposTown_Zoo_North_NPC_Dad_Text_1:
# 816 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "My daughter keeps asking questions\n"
	.string "about the enclosures. I tell her what I\l"
	.string "can, but I don't really know the answers\l"
	.string "either!$"

KiposTown_Zoo_North_NPC_Artist_Text_0:
# 828 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Artist$"

KiposTown_Zoo_North_NPC_Artist_Text_1:
# 829 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "I'm making sketches of all the Pokémon\n"
	.string "I see. Drawing different species is a\l"
	.string "great way to understand them better.$"

KiposTown_Zoo_North_NPC_Camper_Text_0:
# 839 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Camper$"

KiposTown_Zoo_North_NPC_Camper_Text_1:
# 842 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Seeing Pokémon splash around in the\n"
	.string "shallow water is so awesome! I just\l"
	.string "wanna join them!$"

KiposTown_Zoo_North_NPC_Camper_Text_2:
# 847 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "What? I thought there were supposed to\n"
	.string "be Pokémon here, what happened to\l"
	.string "them?$"

KiposTown_Zoo_North_NPC_Psychic_Text_0:
# 860 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Psychic$"

KiposTown_Zoo_North_NPC_Psychic_Text_1:
# 861 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "I'm here with my partner for a date.\n"
	.string "We're both pretty into spiritual stuff,\l"
	.string "so I figured this would be a good spot\l"
	.string "to chill.$"

KiposTown_Zoo_North_NPC_HexManiac_Text_0:
# 873 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Hex Maniac$"

KiposTown_Zoo_North_NPC_HexManiac_Text_1:
# 877 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "I can feel the energy given off by the\n"
	.string "{STR_VAR_1}... I should've brought\l"
	.string "my crystals!$"

KiposTown_Zoo_North_NPC_HexManiac_Text_2:
# 882 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "My boyfriend took me here for the\n"
	.string "spiritual energy of this area. I can\l"
	.string "definitely feel it, but where's the\l"
	.string "Pokémon?$"

KiposTown_Zoo_North_NPC_PerformerM_Text_0:
# 895 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Performer$"

KiposTown_Zoo_North_NPC_PerformerM_Text_1:
# 896 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "I'm supposed to play the role of a\n"
	.string "Pokémon in an upcoming musical. Believe\l"
	.string "it or not, I'm learning a lot here!$"

KiposTown_Zoo_North_NPC_Boy_Text_0:
# 906 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Little Boy$"

KiposTown_Zoo_North_NPC_Boy_Text_1:
# 907 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "I wanna play in there! I'd climb to the\n"
	.string "highest rock and let out a huge ROOOAR!$"

KiposTown_Zoo_North_NPC_Scientist_Text_0:
# 919 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Scientist$"

KiposTown_Zoo_North_NPC_Scientist_Text_1:
# 924 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Amazing! That {STR_VAR_1} is playing\n"
	.string "with the {STR_VAR_2}! I should\l"
	.string "record it and tell the people at the\l"
	.string "Conservation Center, that might be a\l"
	.string "new discovery!$"

KiposTown_Zoo_North_NPC_Scientist_Text_2:
# 929 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "I hope this Enclosure can be filled\n"
	.string "soon. I hear that Pokémon by\l"
	.string "themselves can get pretty lonely, even\l"
	.string "with the Zookeepers there to keep them\l"
	.string "company.$"

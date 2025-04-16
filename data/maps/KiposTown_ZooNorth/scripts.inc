KiposTown_ZooNorth_MapScripts::
# 2 "data/maps/KiposTown_ZooNorth/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KiposTown_ZooNorth_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KiposTown_ZooNorth_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special UpdateZooGraphics_North
	return


KiposTown_Zoo_PokemonSign_Beach::
# 14 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 17 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_07_1
# 18 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_07_2
# 19 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Beach_2
KiposTown_Zoo_PokemonSign_Beach_1:
# 23 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Beach_5
KiposTown_Zoo_PokemonSign_Beach_4:
# 29 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_1
# 30 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 33 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Beach_8
KiposTown_Zoo_PokemonSign_Beach_7:
# 59 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Beach_11
# 68 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Beach_12
KiposTown_Zoo_PokemonSign_Beach_10:
# 78 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Beach_2:
# 21 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Beach_1

KiposTown_Zoo_PokemonSign_Beach_5:
# 25 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Beach_4

KiposTown_Zoo_PokemonSign_Beach_8:
# 36 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 37 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 38 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Beach_15
	goto KiposTown_Zoo_PokemonSign_Beach_7

KiposTown_Zoo_PokemonSign_Beach_11:
# 62 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 16
# 64 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 65 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 66 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Beach_10

KiposTown_Zoo_PokemonSign_Beach_12:
# 71 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 17
# 73 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 74 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 75 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Beach_10

KiposTown_Zoo_PokemonSign_Beach_15:
# 40 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_07_1
# 41 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 42 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 43 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 44 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 46 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_07_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Beach_17
	goto KiposTown_Zoo_PokemonSign_Beach_7

KiposTown_Zoo_PokemonSign_Beach_17:
# 48 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 49 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_07_2
# 50 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 51 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 52 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 53 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Beach_7


KiposTown_Zoo_EnvironmentSign_Beach::
# 84 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 85 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Beach_Text_0
# 86 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 87 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Desert::
# 94 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 97 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_08_1
# 98 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_08_2
# 99 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Desert_2
KiposTown_Zoo_PokemonSign_Desert_1:
# 103 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Desert_5
KiposTown_Zoo_PokemonSign_Desert_4:
# 109 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Desert_Text_0
# 110 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 113 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Desert_8
KiposTown_Zoo_PokemonSign_Desert_7:
# 139 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Desert_11
# 148 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Desert_12
KiposTown_Zoo_PokemonSign_Desert_10:
# 158 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Desert_2:
# 101 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Desert_1

KiposTown_Zoo_PokemonSign_Desert_5:
# 105 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Desert_4

KiposTown_Zoo_PokemonSign_Desert_8:
# 116 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 117 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 118 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Desert_15
	goto KiposTown_Zoo_PokemonSign_Desert_7

KiposTown_Zoo_PokemonSign_Desert_11:
# 142 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 18
# 144 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 145 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 146 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Desert_10

KiposTown_Zoo_PokemonSign_Desert_12:
# 151 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 19
# 153 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 154 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 155 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Desert_10

KiposTown_Zoo_PokemonSign_Desert_15:
# 120 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_08_1
# 121 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 122 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 123 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 124 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 126 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_08_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Desert_17
	goto KiposTown_Zoo_PokemonSign_Desert_7

KiposTown_Zoo_PokemonSign_Desert_17:
# 128 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 129 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_08_2
# 130 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 131 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 132 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 133 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Desert_7


KiposTown_Zoo_EnvironmentSign_Desert::
# 164 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 165 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Desert_Text_0
# 166 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 167 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_LazarusTaxa::
# 174 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 177 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_09_1
# 178 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_09_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_LazarusTaxa_2
KiposTown_Zoo_PokemonSign_LazarusTaxa_1:
# 184 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_LazarusTaxa_Text_0
# 185 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 188 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_09_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_LazarusTaxa_5
KiposTown_Zoo_PokemonSign_LazarusTaxa_4:
# 204 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_09_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_LazarusTaxa_8
KiposTown_Zoo_PokemonSign_LazarusTaxa_7:
# 214 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_LazarusTaxa_2:
# 180 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_LazarusTaxa_1

KiposTown_Zoo_PokemonSign_LazarusTaxa_5:
# 191 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_LazarusTaxa_Text_1, MSGBOX_YESNO
# 192 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 193 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_LazarusTaxa_10
	goto KiposTown_Zoo_PokemonSign_LazarusTaxa_4

KiposTown_Zoo_PokemonSign_LazarusTaxa_8:
# 207 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 20
# 209 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 210 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 211 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_LazarusTaxa_7

KiposTown_Zoo_PokemonSign_LazarusTaxa_10:
# 195 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_09_1
# 196 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 197 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 198 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 199 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_LazarusTaxa_4


KiposTown_Zoo_EnvironmentSign_LazarusTaxa::
# 220 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 221 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_LazarusTaxa_Text_0
# 222 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 223 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Mountains::
# 230 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 233 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_10_1
# 234 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_10_2
# 235 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_3, VAR_ZOO_POKEMON_ENCLOSURE_10_3
# 236 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_2
KiposTown_Zoo_PokemonSign_Mountains_1:
# 240 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_5
KiposTown_Zoo_PokemonSign_Mountains_4:
# 244 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_8
KiposTown_Zoo_PokemonSign_Mountains_7:
# 250 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Mountains_Text_0
# 251 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 254 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Mountains_11
KiposTown_Zoo_PokemonSign_Mountains_10:
# 289 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_14
# 298 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_15
# 307 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_3, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_16
KiposTown_Zoo_PokemonSign_Mountains_13:
# 317 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Mountains_2:
# 238 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Mountains_1

KiposTown_Zoo_PokemonSign_Mountains_5:
# 242 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Mountains_4

KiposTown_Zoo_PokemonSign_Mountains_8:
# 246 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_3, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Mountains_7

KiposTown_Zoo_PokemonSign_Mountains_11:
# 257 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 258 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 259 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Mountains_20
	goto KiposTown_Zoo_PokemonSign_Mountains_10

KiposTown_Zoo_PokemonSign_Mountains_14:
# 292 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 21
# 294 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 295 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 296 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Mountains_13

KiposTown_Zoo_PokemonSign_Mountains_15:
# 301 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 22
# 303 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 304 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 305 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Mountains_13

KiposTown_Zoo_PokemonSign_Mountains_16:
# 310 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 23
# 312 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Mountains_Text_1, MSGBOX_YESNO
# 313 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 314 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Mountains_13

KiposTown_Zoo_PokemonSign_Mountains_20:
# 261 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_10_1
# 262 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 263 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 264 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 265 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 267 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Mountains_23
KiposTown_Zoo_PokemonSign_Mountains_22:
# 276 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_10_3, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Mountains_25
	goto KiposTown_Zoo_PokemonSign_Mountains_10

KiposTown_Zoo_PokemonSign_Mountains_23:
# 269 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 270 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_10_2
# 271 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 272 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 273 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 274 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Mountains_22

KiposTown_Zoo_PokemonSign_Mountains_25:
# 278 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 279 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_10_3
# 280 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 281 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 282 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 283 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Mountains_10


KiposTown_Zoo_EnvironmentSign_Mountains::
# 323 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 324 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Mountains_Text_0
# 325 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 326 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Volcano::
# 333 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 336 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_11_1
# 337 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_11_2
# 338 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Volcano_2
KiposTown_Zoo_PokemonSign_Volcano_1:
# 342 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Volcano_5
KiposTown_Zoo_PokemonSign_Volcano_4:
# 348 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Volcano_Text_0
# 349 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 352 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Volcano_8
KiposTown_Zoo_PokemonSign_Volcano_7:
# 378 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Volcano_11
# 387 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Volcano_12
KiposTown_Zoo_PokemonSign_Volcano_10:
# 397 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Volcano_2:
# 340 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Volcano_1

KiposTown_Zoo_PokemonSign_Volcano_5:
# 344 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Volcano_4

KiposTown_Zoo_PokemonSign_Volcano_8:
# 355 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 356 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 357 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Volcano_15
	goto KiposTown_Zoo_PokemonSign_Volcano_7

KiposTown_Zoo_PokemonSign_Volcano_11:
# 381 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 24
# 383 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 384 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 385 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Volcano_10

KiposTown_Zoo_PokemonSign_Volcano_12:
# 390 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 25
# 392 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 393 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 394 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Volcano_10

KiposTown_Zoo_PokemonSign_Volcano_15:
# 359 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_11_1
# 360 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 361 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 362 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 363 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 365 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_11_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Volcano_17
	goto KiposTown_Zoo_PokemonSign_Volcano_7

KiposTown_Zoo_PokemonSign_Volcano_17:
# 367 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 368 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_11_2
# 369 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 370 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 371 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 372 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Volcano_7


KiposTown_Zoo_EnvironmentSign_Volcano::
# 403 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 404 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Volcano_Text_0
# 405 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 406 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Tundra::
# 413 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 416 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_12_1
# 417 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_12_2
# 418 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Tundra_2
KiposTown_Zoo_PokemonSign_Tundra_1:
# 422 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Tundra_5
KiposTown_Zoo_PokemonSign_Tundra_4:
# 428 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Tundra_Text_0
# 429 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 432 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Tundra_8
KiposTown_Zoo_PokemonSign_Tundra_7:
# 458 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Tundra_11
# 467 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Tundra_12
KiposTown_Zoo_PokemonSign_Tundra_10:
# 477 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Tundra_2:
# 420 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Tundra_1

KiposTown_Zoo_PokemonSign_Tundra_5:
# 424 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Tundra_4

KiposTown_Zoo_PokemonSign_Tundra_8:
# 435 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 436 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 437 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Tundra_15
	goto KiposTown_Zoo_PokemonSign_Tundra_7

KiposTown_Zoo_PokemonSign_Tundra_11:
# 461 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 26
# 463 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 464 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 465 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Tundra_10

KiposTown_Zoo_PokemonSign_Tundra_12:
# 470 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 27
# 472 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 473 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 474 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Tundra_10

KiposTown_Zoo_PokemonSign_Tundra_15:
# 439 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_12_1
# 440 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 441 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 442 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 443 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 445 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_12_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Tundra_17
	goto KiposTown_Zoo_PokemonSign_Tundra_7

KiposTown_Zoo_PokemonSign_Tundra_17:
# 447 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 448 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_12_2
# 449 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 450 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 451 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 452 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Tundra_7


KiposTown_Zoo_EnvironmentSign_Tundra::
# 483 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 484 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Tundra_Text_0
# 485 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 486 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Ruins::
# 493 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 496 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_13_1
# 497 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_13_2
# 498 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Ruins_2
KiposTown_Zoo_PokemonSign_Ruins_1:
# 502 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Ruins_5
KiposTown_Zoo_PokemonSign_Ruins_4:
# 508 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Ruins_Text_0
# 509 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 512 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Ruins_8
KiposTown_Zoo_PokemonSign_Ruins_7:
# 538 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Ruins_11
# 547 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Ruins_12
KiposTown_Zoo_PokemonSign_Ruins_10:
# 557 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Ruins_2:
# 500 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Ruins_1

KiposTown_Zoo_PokemonSign_Ruins_5:
# 504 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Ruins_4

KiposTown_Zoo_PokemonSign_Ruins_8:
# 515 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 516 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 517 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Ruins_15
	goto KiposTown_Zoo_PokemonSign_Ruins_7

KiposTown_Zoo_PokemonSign_Ruins_11:
# 541 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 28
# 543 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 544 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 545 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Ruins_10

KiposTown_Zoo_PokemonSign_Ruins_12:
# 550 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 29
# 552 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 553 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 554 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Ruins_10

KiposTown_Zoo_PokemonSign_Ruins_15:
# 519 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_13_1
# 520 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 521 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 522 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 523 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 525 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_13_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Ruins_17
	goto KiposTown_Zoo_PokemonSign_Ruins_7

KiposTown_Zoo_PokemonSign_Ruins_17:
# 527 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 528 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_13_2
# 529 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 530 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 531 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 532 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Ruins_7


KiposTown_Zoo_EnvironmentSign_Ruins::
# 563 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 564 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Ruins_Text_0
# 565 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 566 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Shallows::
# 573 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 576 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_ZOO_POKEMON_ENCLOSURE_14_1
# 577 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_ZOO_POKEMON_ENCLOSURE_14_2
# 578 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Shallows_2
KiposTown_Zoo_PokemonSign_Shallows_1:
# 582 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Shallows_5
KiposTown_Zoo_PokemonSign_Shallows_4:
# 588 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Shallows_Text_0
# 589 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 592 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_1, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Shallows_8
KiposTown_Zoo_PokemonSign_Shallows_7:
# 618 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_1, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Shallows_11
# 627 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_2, 0
	goto_if_eq KiposTown_Zoo_PokemonSign_Shallows_12
KiposTown_Zoo_PokemonSign_Shallows_10:
# 637 "data/maps/KiposTown_ZooNorth/scripts.pory"
	releaseall
	end

KiposTown_Zoo_PokemonSign_Shallows_2:
# 580 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_1, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Shallows_1

KiposTown_Zoo_PokemonSign_Shallows_5:
# 584 "data/maps/KiposTown_ZooNorth/scripts.pory"
	bufferstring STR_VAR_2, KiposTown_Zoo_PokemonSign_Beach_Text_0
	goto KiposTown_Zoo_PokemonSign_Shallows_4

KiposTown_Zoo_PokemonSign_Shallows_8:
# 595 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_2, MSGBOX_YESNO
# 596 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 597 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KiposTown_Zoo_PokemonSign_Shallows_15
	goto KiposTown_Zoo_PokemonSign_Shallows_7

KiposTown_Zoo_PokemonSign_Shallows_11:
# 621 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 30
# 623 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_3, MSGBOX_YESNO
# 624 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 625 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Shallows_10

KiposTown_Zoo_PokemonSign_Shallows_12:
# 630 "data/maps/KiposTown_ZooNorth/scripts.pory"
	setvar VAR_TEMP_0, 31
# 632 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_PokemonSign_Beach_Text_4, MSGBOX_YESNO
# 633 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 634 "data/maps/KiposTown_ZooNorth/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, KiposTown_Zoo_PokemonSign_DonationScript
	goto KiposTown_Zoo_PokemonSign_Shallows_10

KiposTown_Zoo_PokemonSign_Shallows_15:
# 599 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_14_1
# 600 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 601 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 602 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 603 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
# 605 "data/maps/KiposTown_ZooNorth/scripts.pory"
	compare VAR_ZOO_POKEMON_ENCLOSURE_14_2, 0
	goto_if_gt KiposTown_Zoo_PokemonSign_Shallows_17
	goto KiposTown_Zoo_PokemonSign_Shallows_7

KiposTown_Zoo_PokemonSign_Shallows_17:
# 607 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 20
# 608 "data/maps/KiposTown_ZooNorth/scripts.pory"
	copyvar VAR_0x8003, VAR_ZOO_POKEMON_ENCLOSURE_14_2
# 609 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special ShowSpeciesZooInfoWindow
# 610 "data/maps/KiposTown_ZooNorth/scripts.pory"
	delay 30
# 611 "data/maps/KiposTown_ZooNorth/scripts.pory"
	waitbuttonpress
# 612 "data/maps/KiposTown_ZooNorth/scripts.pory"
	special CloseSpeciesZooInfoWindow
	goto KiposTown_Zoo_PokemonSign_Shallows_7


KiposTown_Zoo_EnvironmentSign_Shallows::
# 643 "data/maps/KiposTown_ZooNorth/scripts.pory"
	lock
# 644 "data/maps/KiposTown_ZooNorth/scripts.pory"
	msgbox KiposTown_Zoo_EnvironmentSign_Shallows_Text_0
# 645 "data/maps/KiposTown_ZooNorth/scripts.pory"
	closemessage
# 646 "data/maps/KiposTown_ZooNorth/scripts.pory"
	release
	end


KiposTown_Zoo_PokemonSign_Beach_Text_0:
# 21 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "---$"

KiposTown_Zoo_PokemonSign_Beach_Text_1:
# 29 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 7: Beach\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_PokemonSign_Beach_Text_2:
# 36 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "There's information about each Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_PokemonSign_Beach_Text_3:
# 64 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "There are no Pokémon in the exhibit.\n"
	.string "Would you like to {COLOR GREEN}donate a Pokémon to\l"
	.string "the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_PokemonSign_Beach_Text_4:
# 73 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "There is room for a second Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_EnvironmentSign_Beach_Text_0:
# 85 "data/maps/KiposTown_ZooNorth/scripts.pory"
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
# 109 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 8: Desert\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Desert_Text_0:
# 165 "data/maps/KiposTown_ZooNorth/scripts.pory"
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
# 184 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 9: Lazarus Taxa\n"
	.string "Pokémon in Exhibit: {STR_VAR_1}$"

KiposTown_Zoo_PokemonSign_LazarusTaxa_Text_1:
# 191 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "There's information about the Pokémon\n"
	.string "listed. Read it?$"

KiposTown_Zoo_EnvironmentSign_LazarusTaxa_Text_0:
# 221 "data/maps/KiposTown_ZooNorth/scripts.pory"
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
# 250 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 10: Mountains\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}, {STR_VAR_3}$"

KiposTown_Zoo_PokemonSign_Mountains_Text_1:
# 312 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "There is room for a third Pokémon in\n"
	.string "this exhibit. Would you like to {COLOR GREEN}donate a\l"
	.string "Pokémon to the exhibit{COLOR DARK_GRAY}?$"

KiposTown_Zoo_EnvironmentSign_Mountains_Text_0:
# 324 "data/maps/KiposTown_ZooNorth/scripts.pory"
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
# 348 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 11: Volcano\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Volcano_Text_0:
# 404 "data/maps/KiposTown_ZooNorth/scripts.pory"
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
# 428 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 12: Tundra\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Tundra_Text_0:
# 484 "data/maps/KiposTown_ZooNorth/scripts.pory"
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
# 508 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 13: Ruins\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Ruins_Text_0:
# 564 "data/maps/KiposTown_ZooNorth/scripts.pory"
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
# 588 "data/maps/KiposTown_ZooNorth/scripts.pory"
	.string "Enclosure No. 14: Shallows\n"
	.string "Pokémon in Exhibit: {STR_VAR_1},\l"
	.string "{STR_VAR_2}$"

KiposTown_Zoo_EnvironmentSign_Shallows_Text_0:
# 644 "data/maps/KiposTown_ZooNorth/scripts.pory"
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

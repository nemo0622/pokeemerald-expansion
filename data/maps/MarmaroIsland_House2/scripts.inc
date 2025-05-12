MarmaroIsland_House2_MapScripts::
	.byte 0


MarmaroIsland_House2_EventScript_Girl::
# 5 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 6 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 7 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_Girl_Text_0
# 8 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_Girl_Text_1
# 9 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 10 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end


MarmaroIsland_House2_EventScript_Boy::
# 16 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 17 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 18 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_Boy_Text_0
# 19 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_Boy_Text_1
# 20 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 21 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end


MarmaroIsland_House2_EventScript_FossilReviveMan::
# 27 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 28 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 29 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 30 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_1, MSGBOX_YESNO
# 31 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 32 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_2
# 42 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 43 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_3
# 44 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 45 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 48 "data/maps/MarmaroIsland_House2/scripts.pory"
	chooseitem ITEMS_POCKET
# 49 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 52 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_HELIX_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_6
# 56 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_DOME_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_7
# 60 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_OLD_AMBER
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_8
# 64 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_ROOT_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_9
# 68 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_CLAW_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_10
# 72 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_SKULL_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_11
# 76 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_ARMOR_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_12
# 80 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_COVER_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_13
# 84 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_PLUME_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_14
# 88 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_JAW_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_15
# 92 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_SAIL_FOSSIL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_16
# 98 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_FossilReviveMan_5:
# 102 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 0
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_29
# 113 "data/maps/MarmaroIsland_House2/scripts.pory"
	showmoneybox 0, 0
# 115 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferitemname STR_VAR_1, VAR_ITEM_ID
# 116 "data/maps/MarmaroIsland_House2/scripts.pory"
	bufferspeciesname STR_VAR_2, VAR_WHICH_FOSSIL_REVIVED
# 117 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 118 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_5, MSGBOX_YESNO
# 119 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 120 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 122 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_33
# 133 "data/maps/MarmaroIsland_House2/scripts.pory"
	checkmoney 2000
# 134 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_39
# 145 "data/maps/MarmaroIsland_House2/scripts.pory"
	removeitem VAR_ITEM_ID
# 146 "data/maps/MarmaroIsland_House2/scripts.pory"
	removemoney 2000
# 147 "data/maps/MarmaroIsland_House2/scripts.pory"
	updatemoneybox
# 148 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 10
# 149 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 150 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_8
# 151 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 152 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 156 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 157 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 60
# 158 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 159 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 20
# 161 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 162 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_9
# 163 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 164 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 167 "data/maps/MarmaroIsland_House2/scripts.pory"
	randompercentage 1
# 168 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_37
MarmaroIsland_House2_EventScript_FossilReviveMan_36:
# 174 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 3
# 175 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_0, VAR_RESULT
# 176 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 2
# 177 "data/maps/MarmaroIsland_House2/scripts.pory"
	copyvar VAR_TEMP_1, VAR_RESULT
# 179 "data/maps/MarmaroIsland_House2/scripts.pory"
	random 3
# 182 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_OMANYTE
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_43
# 190 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_KABUTO
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_44
# 198 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_AERODACTYL
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_45
# 206 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_LILEEP
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_46
# 214 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_ANORITH
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_47
# 222 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_CRANIDOS
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_48
# 230 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_SHIELDON
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_49
# 238 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_TIRTOUGA
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_50
# 246 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCHEN
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_51
# 254 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_TYRUNT
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_52
# 262 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, SPECIES_AMAURA
	goto_if_eq MarmaroIsland_House2_EventScript_FossilReviveMan_53
MarmaroIsland_House2_EventScript_FossilReviveMan_42:
# 270 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 272 "data/maps/MarmaroIsland_House2/scripts.pory"
	clearflag FLAG_FORCE_SHINY
# 276 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_2:
# 34 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 35 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_2
# 36 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 37 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_6:
# 54 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_OMANYTE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_7:
# 58 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_KABUTO
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_8:
# 62 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_AERODACTYL
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_9:
# 66 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_LILEEP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_10:
# 70 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ANORITH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_11:
# 74 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_CRANIDOS
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_12:
# 78 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_SHIELDON
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_13:
# 82 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_TIRTOUGA
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_14:
# 86 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_ARCHEN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_15:
# 90 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_TYRUNT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_16:
# 94 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_AMAURA
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_5

MarmaroIsland_House2_EventScript_FossilReviveMan_29:
# 104 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 105 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_4
# 106 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 107 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_33:
# 124 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 125 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 126 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_6
# 127 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 128 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_37:
# 170 "data/maps/MarmaroIsland_House2/scripts.pory"
	setflag FLAG_FORCE_SHINY
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_36

MarmaroIsland_House2_EventScript_FossilReviveMan_39:
# 136 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 137 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0
# 138 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_FossilReviveMan_Text_7
# 139 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 140 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_FossilReviveMan_43:
# 184 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 185 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_66
# 186 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_67
# 187 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_68
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_44:
# 192 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 193 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_70
# 194 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_71
# 195 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_72
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_45:
# 200 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 201 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_74
# 202 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_75
# 203 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_76
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_46:
# 208 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 209 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_78
# 210 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_79
# 211 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_80
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_47:
# 216 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 217 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_82
# 218 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_83
# 219 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_84
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_48:
# 224 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 225 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_86
# 226 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_87
# 227 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_88
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_49:
# 232 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 233 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_90
# 234 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_91
# 235 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_92
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_50:
# 240 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 241 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_94
# 242 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_95
# 243 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_96
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_51:
# 248 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 249 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_98
# 250 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_99
# 251 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_100
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_52:
# 256 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 257 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_102
# 258 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_103
# 259 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_104
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_53:
# 264 "data/maps/MarmaroIsland_House2/scripts.pory"
	switch VAR_RESULT
# 265 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 0, MarmaroIsland_House2_EventScript_FossilReviveMan_106
# 266 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 1, MarmaroIsland_House2_EventScript_FossilReviveMan_107
# 267 "data/maps/MarmaroIsland_House2/scripts.pory"
	case 2, MarmaroIsland_House2_EventScript_FossilReviveMan_108
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_66:
# 185 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CONSTRICT, MOVE_WITHDRAW, MOVE_BITE, MOVE_WATER_GUN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_67:
# 186 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_AQUA_JET, MOVE_WITHDRAW, MOVE_BITE, MOVE_WATER_GUN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_68:
# 187 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_OMANYTE, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_CONSTRICT, MOVE_IRON_DEFENSE, MOVE_BITE, MOVE_WATER_GUN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_70:
# 193 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_KABUTO, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_ABSORB, MOVE_LEER
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_71:
# 194 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_KABUTO, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_ABSORB, MOVE_METAL_CLAW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_72:
# 195 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_KABUTO, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_ABSORB, MOVE_ANCHOR_SHOT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_74:
# 201 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AERODACTYL, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WING_ATTACK, MOVE_SUPERSONIC, MOVE_BITE, MOVE_SCARY_FACE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_75:
# 202 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AERODACTYL, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WING_ATTACK, MOVE_SUPERSONIC, MOVE_BITE, MOVE_SUPER_FANG
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_76:
# 203 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AERODACTYL, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_WING_ATTACK, MOVE_SUPERSONIC, MOVE_BITE, MOVE_METEOR_MASH
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_78:
# 209 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_LILEEP, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ASTONISH, MOVE_CONSTRICT, MOVE_ACID, MOVE_INGRAIN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_79:
# 210 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_LILEEP, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ASTONISH, MOVE_SCALD, MOVE_ACID, MOVE_INGRAIN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_80:
# 211 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_LILEEP, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_ASTONISH, MOVE_SYNTHESIS, MOVE_ACID, MOVE_INGRAIN
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_82:
# 217 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ANORITH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_HARDEN, MOVE_MUD_SPORT, MOVE_BUBBLE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_83:
# 218 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ANORITH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_SPIKY_SHIELD, MOVE_MUD_SPORT, MOVE_BUBBLE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_84:
# 219 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ANORITH, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_SCRATCH, MOVE_SHORE_UP, MOVE_MUD_SPORT, MOVE_BUBBLE
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_86:
# 225 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_CRANIDOS, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_HEADBUTT, MOVE_LEER, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_87:
# 226 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_CRANIDOS, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_HEADBUTT, MOVE_SEISMIC_TOSS, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_88:
# 227 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_CRANIDOS, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_HEADBUTT, MOVE_GLARE, MOVE_FOCUS_ENERGY, MOVE_PURSUIT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_90:
# 233 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_SHIELDON, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PROTECT, MOVE_TAUNT, MOVE_METAL_SOUND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_91:
# 234 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_SHIELDON, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PROTECT, MOVE_PSYSHIELD_BASH, MOVE_METAL_SOUND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_92:
# 235 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_SHIELDON, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PROTECT, MOVE_AVALANCHE, MOVE_METAL_SOUND
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_94:
# 241 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BITE, MOVE_WITHDRAW, MOVE_WATER_GUN, MOVE_ROLLOUT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_95:
# 242 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BITE, MOVE_ICE_FANG, MOVE_WATER_GUN, MOVE_ROLLOUT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_96:
# 243 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TIRTOUGA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_BITE, MOVE_SHORE_UP, MOVE_WATER_GUN, MOVE_ROLLOUT
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_98:
# 249 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCHEN, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_DOUBLE_TEAM, MOVE_WING_ATTACK, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_99:
# 250 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCHEN, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_BONEMERANG, MOVE_WING_ATTACK, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_100:
# 251 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_ARCHEN, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_QUICK_ATTACK, MOVE_JUMP_KICK, MOVE_WING_ATTACK, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_102:
# 257 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TYRUNT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_TAIL_WHIP, MOVE_ROAR, MOVE_STOMP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_103:
# 258 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TYRUNT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_ICE_FANG, MOVE_ROAR, MOVE_STOMP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_104:
# 259 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_TYRUNT, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_TACKLE, MOVE_PLAY_ROUGH, MOVE_ROAR, MOVE_STOMP
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_106:
# 265 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AMAURA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_GROWL, MOVE_THUNDER_WAVE, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_107:
# 266 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AMAURA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_DAZZLING_GLEAM, MOVE_THUNDER_WAVE, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42

MarmaroIsland_House2_EventScript_FossilReviveMan_108:
# 267 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon SPECIES_AMAURA, 10, ITEM_NONE, ITEM_POKE_BALL, NUM_NATURES, VAR_TEMP_0, VAR_TEMP_1, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POWDER_SNOW, MOVE_CHILLING_WATER, MOVE_THUNDER_WAVE, MOVE_ROCK_THROW
	goto MarmaroIsland_House2_EventScript_FossilReviveMan_42


MarmaroIsland_House2_EventScript_OddKeystoneWoman::
# 282 "data/maps/MarmaroIsland_House2/scripts.pory"
	lock
# 283 "data/maps/MarmaroIsland_House2/scripts.pory"
	faceplayer
# 284 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 285 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_1, MSGBOX_YESNO
# 286 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 287 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_2
# 297 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 298 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_3
# 299 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 300 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 303 "data/maps/MarmaroIsland_House2/scripts.pory"
	chooseitem ITEMS_POCKET
# 304 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 307 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_ITEM_ID, ITEM_ODD_KEYSTONE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_6
# 313 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, 0
MarmaroIsland_House2_EventScript_OddKeystoneWoman_5:
# 317 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_WHICH_FOSSIL_REVIVED, 0
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_9
# 328 "data/maps/MarmaroIsland_House2/scripts.pory"
	showmoneybox 0, 0
# 330 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 331 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_5, MSGBOX_YESNO
# 332 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 333 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 335 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_13
# 346 "data/maps/MarmaroIsland_House2/scripts.pory"
	checkmoney 2000
# 347 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_19
# 358 "data/maps/MarmaroIsland_House2/scripts.pory"
	removeitem VAR_ITEM_ID
# 359 "data/maps/MarmaroIsland_House2/scripts.pory"
	removemoney 2000
# 360 "data/maps/MarmaroIsland_House2/scripts.pory"
	updatemoneybox
# 361 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 10
# 362 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 363 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_8
# 364 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 365 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 369 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 370 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 60
# 371 "data/maps/MarmaroIsland_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 372 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 20
# 374 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 375 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_9
# 376 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 377 "data/maps/MarmaroIsland_House2/scripts.pory"
	delay 5
# 380 "data/maps/MarmaroIsland_House2/scripts.pory"
	randompercentage 1
# 381 "data/maps/MarmaroIsland_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MarmaroIsland_House2_EventScript_OddKeystoneWoman_17
MarmaroIsland_House2_EventScript_OddKeystoneWoman_16:
# 386 "data/maps/MarmaroIsland_House2/scripts.pory"
	givemon VAR_WHICH_FOSSIL_REVIVED, 20
# 387 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 389 "data/maps/MarmaroIsland_House2/scripts.pory"
	clearflag FLAG_FORCE_SHINY
# 393 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_2:
# 289 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 290 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_2
# 291 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 292 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_6:
# 309 "data/maps/MarmaroIsland_House2/scripts.pory"
	setvar VAR_WHICH_FOSSIL_REVIVED, SPECIES_SPIRITOMB
	goto MarmaroIsland_House2_EventScript_OddKeystoneWoman_5

MarmaroIsland_House2_EventScript_OddKeystoneWoman_9:
# 319 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 320 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_4
# 321 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 322 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_13:
# 337 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 338 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 339 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_6
# 340 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 341 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end

MarmaroIsland_House2_EventScript_OddKeystoneWoman_17:
# 383 "data/maps/MarmaroIsland_House2/scripts.pory"
	setflag FLAG_FORCE_SHINY
	goto MarmaroIsland_House2_EventScript_OddKeystoneWoman_16

MarmaroIsland_House2_EventScript_OddKeystoneWoman_19:
# 349 "data/maps/MarmaroIsland_House2/scripts.pory"
	hidemoneybox
# 350 "data/maps/MarmaroIsland_House2/scripts.pory"
	speakername MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0
# 351 "data/maps/MarmaroIsland_House2/scripts.pory"
	msgbox MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_7
# 352 "data/maps/MarmaroIsland_House2/scripts.pory"
	closemessage
# 353 "data/maps/MarmaroIsland_House2/scripts.pory"
	release
	end


MarmaroIsland_House2_EventScript_Girl_Text_0:
# 7 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Girl$"

MarmaroIsland_House2_EventScript_Girl_Text_1:
# 8 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Dad says that Marmaro Island used to\n"
	.string "be a lot bigger, but stone mining made it\l"
	.string "shrink. That must've been a lot of\l"
	.string "stone!$"

MarmaroIsland_House2_EventScript_Boy_Text_0:
# 18 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Boy$"

MarmaroIsland_House2_EventScript_Boy_Text_1:
# 19 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Pokémon everyone thought were extinct\n"
	.string "have been showing up a lot around here!\l"
	.string "Maybe it's because of all the fossils in\l"
	.string "the stone?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_0:
# 29 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Paleontologist$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_1:
# 30 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Chaire! If you've spent time in the\n"
	.string "Mines, there's a good chance you've\l"
	.string "found a {COLOR GREEN}Pokémon Fossil{COLOR DARK_GRAY}.\p"
	.string "Through my experiments, I've found a\n"
	.string "way to {COLOR GREEN}restore Pokémon from Fossils{COLOR DARK_GRAY}\l"
	.string "back to life! Are you interested?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_2:
# 35 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Still looking for Fossils? If you find\n"
	.string "any, bring them to me!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_3:
# 43 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Great! Go ahead and choose the Fossil\n"
	.string "you want me to restore.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_4:
# 105 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... I hate to break it to you, but\n"
	.string "that just isn't a Fossil.\p"
	.string "Bring me a Pokémon Fossil, and I'll be\n"
	.string "able to restore it for you.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_5:
# 118 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Ah, this is certainly a {STR_VAR_1}!\n"
	.string "From my research, I believe a Pokémon\l"
	.string "known as {STR_VAR_2} will be\l"
	.string "restored from this.\p"
	.string "This process will be pretty\n"
	.string "resource-intensive. Including labor\l"
	.string "and time, it should cost around ¥2000.\l"
	.string "Are you interested?$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_6:
# 126 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "No? Well, come on back with other\n"
	.string "Fossils anytime.$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_7:
# 138 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... It doesn't look like you've got\n"
	.string "the funds right now. Come back with a\l"
	.string "Fossil and ¥2000, and I'll restore it for\l"
	.string "you!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_8:
# 150 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Alright, thanks! I'll just take that\n"
	.string "Fossil from you, then we'll get started!$"

MarmaroIsland_House2_EventScript_FossilReviveMan_Text_9:
# 162 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Thanks for waiting. It was a complete\n"
	.string "success! The {STR_VAR_2} has\l"
	.string "imprinted on you, so it is ready to\l"
	.string "follow you wherever you go. Meet your\l"
	.string "new {STR_VAR_2}!$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_0:
# 284 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Spiritual Woman$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_1:
# 285 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hello... by chance, have you found an\n"
	.string "{COLOR GREEN}Odd Keystone{COLOR DARK_GRAY} in the Mines?\p"
	.string "In my studies of the occult, I've found\n"
	.string "that a Pokémon called {COLOR GREEN}Spiritomb{COLOR DARK_GRAY} may\l"
	.string "live inside them, as they were once used\l"
	.string "in burial traditions of ancient Ilios.\l"
	.string "Have you found an Odd Keystone?$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_2:
# 290 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "No, I suppose most people wouldn't have\n"
	.string "one, as they are exceedingly rare.\l"
	.string "According to legend, over 100 souls are\l"
	.string "contained in each Odd Keystone, found\l"
	.string "near burial sites or ancient\l"
	.string "battlefields.\p"
	.string "If you happen to find an Odd Keystone,\n"
	.string "please let me know.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_3:
# 298 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Really? What incredible luck. Please,\n"
	.string "show me...$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_4:
# 320 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Oh, my sweet summer child, this is not an\n"
	.string "Odd Keystone at all.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_5:
# 331 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Yes, I can feel the spirits swirling\n"
	.string "inside... this is most certainly an Odd\l"
	.string "Keystone!\p"
	.string "Awakening Spiritomb from the Odd\n"
	.string "Keystone is very spiritually intensive.\l"
	.string "Including labor and time, it should cost\l"
	.string "around ¥2000. Shall we begin?$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_6:
# 339 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "No? Hm. Well please, come back with the\n"
	.string "Odd Keystone when you can.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_7:
# 351 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Hmm... I'm sorry, but you're lacking the\n"
	.string "funds right now. Come back with an Odd\l"
	.string "Keystone and ¥2000, and I'll awaken the\l"
	.string "Spiritomb inside.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_8:
# 363 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "Okay, I'll place the Odd Keystone in the\n"
	.string "center of my crystal circle, and we\l"
	.string "shall begin the ritual. Please, wait\l"
	.string "there.$"

MarmaroIsland_House2_EventScript_OddKeystoneWoman_Text_9:
# 375 "data/maps/MarmaroIsland_House2/scripts.pory"
	.string "The spirits have been stirred by your\n"
	.string "energy, and Spiritomb has awakened.\l"
	.string "Take it, and treat it with respect.$"

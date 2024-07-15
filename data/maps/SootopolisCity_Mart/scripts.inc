# 1 "data/maps/SootopolisCity_Mart/scripts.pory"

# 2 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_MapScripts::
# 3 "data/maps/SootopolisCity_Mart/scripts.pory"
	.byte 0
# 4 "data/maps/SootopolisCity_Mart/scripts.pory"

# 5 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Clerk::
# 6 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 7 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/SootopolisCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 9 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart SootopolisCity_Mart_Pokemart
# 11 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 13 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 14 "data/maps/SootopolisCity_Mart/scripts.pory"

# 15 "data/maps/SootopolisCity_Mart/scripts.pory"
	.align 2
# 16 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Pokemart:
# 17 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 18 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 19 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 20 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 21 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 22 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 23 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_X_ATTACK
# 24 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 25 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_SHADOW_MAIL
# 26 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_NONE
# 27 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 28 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 29 "data/maps/SootopolisCity_Mart/scripts.pory"

# 30 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatMan::
# 31 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 32 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 33 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 34 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_FatManNoLegendaries
# 35 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_TooScaryOutside, MSGBOX_DEFAULT
# 36 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 37 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 38 "data/maps/SootopolisCity_Mart/scripts.pory"

# 39 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_FatManNoLegendaries::
# 40 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_PPUpIsGreat, MSGBOX_DEFAULT
# 41 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 42 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 43 "data/maps/SootopolisCity_Mart/scripts.pory"

# 44 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_Gentleman::
# 45 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 46 "data/maps/SootopolisCity_Mart/scripts.pory"
	faceplayer
# 47 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_ge VAR_SKY_PILLAR_STATE, 2, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 48 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, SootopolisCity_Mart_EventScript_GentlemanNoLegendaries
# 49 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_DidSomethingAwaken, MSGBOX_DEFAULT
# 50 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 51 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 52 "data/maps/SootopolisCity_Mart/scripts.pory"

# 53 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_EventScript_GentlemanNoLegendaries::
# 54 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox SootopolisCity_Mart_Text_FullRestoreItemOfDreams, MSGBOX_DEFAULT
# 55 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
# 56 "data/maps/SootopolisCity_Mart/scripts.pory"
	end
# 57 "data/maps/SootopolisCity_Mart/scripts.pory"

# 58 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_PPUpIsGreat:
# 59 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "PP UP is great!\p"
# 60 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "It raises the POWER POINTS, the PP,\n"
# 61 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "of a POKéMON move.$"
# 62 "data/maps/SootopolisCity_Mart/scripts.pory"

# 63 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_TooScaryOutside:
# 64 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What…\n"
# 65 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "What is happening?\p"
# 66 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "I really want to know, but it's too\n"
# 67 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "scary to go outside.$"
# 68 "data/maps/SootopolisCity_Mart/scripts.pory"

# 69 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_FullRestoreItemOfDreams:
# 70 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Do you know FULL RESTORE?\p"
# 71 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Full restoration of HP!\n"
# 72 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Eradication of all status problems!\p"
# 73 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "It's truly an item of your dreams!$"
# 74 "data/maps/SootopolisCity_Mart/scripts.pory"

# 75 "data/maps/SootopolisCity_Mart/scripts.pory"
SootopolisCity_Mart_Text_DidSomethingAwaken:
# 76 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "This weather…\n"
# 77 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "Did something awaken?$"

TM_Mart_Clerk::
# 83 "data/maps/SootopolisCity_Mart/scripts.pory"
	lock
# 84 "data/maps/SootopolisCity_Mart/scripts.pory"
	msgbox TM_Mart_Clerk_Text_0
# 85 "data/maps/SootopolisCity_Mart/scripts.pory"
	waitmessage
# 88 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, TM_Mart_Clerk_2
# 92 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, TM_Mart_Clerk_3
# 96 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, TM_Mart_Clerk_4
# 100 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, TM_Mart_Clerk_5
# 104 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, TM_Mart_Clerk_6
# 108 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, TM_Mart_Clerk_7
# 112 "data/maps/SootopolisCity_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, TM_Mart_Clerk_8
# 118 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart TMMart_All
TM_Mart_Clerk_1:
# 121 "data/maps/SootopolisCity_Mart/scripts.pory"
	release
	end

TM_Mart_Clerk_2:
# 90 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart TMMart_0Badges
	goto TM_Mart_Clerk_1

TM_Mart_Clerk_3:
# 94 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart TMMart_1Badges
	goto TM_Mart_Clerk_1

TM_Mart_Clerk_4:
# 98 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart TMMart_2Badges
	goto TM_Mart_Clerk_1

TM_Mart_Clerk_5:
# 102 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart TMMart_3Badges
	goto TM_Mart_Clerk_1

TM_Mart_Clerk_6:
# 106 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart TMMart_4Badges
	goto TM_Mart_Clerk_1

TM_Mart_Clerk_7:
# 110 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart TMMart_5Badges
	goto TM_Mart_Clerk_1

TM_Mart_Clerk_8:
# 114 "data/maps/SootopolisCity_Mart/scripts.pory"
	pokemart TMMart_6Badges
	goto TM_Mart_Clerk_1


	.align 2
# 125 "data/maps/SootopolisCity_Mart/scripts.pory"
TMMart_0Badges:
# 127 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROAR
# 128 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HAIL
# 129 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 130 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
	.2byte ITEM_NONE

	.align 2
# 133 "data/maps/SootopolisCity_Mart/scripts.pory"
TMMart_1Badges:
# 135 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROAR
# 136 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HAIL
# 137 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 138 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 139 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 140 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 141 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
	.2byte ITEM_NONE

	.align 2
# 144 "data/maps/SootopolisCity_Mart/scripts.pory"
TMMart_2Badges:
# 146 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_WATER_PULSE
# 147 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROAR
# 148 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HAIL
# 149 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 150 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 151 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 152 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 153 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 154 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 155 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 156 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 157 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROCK_TOMB
	.2byte ITEM_NONE

	.align 2
# 160 "data/maps/SootopolisCity_Mart/scripts.pory"
TMMart_3Badges:
# 162 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_WATER_PULSE
# 163 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROAR
# 164 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HAIL
# 165 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULK_UP
# 166 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 167 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 168 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 169 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 170 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 171 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 172 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 173 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 174 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 175 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 176 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 177 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROCK_TOMB
# 178 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 179 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ATTRACT
# 180 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_THIEF
# 181 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_STEEL_WING
# 182 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM59
# 183 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM60
	.2byte ITEM_NONE

	.align 2
# 186 "data/maps/SootopolisCity_Mart/scripts.pory"
TMMart_4Badges:
# 188 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_WATER_PULSE
# 189 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROAR
# 190 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TOXIC
# 191 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HAIL
# 192 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULK_UP
# 193 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 194 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 195 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 196 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 197 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 198 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 199 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 200 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 201 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FRUSTRATION
# 202 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_IRON_TAIL
# 203 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RETURN
# 204 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 205 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 206 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 207 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 208 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 209 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 210 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROCK_TOMB
# 211 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 212 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 213 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 214 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ATTRACT
# 215 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_THIEF
# 216 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_STEEL_WING
# 217 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SNATCH
# 218 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 219 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 220 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 221 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM57
# 222 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM59
# 223 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM60
	.2byte ITEM_NONE

	.align 2
# 226 "data/maps/SootopolisCity_Mart/scripts.pory"
TMMart_5Badges:
# 228 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DRAGON_CLAW
# 229 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_WATER_PULSE
# 230 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROAR
# 231 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TOXIC
# 232 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HAIL
# 233 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULK_UP
# 234 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 235 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 236 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 237 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 238 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 239 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 240 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 241 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_GIGA_DRAIN
# 242 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 243 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FRUSTRATION
# 244 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_IRON_TAIL
# 245 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RETURN
# 246 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 247 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 248 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 249 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 250 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 251 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 252 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 253 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROCK_TOMB
# 254 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 255 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 256 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FACADE
# 257 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 258 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_REST
# 259 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ATTRACT
# 260 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_THIEF
# 261 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_STEEL_WING
# 262 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SNATCH
# 263 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_OVERHEAT
# 264 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 265 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 266 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 267 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 268 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM56
# 269 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM57
# 270 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM59
# 271 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM60
	.2byte ITEM_NONE

	.align 2
# 274 "data/maps/SootopolisCity_Mart/scripts.pory"
TMMart_6Badges:
# 276 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DRAGON_CLAW
# 277 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_WATER_PULSE
# 278 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROAR
# 279 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TOXIC
# 280 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HAIL
# 281 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULK_UP
# 282 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 283 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 284 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 285 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 286 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 287 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HYPER_BEAM
# 288 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 289 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 290 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 291 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_GIGA_DRAIN
# 292 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 293 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FRUSTRATION
# 294 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SOLAR_BEAM
# 295 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_IRON_TAIL
# 296 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 297 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RETURN
# 298 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 299 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 300 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 301 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 302 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 303 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 304 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 305 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 306 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 307 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROCK_TOMB
# 308 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 309 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 310 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FACADE
# 311 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 312 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_REST
# 313 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ATTRACT
# 314 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_THIEF
# 315 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_STEEL_WING
# 316 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 317 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SNATCH
# 318 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_OVERHEAT
# 319 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 320 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 321 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 322 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 323 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM55
# 324 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM56
# 325 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM57
# 326 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM58
# 327 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM59
# 328 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM60
	.2byte ITEM_NONE

	.align 2
# 331 "data/maps/SootopolisCity_Mart/scripts.pory"
TMMart_All:
# 333 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FOCUS_PUNCH
# 334 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DRAGON_CLAW
# 335 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_WATER_PULSE
# 336 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_CALM_MIND
# 337 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROAR
# 338 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TOXIC
# 339 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HAIL
# 340 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULK_UP
# 341 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BULLET_SEED
# 342 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HIDDEN_POWER
# 343 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SUNNY_DAY
# 344 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TAUNT
# 345 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ICE_BEAM
# 346 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BLIZZARD
# 347 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_HYPER_BEAM
# 348 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_LIGHT_SCREEN
# 349 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_PROTECT
# 350 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RAIN_DANCE
# 351 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_GIGA_DRAIN
# 352 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SAFEGUARD
# 353 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FRUSTRATION
# 354 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SOLAR_BEAM
# 355 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_IRON_TAIL
# 356 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDERBOLT
# 357 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_THUNDER
# 358 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_EARTHQUAKE
# 359 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_RETURN
# 360 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DIG
# 361 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_PSYCHIC
# 362 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHADOW_BALL
# 363 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_BRICK_BREAK
# 364 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_DOUBLE_TEAM
# 365 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_REFLECT
# 366 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 367 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FLAMETHROWER
# 368 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SLUDGE_BOMB
# 369 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SANDSTORM
# 370 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FIRE_BLAST
# 371 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ROCK_TOMB
# 372 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 373 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_TORMENT
# 374 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_FACADE
# 375 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SECRET_POWER
# 376 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_REST
# 377 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_ATTRACT
# 378 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_THIEF
# 379 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_STEEL_WING
# 380 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SKILL_SWAP
# 381 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_SNATCH
# 382 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM_OVERHEAT
# 383 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM51
# 384 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM52
# 385 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM53
# 386 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM54
# 387 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM55
# 388 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM56
# 389 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM57
# 390 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM58
# 391 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM59
# 392 "data/maps/SootopolisCity_Mart/scripts.pory"
	.2byte ITEM_TM60
	.2byte ITEM_NONE

TM_Mart_Clerk_Text_0:
# 84 "data/maps/SootopolisCity_Mart/scripts.pory"
	.string "How may I serve you?$"

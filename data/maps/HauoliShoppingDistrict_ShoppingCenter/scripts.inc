HauoliShoppingDistrict_ShoppingCenter_MapScripts::
	.byte 0


HauoliShoppingDistrict_ShoppingCenter_NPC_Worker::
# 5 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 6 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 7 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_Worker_Text_0
# 8 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_Worker_Text_1
# 9 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 10 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_Artist::
# 16 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 17 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 18 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_Artist_Text_0
# 19 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_Artist_Text_1
# 20 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 21 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff::
# 27 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 28 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 29 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_Text_0
# 30 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_Text_1
# 31 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmessage
# 32 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_2
# 40 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_Text_0
# 41 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_Text_3
# 42 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_1:
# 44 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end

HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_2:
# 34 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_Text_0
# 35 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_Text_2
# 36 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
	goto HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_1


HauoliShoppingDistrict_ShoppingCenter_NPC_Dancer::
# 50 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 51 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 52 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_Dancer_Text_0
# 53 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_Dancer_Text_1
# 54 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 55 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_SightseerF::
# 61 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 62 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 63 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_SightseerF_Text_0
# 64 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_SightseerF_Text_1
# 65 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 66 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 67 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmovement 0
# 68 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_SightseerM::
# 74 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 75 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 76 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_SightseerF_Text_0
# 77 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_SightseerM_Text_0
# 78 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 79 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 80 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmovement 0
# 81 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_Psychic::
# 87 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 88 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 89 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_Psychic_Text_0
# 90 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_Psychic_Text_1
# 91 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 92 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	createplayerfieldmugshot
# 93 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_Psychic_Text_2
# 94 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 95 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	delay 30
# 96 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 97 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	delay 10
# 98 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_Psychic_Text_0
# 99 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_Psychic_Text_3
# 100 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 101 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_Backpacker::
# 107 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 108 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 109 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_Backpacker_Text_0
# 110 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_Backpacker_Text_1
# 111 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 112 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_AceTrainerF::
# 118 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 119 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 120 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_AceTrainerF_Text_0
# 121 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_AceTrainerF_Text_1
# 122 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 123 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_Singer::
# 129 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 130 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 131 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_Singer_Text_0
# 132 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_Singer_Text_1
# 133 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 134 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_Jester::
# 140 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 141 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 142 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_Jester_Text_0
# 143 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_Jester_Text_1
# 144 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 145 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 146 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmovement 0
# 147 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_OldWoman::
# 153 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 154 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 155 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_OldWoman_Text_0
# 156 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_OldWoman_Text_1
# 157 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 158 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
# 159 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmovement 0
# 160 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_Sign_CreatorCafe::
# 169 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 170 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_Sign_CreatorCafe_Text_0
# 171 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 172 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_Sign_DanceStage::
# 178 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 179 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_Sign_DanceStage_Text_0
# 180 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 181 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_Sign_GardenShop::
# 187 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 188 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_Sign_GardenShop_Text_0
# 189 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 190 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_Sign_TCGShop::
# 196 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 197 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_Sign_TCGShop_Text_0
# 198 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 199 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_Sign_Painting::
# 205 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 206 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_Sign_Painting_Text_0
# 207 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 208 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_Pokemon_Passimian::
# 214 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 215 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 216 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_Pokemon_Passimian_Text_0
# 217 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	playmoncry SPECIES_PASSIMIAN, CRY_MODE_NORMAL
# 218 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_Pokemon_Passimian_Text_1
# 219 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmoncry
# 220 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 221 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_Pokemon_Bellossom::
# 227 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 228 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 229 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_Pokemon_Bellossom_Text_0
# 230 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	playmoncry SPECIES_BELLOSSOM, CRY_MODE_NORMAL
# 231 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_Pokemon_Bellossom_Text_1
# 232 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmoncry
# 233 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 234 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_Pokemon_Politoed::
# 240 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 241 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 242 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_Pokemon_Politoed_Text_0
# 243 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	playmoncry SPECIES_POLITOED, CRY_MODE_NORMAL
# 244 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_Pokemon_Politoed_Text_1
# 245 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmoncry
# 246 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 247 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_Pokemon_Porygon::
# 253 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 254 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 255 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_Pokemon_Porygon_Text_0
# 256 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 257 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_Pokemon_Porygon_Text_1
# 258 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmoncry
# 259 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	closemessage
# 260 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


HauoliShoppingDistrict_ShoppingCenter_NPC_RangerGardenShop::
# 269 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 270 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 271 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_RangerGardenShop_Text_0
# 272 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_RangerGardenShop_Text_1
# 273 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmessage
# 274 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	pokemart Mart_HauoliShoppingDistrict_Garden
# 276 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_RangerGardenShop_Text_0
# 277 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_RangerGardenShop_Text_2
# 278 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


	.align 2
# 285 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
Mart_HauoliShoppingDistrict_Garden:
# 286 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.2byte ITEM_GRACIDEA
# 287 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.2byte ITEM_NEST_BALL
# 288 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.2byte ITEM_LOVE_BALL
	.2byte ITEM_NONE

HauoliShoppingDistrict_ShoppingCenter_NPC_PokemonTCGShop::
# 293 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	lock
# 294 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	faceplayer
# 295 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_PokemonTCGShop_Text_0
# 296 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_PokemonTCGShop_Text_1
# 297 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	waitmessage
# 298 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	pokemart Mart_HauoliShoppingDistrict_PokemonTCG
# 300 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	setspeaker HauoliShoppingDistrict_ShoppingCenter_NPC_PokemonTCGShop_Text_0
# 301 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	msgbox HauoliShoppingDistrict_ShoppingCenter_NPC_PokemonTCGShop_Text_2
# 302 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	release
	end


	.align 2
# 307 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
Mart_HauoliShoppingDistrict_PokemonTCG:
# 308 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.2byte ITEM_STRANGE_SOUVENIR
	.2byte ITEM_NONE

HauoliShoppingDistrict_ShoppingCenter_NPC_Worker_Text_0:
# 7 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Office Worker$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Worker_Text_1:
# 8 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Welcome to the Hau'oli City Shopping\n"
	.string "District! The whole city comes to shop\l"
	.string "and chat here.$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Artist_Text_0:
# 18 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Artist$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Artist_Text_1:
# 19 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Look at that stunning painting on the\n"
	.string "wall!\p"
	.string "I came all the way from the Kalos Region\n"
	.string "to see it. The building in the distance\l"
	.string "glows the orange-yellow of {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY}...\l"
	.string "How stunning!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_Text_0:
# 29 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Bellhop$"

HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_Text_1:
# 30 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "This building-in-a-building is the\n"
	.string "Creator Café!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_Text_2:
# 35 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "We're freshly open for business. Come\n"
	.string "on in!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_CreatorCafeStaff_Text_3:
# 41 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "We're still undergoing final\n"
	.string "preparations to open. Please come back\l"
	.string "soon!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Dancer_Text_0:
# 52 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Dancer$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Dancer_Text_1:
# 53 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "I come here after work to dance my\n"
	.string "problems away with my Pokémon!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_SightseerF_Text_0:
# 63 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Sightseer$"

HauoliShoppingDistrict_ShoppingCenter_NPC_SightseerF_Text_1:
# 64 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Wow, look at that lady dance! And I\n"
	.string "never knew {COLOR BLUE}Politoed{COLOR DARK_GRAY} could sing like\l"
	.string "that!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_SightseerM_Text_0:
# 77 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "I heard that in Alola, {COLOR BLUE}Bellossom{COLOR DARK_GRAY} is a\n"
	.string "Grass and Fire-type Pokémon because it\l"
	.string "can use the power of the sun more fully\l"
	.string "here.\p"
	.string "So... when does it start shooting fire\n"
	.string "out of its fists?$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Psychic_Text_0:
# 89 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Psychic$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Psychic_Text_1:
# 90 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "I come here to practice reading\n"
	.string "people's minds.$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Psychic_Text_2:
# 93 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "{SPEAKER NAME_PLAYER}Oh yeah? What am I thinking?$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Psychic_Text_3:
# 99 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "You're thinking you want to move on!\n"
	.string "Hey!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Backpacker_Text_0:
# 109 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Backpacker$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Backpacker_Text_1:
# 110 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "We came here to visit the Creator Café.\n"
	.string "It sounds like a lot of important people\l"
	.string "visit there... I wonder how strong they\l"
	.string "are!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_AceTrainerF_Text_0:
# 120 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Ace Trainer$"

HauoliShoppingDistrict_ShoppingCenter_NPC_AceTrainerF_Text_1:
# 121 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "My girlfriend wants to battle everyone\n"
	.string "in the Creator Café, but I'm more\l"
	.string "excited about the Pokémon TCG shop!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Singer_Text_0:
# 131 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Singer$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Singer_Text_1:
# 132 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "I came in here for some time away from\n"
	.string "the beach. I was burning up in the sun!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Jester_Text_0:
# 142 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Jester$"

HauoliShoppingDistrict_ShoppingCenter_NPC_Jester_Text_1:
# 143 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Why won't my opponent take me\n"
	.string "seriously! I'm a great {COLOR BLUE}Pokémon TCG{COLOR DARK_GRAY}\l"
	.string "player!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_OldWoman_Text_0:
# 155 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Old Woman$"

HauoliShoppingDistrict_ShoppingCenter_NPC_OldWoman_Text_1:
# 156 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Heh! I bet he dressed as a clown\n"
	.string "because he knew he'd lose!$"

HauoliShoppingDistrict_ShoppingCenter_Sign_CreatorCafe_Text_0:
# 170 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Creator Café\n"
	.string "Where Our Love for Pokémon Shines!$"

HauoliShoppingDistrict_ShoppingCenter_Sign_DanceStage_Text_0:
# 179 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Hau'oli Historic Dance Stage$"

HauoliShoppingDistrict_ShoppingCenter_Sign_GardenShop_Text_0:
# 188 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Hau'oli Garden Shop\n"
	.string "Plants, Rarities, and More!$"

HauoliShoppingDistrict_ShoppingCenter_Sign_TCGShop_Text_0:
# 197 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Pokémon TCG Shop\n"
	.string "Best Prices on Melemele!$"

HauoliShoppingDistrict_ShoppingCenter_Sign_Painting_Text_0:
# 206 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "{COLOR BLUE}Tapu Koko{COLOR DARK_GRAY}'s Glory\n"
	.string "Painted by an anonymous artist.$"

HauoliShoppingDistrict_ShoppingCenter_Pokemon_Passimian_Text_0:
# 216 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Passimian$"

HauoliShoppingDistrict_ShoppingCenter_Pokemon_Passimian_Text_1:
# 218 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Eek eek!$"

HauoliShoppingDistrict_ShoppingCenter_Pokemon_Bellossom_Text_0:
# 229 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Bellossom$"

HauoliShoppingDistrict_ShoppingCenter_Pokemon_Bellossom_Text_1:
# 231 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Blooom!$"

HauoliShoppingDistrict_ShoppingCenter_Pokemon_Politoed_Text_0:
# 242 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Politoed$"

HauoliShoppingDistrict_ShoppingCenter_Pokemon_Politoed_Text_1:
# 244 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Crr-croak!$"

HauoliShoppingDistrict_ShoppingCenter_Pokemon_Porygon_Text_0:
# 255 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Porygon$"

HauoliShoppingDistrict_ShoppingCenter_Pokemon_Porygon_Text_1:
# 257 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Hummm...$"

HauoliShoppingDistrict_ShoppingCenter_NPC_RangerGardenShop_Text_0:
# 271 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Ranger$"

HauoliShoppingDistrict_ShoppingCenter_NPC_RangerGardenShop_Text_1:
# 272 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Alola! We sell a variety of plants, along\n"
	.string "with whatever we find while we dig.\p"
	.string "Are you looking to shop here?$"

HauoliShoppingDistrict_ShoppingCenter_NPC_RangerGardenShop_Text_2:
# 277 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Come on back now!$"

HauoliShoppingDistrict_ShoppingCenter_NPC_PokemonTCGShop_Text_0:
# 295 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "TCG Collector$"

HauoliShoppingDistrict_ShoppingCenter_NPC_PokemonTCGShop_Text_1:
# 296 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Alola! We sell {COLOR BLUE}Pokémon TCG{COLOR DARK_GRAY}cards.\p"
	.string "How can I help you?$"

HauoliShoppingDistrict_ShoppingCenter_NPC_PokemonTCGShop_Text_2:
# 301 "data//maps/HauoliShoppingDistrict_ShoppingCenter/scripts.pory"
	.string "Come back soon!$"

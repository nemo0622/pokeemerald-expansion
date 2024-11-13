SofosCity_GameCorner_MapScripts::
	.byte 0


SofosCity_GameCorner_EventScript_Boy::
# 5 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 6 "data/maps/SofosCity_GameCorner/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EventScript_Boy_Text_0
# 8 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_EventScript_Boy_Text_1
# 9 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 10 "data/maps/SofosCity_GameCorner/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 11 "data/maps/SofosCity_GameCorner/scripts.pory"
	waitmovement 0
# 12 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end


SofosCity_GameCorner_EventScript_Girl::
# 18 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 19 "data/maps/SofosCity_GameCorner/scripts.pory"
	faceplayer
# 20 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EventScript_Girl_Text_0
# 21 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_EventScript_Girl_Text_1
# 22 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 23 "data/maps/SofosCity_GameCorner/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 24 "data/maps/SofosCity_GameCorner/scripts.pory"
	waitmovement 0
# 25 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end


SofosCity_GameCorner_EventScript_NinjaBoy::
# 31 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 32 "data/maps/SofosCity_GameCorner/scripts.pory"
	faceplayer
# 33 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EventScript_NinjaBoy_Text_0
# 34 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_EventScript_NinjaBoy_Text_1
# 35 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 36 "data/maps/SofosCity_GameCorner/scripts.pory"
	applymovement 5, Common_Movement_FaceOriginalDirection
# 37 "data/maps/SofosCity_GameCorner/scripts.pory"
	waitmovement 0
# 38 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end


SofosCity_GameCorner_EventScript_Fisherman::
# 44 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 45 "data/maps/SofosCity_GameCorner/scripts.pory"
	faceplayer
# 46 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EventScript_Fisherman_Text_0
# 47 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_EventScript_Fisherman_Text_1
# 48 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 49 "data/maps/SofosCity_GameCorner/scripts.pory"
	applymovement 3, Common_Movement_FaceOriginalDirection
# 50 "data/maps/SofosCity_GameCorner/scripts.pory"
	waitmovement 0
# 51 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end


SofosCity_GameCorner_EventScript_HexManiac::
# 57 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 58 "data/maps/SofosCity_GameCorner/scripts.pory"
	faceplayer
# 59 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EventScript_HexManiac_Text_0
# 60 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_EventScript_HexManiac_Text_1
# 61 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 62 "data/maps/SofosCity_GameCorner/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
# 63 "data/maps/SofosCity_GameCorner/scripts.pory"
	waitmovement 0
# 64 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end


SofosCity_GameCorner_ItemShop::
# 70 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 71 "data/maps/SofosCity_GameCorner/scripts.pory"
	faceplayer
# 72 "data/maps/SofosCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PINBALL_POINTS
# 73 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_PINBALL_POINTS, 0
	goto_if_eq SofosCity_GameCorner_ItemShop_2
# 82 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_ItemShop_Text_1
# 83 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_ItemShop_Text_3
# 84 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 85 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_ItemShop_Text_1
# 86 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_ItemShop_Text_4, MSGBOX_YESNO
# 87 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_GameCorner_ItemShop_5
# 95 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_ItemShop_Text_1
# 96 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_ItemShop_Text_6
# 97 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 99 "data/maps/SofosCity_GameCorner/scripts.pory"
	subvar VAR_PINBALL_POINTS, 1
# 100 "data/maps/SofosCity_GameCorner/scripts.pory"
	randomelement ITEM_WISHING_STAR, ITEM_EVIOLITE
# 101 "data/maps/SofosCity_GameCorner/scripts.pory"
	giveitem VAR_RESULT
# 103 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_ItemShop_Text_1
# 104 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_ItemShop_Text_7
# 105 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
SofosCity_GameCorner_ItemShop_1:
# 108 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end

SofosCity_GameCorner_ItemShop_2:
# 75 "data/maps/SofosCity_GameCorner/scripts.pory"
	bufferstring STR_VAR_1, SofosCity_GameCorner_ItemShop_Text_0
# 76 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_ItemShop_Text_1
# 77 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_ItemShop_Text_2
# 78 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
	goto SofosCity_GameCorner_ItemShop_1

SofosCity_GameCorner_ItemShop_5:
# 89 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_ItemShop_Text_1
# 90 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_ItemShop_Text_5
# 91 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
	goto SofosCity_GameCorner_ItemShop_1


SofosCity_GameCorner_EggShop::
# 114 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 115 "data/maps/SofosCity_GameCorner/scripts.pory"
	faceplayer
# 116 "data/maps/SofosCity_GameCorner/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_PINBALL_POINTS
# 117 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_PINBALL_POINTS, 0
	goto_if_eq SofosCity_GameCorner_EggShop_2
# 126 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EggShop_Text_0
# 127 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_ItemShop_Text_3
# 128 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 129 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EggShop_Text_0
# 130 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_EggShop_Text_1, MSGBOX_YESNO
# 131 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_GameCorner_EggShop_5
# 139 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EggShop_Text_0
# 140 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_EggShop_Text_2
# 141 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 143 "data/maps/SofosCity_GameCorner/scripts.pory"
	subvar VAR_PINBALL_POINTS, 1
# 144 "data/maps/SofosCity_GameCorner/scripts.pory"
	randomelement SPECIES_PIKACHU, SPECIES_VULPIX
# 145 "data/maps/SofosCity_GameCorner/scripts.pory"
	giveegg VAR_RESULT
# 147 "data/maps/SofosCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_RESULT
# 148 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_EggShop_Text_3
# 149 "data/maps/SofosCity_GameCorner/scripts.pory"
	delay 60
# 150 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 152 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EggShop_Text_0
# 153 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_ItemShop_Text_7
# 154 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
SofosCity_GameCorner_EggShop_1:
# 157 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end

SofosCity_GameCorner_EggShop_2:
# 119 "data/maps/SofosCity_GameCorner/scripts.pory"
	bufferstring STR_VAR_1, SofosCity_GameCorner_ItemShop_Text_0
# 120 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EggShop_Text_0
# 121 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_ItemShop_Text_2
# 122 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
	goto SofosCity_GameCorner_EggShop_1

SofosCity_GameCorner_EggShop_5:
# 133 "data/maps/SofosCity_GameCorner/scripts.pory"
	speakername SofosCity_GameCorner_EggShop_Text_0
# 134 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox SofosCity_GameCorner_ItemShop_Text_5
# 135 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
	goto SofosCity_GameCorner_EggShop_1


Minigame_TryMeowthPinballGame::
# 165 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 166 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_0, MSGBOX_YESNO
# 167 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Minigame_TryMeowthPinballGame_2
# 173 "data/maps/SofosCity_GameCorner/scripts.pory"
	callnative PlayMeowthPinballGame
# 174 "data/maps/SofosCity_GameCorner/scripts.pory"
	waitstate
# 175 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Minigame_TryMeowthPinballGame_5
# 183 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_2
# 184 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
Minigame_TryMeowthPinballGame_4:
# 186 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end

Minigame_TryMeowthPinballGame_2:
# 169 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end

Minigame_TryMeowthPinballGame_5:
# 177 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_1
# 178 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 179 "data/maps/SofosCity_GameCorner/scripts.pory"
	addvar VAR_PINBALL_POINTS, 1
	goto Minigame_TryMeowthPinballGame_4


Minigame_TryDiglettPinballGame::
# 192 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 193 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryDiglettPinballGame_Text_0, MSGBOX_YESNO
# 194 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Minigame_TryDiglettPinballGame_2
# 200 "data/maps/SofosCity_GameCorner/scripts.pory"
	callnative PlayDiglettPinballGame
# 201 "data/maps/SofosCity_GameCorner/scripts.pory"
	waitstate
# 202 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Minigame_TryDiglettPinballGame_5
# 210 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_2
# 211 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
Minigame_TryDiglettPinballGame_4:
# 213 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end

Minigame_TryDiglettPinballGame_2:
# 196 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end

Minigame_TryDiglettPinballGame_5:
# 204 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_1
# 205 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 206 "data/maps/SofosCity_GameCorner/scripts.pory"
	addvar VAR_PINBALL_POINTS, 1
	goto Minigame_TryDiglettPinballGame_4


Minigame_TrySeelPinballGame::
# 219 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 220 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TrySeelPinballGame_Text_0, MSGBOX_YESNO
# 221 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Minigame_TrySeelPinballGame_2
# 227 "data/maps/SofosCity_GameCorner/scripts.pory"
	callnative PlaySeelPinballGame
# 228 "data/maps/SofosCity_GameCorner/scripts.pory"
	waitstate
# 229 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Minigame_TrySeelPinballGame_5
# 237 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_2
# 238 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
Minigame_TrySeelPinballGame_4:
# 240 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end

Minigame_TrySeelPinballGame_2:
# 223 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end

Minigame_TrySeelPinballGame_5:
# 231 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_1
# 232 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 233 "data/maps/SofosCity_GameCorner/scripts.pory"
	addvar VAR_PINBALL_POINTS, 1
	goto Minigame_TrySeelPinballGame_4


Minigame_TryGengarPinballGame::
# 246 "data/maps/SofosCity_GameCorner/scripts.pory"
	lock
# 247 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryGengarPinballGame_Text_0, MSGBOX_YESNO
# 248 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Minigame_TryGengarPinballGame_2
# 254 "data/maps/SofosCity_GameCorner/scripts.pory"
	callnative PlayGengarPinballGame
# 255 "data/maps/SofosCity_GameCorner/scripts.pory"
	waitstate
# 256 "data/maps/SofosCity_GameCorner/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Minigame_TryGengarPinballGame_5
# 264 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_2
# 265 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
Minigame_TryGengarPinballGame_4:
# 267 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end

Minigame_TryGengarPinballGame_2:
# 250 "data/maps/SofosCity_GameCorner/scripts.pory"
	release
	end

Minigame_TryGengarPinballGame_5:
# 258 "data/maps/SofosCity_GameCorner/scripts.pory"
	msgbox Minigame_TryMeowthPinballGame_Text_1
# 259 "data/maps/SofosCity_GameCorner/scripts.pory"
	closemessage
# 260 "data/maps/SofosCity_GameCorner/scripts.pory"
	addvar VAR_PINBALL_POINTS, 1
	goto Minigame_TryGengarPinballGame_4


SofosCity_GameCorner_EventScript_Boy_Text_0:
# 7 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Boy$"

SofosCity_GameCorner_EventScript_Boy_Text_1:
# 8 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "This one's my favorite Pinball machine!\n"
	.string "I can predict how the Meowth moves!$"

SofosCity_GameCorner_EventScript_Girl_Text_0:
# 20 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Girl$"

SofosCity_GameCorner_EventScript_Girl_Text_1:
# 21 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Argh, I can never get those stupid\n"
	.string "Dugtrio...!$"

SofosCity_GameCorner_EventScript_NinjaBoy_Text_0:
# 33 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Little Boy$"

SofosCity_GameCorner_EventScript_NinjaBoy_Text_1:
# 34 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Heehee, I love seeing the little Seel\n"
	.string "heads pop up!$"

SofosCity_GameCorner_EventScript_Fisherman_Text_0:
# 46 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Fisherman$"

SofosCity_GameCorner_EventScript_Fisherman_Text_1:
# 47 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "You know, I thought I would be better\n"
	.string "at this, being a Fisherman and all...$"

SofosCity_GameCorner_EventScript_HexManiac_Text_0:
# 59 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Hex Maniac$"

SofosCity_GameCorner_EventScript_HexManiac_Text_1:
# 60 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "This one's my favorite, the ghosts are\n"
	.string "so exciting!$"

SofosCity_GameCorner_ItemShop_Text_0:
# 75 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "0$"

SofosCity_GameCorner_ItemShop_Text_1:
# 76 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Pinball Man$"

SofosCity_GameCorner_ItemShop_Text_2:
# 77 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Looks like you've got {COLOR GREEN}{STR_VAR_1}\n"
	.string "Pinball Points{COLOR DARK_GRAY} to spend!\p"
	.string "Go play some Pinball and come back for a\n"
	.string "prize!$"

SofosCity_GameCorner_ItemShop_Text_3:
# 83 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Looks like you've got {COLOR GREEN}{STR_VAR_1}\n"
	.string "Pinball Points{COLOR DARK_GRAY} to spend!$"

SofosCity_GameCorner_ItemShop_Text_4:
# 86 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "I'll give a random {COLOR GREEN}Rare Item{COLOR DARK_GRAY} in exchange\n"
	.string "for {COLOR GREEN}1 Pinball Point{COLOR DARK_GRAY}. Interested?$"

SofosCity_GameCorner_ItemShop_Text_5:
# 90 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Want to play more Pinball first? Have\n"
	.string "fun!$"

SofosCity_GameCorner_ItemShop_Text_6:
# 96 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Alright, get ready for your new Rare\n"
	.string "Item! Let's see here...$"

SofosCity_GameCorner_ItemShop_Text_7:
# 104 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Hope you like what you got! Come on\n"
	.string "back if you want more.$"

SofosCity_GameCorner_EggShop_Text_0:
# 120 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Pinball Lady$"

SofosCity_GameCorner_EggShop_Text_1:
# 130 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "I'll give a random {COLOR GREEN}Pokémon Egg{COLOR DARK_GRAY} in\n"
	.string "exchange for {COLOR GREEN}1 Pinball Point{COLOR DARK_GRAY}.\l"
	.string "Interested?$"

SofosCity_GameCorner_EggShop_Text_2:
# 140 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Alright, get ready for your new Pokémon\n"
	.string "Egg! Let's see here...$"

SofosCity_GameCorner_EggShop_Text_3:
# 148 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "{PLAYER} was given a {STR_VAR_1}\n"
	.string "Egg!$"

Minigame_TryMeowthPinballGame_Text_0:
# 166 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Play Meowth Pinball?$"

Minigame_TryMeowthPinballGame_Text_1:
# 177 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Great job! {PLAYER} gained 1 Pinball\n"
	.string "Point!$"

Minigame_TryMeowthPinballGame_Text_2:
# 183 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Better luck next time!$"

Minigame_TryDiglettPinballGame_Text_0:
# 193 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Play Diglett Pinball?$"

Minigame_TrySeelPinballGame_Text_0:
# 220 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Play Seel Pinball?$"

Minigame_TryGengarPinballGame_Text_0:
# 247 "data/maps/SofosCity_GameCorner/scripts.pory"
	.string "Play Gengar Pinball?$"

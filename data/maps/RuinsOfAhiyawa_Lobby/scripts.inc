RuinsOfAhiyawa_Lobby_MapScripts::
	.byte 0


RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse::
# 5 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	lock
# 6 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	faceplayer
# 7 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_2
# 17 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 20 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	ballfollowingmon
# 21 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	waitmovement 0
# 23 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	waitmovement 0
# 27 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 34 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	setrespawn HEAL_LOCATION_RUINS_OF_AHIYAWA
RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end

RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
	goto RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_1


RuinsOfAhiyawa_Lobby_Rania::
# 42 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	lock
# 43 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	faceplayer
# 44 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_Rania_Text_0
# 45 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_Rania_Text_1
# 46 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 47 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end


RuinsOfAhiyawa_Lobby_LittleBoy::
# 53 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	lock
# 54 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	faceplayer
# 55 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_LittleBoy_Text_0
# 56 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_LittleBoy_Text_1
# 57 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 58 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end


RuinsOfAhiyawa_Lobby_ManWithChild::
# 64 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	lock
# 65 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	faceplayer
# 66 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_ManWithChild_Text_0
# 67 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_ManWithChild_Text_1
# 68 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 69 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end


RuinsOfAhiyawa_Lobby_Beauty::
# 75 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	lock
# 76 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	faceplayer
# 77 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_Beauty_Text_0
# 78 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_Beauty_Text_1
# 79 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 80 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end


RuinsOfAhiyawa_Lobby_Artist::
# 86 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	lock
# 87 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	faceplayer
# 88 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_Artist_Text_0
# 89 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_Artist_Text_1
# 90 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 91 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end


RuinsOfAhiyawa_Lobby_EventScript_Chikorita::
# 97 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	lock
# 98 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	faceplayer
# 99 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_EventScript_Chikorita_Text_0
# 100 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 101 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_EventScript_Chikorita_Text_1
# 102 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	waitmoncry
# 103 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 104 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end


RuinsOfAhiyawa_Lobby_AceTrainer::
# 110 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	lock
# 111 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	faceplayer
# 112 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_AceTrainer_Text_0
# 113 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_AceTrainer_Text_1
# 114 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 115 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end


RuinsOfAhiyawa_Lobby_EventScript_MartEmployee::
# 121 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	lock
# 122 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	faceplayer
# 123 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_EventScript_MartEmployee_Text_0
# 124 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	message gText_HowMayIServeYou
# 125 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	waitmessage
# 126 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	pokemart RuinsOfAhiyawa_Lobby_Shop
# 127 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 128 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	delay 1
# 129 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	speakername RuinsOfAhiyawa_Lobby_EventScript_MartEmployee_Text_0
# 130 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox gText_PleaseComeAgain
# 131 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end


	.align 2
# 136 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
RuinsOfAhiyawa_Lobby_Shop:
# 138 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_POKE_BALL
# 139 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 140 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 141 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_POTION
# 142 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 143 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 144 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_MAX_POTION
# 145 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 146 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_REVIVE
# 147 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 148 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 149 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_AWAKENING
# 150 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 151 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 152 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 153 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_REPEL
# 154 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 155 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

RuinsOfAhiyawa_Lobby_EnterEliteFourTrigger::
# 160 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	lock
# 161 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	msgbox RuinsOfAhiyawa_Lobby_EnterEliteFourTrigger_Text_0, MSGBOX_YESNO
# 162 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	closemessage
# 163 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq RuinsOfAhiyawa_Lobby_EnterEliteFourTrigger_2
# 172 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	warpcontinuescript MAP_RUINS_OF_AHIYAWA_E4_ROOM1, 4, 9, RuinsOfAhiyawa_EliteFour_EnterPolymniaRoomScript
# 173 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	waitstate
# 175 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end

RuinsOfAhiyawa_Lobby_EnterEliteFourTrigger_2:
# 165 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 166 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	waitmovement 0
# 167 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	release
	end


RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Nurse$"

RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Welcome to the Ahiyawa Pokémon Center!\n"
	.string "Would you like to heal your Pokémon?$"

RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "We hope to see you again!$"

RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

RuinsOfAhiyawa_Lobby_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

RuinsOfAhiyawa_Lobby_Rania_Text_0:
# 44 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Rania$"

RuinsOfAhiyawa_Lobby_Rania_Text_1:
# 45 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Chaire, {PLAYER}! We're finally here!\p"
	.string "I'm healing up my Pokémon and making\n"
	.string "sure they're ready for battle. Once\l"
	.string "you're ready, you can {COLOR GREEN}enter the Elite\l"
	.string "Four Challenge{COLOR DARK_GRAY} through the {COLOR GREEN}central\l"
	.string "door{COLOR DARK_GRAY}! Remember, once you enter, you\l"
	.string "{COLOR RED}can't exit{COLOR DARK_GRAY} until the end!$"

RuinsOfAhiyawa_Lobby_LittleBoy_Text_0:
# 55 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Little Boy$"

RuinsOfAhiyawa_Lobby_LittleBoy_Text_1:
# 56 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "I'm waiting here while my Dad challenges\n"
	.string "the Elite Four! He bought me this\l"
	.string "Chespin Doll to keep me entertained!$"

RuinsOfAhiyawa_Lobby_ManWithChild_Text_0:
# 66 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Man$"

RuinsOfAhiyawa_Lobby_ManWithChild_Text_1:
# 67 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "I gave my kid this Chespin Doll to\n"
	.string "remember this trip by. While we're here,\l"
	.string "I'm gonna give the Elite Four a run for\l"
	.string "their money!$"

RuinsOfAhiyawa_Lobby_Beauty_Text_0:
# 77 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Beauty$"

RuinsOfAhiyawa_Lobby_Beauty_Text_1:
# 78 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Remember to look your best while you\n"
	.string "challenge the Elite Four!$"

RuinsOfAhiyawa_Lobby_Artist_Text_0:
# 88 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Artist$"

RuinsOfAhiyawa_Lobby_Artist_Text_1:
# 89 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "I think I spent too much time making my\n"
	.string "Pokémon beautiful, and less on actually\l"
	.string "training it...$"

RuinsOfAhiyawa_Lobby_EventScript_Chikorita_Text_0:
# 99 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Chikorita$"

RuinsOfAhiyawa_Lobby_EventScript_Chikorita_Text_1:
# 101 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Cheepa!$"

RuinsOfAhiyawa_Lobby_AceTrainer_Text_0:
# 112 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Ace Trainer$"

RuinsOfAhiyawa_Lobby_AceTrainer_Text_1:
# 113 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "The Elite Four... They recently\n"
	.string "reformed, composed of {COLOR GREEN}four Muses{COLOR DARK_GRAY} from\l"
	.string "Gyms around Ilios. I wonder if there's a\l"
	.string "{COLOR GREEN}Champion Battle{COLOR DARK_GRAY} to prepare for?$"

RuinsOfAhiyawa_Lobby_EventScript_MartEmployee_Text_0:
# 123 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Mart Employee$"

RuinsOfAhiyawa_Lobby_EnterEliteFourTrigger_Text_0:
# 161 "data/maps/RuinsOfAhiyawa_Lobby/scripts.pory"
	.string "Beyond this doorway lies the {COLOR GREEN}Elite Four{COLOR DARK_GRAY},\n"
	.string "the greatest challenge for Trainers in\l"
	.string "the Ilios Region.\p"
	.string "Once you enter, you {COLOR RED}cannot exit{COLOR DARK_GRAY} until\n"
	.string "you win or lose. Will you enter the Elite\l"
	.string "Four Challenge?$"

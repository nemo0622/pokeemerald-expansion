# 1 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 2 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
.set LOCALID_OWNER, 1
# 3 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 4 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_MapScripts::
# 5 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
# 6 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.byte 0
# 7 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 8 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_OnTransition:
# 9 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 10 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner
# 11 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner
# 12 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_TEMP_1
# 13 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 14 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 15 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_MoveShopOwner::
# 16 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setobjectxyperm LOCALID_OWNER, 4, 6
# 17 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 18 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 19 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ShopOwner::
# 20 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 21 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 22 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_TEMP_1, Route104_PrettyPetalFlowerShop_EventScript_SellDecorations
# 23 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ThisIsPrettyPetalFlowerShop, MSGBOX_DEFAULT
# 24 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_MET_PRETTY_PETAL_SHOP_OWNER, Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet
# 25 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_MET_PRETTY_PETAL_SHOP_OWNER
# 26 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_IntroLearnAboutBerries, MSGBOX_YESNO
# 27 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
# 28 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
# 29 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 30 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 31 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 32 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyMet::
# 33 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_LearnAboutBerries, MSGBOX_YESNO
# 34 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, YES, Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries
# 35 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	call_if_eq VAR_RESULT, NO, Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries
# 36 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 37 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 38 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 39 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_ExplainBerries::
# 40 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_BerriesExplanation, MSGBOX_DEFAULT
# 41 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 42 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 43 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_DontExplainBerries::
# 44 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_FlowersBringHappiness, MSGBOX_DEFAULT
# 45 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	return
# 46 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 47 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_SellDecorations::
# 48 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	message gText_PlayerWhatCanIDoForYou
# 49 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 50 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemartdecoration2 Route104_PrettyPetalFlowerShop_Pokemart_Plants
# 51 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 52 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 53 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 54 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 55 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.align 2
# 56 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_Pokemart_Plants:
# 57 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_RED_PLANT
# 58 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 59 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_PRETTY_FLOWERS
# 60 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_COLORFUL_PLANT
# 61 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_BIG_PLANT
# 62 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_GORGEOUS_PLANT
# 63 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte DECOR_NONE
# 64 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 65 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 66 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 67 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
# 68 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 69 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 70 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
# 71 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 72 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 73 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 74 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 75 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_GiveWailmerPail::
# 76 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_YouCanHaveThis, MSGBOX_DEFAULT
# 77 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 78 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 79 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
# 80 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
# 81 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 82 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 83 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 84 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_RandomBerryGirl::
# 85 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 86 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 87 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	dotimebasedevents
# 88 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_set FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY, Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry
# 89 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_ImGrowingFlowers, MSGBOX_DEFAULT
# 90 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	random 8
# 91 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 92 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	giveitem VAR_RESULT
# 93 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 94 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_DAILY_FLOWER_SHOP_RECEIVED_BERRY
# 95 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 96 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 97 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end
# 98 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"

# 99 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
Route104_PrettyPetalFlowerShop_EventScript_AlreadyReceivedBerry::
# 100 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_Text_MachineMixesBerries, MSGBOX_DEFAULT
# 101 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
# 102 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	end

Route104_PrettyPetalFlowerShop_EventScript_MintSeller::
# 108 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	lock
# 109 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	faceplayer
# 111 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_MINT_SELLER, Route104_PrettyPetalFlowerShop_EventScript_MintSeller_2
Route104_PrettyPetalFlowerShop_EventScript_MintSeller_1:
# 118 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_EventScript_MintSeller_Text_1
# 119 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	waitmessage
# 120 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	pokemart MintShop
# 122 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_EventScript_MintSeller_Text_2
# 123 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	closemessage
# 124 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	release
	end

Route104_PrettyPetalFlowerShop_EventScript_MintSeller_2:
# 113 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	msgbox Route104_PrettyPetalFlowerShop_EventScript_MintSeller_Text_0
# 114 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	closemessage
# 115 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	setflag FLAG_SPOKE_TO_MINT_SELLER
	goto Route104_PrettyPetalFlowerShop_EventScript_MintSeller_1


	.align 2
# 129 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
MintShop:
# 131 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_LONELY_MINT
# 132 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_ADAMANT_MINT
# 133 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_NAUGHTY_MINT
# 134 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_BRAVE_MINT
# 135 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_BOLD_MINT
# 136 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_IMPISH_MINT
# 137 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_LAX_MINT
# 138 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_RELAXED_MINT
# 139 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_MODEST_MINT
# 140 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_MILD_MINT
# 141 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_RASH_MINT
# 142 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_QUIET_MINT
# 143 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_CALM_MINT
# 144 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_GENTLE_MINT
# 145 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_CAREFUL_MINT
# 146 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_SASSY_MINT
# 147 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_TIMID_MINT
# 148 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_HASTY_MINT
# 149 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_JOLLY_MINT
# 150 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_NAIVE_MINT
# 151 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.2byte ITEM_SERIOUS_MINT
	.2byte ITEM_NONE

Route104_PrettyPetalFlowerShop_EventScript_MintSeller_Text_0:
# 113 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "Welcome to our shop! We grow more than\n"
	.string "just berries here, we grow Nature Mints\l"
	.string "too! These mints change what stats\l"
	.string "your POKéMON specialize in.$"

Route104_PrettyPetalFlowerShop_EventScript_MintSeller_Text_1:
# 118 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "What are you looking for?$"

Route104_PrettyPetalFlowerShop_EventScript_MintSeller_Text_2:
# 122 "data/maps/Route104_PrettyPetalFlowerShop/scripts.pory"
	.string "Come back soon, hun!$"

SofosCity_ShardExchangeHouse_MapScripts::
	.byte 0


SofosCity_ShardExchangeHouse_EventScript_RedShardMan::
# 5 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	lock
# 6 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_0
# 8 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_RED_SHARD_MAN, SofosCity_ShardExchangeHouse_EventScript_RedShardMan_2
SofosCity_ShardExchangeHouse_EventScript_RedShardMan_1:
# 15 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_2, MSGBOX_YESNO
# 16 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 17 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 5
# 18 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_ShardExchangeHouse_EventScript_RedShardMan_4
# 26 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	checkitem ITEM_RED_SHARD
# 27 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_ShardExchangeHouse_EventScript_RedShardMan_7
# 35 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_0
# 36 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_5
# 37 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 38 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	removeitem ITEM_RED_SHARD
# 39 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 10
# 40 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	randomelement ITEM_FIRE_STONE, ITEM_SUN_STONE, ITEM_METAL_COAT
# 41 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	giveitem VAR_RESULT
	return

SofosCity_ShardExchangeHouse_EventScript_RedShardMan_2:
# 10 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_1
# 11 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 12 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	setflag FLAG_SPOKE_TO_RED_SHARD_MAN
# 13 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 10
	goto SofosCity_ShardExchangeHouse_EventScript_RedShardMan_1

SofosCity_ShardExchangeHouse_EventScript_RedShardMan_4:
# 20 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_0
# 21 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_3
# 22 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
	return

SofosCity_ShardExchangeHouse_EventScript_RedShardMan_7:
# 29 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_0
# 30 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_4
# 31 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
	return


SofosCity_ShardExchangeHouse_EventScript_GreenShardMan::
# 48 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	lock
# 49 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	faceplayer
# 50 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_0
# 51 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_GREEN_SHARD_MAN, SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_2
SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_1:
# 58 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_2, MSGBOX_YESNO
# 59 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 60 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 5
# 61 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_4
# 69 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	checkitem ITEM_GREEN_SHARD
# 70 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_7
# 78 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_0
# 79 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_5
# 80 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 81 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	removeitem ITEM_GREEN_SHARD
# 82 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 10
# 83 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	randomelement ITEM_LEAF_STONE, ITEM_DUSK_STONE, ITEM_LINKING_CORD
# 84 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	giveitem VAR_RESULT
	return

SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_2:
# 53 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_1
# 54 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 55 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	setflag FLAG_SPOKE_TO_GREEN_SHARD_MAN
# 56 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 10
	goto SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_1

SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_4:
# 63 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_0
# 64 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_3
# 65 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
	return

SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_7:
# 72 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_0
# 73 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_4
# 74 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
	return


SofosCity_ShardExchangeHouse_EventScript_BlueShardMan::
# 91 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	lock
# 92 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	faceplayer
# 93 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_0
# 94 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_BLUE_SHARD_MAN, SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_2
SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_1:
# 101 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_2, MSGBOX_YESNO
# 102 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 103 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 5
# 104 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_4
# 112 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 113 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_7
# 121 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_0
# 122 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_5
# 123 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 124 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	removeitem ITEM_BLUE_SHARD
# 125 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 10
# 126 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	randomelement ITEM_WATER_STONE, ITEM_ICE_STONE, ITEM_MOON_STONE
# 127 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	giveitem VAR_RESULT
	return

SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_2:
# 96 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_1
# 97 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 98 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	setflag FLAG_SPOKE_TO_BLUE_SHARD_MAN
# 99 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 10
	goto SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_1

SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_4:
# 106 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_0
# 107 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_3
# 108 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
	return

SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_7:
# 115 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_0
# 116 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_4
# 117 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
	return


SofosCity_ShardExchangeHouse_EventScript_YellowShardMan::
# 134 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	lock
# 135 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	faceplayer
# 136 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_0
# 137 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_YELLOW_SHARD_MAN, SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_2
SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_1:
# 144 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_2, MSGBOX_YESNO
# 145 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 146 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 5
# 147 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_4
# 155 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	checkitem ITEM_YELLOW_SHARD
# 156 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_7
# 164 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_0
# 165 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_5
# 166 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 167 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	removeitem ITEM_YELLOW_SHARD
# 168 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 10
# 169 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	randomelement ITEM_THUNDER_STONE, ITEM_SHINY_STONE, ITEM_DAWN_STONE
# 170 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	giveitem VAR_RESULT
	return

SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_2:
# 139 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_1
# 140 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
# 141 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	setflag FLAG_SPOKE_TO_YELLOW_SHARD_MAN
# 142 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	delay 10
	goto SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_1

SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_4:
# 149 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_0
# 150 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_3
# 151 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
	return

SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_7:
# 158 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	speakername SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_0
# 159 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	msgbox SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_4
# 160 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	closemessage
	return


SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_0:
# 7 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Red Shard Man$"

SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_1:
# 10 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "You've got a good eye, talking to me\n"
	.string "instead of my foolish brothers!\p"
	.string "We're all obsessed with collecting\n"
	.string "different types of {COLOR GREEN}Shards{COLOR DARK_GRAY}. Of course, I\l"
	.string "collect {COLOR GREEN}Red Shards{COLOR DARK_GRAY}, the coolest of them\l"
	.string "all! In exchange for shards, I'll give\l"
	.string "you a random {COLOR GREEN}Evolutionary Item{COLOR DARK_GRAY}.\p"
	.string "For a Red Shard, I'll give you a Fire\n"
	.string "Stone, a Sun Stone, or a Metal Coat at\l"
	.string "random.$"

SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_2:
# 15 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Have you brought me a Red Shard? I'll\n"
	.string "give you an Evolutionary Item for it!\l"
	.string "It'll be a Fire Stone, a Sun Stone, or a\l"
	.string "Metal Coat, chosen at random.$"

SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_3:
# 21 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Ah, off to collect more Shards? Be sure\n"
	.string "to bring me whatever you find, as long\l"
	.string "as they're Red Shards!$"

SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_4:
# 30 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Hey, you can't trick me! You don't have\n"
	.string "any Red Shards!$"

SofosCity_ShardExchangeHouse_EventScript_RedShardMan_Text_5:
# 36 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Great! I'll just take a Red Shard off\n"
	.string "your hands...\p"
	.string "As promised, here's your Evolutionary\n"
	.string "Item!$"

SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_0:
# 50 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Green Shard Man$"

SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_1:
# 53 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "You've got a good eye, talking to me\n"
	.string "instead of my foolish brothers!\p"
	.string "We're all obsessed with collecting\n"
	.string "different types of {COLOR GREEN}Shards{COLOR DARK_GRAY}. Of course, I\l"
	.string "collect {COLOR GREEN}Green Shards{COLOR DARK_GRAY}, the cleanest of\l"
	.string "them all! In exchange for shards, I'll\l"
	.string "give you a random {COLOR GREEN}Evolutionary Item{COLOR DARK_GRAY}.\p"
	.string "For a Green Shard, I'll give you a Leaf\n"
	.string "Stone, a Dusk Stone, or a Linking Cord\l"
	.string "at random.$"

SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_2:
# 58 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Have you brought me a Green Shard? I'll\n"
	.string "give you an Evolutionary Item for it!\l"
	.string "It'll be a Leaf Stone, a Dusk Stone, or a\l"
	.string "Linking Cord, chosen at random.$"

SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_3:
# 64 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Ah, off to collect more Shards? Be sure\n"
	.string "to bring me whatever you find, as long\l"
	.string "as they're Green Shards!$"

SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_4:
# 73 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Hey, you can't trick me! You don't have\n"
	.string "any Green Shards!$"

SofosCity_ShardExchangeHouse_EventScript_GreenShardMan_Text_5:
# 79 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Great! I'll just take a Green Shard off\n"
	.string "your hands...\p"
	.string "As promised, here's your Evolutionary\n"
	.string "Item!$"

SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_0:
# 93 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Blue Shard Man$"

SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_1:
# 96 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "You've got a good eye, talking to me\n"
	.string "instead of my foolish brothers!\p"
	.string "We're all obsessed with collecting\n"
	.string "different types of {COLOR GREEN}Shards{COLOR DARK_GRAY}. Of course, I\l"
	.string "collect {COLOR GREEN}Blue Shards{COLOR DARK_GRAY}, the most beautiful\l"
	.string "of them all! In exchange for shards, I'll\l"
	.string "give you a random {COLOR GREEN}Evolutionary Item{COLOR DARK_GRAY}.\p"
	.string "For a Blue Shard, I'll give you a Water\n"
	.string "Stone, an Ice Stone, or a Moon Stone at\l"
	.string "random.$"

SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_2:
# 101 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Have you brought me a Blue Shard? I'll\n"
	.string "give you an Evolutionary Item for it!\l"
	.string "It'll be a Water Stone, an Ice Stone, or\l"
	.string "a Moon Stone, chosen at random.$"

SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_3:
# 107 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Ah, off to collect more Shards? Be sure\n"
	.string "to bring me whatever you find, as long\l"
	.string "as they're Blue Shards!$"

SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_4:
# 116 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Hey, you can't trick me! You don't have\n"
	.string "any Blue Shards!$"

SofosCity_ShardExchangeHouse_EventScript_BlueShardMan_Text_5:
# 122 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Great! I'll just take a Blue Shard off\n"
	.string "your hands...\p"
	.string "As promised, here's your Evolutionary\n"
	.string "Item!$"

SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_0:
# 136 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Yellow Shard Man$"

SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_1:
# 139 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "You've got a good eye, talking to me\n"
	.string "instead of my foolish brothers!\p"
	.string "We're all obsessed with collecting\n"
	.string "different types of {COLOR GREEN}Shards{COLOR DARK_GRAY}. Of course, I\l"
	.string "collect {COLOR GREEN}Yellow Shards{COLOR DARK_GRAY}, the shiniest of\l"
	.string "them all! In exchange for shards, I'll\l"
	.string "give you a random {COLOR GREEN}Evolutionary Item{COLOR DARK_GRAY}.\p"
	.string "For a Yellow Shard, I'll give you a\n"
	.string "Thunder Stone, a Shiny Stone, or a Dawn\l"
	.string "Stone at random.$"

SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_2:
# 144 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Have you brought me a Yellow Shard? I'll\n"
	.string "give you an Evolutionary Item for it!\l"
	.string "It'll be a Thunder Stone, a Shiny Stone,\l"
	.string "or a Dawn Stone, chosen at random.$"

SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_3:
# 150 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Ah, off to collect more Shards? Be sure\n"
	.string "to bring me whatever you find, as long\l"
	.string "as they're Yellow Shards!$"

SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_4:
# 159 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Hey, you can't trick me! You don't have\n"
	.string "any Yellow Shards!$"

SofosCity_ShardExchangeHouse_EventScript_YellowShardMan_Text_5:
# 165 "data/maps/SofosCity_ShardExchangeHouse/scripts.pory"
	.string "Great! I'll just take a Yellow Shard off\n"
	.string "your hands...\p"
	.string "As promised, here's your Evolutionary\n"
	.string "Item!$"

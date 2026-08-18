HauoliBeachfront_TouristBureau_MapScripts::
	.byte 0


HauoliBeachfront_TouristBureau_NPC_BellhopAtCounter::
# 5 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	lock
# 6 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	faceplayer
# 7 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_NPC_BellhopAtCounter_Text_0
# 8 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_BellhopAtCounter_Text_1
# 9 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 10 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end


HauoliBeachfront_TouristBureau_Pokemon_Machop::
# 16 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	lock
# 17 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	faceplayer
# 18 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_Pokemon_Machop_Text_0
# 19 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	playmoncry SPECIES_MACHOP, CRY_MODE_NORMAL
# 20 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_Pokemon_Machop_Text_1
# 21 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	waitmoncry
# 22 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 23 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end


HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee::
# 29 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	lock
# 30 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	faceplayer
# 31 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_Text_0
# 32 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_Text_1, MSGBOX_YESNO
# 33 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 34 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_2
HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_1:
# 40 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end

HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_2:
# 36 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_Text_0
# 37 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_Text_2
# 38 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
	goto HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_1


HauoliBeachfront_TouristBureau_Pokemon_Glaceon::
# 46 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	lock
# 47 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	faceplayer
# 48 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_Pokemon_Glaceon_Text_0
# 49 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	playmoncry SPECIES_GLACEON, CRY_MODE_NORMAL
# 50 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_Pokemon_Glaceon_Text_1
# 51 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	waitmoncry
# 52 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 53 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end


HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards::
# 59 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	lock
# 60 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	faceplayer
# 61 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_0
# 64 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_TOURIST_DIFFICULTIES
# 65 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_2
# 74 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_TOURIST_DIFFICULTIES
# 75 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_5
# 91 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_4
# 92 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 95 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	checkitem ITEM_PREMIER_BALL
# 96 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	delay 30
# 98 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_8
# 108 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_0
# 109 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_6
# 110 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 112 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	removeitem ITEM_PREMIER_BALL
# 113 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	delay 5
# 114 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	giveitem ITEM_POTION
# 115 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 117 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	delay 20
# 118 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	completequest QUEST_TOURIST_DIFFICULTIES
HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_4:
# 121 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end

HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_2:
# 67 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_1
# 68 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 69 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end

HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_5:
# 77 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_2
# 78 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 79 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	delay 20
# 80 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 81 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	delay 10
# 82 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_0
# 83 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_3
# 84 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 86 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	delay 20
# 87 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	startquest QUEST_TOURIST_DIFFICULTIES
	goto HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_4

HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_8:
# 100 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_0
# 101 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_5
# 102 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 103 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end


HauoliBeachfront_TouristBureau_NPC_BlackBelt::
# 127 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	lock
# 128 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	faceplayer
# 129 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_NPC_BlackBelt_Text_0
# 130 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_BlackBelt_Text_1
# 131 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 132 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end


HauoliBeachfront_TouristBureau_NPC_SightseerF::
# 138 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	lock
# 139 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	faceplayer
# 140 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_NPC_SightseerF_Text_0
# 141 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_SightseerF_Text_1
# 142 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 143 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end


HauoliBeachfront_TouristBureau_NPC_HexManiac::
# 149 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	lock
# 150 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	faceplayer
# 151 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_NPC_HexManiac_Text_0
# 152 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_NPC_HexManiac_Text_1
# 153 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 154 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
# 155 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	waitmovement 0
# 156 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end


HauoliBeachfront_TouristBureau_Pokemon_Litwick::
# 162 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	lock
# 163 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	faceplayer
# 164 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	setspeaker HauoliBeachfront_TouristBureau_Pokemon_Litwick_Text_0
# 165 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	playmoncry SPECIES_LITWICK, CRY_MODE_NORMAL
# 166 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	msgbox HauoliBeachfront_TouristBureau_Pokemon_Litwick_Text_1
# 167 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	waitmoncry
# 168 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	closemessage
# 169 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	release
	end


HauoliBeachfront_TouristBureau_NPC_BellhopAtCounter_Text_0:
# 7 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Bellhop$"

HauoliBeachfront_TouristBureau_NPC_BellhopAtCounter_Text_1:
# 8 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Welcome to the Alola Tourist Bureau! If\n"
	.string "you need anything, please don't\l"
	.string "hesitate to let us know.$"

HauoliBeachfront_TouristBureau_Pokemon_Machop_Text_0:
# 18 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Machop$"

HauoliBeachfront_TouristBureau_Pokemon_Machop_Text_1:
# 20 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Hyah!$"

HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_Text_0:
# 31 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Aether Employee$"

HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_Text_1:
# 32 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Welcome! Are you here to learn more\n"
	.string "about the {COLOR GREEN}Aether Foundation{COLOR DARK_GRAY}?$"

HauoliBeachfront_TouristBureau_NPC_AetherFoundationEmployee_Text_2:
# 37 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Wonderful! The {COLOR GREEN}Aether Foundation{COLOR DARK_GRAY} is\n"
	.string "the largest conservation organization\l"
	.string "in Alola. We work to protect wild\l"
	.string "Pokémon and their habitats.\p"
	.string "Sometimes, Pokémon are too hurt to be\n"
	.string "released back into the wild. That's why\l"
	.string "our wonderful boss, {COLOR GREEN}Lusamine{COLOR DARK_GRAY}, chose to\l"
	.string "build a floating home for all Pokémon:\l"
	.string "the Aether Paradise!$"

HauoliBeachfront_TouristBureau_Pokemon_Glaceon_Text_0:
# 48 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Glaceon$"

HauoliBeachfront_TouristBureau_Pokemon_Glaceon_Text_1:
# 50 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Blwee!$"

HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_0:
# 61 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Collector$"

HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_1:
# 67 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "I'm gonna catch a one-of-a-kind\n"
	.string "Pokémon with that Premier Ball!\p"
	.string "Probably something super unique, like...\n"
	.string "Gengar! Or... Umm... Charizard?$"

HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_2:
# 77 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Everyone says I'm only into Pokémon for\n"
	.string "the money, so I bought up all the {COLOR BLUE}TCG\l"
	.string "Packs{COLOR DARK_GRAY} from the local store. That'll show\l"
	.string "'em!\p"
	.string "People might stil make fun of me\n"
	.string "without a real Pokémon, though...$"

HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_3:
# 83 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "I've got an idea! If you bring me a\n"
	.string "{COLOR GREEN}Premier Ball{COLOR DARK_GRAY} to catch a sweet new\l"
	.string "Pokémon, I'll give you a {COLOR BLUE}TCG Pack{COLOR DARK_GRAY}. Deal?$"

HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_4:
# 91 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Ugh, finally! Do you have that {COLOR GREEN}Premier\n"
	.string "Ball{COLOR DARK_GRAY}?$"

HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_5:
# 101 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Guess not...\p"
	.string "I need a {COLOR GREEN}Premier Ball{COLOR DARK_GRAY} so I can catch a\n"
	.string "real-life Pokémon. Everyone will know\l"
	.string "how COOL I am!$"

HauoliBeachfront_TouristBureau_NPC_CollectorPlayingCards_Text_6:
# 109 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Hah! This is the coolest type of Poké\n"
	.string "ball by far!\p"
	.string "I suppose I can part with a {COLOR BLUE}TCG Pack{COLOR DARK_GRAY}...\n"
	.string "But if you pull anything good, I want it\l"
	.string "back!$"

HauoliBeachfront_TouristBureau_NPC_BlackBelt_Text_0:
# 129 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Black Belt$"

HauoliBeachfront_TouristBureau_NPC_BlackBelt_Text_1:
# 130 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "The Kahuna of Melemele Island likes to\n"
	.string "use Fighting-type Pokémon. Maybe a\l"
	.string "team of Psychic-type or Flying-type\l"
	.string "Pokémon could stand a chance?$"

HauoliBeachfront_TouristBureau_NPC_SightseerF_Text_0:
# 140 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Sightseer$"

HauoliBeachfront_TouristBureau_NPC_SightseerF_Text_1:
# 141 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Hau'oli City is so big! I had to come\n"
	.string "here for a breather.$"

HauoliBeachfront_TouristBureau_NPC_HexManiac_Text_0:
# 151 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Hex Maniac$"

HauoliBeachfront_TouristBureau_NPC_HexManiac_Text_1:
# 152 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Yeah, I put my {COLOR BLUE}Litwick{COLOR DARK_GRAY} on the table! So\n"
	.string "what?! It's a candle!$"

HauoliBeachfront_TouristBureau_Pokemon_Litwick_Text_0:
# 164 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Litwick$"

HauoliBeachfront_TouristBureau_Pokemon_Litwick_Text_1:
# 166 "data//maps/HauoliBeachfront_TouristBureau/scripts.pory"
	.string "Fwiss...$"

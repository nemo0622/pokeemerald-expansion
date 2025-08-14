PalatiCity_ArchaeologyInstitute_MapScripts::
	.byte 0


PalatiCity_ArchInstitute_EventScript_Farmer::
# 5 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 6 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	faceplayer
# 7 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Farmer_Text_0
# 8 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Farmer_Text_1
# 9 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 10 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Maniac::
# 16 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 17 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	faceplayer
# 18 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Maniac_Text_0
# 21 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_BLUE_SHARD_FOR_ARCHAEOLOGY
# 22 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PalatiCity_ArchInstitute_EventScript_Maniac_2
# 33 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BLUE_SHARD_FOR_ARCHAEOLOGY
# 34 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PalatiCity_ArchInstitute_EventScript_Maniac_5
# 45 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Maniac_Text_3
# 46 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 48 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	checkitem ITEM_BLUE_SHARD
# 49 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	delay 30
# 50 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq PalatiCity_ArchInstitute_EventScript_Maniac_8
# 58 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	emote 2, EMOTE_HEART
# 59 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Maniac_Text_0
# 60 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Maniac_Text_5
# 61 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 62 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	delay 5
# 63 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 64 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 65 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	delay 20
# 66 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	completequest QUEST_BLUE_SHARD_FOR_ARCHAEOLOGY
PalatiCity_ArchInstitute_EventScript_Maniac_4:
# 69 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end

PalatiCity_ArchInstitute_EventScript_Maniac_2:
# 24 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Maniac_Text_1
# 25 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 26 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 27 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	waitmovement 0
# 28 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end

PalatiCity_ArchInstitute_EventScript_Maniac_5:
# 36 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Maniac_Text_2
# 37 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 38 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 39 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	waitmovement 0
# 40 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	delay 20
# 41 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	startquest QUEST_BLUE_SHARD_FOR_ARCHAEOLOGY
	goto PalatiCity_ArchInstitute_EventScript_Maniac_4

PalatiCity_ArchInstitute_EventScript_Maniac_8:
# 52 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Maniac_Text_0
# 53 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Maniac_Text_4
# 54 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
	goto PalatiCity_ArchInstitute_EventScript_Maniac_4


PalatiCity_ArchInstitute_EventScript_Beauty::
# 75 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 76 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	faceplayer
# 77 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Beauty_Text_0
# 78 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Beauty_Text_1
# 79 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 80 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Camper::
# 86 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 87 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Camper_Text_0
# 88 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Camper_Text_1
# 89 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 90 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 91 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	waitmovement 0
# 92 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Camper_Text_0
# 93 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Camper_Text_2
# 94 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 95 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	delay 20
# 96 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 97 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 98 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	waitmovement 0
# 99 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Camper_Text_0
# 100 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Camper_Text_3
# 101 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 102 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 103 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	waitmovement 0
# 104 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Picnicker::
# 110 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 111 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Picnicker_Text_0
# 112 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Picnicker_Text_1
# 113 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 114 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Lass::
# 120 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 121 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	faceplayer
# 122 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Lass_Text_0
# 123 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Lass_Text_1
# 124 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 125 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Scientist::
# 131 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 132 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	faceplayer
# 133 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Scientist_Text_0
# 134 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Scientist_Text_1
# 135 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 136 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Baltoy::
# 142 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 143 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	faceplayer
# 144 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Baltoy_Text_0
# 145 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	playmoncry SPECIES_BALTOY, CRY_MODE_NORMAL
# 146 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Baltoy_Text_1
# 147 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	waitmoncry
# 148 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 149 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Farmer_Text_0:
# 7 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Farmer$"

PalatiCity_ArchInstitute_EventScript_Farmer_Text_1:
# 8 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "This building houses important\n"
	.string "archaeological finds from this island. I\l"
	.string "wonder what else is laying below the\l"
	.string "ground...$"

PalatiCity_ArchInstitute_EventScript_Maniac_Text_0:
# 18 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Ruin Maniac$"

PalatiCity_ArchInstitute_EventScript_Maniac_Text_1:
# 24 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "The Blue Shard you brought me matched\n"
	.string "with local pottery styles! Could early\l"
	.string "Ilian culture have spread out from\l"
	.string "Palati City? This is a huge discovery!$"

PalatiCity_ArchInstitute_EventScript_Maniac_Text_2:
# 36 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Many households in Ilios have replicas\n"
	.string "of this pottery piece, but this one is\l"
	.string "the earliest known! It's incredible that\l"
	.string "the blue colors have survived all this\l"
	.string "time... I need to learn more!\p"
	.string "I hypothesize that this pottery design\n"
	.string "was popular in ancient Ilios, spreading\l"
	.string "around the region like it has today.\l"
	.string "Bring me a {COLOR GREEN}Blue Shard{COLOR DARK_GRAY} so I can\l"
	.string "investigate further!$"

PalatiCity_ArchInstitute_EventScript_Maniac_Text_3:
# 45 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "I just can't take my eyes off this\n"
	.string "ancient pottery...\p"
	.string "Oh! Did you bring what I asked?$"

PalatiCity_ArchInstitute_EventScript_Maniac_Text_4:
# 53 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Hmm, I don't see it in your bag...\p"
	.string "Bring me a {COLOR GREEN}Blue Shard{COLOR DARK_GRAY} so I can\n"
	.string "investigate my hypothesis about this\l"
	.string "pottery! I'll give you something for\l"
	.string "helping me!$"

PalatiCity_ArchInstitute_EventScript_Maniac_Text_5:
# 60 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Wait, that's... It can only be one thing!\n"
	.string "That Blue Shard must have come from an\l"
	.string "ancient piece of pottery like this!\p"
	.string "I'll take this for further study. Here,\n"
	.string "take this - I found it while digging for\l"
	.string "pottery pieces.$"

PalatiCity_ArchInstitute_EventScript_Beauty_Text_0:
# 77 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Beauty$"

PalatiCity_ArchInstitute_EventScript_Beauty_Text_1:
# 78 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "The Archaeological Institute of Palati\n"
	.string "City could use more space and more\l"
	.string "exhibits. Unfortunately, when funding\l"
	.string "is tight, it's hard to make expansions\l"
	.string "like that. I still appreciate what we\l"
	.string "have!$"

PalatiCity_ArchInstitute_EventScript_Camper_Text_0:
# 87 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Camper$"

PalatiCity_ArchInstitute_EventScript_Camper_Text_1:
# 88 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Check out those two old pieces of art...\n"
	.string "They're sitting so close together...$"

PalatiCity_ArchInstitute_EventScript_Camper_Text_2:
# 93 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "That's us if we were old pottery, babe.$"

PalatiCity_ArchInstitute_EventScript_Camper_Text_3:
# 100 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "H-hey! I'm trying to be emotional here!$"

PalatiCity_ArchInstitute_EventScript_Picnicker_Text_0:
# 111 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Picnicker$"

PalatiCity_ArchInstitute_EventScript_Picnicker_Text_1:
# 112 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Uh oh, here goes my boyfriend, with his\n"
	.string "crummy pick-up lines...$"

PalatiCity_ArchInstitute_EventScript_Lass_Text_0:
# 122 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Lass$"

PalatiCity_ArchInstitute_EventScript_Lass_Text_1:
# 123 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "I'm working on my thesis paper about\n"
	.string "the history of Ilios. It seems like the\l"
	.string "people of Kaptara Island were some of\l"
	.string "the first to develop complex societies.$"

PalatiCity_ArchInstitute_EventScript_Scientist_Text_0:
# 133 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Scientist$"

PalatiCity_ArchInstitute_EventScript_Scientist_Text_1:
# 134 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Check it out! The digital archives show\n"
	.string "that there were Baltoy in ancient Ilios,\l"
	.string "just like mine!$"

PalatiCity_ArchInstitute_EventScript_Baltoy_Text_0:
# 144 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Baltoy$"

PalatiCity_ArchInstitute_EventScript_Baltoy_Text_1:
# 146 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Pewewew!$"

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
	givedecoration DECOR_MINOTAUROS_PLAQUE
# 64 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 65 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	delay 5
# 66 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Maniac_Text_0
# 67 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Maniac_Text_6
# 68 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 69 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	delay 20
# 70 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	completequest QUEST_BLUE_SHARD_FOR_ARCHAEOLOGY
PalatiCity_ArchInstitute_EventScript_Maniac_4:
# 73 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
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
# 79 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 80 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	faceplayer
# 81 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Beauty_Text_0
# 82 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Beauty_Text_1
# 83 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 84 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Camper::
# 90 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 91 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Camper_Text_0
# 92 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Camper_Text_1
# 93 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 94 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 95 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	waitmovement 0
# 96 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Camper_Text_0
# 97 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Camper_Text_2
# 98 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 99 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	delay 20
# 100 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 101 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	applymovement 4, Common_Movement_FacePlayer
# 102 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	waitmovement 0
# 103 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Camper_Text_0
# 104 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Camper_Text_3
# 105 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 106 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 107 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	waitmovement 0
# 108 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Picnicker::
# 114 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 115 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Picnicker_Text_0
# 116 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Picnicker_Text_1
# 117 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 118 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Lass::
# 124 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 125 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	faceplayer
# 126 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Lass_Text_0
# 127 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Lass_Text_1
# 128 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 129 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Scientist::
# 135 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 136 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	faceplayer
# 137 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Scientist_Text_0
# 138 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Scientist_Text_1
# 139 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 140 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	release
	end


PalatiCity_ArchInstitute_EventScript_Baltoy::
# 146 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	lock
# 147 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	faceplayer
# 148 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	speakername PalatiCity_ArchInstitute_EventScript_Baltoy_Text_0
# 149 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	playmoncry SPECIES_BALTOY, CRY_MODE_NORMAL
# 150 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	msgbox PalatiCity_ArchInstitute_EventScript_Baltoy_Text_1
# 151 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	waitmoncry
# 152 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	closemessage
# 153 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
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

PalatiCity_ArchInstitute_EventScript_Maniac_Text_6:
# 67 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "That Decoration was likely connected\n"
	.string "to ancient Palati culture. Hang it up\l"
	.string "somewhere nice!$"

PalatiCity_ArchInstitute_EventScript_Beauty_Text_0:
# 81 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Beauty$"

PalatiCity_ArchInstitute_EventScript_Beauty_Text_1:
# 82 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "The Archaeological Institute of Palati\n"
	.string "City could use more space and more\l"
	.string "exhibits. Unfortunately, when funding\l"
	.string "is tight, it's hard to make expansions\l"
	.string "like that. I still appreciate what we\l"
	.string "have!$"

PalatiCity_ArchInstitute_EventScript_Camper_Text_0:
# 91 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Camper$"

PalatiCity_ArchInstitute_EventScript_Camper_Text_1:
# 92 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Check out those two old pieces of art...\n"
	.string "They're sitting so close together...$"

PalatiCity_ArchInstitute_EventScript_Camper_Text_2:
# 97 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "That's us if we were old pottery, babe.$"

PalatiCity_ArchInstitute_EventScript_Camper_Text_3:
# 104 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "H-hey! I'm trying to be emotional here!$"

PalatiCity_ArchInstitute_EventScript_Picnicker_Text_0:
# 115 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Picnicker$"

PalatiCity_ArchInstitute_EventScript_Picnicker_Text_1:
# 116 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Uh oh, here goes my boyfriend, with his\n"
	.string "crummy pick-up lines...$"

PalatiCity_ArchInstitute_EventScript_Lass_Text_0:
# 126 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Lass$"

PalatiCity_ArchInstitute_EventScript_Lass_Text_1:
# 127 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "I'm working on my thesis paper about\n"
	.string "the history of Ilios. It seems like the\l"
	.string "people of Kaptara Island were some of\l"
	.string "the first to develop complex societies.$"

PalatiCity_ArchInstitute_EventScript_Scientist_Text_0:
# 137 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Scientist$"

PalatiCity_ArchInstitute_EventScript_Scientist_Text_1:
# 138 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Check it out! The digital archives show\n"
	.string "that there were Baltoy in ancient Ilios,\l"
	.string "just like mine!$"

PalatiCity_ArchInstitute_EventScript_Baltoy_Text_0:
# 148 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Baltoy$"

PalatiCity_ArchInstitute_EventScript_Baltoy_Text_1:
# 150 "data/maps/PalatiCity_ArchaeologyInstitute/scripts.pory"
	.string "Pewewew!$"

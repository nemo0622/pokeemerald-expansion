SofosCity_House9_MapScripts::
	.byte 0


SofosCity_House9_EventScript_Nemo::
# 5 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 6 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 10 "data/maps/SofosCity_House9/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_NEMOS_QUEST
# 11 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_House9_EventScript_Nemo_2
# 20 "data/maps/SofosCity_House9/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_NEMOS_QUEST
# 21 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_House9_EventScript_Nemo_5
# 31 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_3
# 32 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 34 "data/maps/SofosCity_House9/scripts.pory"
	getcaughtmon SPECIES_KOMALA
# 35 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_House9_EventScript_Nemo_9
SofosCity_House9_EventScript_Nemo_8:
# 47 "data/maps/SofosCity_House9/scripts.pory"
	delay 30
# 49 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_House9_EventScript_Nemo_11
# 57 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 58 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_5
# 59 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 60 "data/maps/SofosCity_House9/scripts.pory"
	delay 5
# 61 "data/maps/SofosCity_House9/scripts.pory"
	giveitem ITEM_GLIMMERING_CHARM
# 62 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 63 "data/maps/SofosCity_House9/scripts.pory"
	delay 5
# 64 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 65 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_6
# 66 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 68 "data/maps/SofosCity_House9/scripts.pory"
	delay 20
# 69 "data/maps/SofosCity_House9/scripts.pory"
	completequest QUEST_NEMOS_QUEST
SofosCity_House9_EventScript_Nemo_4:
# 72 "data/maps/SofosCity_House9/scripts.pory"
	release
	end

SofosCity_House9_EventScript_Nemo_2:
# 13 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_1
# 14 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 15 "data/maps/SofosCity_House9/scripts.pory"
	release
	end

SofosCity_House9_EventScript_Nemo_5:
# 23 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_2
# 24 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 26 "data/maps/SofosCity_House9/scripts.pory"
	delay 20
# 27 "data/maps/SofosCity_House9/scripts.pory"
	startquest QUEST_NEMOS_QUEST
	goto SofosCity_House9_EventScript_Nemo_4

SofosCity_House9_EventScript_Nemo_9:
# 37 "data/maps/SofosCity_House9/scripts.pory"
	getcaughtmon SPECIES_SPHEAL
# 38 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_House9_EventScript_Nemo_14
	goto SofosCity_House9_EventScript_Nemo_8

SofosCity_House9_EventScript_Nemo_11:
# 51 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 52 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_4
# 53 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
	goto SofosCity_House9_EventScript_Nemo_4

SofosCity_House9_EventScript_Nemo_14:
# 40 "data/maps/SofosCity_House9/scripts.pory"
	getcaughtmon SPECIES_ARCHEN
# 41 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_House9_EventScript_Nemo_16
	goto SofosCity_House9_EventScript_Nemo_8

SofosCity_House9_EventScript_Nemo_16:
# 43 "data/maps/SofosCity_House9/scripts.pory"
	getcaughtmon SPECIES_ORANGURU
	goto SofosCity_House9_EventScript_Nemo_8


SofosCity_House9_EventScript_Tyrunt::
# 78 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 79 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 80 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Tyrunt_Text_0
# 81 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 82 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Tyrunt_Text_1
# 83 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 84 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 85 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Amaura::
# 90 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 91 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 92 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Amaura_Text_0
# 93 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_AMAURA, CRY_MODE_NORMAL
# 94 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Amaura_Text_1
# 95 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 96 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 97 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Archen::
# 102 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 103 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 104 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Archen_Text_0
# 105 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_ARCHEN, CRY_MODE_NORMAL
# 106 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Archen_Text_1
# 107 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 108 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 109 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Spheal::
# 114 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 115 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 116 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Spheal_Text_0
# 117 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
# 118 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Spheal_Text_1
# 119 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 120 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 121 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Nemo_Text_0:
# 7 "data/maps/SofosCity_House9/scripts.pory"
	.string "Nemo$"

SofosCity_House9_EventScript_Nemo_Text_1:
# 13 "data/maps/SofosCity_House9/scripts.pory"
	.string "I hope you're enjoying your time in the\n"
	.string "Ilios Region!$"

SofosCity_House9_EventScript_Nemo_Text_2:
# 23 "data/maps/SofosCity_House9/scripts.pory"
	.string "Chaire! I'm Nemo, the developer of\n"
	.string "Pokémon Lazarus. I hope you're enjoying\l"
	.string "the Ilios Region - a lot of love and time\l"
	.string "has gone into it!\p"
	.string "I suppose I should give you a Quest,\n"
	.string "huh? Hmm... how about you try to go find\l"
	.string "some of {COLOR GREEN}my favorite Pokémon{COLOR DARK_GRAY}?\p"
	.string "Let me know when you've caught the\n"
	.string "{COLOR GREEN}Sleepy Bear, Spherical, First Bird, and\l"
	.string "Wild Sage Pokémon{COLOR DARK_GRAY}. Those are their\l"
	.string "Pokédex classifications - you'll have\l"
	.string "to figure out which Pokémon they are!$"

SofosCity_House9_EventScript_Nemo_Text_3:
# 31 "data/maps/SofosCity_House9/scripts.pory"
	.string "Hey there! You having fun filling up the\n"
	.string "Pokédex? I hope it's making you think\l"
	.string "about Biology and conservation. That's\l"
	.string "the whole motivation behind making this\l"
	.string "game, you know!\p"
	.string "Right, the Quest I gave you. Let's see\n"
	.string "if you've caught the Pokémon I\l"
	.string "requested!$"

SofosCity_House9_EventScript_Nemo_Text_4:
# 52 "data/maps/SofosCity_House9/scripts.pory"
	.string "Looks like you've still got some\n"
	.string "Pokémon catching to do!\p"
	.string "Remember, I'm looking for the {COLOR GREEN}Sleepy\n"
	.string "Bear, Spherical, First Bird, and Wild\l"
	.string "Sage Pokémon{COLOR DARK_GRAY}. Come visit me when you've\l"
	.string "caught all 4 Pokémon!$"

SofosCity_House9_EventScript_Nemo_Text_5:
# 58 "data/maps/SofosCity_House9/scripts.pory"
	.string "Komala... Spheal... Archen... and\n"
	.string "Oranguru! Hey, you've caught them all!\l"
	.string "Those are some of my favorite little\l"
	.string "fellas.\p"
	.string "Here's something to help you on your\n"
	.string "journey.$"

SofosCity_House9_EventScript_Nemo_Text_6:
# 65 "data/maps/SofosCity_House9/scripts.pory"
	.string "The {COLOR GREEN}Glimmering Charm{COLOR DARK_GRAY} boosts the odds of\n"
	.string "finding wild Pokémon {COLOR GREEN}holding an item{COLOR DARK_GRAY}!\l"
	.string "That should be helpful if you're looking\l"
	.string "for a specific item.\p"
	.string "I hope you continue to enjoy your time\n"
	.string "in the Ilios Region! Working on the game\l"
	.string "while finishing college and starting a\l"
	.string "Master's program in Biology has been a\l"
	.string "lot to handle, but I hope the love and\l"
	.string "care I feel for wildlife and Pokémon\l"
	.string "shows in the final product.$"

SofosCity_House9_EventScript_Tyrunt_Text_0:
# 80 "data/maps/SofosCity_House9/scripts.pory"
	.string "Tyrunt$"

SofosCity_House9_EventScript_Tyrunt_Text_1:
# 82 "data/maps/SofosCity_House9/scripts.pory"
	.string "Wroooar!$"

SofosCity_House9_EventScript_Amaura_Text_0:
# 92 "data/maps/SofosCity_House9/scripts.pory"
	.string "Amaura$"

SofosCity_House9_EventScript_Amaura_Text_1:
# 94 "data/maps/SofosCity_House9/scripts.pory"
	.string "Breee!$"

SofosCity_House9_EventScript_Archen_Text_0:
# 104 "data/maps/SofosCity_House9/scripts.pory"
	.string "Archen$"

SofosCity_House9_EventScript_Archen_Text_1:
# 106 "data/maps/SofosCity_House9/scripts.pory"
	.string "Caww!$"

SofosCity_House9_EventScript_Spheal_Text_0:
# 116 "data/maps/SofosCity_House9/scripts.pory"
	.string "Spheal$"

SofosCity_House9_EventScript_Spheal_Text_1:
# 118 "data/maps/SofosCity_House9/scripts.pory"
	.string "Clap clap!$"

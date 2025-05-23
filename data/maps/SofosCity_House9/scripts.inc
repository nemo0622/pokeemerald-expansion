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
	checkforspecieslocal SPECIES_ORICORIO_BAILE, OPEN_PARTY_SCREEN
# 35 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SofosCity_House9_EventScript_Nemo_9
SofosCity_House9_EventScript_Nemo_8:
# 56 "data/maps/SofosCity_House9/scripts.pory"
	delay 30
# 58 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_House9_EventScript_Nemo_11
# 66 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 67 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_8
# 68 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 69 "data/maps/SofosCity_House9/scripts.pory"
	delay 5
# 70 "data/maps/SofosCity_House9/scripts.pory"
	giveitem ITEM_GLIMMERING_CHARM
# 71 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 72 "data/maps/SofosCity_House9/scripts.pory"
	delay 5
# 73 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 74 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_9
# 75 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 77 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 78 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_10
# 79 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 80 "data/maps/SofosCity_House9/scripts.pory"
	delay 5
# 81 "data/maps/SofosCity_House9/scripts.pory"
	givedecoration DECOR_ORICORIO_DOLL
# 82 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 84 "data/maps/SofosCity_House9/scripts.pory"
	delay 20
# 85 "data/maps/SofosCity_House9/scripts.pory"
	completequest QUEST_NEMOS_QUEST
SofosCity_House9_EventScript_Nemo_4:
# 88 "data/maps/SofosCity_House9/scripts.pory"
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
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 38 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_4
# 39 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 40 "data/maps/SofosCity_House9/scripts.pory"
	checkforspecieslocal SPECIES_ORICORIO_POM_POM, OPEN_PARTY_SCREEN
# 41 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SofosCity_House9_EventScript_Nemo_14
	goto SofosCity_House9_EventScript_Nemo_8

SofosCity_House9_EventScript_Nemo_11:
# 60 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 61 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_7
# 62 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
	goto SofosCity_House9_EventScript_Nemo_4

SofosCity_House9_EventScript_Nemo_14:
# 43 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 44 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_5
# 45 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 46 "data/maps/SofosCity_House9/scripts.pory"
	checkforspecieslocal SPECIES_ORICORIO_PAU, OPEN_PARTY_SCREEN
# 47 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SofosCity_House9_EventScript_Nemo_16
	goto SofosCity_House9_EventScript_Nemo_8

SofosCity_House9_EventScript_Nemo_16:
# 49 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 50 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_6
# 51 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 52 "data/maps/SofosCity_House9/scripts.pory"
	checkforspecieslocal SPECIES_ORICORIO_SENSU, OPEN_PARTY_SCREEN
	goto SofosCity_House9_EventScript_Nemo_8


SofosCity_House9_EventScript_Tyrunt::
# 94 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 95 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 96 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Tyrunt_Text_0
# 97 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 98 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Tyrunt_Text_1
# 99 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 100 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 101 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Amaura::
# 106 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 107 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 108 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Amaura_Text_0
# 109 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_AMAURA, CRY_MODE_NORMAL
# 110 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Amaura_Text_1
# 111 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 112 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 113 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Archen::
# 118 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 119 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 120 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Archen_Text_0
# 121 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_ARCHEN, CRY_MODE_NORMAL
# 122 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Archen_Text_1
# 123 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 124 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 125 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Spheal::
# 130 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 131 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 132 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Spheal_Text_0
# 133 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
# 134 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Spheal_Text_1
# 135 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 136 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 137 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Nemo_Text_0:
# 7 "data/maps/SofosCity_House9/scripts.pory"
	.string "Nemo$"

SofosCity_House9_EventScript_Nemo_Text_1:
# 13 "data/maps/SofosCity_House9/scripts.pory"
	.string "I hope you're enjoying your time in the\n"
	.string "Ilios Region! I should get back to my\l"
	.string "University work, ehehe.$"

SofosCity_House9_EventScript_Nemo_Text_2:
# 23 "data/maps/SofosCity_House9/scripts.pory"
	.string "Chaire! I'm Nemo, the developer of\n"
	.string "Pokémon Lazarus. I hope you're enjoying\l"
	.string "the Ilios Region - a lot of love and time\l"
	.string "has gone into it!\p"
	.string "My University Capstone paper was on\n"
	.string "Hawaiian Honeycreepers, a group of\l"
	.string "birds endemic to Hawaii. Oricorio was\l"
	.string "inspired by these incredible birds, so it\l"
	.string "has become one of my favorites.\p"
	.string "Show me {COLOR GREEN}all four Oricorio Forms{COLOR DARK_GRAY} in your\n"
	.string "party, and I'll give you something\l"
	.string "special!$"

SofosCity_House9_EventScript_Nemo_Text_3:
# 31 "data/maps/SofosCity_House9/scripts.pory"
	.string "Hey there! You having fun filling up the\n"
	.string "Pokédex? I hope it's making you think\l"
	.string "about Biology and conservation. That's\l"
	.string "the whole motivation behind making this\l"
	.string "game, you know!\p"
	.string "Right, the Quest I gave you. Show me\n"
	.string "your {COLOR GREEN}Oricorio Forms{COLOR DARK_GRAY}! First, your {COLOR GREEN}Baile\l"
	.string "Form{COLOR DARK_GRAY} Oricorio...$"

SofosCity_House9_EventScript_Nemo_Text_4:
# 38 "data/maps/SofosCity_House9/scripts.pory"
	.string "Oricorio's {COLOR GREEN}Baile Form{COLOR DARK_GRAY}! Look at that\n"
	.string "amazing dancing! Now, how about\l"
	.string "Oricorio {COLOR GREEN}Pom Pom Form{COLOR DARK_GRAY}?$"

SofosCity_House9_EventScript_Nemo_Text_5:
# 44 "data/maps/SofosCity_House9/scripts.pory"
	.string "Oricorio's {COLOR GREEN}Pom Pom Form{COLOR DARK_GRAY}! I love their\n"
	.string "energy. Now, how about Oricorio {COLOR GREEN}Pau\l"
	.string "Form{COLOR DARK_GRAY}?$"

SofosCity_House9_EventScript_Nemo_Text_6:
# 50 "data/maps/SofosCity_House9/scripts.pory"
	.string "Oricorio's {COLOR GREEN}Pau Form{COLOR DARK_GRAY}! Swaying like that\n"
	.string "makes me want to dance, too. Lastly, how\l"
	.string "about Oricorio {COLOR GREEN}Sensu Form{COLOR DARK_GRAY}?$"

SofosCity_House9_EventScript_Nemo_Text_7:
# 61 "data/maps/SofosCity_House9/scripts.pory"
	.string "Looks like you've still got some\n"
	.string "Oricorio catching to do!\p"
	.string "Remember, I want you to show me {COLOR GREEN}all four\n"
	.string "Oricorio Forms{COLOR DARK_GRAY}. Come visit me when\l"
	.string "you've caught them!$"

SofosCity_House9_EventScript_Nemo_Text_8:
# 67 "data/maps/SofosCity_House9/scripts.pory"
	.string "Fire, Electric, Psychic, and Ghost! Hey,\n"
	.string "you've caught them all! My University\l"
	.string "Capstone was on Hawaiian\l"
	.string "Honeycreepers, so Oricorio will always\l"
	.string "be special to me.\p"
	.string "I'm sure that was a lot of work, ehehe.\n"
	.string "Here's something to help you on your\l"
	.string "journey.$"

SofosCity_House9_EventScript_Nemo_Text_9:
# 74 "data/maps/SofosCity_House9/scripts.pory"
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

SofosCity_House9_EventScript_Nemo_Text_10:
# 78 "data/maps/SofosCity_House9/scripts.pory"
	.string "Oh wait, one more thing! Here's a Cabin\n"
	.string "Decoration from me!$"

SofosCity_House9_EventScript_Tyrunt_Text_0:
# 96 "data/maps/SofosCity_House9/scripts.pory"
	.string "Tyrunt$"

SofosCity_House9_EventScript_Tyrunt_Text_1:
# 98 "data/maps/SofosCity_House9/scripts.pory"
	.string "Wroooar!$"

SofosCity_House9_EventScript_Amaura_Text_0:
# 108 "data/maps/SofosCity_House9/scripts.pory"
	.string "Amaura$"

SofosCity_House9_EventScript_Amaura_Text_1:
# 110 "data/maps/SofosCity_House9/scripts.pory"
	.string "Breee!$"

SofosCity_House9_EventScript_Archen_Text_0:
# 120 "data/maps/SofosCity_House9/scripts.pory"
	.string "Archen$"

SofosCity_House9_EventScript_Archen_Text_1:
# 122 "data/maps/SofosCity_House9/scripts.pory"
	.string "Caww!$"

SofosCity_House9_EventScript_Spheal_Text_0:
# 132 "data/maps/SofosCity_House9/scripts.pory"
	.string "Spheal$"

SofosCity_House9_EventScript_Spheal_Text_1:
# 134 "data/maps/SofosCity_House9/scripts.pory"
	.string "Clap clap!$"

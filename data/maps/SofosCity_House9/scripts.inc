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
	checkforspecieslocal SPECIES_ORICORIO_BAILE, NO_PARTY_SCREEN
# 35 "data/maps/SofosCity_House9/scripts.pory"
	delay 30
# 36 "data/maps/SofosCity_House9/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SofosCity_House9_EventScript_NemoMissingBirds
# 38 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 39 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_4
# 40 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 41 "data/maps/SofosCity_House9/scripts.pory"
	checkforspecieslocal SPECIES_ORICORIO_POM_POM, NO_PARTY_SCREEN
# 42 "data/maps/SofosCity_House9/scripts.pory"
	delay 30
# 43 "data/maps/SofosCity_House9/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SofosCity_House9_EventScript_NemoMissingBirds
# 45 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 46 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_5
# 47 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 48 "data/maps/SofosCity_House9/scripts.pory"
	checkforspecieslocal SPECIES_ORICORIO_PAU, NO_PARTY_SCREEN
# 49 "data/maps/SofosCity_House9/scripts.pory"
	delay 30
# 50 "data/maps/SofosCity_House9/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SofosCity_House9_EventScript_NemoMissingBirds
# 52 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 53 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_6
# 54 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 55 "data/maps/SofosCity_House9/scripts.pory"
	checkforspecieslocal SPECIES_ORICORIO_SENSU, NO_PARTY_SCREEN
# 56 "data/maps/SofosCity_House9/scripts.pory"
	delay 30
# 57 "data/maps/SofosCity_House9/scripts.pory"
	goto_if_eq VAR_RESULT, 0, SofosCity_House9_EventScript_NemoMissingBirds
# 59 "data/maps/SofosCity_House9/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_House9_EventScript_Nemo_8
# 67 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 68 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_8
# 69 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 70 "data/maps/SofosCity_House9/scripts.pory"
	delay 5
# 71 "data/maps/SofosCity_House9/scripts.pory"
	giveitem ITEM_GLIMMERING_CHARM
# 72 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 73 "data/maps/SofosCity_House9/scripts.pory"
	delay 5
# 74 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 75 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_9
# 76 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 78 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 79 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_10
# 80 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 81 "data/maps/SofosCity_House9/scripts.pory"
	delay 5
# 82 "data/maps/SofosCity_House9/scripts.pory"
	givedecoration DECOR_ORICORIO_DOLL
# 83 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 85 "data/maps/SofosCity_House9/scripts.pory"
	delay 20
# 86 "data/maps/SofosCity_House9/scripts.pory"
	completequest QUEST_NEMOS_QUEST
SofosCity_House9_EventScript_Nemo_4:
# 89 "data/maps/SofosCity_House9/scripts.pory"
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

SofosCity_House9_EventScript_Nemo_8:
# 61 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 62 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Nemo_Text_7
# 63 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
	goto SofosCity_House9_EventScript_Nemo_4


SofosCity_House9_EventScript_NemoMissingBirds::
# 95 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Nemo_Text_0
# 96 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_NemoMissingBirds_Text_0
# 97 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 98 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Tyrunt::
# 104 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 105 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 106 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Tyrunt_Text_0
# 107 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_TYRUNT, CRY_MODE_NORMAL
# 108 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Tyrunt_Text_1
# 109 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 110 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 111 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Amaura::
# 116 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 117 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 118 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Amaura_Text_0
# 119 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_AMAURA, CRY_MODE_NORMAL
# 120 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Amaura_Text_1
# 121 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 122 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 123 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Archen::
# 128 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 129 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 130 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Archen_Text_0
# 131 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_ARCHEN, CRY_MODE_NORMAL
# 132 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Archen_Text_1
# 133 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 134 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 135 "data/maps/SofosCity_House9/scripts.pory"
	release
	end


SofosCity_House9_EventScript_Spheal::
# 140 "data/maps/SofosCity_House9/scripts.pory"
	lock
# 141 "data/maps/SofosCity_House9/scripts.pory"
	faceplayer
# 142 "data/maps/SofosCity_House9/scripts.pory"
	speakername SofosCity_House9_EventScript_Spheal_Text_0
# 143 "data/maps/SofosCity_House9/scripts.pory"
	playmoncry SPECIES_SPHEAL, CRY_MODE_NORMAL
# 144 "data/maps/SofosCity_House9/scripts.pory"
	msgbox SofosCity_House9_EventScript_Spheal_Text_1
# 145 "data/maps/SofosCity_House9/scripts.pory"
	waitmoncry
# 146 "data/maps/SofosCity_House9/scripts.pory"
	closemessage
# 147 "data/maps/SofosCity_House9/scripts.pory"
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
# 39 "data/maps/SofosCity_House9/scripts.pory"
	.string "Oricorio's {COLOR GREEN}Baile Form{COLOR DARK_GRAY}! Look at that\n"
	.string "amazing dancing! Now, how about\l"
	.string "Oricorio {COLOR GREEN}Pom Pom Form{COLOR DARK_GRAY}?$"

SofosCity_House9_EventScript_Nemo_Text_5:
# 46 "data/maps/SofosCity_House9/scripts.pory"
	.string "Oricorio's {COLOR GREEN}Pom Pom Form{COLOR DARK_GRAY}! I love their\n"
	.string "energy. Now, how about Oricorio {COLOR GREEN}Pau\l"
	.string "Form{COLOR DARK_GRAY}?$"

SofosCity_House9_EventScript_Nemo_Text_6:
# 53 "data/maps/SofosCity_House9/scripts.pory"
	.string "Oricorio's {COLOR GREEN}Pau Form{COLOR DARK_GRAY}! Swaying like that\n"
	.string "makes me want to dance, too. Lastly, how\l"
	.string "about Oricorio {COLOR GREEN}Sensu Form{COLOR DARK_GRAY}?$"

SofosCity_House9_EventScript_Nemo_Text_7:
# 62 "data/maps/SofosCity_House9/scripts.pory"
	.string "Looks like you've still got some\n"
	.string "Oricorio catching to do!\p"
	.string "Remember, I want you to show me {COLOR GREEN}all four\n"
	.string "Oricorio Forms{COLOR DARK_GRAY}. Come visit me when\l"
	.string "you've caught them!$"

SofosCity_House9_EventScript_Nemo_Text_8:
# 68 "data/maps/SofosCity_House9/scripts.pory"
	.string "Fire, Electric, Psychic, and Ghost! Hey,\n"
	.string "you've caught them all! My University\l"
	.string "Capstone was on Hawaiian\l"
	.string "Honeycreepers, so Oricorio will always\l"
	.string "be special to me.\p"
	.string "I'm sure that was a lot of work, ehehe.\n"
	.string "Here's something to help you on your\l"
	.string "journey.$"

SofosCity_House9_EventScript_Nemo_Text_9:
# 75 "data/maps/SofosCity_House9/scripts.pory"
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
# 79 "data/maps/SofosCity_House9/scripts.pory"
	.string "Oh wait, one more thing! Here's a Cabin\n"
	.string "Decoration from me!$"

SofosCity_House9_EventScript_NemoMissingBirds_Text_0:
# 96 "data/maps/SofosCity_House9/scripts.pory"
	.string "Hm, looks like you're missing that\n"
	.string "Oricorio form.\p"
	.string "Remember, I want you to show me {COLOR GREEN}all four\n"
	.string "Oricorio Forms in your party{COLOR DARK_GRAY}. Come visit\l"
	.string "me when you've caught them!$"

SofosCity_House9_EventScript_Tyrunt_Text_0:
# 106 "data/maps/SofosCity_House9/scripts.pory"
	.string "Tyrunt$"

SofosCity_House9_EventScript_Tyrunt_Text_1:
# 108 "data/maps/SofosCity_House9/scripts.pory"
	.string "Wroooar!$"

SofosCity_House9_EventScript_Amaura_Text_0:
# 118 "data/maps/SofosCity_House9/scripts.pory"
	.string "Amaura$"

SofosCity_House9_EventScript_Amaura_Text_1:
# 120 "data/maps/SofosCity_House9/scripts.pory"
	.string "Breee!$"

SofosCity_House9_EventScript_Archen_Text_0:
# 130 "data/maps/SofosCity_House9/scripts.pory"
	.string "Archen$"

SofosCity_House9_EventScript_Archen_Text_1:
# 132 "data/maps/SofosCity_House9/scripts.pory"
	.string "Caww!$"

SofosCity_House9_EventScript_Spheal_Text_0:
# 142 "data/maps/SofosCity_House9/scripts.pory"
	.string "Spheal$"

SofosCity_House9_EventScript_Spheal_Text_1:
# 144 "data/maps/SofosCity_House9/scripts.pory"
	.string "Clap clap!$"

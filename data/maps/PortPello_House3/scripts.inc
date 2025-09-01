PortPello_House3_MapScripts::
	.byte 0


PortPello_House3_EventScript_PokefanM::
# 5 "data/maps/PortPello_House3/scripts.pory"
	lock
# 6 "data/maps/PortPello_House3/scripts.pory"
	faceplayer
# 7 "data/maps/PortPello_House3/scripts.pory"
	speakername PortPello_House3_EventScript_PokefanM_Text_0
# 8 "data/maps/PortPello_House3/scripts.pory"
	msgbox PortPello_House3_EventScript_PokefanM_Text_1
# 9 "data/maps/PortPello_House3/scripts.pory"
	closemessage
# 10 "data/maps/PortPello_House3/scripts.pory"
	release
	end


PortPello_House3_EventScript_Doll::
# 16 "data/maps/PortPello_House3/scripts.pory"
	lock
# 17 "data/maps/PortPello_House3/scripts.pory"
	msgbox PortPello_House3_EventScript_Doll_Text_0
# 18 "data/maps/PortPello_House3/scripts.pory"
	closemessage
# 19 "data/maps/PortPello_House3/scripts.pory"
	release
	end


PortPello_House3_EventScript_SpikyPichuBall::
# 25 "data/maps/PortPello_House3/scripts.pory"
	lock
# 26 "data/maps/PortPello_House3/scripts.pory"
	msgbox PortPello_House3_EventScript_SpikyPichuBall_Text_0
# 27 "data/maps/PortPello_House3/scripts.pory"
	closemessage
# 28 "data/maps/PortPello_House3/scripts.pory"
	release
	end


PortPello_House3_EventScript_PokefanF::
# 35 "data/maps/PortPello_House3/scripts.pory"
	lock
# 36 "data/maps/PortPello_House3/scripts.pory"
	faceplayer
# 37 "data/maps/PortPello_House3/scripts.pory"
	speakername PortPello_House3_EventScript_PokefanF_Text_0
# 40 "data/maps/PortPello_House3/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_SHOW_PIKACHU_FOR_PICHU
# 41 "data/maps/PortPello_House3/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PortPello_House3_EventScript_PokefanF_2
# 50 "data/maps/PortPello_House3/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_SHOW_PIKACHU_FOR_PICHU
# 51 "data/maps/PortPello_House3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PortPello_House3_EventScript_PokefanF_5
# 60 "data/maps/PortPello_House3/scripts.pory"
	msgbox PortPello_House3_EventScript_PokefanF_Text_3
# 61 "data/maps/PortPello_House3/scripts.pory"
	closemessage
# 63 "data/maps/PortPello_House3/scripts.pory"
	delay 10
# 64 "data/maps/PortPello_House3/scripts.pory"
	checkforspecieslocal SPECIES_PIKACHU, OPEN_PARTY_SCREEN
# 65 "data/maps/PortPello_House3/scripts.pory"
	delay 10
# 67 "data/maps/PortPello_House3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq PortPello_House3_EventScript_PokefanF_8
# 75 "data/maps/PortPello_House3/scripts.pory"
	emote 5, EMOTE_EXCLAM
# 76 "data/maps/PortPello_House3/scripts.pory"
	speakername PortPello_House3_EventScript_PokefanF_Text_0
# 77 "data/maps/PortPello_House3/scripts.pory"
	msgbox PortPello_House3_EventScript_PokefanF_Text_5
# 78 "data/maps/PortPello_House3/scripts.pory"
	closemessage
# 79 "data/maps/PortPello_House3/scripts.pory"
	delay 5
# 81 "data/maps/PortPello_House3/scripts.pory"
	setflag FLAG_HIDE_SPIKY_EAR_PICHU_BALL
# 82 "data/maps/PortPello_House3/scripts.pory"
	removeobject 6
# 84 "data/maps/PortPello_House3/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 40, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, FEMALE, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_THUNDERCLAP, MOVE_ANCIENT_POWER, MOVE_DISCHARGE, MOVE_RELIC_SONG
# 85 "data/maps/PortPello_House3/scripts.pory"
	closemessage
# 86 "data/maps/PortPello_House3/scripts.pory"
	delay 5
# 88 "data/maps/PortPello_House3/scripts.pory"
	speakername PortPello_House3_EventScript_PokefanF_Text_0
# 89 "data/maps/PortPello_House3/scripts.pory"
	msgbox PortPello_House3_EventScript_PokefanF_Text_6
# 90 "data/maps/PortPello_House3/scripts.pory"
	closemessage
# 92 "data/maps/PortPello_House3/scripts.pory"
	delay 20
# 93 "data/maps/PortPello_House3/scripts.pory"
	completequest QUEST_SHOW_PIKACHU_FOR_PICHU
PortPello_House3_EventScript_PokefanF_4:
# 96 "data/maps/PortPello_House3/scripts.pory"
	release
	end

PortPello_House3_EventScript_PokefanF_2:
# 43 "data/maps/PortPello_House3/scripts.pory"
	msgbox PortPello_House3_EventScript_PokefanF_Text_1
# 44 "data/maps/PortPello_House3/scripts.pory"
	closemessage
# 45 "data/maps/PortPello_House3/scripts.pory"
	release
	end

PortPello_House3_EventScript_PokefanF_5:
# 53 "data/maps/PortPello_House3/scripts.pory"
	msgbox PortPello_House3_EventScript_PokefanF_Text_2
# 54 "data/maps/PortPello_House3/scripts.pory"
	closemessage
# 55 "data/maps/PortPello_House3/scripts.pory"
	delay 20
# 56 "data/maps/PortPello_House3/scripts.pory"
	startquest QUEST_SHOW_PIKACHU_FOR_PICHU
	goto PortPello_House3_EventScript_PokefanF_4

PortPello_House3_EventScript_PokefanF_8:
# 69 "data/maps/PortPello_House3/scripts.pory"
	speakername PortPello_House3_EventScript_PokefanF_Text_0
# 70 "data/maps/PortPello_House3/scripts.pory"
	msgbox PortPello_House3_EventScript_PokefanF_Text_4
# 71 "data/maps/PortPello_House3/scripts.pory"
	closemessage
	goto PortPello_House3_EventScript_PokefanF_4


PortPello_House3_EventScript_PokefanM_Text_0:
# 7 "data/maps/PortPello_House3/scripts.pory"
	.string "Pokéfan M$"

PortPello_House3_EventScript_PokefanM_Text_1:
# 8 "data/maps/PortPello_House3/scripts.pory"
	.string "I lo-o-ove Pokémon that remind me of\n"
	.string "Pikachu! I'm looking at pictures of\l"
	.string "Electric-type rodent Pokémon from\l"
	.string "across the world!$"

PortPello_House3_EventScript_Doll_Text_0:
# 17 "data/maps/PortPello_House3/scripts.pory"
	.string "It's a Pokémon Doll. These people are\n"
	.string "really, really into Pikachu-like\l"
	.string "Pokémon, huh?$"

PortPello_House3_EventScript_SpikyPichuBall_Text_0:
# 26 "data/maps/PortPello_House3/scripts.pory"
	.string "It looks like a Pichu is inside the Poké\n"
	.string "ball, but something is strange about it.$"

PortPello_House3_EventScript_PokefanF_Text_0:
# 37 "data/maps/PortPello_House3/scripts.pory"
	.string "Pokéfan F$"

PortPello_House3_EventScript_PokefanF_Text_1:
# 43 "data/maps/PortPello_House3/scripts.pory"
	.string "Oh, how's my little baby Pichu doing? I\n"
	.string "hope she's happy exploring the world\l"
	.string "with you!$"

PortPello_House3_EventScript_PokefanF_Text_2:
# 53 "data/maps/PortPello_House3/scripts.pory"
	.string "Hi...\p"
	.string "Sorry, I've been lost in thought lately.\n"
	.string "I came across an abandoned Pichu and\l"
	.string "brought it home in this Poké ball, but\l"
	.string "something is strange about it. You see,\l"
	.string "this Pichu is {COLOR GREEN}stronger than usual{COLOR DARK_GRAY}... In\l"
	.string "fact, it's a little too strong for my\l"
	.string "husband and I!\p"
	.string "I'll tell you what. If you show me that\n"
	.string "you can raise a Pichu by {COLOR GREEN}showing me a\l"
	.string "Pikachu in your Party{COLOR DARK_GRAY}, then this Pichu\l"
	.string "can join you on your adventure.$"

PortPello_House3_EventScript_PokefanF_Text_3:
# 60 "data/maps/PortPello_House3/scripts.pory"
	.string "So? Can you prove to me that you can\n"
	.string "raise a Pichu? Please, show me a {COLOR GREEN}Pikachu{COLOR DARK_GRAY}\l"
	.string "you've raised.$"

PortPello_House3_EventScript_PokefanF_Text_4:
# 70 "data/maps/PortPello_House3/scripts.pory"
	.string "Hmm... I don't see a Pikachu...\p"
	.string "Show me a {COLOR GREEN}Pikachu from your Party{COLOR DARK_GRAY}, and\n"
	.string "I'll let this little Pichu go adventuring\l"
	.string "with you.$"

PortPello_House3_EventScript_PokefanF_Text_5:
# 77 "data/maps/PortPello_House3/scripts.pory"
	.string "Oh! That Pikachu is so adorable, and so\n"
	.string "happy!\p"
	.string "You've convinced me. Please, take this\n"
	.string "Pichu with you on your adventure. I\l"
	.string "know it will be happier with you!$"

PortPello_House3_EventScript_PokefanF_Text_6:
# 89 "data/maps/PortPello_House3/scripts.pory"
	.string "Please, take care of my little Pichu!\n"
	.string "It's different than all the rest, but\l"
	.string "that's what makes her so special.$"

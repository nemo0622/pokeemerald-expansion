ErinysPath_West_MapScripts::
	.byte 0


ErinysPath_West_SignBlockingDemoProgress::
# 5 "data/maps/ErinysPath_West/scripts.pory"
	lock
# 6 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_SignBlockingDemoProgress_Text_0
# 7 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 8 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_EventScript_FatMan::
# 14 "data/maps/ErinysPath_West/scripts.pory"
	lock
# 15 "data/maps/ErinysPath_West/scripts.pory"
	faceplayer
# 18 "data/maps/ErinysPath_West/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_YACHE_BERRY_FROST_BREATH
# 19 "data/maps/ErinysPath_West/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ErinysPath_West_EventScript_FatMan_2
# 29 "data/maps/ErinysPath_West/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_YACHE_BERRY_FROST_BREATH
# 30 "data/maps/ErinysPath_West/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ErinysPath_West_EventScript_FatMan_4
# 41 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 42 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_3
# 43 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 45 "data/maps/ErinysPath_West/scripts.pory"
	checkitem ITEM_YACHE_BERRY
# 46 "data/maps/ErinysPath_West/scripts.pory"
	delay 30
# 48 "data/maps/ErinysPath_West/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ErinysPath_West_EventScript_FatMan_7
# 56 "data/maps/ErinysPath_West/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 57 "data/maps/ErinysPath_West/scripts.pory"
	waitmovement 0
# 58 "data/maps/ErinysPath_West/scripts.pory"
	delay 10
# 59 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 60 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_5
# 61 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 62 "data/maps/ErinysPath_West/scripts.pory"
	removeitem ITEM_YACHE_BERRY
# 63 "data/maps/ErinysPath_West/scripts.pory"
	delay 30
# 65 "data/maps/ErinysPath_West/scripts.pory"
	applymovement 1, Common_Movement_JumpInPlaceCircle
# 66 "data/maps/ErinysPath_West/scripts.pory"
	waitmovement 0
# 67 "data/maps/ErinysPath_West/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 68 "data/maps/ErinysPath_West/scripts.pory"
	waitmovement 0
# 69 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 70 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_6
# 71 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 73 "data/maps/ErinysPath_West/scripts.pory"
	giveitem ITEM_TM52
# 75 "data/maps/ErinysPath_West/scripts.pory"
	delay 5
# 76 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 77 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_7
# 78 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 80 "data/maps/ErinysPath_West/scripts.pory"
	delay 20
# 81 "data/maps/ErinysPath_West/scripts.pory"
	completequest QUEST_YACHE_BERRY_FROST_BREATH
	return

ErinysPath_West_EventScript_FatMan_2:
# 21 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 22 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_1
# 23 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 24 "data/maps/ErinysPath_West/scripts.pory"
	release
	end

ErinysPath_West_EventScript_FatMan_4:
# 32 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 33 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_2
# 34 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 36 "data/maps/ErinysPath_West/scripts.pory"
	delay 20
# 37 "data/maps/ErinysPath_West/scripts.pory"
	startquest QUEST_YACHE_BERRY_FROST_BREATH
	return

ErinysPath_West_EventScript_FatMan_7:
# 50 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 51 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_4
# 52 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
	return


ErinysPath_West_SignBlockingDemoProgress_Text_0:
# 6 "data/maps/ErinysPath_West/scripts.pory"
	.string "This is the end of the Pokémon Lazarus\n"
	.string "Demo content.\p"
	.string "Join the Nemo622 Rom Hack Development\n"
	.string "Discord server to stay up-to-date with\l"
	.string "the official release!\p"
	.string "Thank you for playing! -Nemo$"

ErinysPath_West_EventScript_FatMan_Text_0:
# 21 "data/maps/ErinysPath_West/scripts.pory"
	.string "Berry Enthusiast$"

ErinysPath_West_EventScript_FatMan_Text_1:
# 22 "data/maps/ErinysPath_West/scripts.pory"
	.string "Thanks to that Yache Berry, I can stand\n"
	.string "in the cold just fine! Berries are so\l"
	.string "amazing.$"

ErinysPath_West_EventScript_FatMan_Text_2:
# 33 "data/maps/ErinysPath_West/scripts.pory"
	.string "Berries found here are growing right at\n"
	.string "the snow line. These are some tough\l"
	.string "little plants!\p"
	.string "Brrr, it's real chilly up here... I have an\n"
	.string "idea. How about you bring me back a\l"
	.string "Berry that can help me {COLOR GREEN}resist Ice-type\l"
	.string "damage{COLOR DARK_GRAY}? I'm not sure if Berries work on\l"
	.string "humans, but it's worth a try.$"

ErinysPath_West_EventScript_FatMan_Text_3:
# 42 "data/maps/ErinysPath_West/scripts.pory"
	.string "Brrr, it's freezing up here! Do you have\n"
	.string "a {COLOR GREEN}Yache Berry{COLOR DARK_GRAY} for me to try yet? Maybe\l"
	.string "it'll help me shrug off the cold.$"

ErinysPath_West_EventScript_FatMan_Text_4:
# 51 "data/maps/ErinysPath_West/scripts.pory"
	.string "No, I can't smell it. Berries all have a\n"
	.string "unique smell, but I can't sense a Yache\l"
	.string "Berry around here.\p"
	.string "From what I remember from those people\n"
	.string "at the Jusmail Town Berry Club, you need\l"
	.string "to {COLOR GREEN}grow Aspear and Persim Berries next\l"
	.string "to each other{COLOR DARK_GRAY} to get the hybrid Yache\l"
	.string "Berry.$"

ErinysPath_West_EventScript_FatMan_Text_5:
# 60 "data/maps/ErinysPath_West/scripts.pory"
	.string "Sniff sniff sniff... Hey, I know that\n"
	.string "smell! It must be a Yache Berry! Quick,\l"
	.string "give it here!$"

ErinysPath_West_EventScript_FatMan_Text_6:
# 70 "data/maps/ErinysPath_West/scripts.pory"
	.string "Yum-yum-yum! Wow, I think I feel less\n"
	.string "cold!\p"
	.string "Thanks, bud. Here, I've got something\n"
	.string "for you.$"

ErinysPath_West_EventScript_FatMan_Text_7:
# 77 "data/maps/ErinysPath_West/scripts.pory"
	.string "That TM contains the move {COLOR GREEN}Frost\n"
	.string "Breath{COLOR DARK_GRAY}. By itself, it's not the\l"
	.string "strongest, but it always lands a\l"
	.string "critical hit!\p"
	.string "My Pokémon and I learned how to do that\n"
	.string "up here in the cold. Hopefully, with my\l"
	.string "Yache Berry, I won't ever have to do\l"
	.string "that again!$"

SeaOfAsteri_Underwater_East_MapScripts::
	.byte 0


SeaOfAsteri_Underwater_East_EventScript_Diver::
# 5 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	lock
# 6 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	faceplayer
# 7 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	speakername SeaOfAsteri_Underwater_East_EventScript_Diver_Text_0
# 10 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_GIVE_REVIVE_UNDERWATER
# 11 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SeaOfAsteri_Underwater_East_EventScript_Diver_2
# 20 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_GIVE_REVIVE_UNDERWATER
# 21 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SeaOfAsteri_Underwater_East_EventScript_Diver_5
# 31 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	msgbox SeaOfAsteri_Underwater_East_EventScript_Diver_Text_3
# 32 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	closemessage
# 34 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	checkitem ITEM_REVIVE
# 35 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	delay 30
# 37 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SeaOfAsteri_Underwater_East_EventScript_Diver_8
# 45 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	speakername SeaOfAsteri_Underwater_East_EventScript_Diver_Text_0
# 46 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	msgbox SeaOfAsteri_Underwater_East_EventScript_Diver_Text_5
# 47 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	closemessage
# 48 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	delay 50
# 49 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	applymovement 4, Common_Movement_Heart
# 50 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	delay 10
# 51 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	speakername SeaOfAsteri_Underwater_East_EventScript_Diver_Text_0
# 52 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	msgbox SeaOfAsteri_Underwater_East_EventScript_Diver_Text_6
# 53 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	closemessage
# 54 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	delay 5
# 55 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	giveitem ITEM_TM_RAIN_DANCE
# 56 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	closemessage
# 58 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	delay 20
# 59 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	completequest QUEST_GIVE_REVIVE_UNDERWATER
SeaOfAsteri_Underwater_East_EventScript_Diver_4:
# 63 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	release
	end

SeaOfAsteri_Underwater_East_EventScript_Diver_2:
# 13 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	msgbox SeaOfAsteri_Underwater_East_EventScript_Diver_Text_1
# 14 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	closemessage
# 15 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	release
	end

SeaOfAsteri_Underwater_East_EventScript_Diver_5:
# 23 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	msgbox SeaOfAsteri_Underwater_East_EventScript_Diver_Text_2
# 24 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	closemessage
# 26 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	delay 20
# 27 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	startquest QUEST_GIVE_REVIVE_UNDERWATER
	goto SeaOfAsteri_Underwater_East_EventScript_Diver_4

SeaOfAsteri_Underwater_East_EventScript_Diver_8:
# 39 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	speakername SeaOfAsteri_Underwater_East_EventScript_Diver_Text_0
# 40 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	msgbox SeaOfAsteri_Underwater_East_EventScript_Diver_Text_4
# 41 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	closemessage
	goto SeaOfAsteri_Underwater_East_EventScript_Diver_4


SeaOfAsteri_Underwater_East_EventScript_Diver_Text_0:
# 7 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	.string "Diver$"

SeaOfAsteri_Underwater_East_EventScript_Diver_Text_1:
# 13 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	.string "Thanks to that Revive, my Pokémon is\n"
	.string "feeling strong again! Now we can keep\l"
	.string "swimming safely.$"

SeaOfAsteri_Underwater_East_EventScript_Diver_Text_2:
# 23 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	.string "Hm? Oh, another Diver! Perfect!\p"
	.string "Here's my situation: my sweet little\n"
	.string "Tentacool got roughed up pretty bad\l"
	.string "down here, and now it's too dangerous\l"
	.string "for me to swim back to an island by\l"
	.string "myself. I need someone to {COLOR GREEN}bring me a\l"
	.string "Revive{COLOR DARK_GRAY} to help my Tentacool feel\l"
	.string "better. Please, if you have a {COLOR GREEN}Revive{COLOR DARK_GRAY},\l"
	.string "help a guy out!$"

SeaOfAsteri_Underwater_East_EventScript_Diver_Text_3:
# 31 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	.string "Oh, you're back, thank the Fates! Do you\n"
	.string "have a Revive, by any chance?$"

SeaOfAsteri_Underwater_East_EventScript_Diver_Text_4:
# 40 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	.string "Darn, looks like I'm still stranded.\p"
	.string "If you get a {COLOR GREEN}Revive{COLOR DARK_GRAY}, please let me know!\n"
	.string "I need my Tentacool to feel better\l"
	.string "ASAP!$"

SeaOfAsteri_Underwater_East_EventScript_Diver_Text_5:
# 46 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	.string "Hey, I knew you'd have one! I'll just use\n"
	.string "that on my Tentacool real quick...$"

SeaOfAsteri_Underwater_East_EventScript_Diver_Text_6:
# 52 "data/maps/SeaOfAsteri_Underwater_East/scripts.pory"
	.string "Wow, Tentacool is full of energy again!\n"
	.string "This Revive must have really helped.\p"
	.string "You're a lifesaver, buddy. Take this TM\n"
	.string "as my thanks.$"

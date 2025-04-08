SofosCity_House2_MapScripts::
	.byte 0


SofosCity_House2_LittleBoyOnPiano::
# 5 "data/maps/SofosCity_House2/scripts.pory"
	lock
# 6 "data/maps/SofosCity_House2/scripts.pory"
	faceplayer
# 7 "data/maps/SofosCity_House2/scripts.pory"
	speakername SofosCity_House2_LittleBoyOnPiano_Text_0
# 8 "data/maps/SofosCity_House2/scripts.pory"
	msgbox SofosCity_House2_LittleBoyOnPiano_Text_1
# 9 "data/maps/SofosCity_House2/scripts.pory"
	closemessage
# 10 "data/maps/SofosCity_House2/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 11 "data/maps/SofosCity_House2/scripts.pory"
	waitmovement 0
# 12 "data/maps/SofosCity_House2/scripts.pory"
	release
	end


SofosCity_House2_GrandmaFallingAsleep::
# 18 "data/maps/SofosCity_House2/scripts.pory"
	lock
# 19 "data/maps/SofosCity_House2/scripts.pory"
	faceplayer
# 20 "data/maps/SofosCity_House2/scripts.pory"
	speakername SofosCity_House2_GrandmaFallingAsleep_Text_0
# 23 "data/maps/SofosCity_House2/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_BRING_GRANDMA_AWAKENING
# 24 "data/maps/SofosCity_House2/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SofosCity_House2_GrandmaFallingAsleep_2
# 33 "data/maps/SofosCity_House2/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_BRING_GRANDMA_AWAKENING
# 34 "data/maps/SofosCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_House2_GrandmaFallingAsleep_5
# 44 "data/maps/SofosCity_House2/scripts.pory"
	msgbox SofosCity_House2_GrandmaFallingAsleep_Text_3
# 45 "data/maps/SofosCity_House2/scripts.pory"
	closemessage
# 47 "data/maps/SofosCity_House2/scripts.pory"
	checkitem ITEM_AWAKENING
# 48 "data/maps/SofosCity_House2/scripts.pory"
	delay 30
# 50 "data/maps/SofosCity_House2/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SofosCity_House2_GrandmaFallingAsleep_8
# 58 "data/maps/SofosCity_House2/scripts.pory"
	applymovement 2, Common_Movement_Heart
# 59 "data/maps/SofosCity_House2/scripts.pory"
	waitmovement 0
# 60 "data/maps/SofosCity_House2/scripts.pory"
	delay 10
# 61 "data/maps/SofosCity_House2/scripts.pory"
	speakername SofosCity_House2_GrandmaFallingAsleep_Text_0
# 62 "data/maps/SofosCity_House2/scripts.pory"
	msgbox SofosCity_House2_GrandmaFallingAsleep_Text_5
# 63 "data/maps/SofosCity_House2/scripts.pory"
	closemessage
# 64 "data/maps/SofosCity_House2/scripts.pory"
	removeitem ITEM_AWAKENING
# 65 "data/maps/SofosCity_House2/scripts.pory"
	delay 40
# 66 "data/maps/SofosCity_House2/scripts.pory"
	speakername SofosCity_House2_GrandmaFallingAsleep_Text_0
# 67 "data/maps/SofosCity_House2/scripts.pory"
	msgbox SofosCity_House2_GrandmaFallingAsleep_Text_6
# 68 "data/maps/SofosCity_House2/scripts.pory"
	closemessage
# 69 "data/maps/SofosCity_House2/scripts.pory"
	giveitem ITEM_RARE_CANDY
# 70 "data/maps/SofosCity_House2/scripts.pory"
	closemessage
# 72 "data/maps/SofosCity_House2/scripts.pory"
	delay 20
# 73 "data/maps/SofosCity_House2/scripts.pory"
	completequest QUEST_BRING_GRANDMA_AWAKENING
SofosCity_House2_GrandmaFallingAsleep_4:
# 76 "data/maps/SofosCity_House2/scripts.pory"
	release
	end

SofosCity_House2_GrandmaFallingAsleep_2:
# 26 "data/maps/SofosCity_House2/scripts.pory"
	msgbox SofosCity_House2_GrandmaFallingAsleep_Text_1
# 27 "data/maps/SofosCity_House2/scripts.pory"
	closemessage
# 28 "data/maps/SofosCity_House2/scripts.pory"
	release
	end

SofosCity_House2_GrandmaFallingAsleep_5:
# 36 "data/maps/SofosCity_House2/scripts.pory"
	msgbox SofosCity_House2_GrandmaFallingAsleep_Text_2
# 37 "data/maps/SofosCity_House2/scripts.pory"
	closemessage
# 39 "data/maps/SofosCity_House2/scripts.pory"
	delay 20
# 40 "data/maps/SofosCity_House2/scripts.pory"
	startquest QUEST_BRING_GRANDMA_AWAKENING
	goto SofosCity_House2_GrandmaFallingAsleep_4

SofosCity_House2_GrandmaFallingAsleep_8:
# 52 "data/maps/SofosCity_House2/scripts.pory"
	speakername SofosCity_House2_GrandmaFallingAsleep_Text_0
# 53 "data/maps/SofosCity_House2/scripts.pory"
	msgbox SofosCity_House2_GrandmaFallingAsleep_Text_4
# 54 "data/maps/SofosCity_House2/scripts.pory"
	closemessage
	goto SofosCity_House2_GrandmaFallingAsleep_4


SofosCity_House2_LittleBoyOnPiano_Text_0:
# 7 "data/maps/SofosCity_House2/scripts.pory"
	.string "Musical Boy$"

SofosCity_House2_LittleBoyOnPiano_Text_1:
# 8 "data/maps/SofosCity_House2/scripts.pory"
	.string "Ehehe, I don't know what keys I'm\n"
	.string "pressing, but my grandma thinks I'm\l"
	.string "great!$"

SofosCity_House2_GrandmaFallingAsleep_Text_0:
# 20 "data/maps/SofosCity_House2/scripts.pory"
	.string "Sleepy Lady$"

SofosCity_House2_GrandmaFallingAsleep_Text_1:
# 26 "data/maps/SofosCity_House2/scripts.pory"
	.string "Now I can listen to my grandson's\n"
	.string "musical performance! He's having fun,\l"
	.string "and that's what matters.$"

SofosCity_House2_GrandmaFallingAsleep_Text_2:
# 36 "data/maps/SofosCity_House2/scripts.pory"
	.string "Zzz... zzz...\p"
	.string "Oh! Gosh, how disrespectful of me. I'm\n"
	.string "finding it hard to stay awake while my\l"
	.string "grandson plays piano, but I don't want\l"
	.string "him to see me fall asleep during his\l"
	.string "performance.\p"
	.string "If I had an {COLOR GREEN}Awakening{COLOR DARK_GRAY}, maybe that would\n"
	.string "help me stay alert!$"

SofosCity_House2_GrandmaFallingAsleep_Text_3:
# 44 "data/maps/SofosCity_House2/scripts.pory"
	.string "Snooze... zzz...\p"
	.string "Hm? Oh, welcome back! Are you here to\n"
	.string "listen to my grandson's performance?$"

SofosCity_House2_GrandmaFallingAsleep_Text_4:
# 53 "data/maps/SofosCity_House2/scripts.pory"
	.string "Ah, I wish I had an {COLOR GREEN}Awakening{COLOR DARK_GRAY} to help me\n"
	.string "stay up.$"

SofosCity_House2_GrandmaFallingAsleep_Text_5:
# 62 "data/maps/SofosCity_House2/scripts.pory"
	.string "What's that? An {COLOR GREEN}Awakening{COLOR DARK_GRAY}, for me? I'll\n"
	.string "give it a try...$"

SofosCity_House2_GrandmaFallingAsleep_Text_6:
# 67 "data/maps/SofosCity_House2/scripts.pory"
	.string "Wow, I feel 20 years younger! I'll have\n"
	.string "no problem staying awake now!\p"
	.string "You deserve a treat, sweetie. Take it!$"

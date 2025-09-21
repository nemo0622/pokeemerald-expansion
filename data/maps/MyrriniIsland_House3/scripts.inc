MyrriniIsland_House3_MapScripts::
	.byte 0


MyrriniIsland_House3_EventScript_Lycanroc::
# 5 "data/maps/MyrriniIsland_House3/scripts.pory"
	lock
# 6 "data/maps/MyrriniIsland_House3/scripts.pory"
	faceplayer
# 7 "data/maps/MyrriniIsland_House3/scripts.pory"
	speakername MyrriniIsland_House3_EventScript_Lycanroc_Text_0
# 8 "data/maps/MyrriniIsland_House3/scripts.pory"
	playmoncry SPECIES_LYCANROC, CRY_MODE_NORMAL
# 9 "data/maps/MyrriniIsland_House3/scripts.pory"
	msgbox MyrriniIsland_House3_EventScript_Lycanroc_Text_1
# 10 "data/maps/MyrriniIsland_House3/scripts.pory"
	waitmoncry
# 11 "data/maps/MyrriniIsland_House3/scripts.pory"
	closemessage
# 12 "data/maps/MyrriniIsland_House3/scripts.pory"
	release
	end


MyrriniIsland_House3_EventScript_PunkRocker::
# 18 "data/maps/MyrriniIsland_House3/scripts.pory"
	lock
# 19 "data/maps/MyrriniIsland_House3/scripts.pory"
	faceplayer
# 20 "data/maps/MyrriniIsland_House3/scripts.pory"
	speakername MyrriniIsland_House3_EventScript_PunkRocker_Text_0
# 23 "data/maps/MyrriniIsland_House3/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MYRRINI_HEART_SCALE
# 24 "data/maps/MyrriniIsland_House3/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MyrriniIsland_House3_EventScript_PunkRocker_2
# 33 "data/maps/MyrriniIsland_House3/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MYRRINI_HEART_SCALE
# 34 "data/maps/MyrriniIsland_House3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_House3_EventScript_PunkRocker_5
# 44 "data/maps/MyrriniIsland_House3/scripts.pory"
	msgbox MyrriniIsland_House3_EventScript_PunkRocker_Text_3
# 45 "data/maps/MyrriniIsland_House3/scripts.pory"
	closemessage
# 47 "data/maps/MyrriniIsland_House3/scripts.pory"
	checkitem ITEM_HEART_SCALE
# 48 "data/maps/MyrriniIsland_House3/scripts.pory"
	delay 30
# 49 "data/maps/MyrriniIsland_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MyrriniIsland_House3_EventScript_PunkRocker_8
# 57 "data/maps/MyrriniIsland_House3/scripts.pory"
	applymovement 1, Common_Movement_Heart
# 58 "data/maps/MyrriniIsland_House3/scripts.pory"
	waitmovement 0
# 59 "data/maps/MyrriniIsland_House3/scripts.pory"
	delay 10
# 60 "data/maps/MyrriniIsland_House3/scripts.pory"
	speakername MyrriniIsland_House3_EventScript_PunkRocker_Text_0
# 61 "data/maps/MyrriniIsland_House3/scripts.pory"
	msgbox MyrriniIsland_House3_EventScript_PunkRocker_Text_5
# 62 "data/maps/MyrriniIsland_House3/scripts.pory"
	closemessage
# 63 "data/maps/MyrriniIsland_House3/scripts.pory"
	removeitem ITEM_HEART_SCALE
# 64 "data/maps/MyrriniIsland_House3/scripts.pory"
	giveitem ITEM_TM_SLUDGE_BOMB
# 65 "data/maps/MyrriniIsland_House3/scripts.pory"
	closemessage
# 67 "data/maps/MyrriniIsland_House3/scripts.pory"
	delay 20
# 68 "data/maps/MyrriniIsland_House3/scripts.pory"
	completequest QUEST_MYRRINI_HEART_SCALE
MyrriniIsland_House3_EventScript_PunkRocker_4:
# 71 "data/maps/MyrriniIsland_House3/scripts.pory"
	release
	end

MyrriniIsland_House3_EventScript_PunkRocker_2:
# 26 "data/maps/MyrriniIsland_House3/scripts.pory"
	msgbox MyrriniIsland_House3_EventScript_PunkRocker_Text_1
# 27 "data/maps/MyrriniIsland_House3/scripts.pory"
	closemessage
# 28 "data/maps/MyrriniIsland_House3/scripts.pory"
	release
	end

MyrriniIsland_House3_EventScript_PunkRocker_5:
# 36 "data/maps/MyrriniIsland_House3/scripts.pory"
	msgbox MyrriniIsland_House3_EventScript_PunkRocker_Text_2
# 37 "data/maps/MyrriniIsland_House3/scripts.pory"
	closemessage
# 39 "data/maps/MyrriniIsland_House3/scripts.pory"
	delay 20
# 40 "data/maps/MyrriniIsland_House3/scripts.pory"
	startquest QUEST_MYRRINI_HEART_SCALE
	goto MyrriniIsland_House3_EventScript_PunkRocker_4

MyrriniIsland_House3_EventScript_PunkRocker_8:
# 51 "data/maps/MyrriniIsland_House3/scripts.pory"
	speakername MyrriniIsland_House3_EventScript_PunkRocker_Text_0
# 52 "data/maps/MyrriniIsland_House3/scripts.pory"
	msgbox MyrriniIsland_House3_EventScript_PunkRocker_Text_4
# 53 "data/maps/MyrriniIsland_House3/scripts.pory"
	closemessage
	goto MyrriniIsland_House3_EventScript_PunkRocker_4


MyrriniIsland_House3_EventScript_Lycanroc_Text_0:
# 7 "data/maps/MyrriniIsland_House3/scripts.pory"
	.string "Lycanroc$"

MyrriniIsland_House3_EventScript_Lycanroc_Text_1:
# 9 "data/maps/MyrriniIsland_House3/scripts.pory"
	.string "Rah-ooo!$"

MyrriniIsland_House3_EventScript_PunkRocker_Text_0:
# 20 "data/maps/MyrriniIsland_House3/scripts.pory"
	.string "Punk Rocker$"

MyrriniIsland_House3_EventScript_PunkRocker_Text_1:
# 26 "data/maps/MyrriniIsland_House3/scripts.pory"
	.string "I think my girlfriend will really like\n"
	.string "this Heart Scale!$"

MyrriniIsland_House3_EventScript_PunkRocker_Text_2:
# 36 "data/maps/MyrriniIsland_House3/scripts.pory"
	.string "Oh, hi... sorry, I've been playing sad\n"
	.string "songs on the piano today. You see, my\l"
	.string "girlfriend came over yesterday, but my\l"
	.string "Lycanroc scared her off. He didn't mean\l"
	.string "it, he's just misunderstood!\p"
	.string "I need something special to apologize\n"
	.string "with. If you have an extra {COLOR GREEN}Heart Scale{COLOR DARK_GRAY},\l"
	.string "I'll give you something for it. Heart\l"
	.string "Scales are the best way to show your\l"
	.string "love!$"

MyrriniIsland_House3_EventScript_PunkRocker_Text_3:
# 44 "data/maps/MyrriniIsland_House3/scripts.pory"
	.string "Hey... my girlfriend and I are still on\n"
	.string "bad terms, I think. Do you have what I\l"
	.string "asked for?$"

MyrriniIsland_House3_EventScript_PunkRocker_Text_4:
# 52 "data/maps/MyrriniIsland_House3/scripts.pory"
	.string "No {COLOR GREEN}Heart Scale{COLOR DARK_GRAY}, hm? I know they're rare,\n"
	.string "so it's a big request, but please bring\l"
	.string "me one!$"

MyrriniIsland_House3_EventScript_PunkRocker_Text_5:
# 61 "data/maps/MyrriniIsland_House3/scripts.pory"
	.string "Hey, it's a {COLOR GREEN}Heart Scale{COLOR DARK_GRAY}! My girlfriend\n"
	.string "will love this!\p"
	.string "Right, I promised you something in\n"
	.string "return. Here you go!$"

TowerOfDioxippus_House1_MapScripts::
	.byte 0


TowerOfDioxippus_House1_EventScript_LittleBoy::
# 5 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	lock
# 6 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	faceplayer
# 7 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	speakername TowerOfDioxippus_House1_EventScript_LittleBoy_Text_0
# 8 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	msgbox TowerOfDioxippus_House1_EventScript_LittleBoy_Text_1
# 9 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	closemessage
# 10 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	release
	end


TowerOfDioxippus_House1_EventScript_Worker::
# 16 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	lock
# 17 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	faceplayer
# 18 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	speakername TowerOfDioxippus_House1_EventScript_Worker_Text_0
# 21 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_DIOXIPPUS_BERRIES
# 22 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq TowerOfDioxippus_House1_EventScript_Worker_2
# 31 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_DIOXIPPUS_BERRIES
# 32 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq TowerOfDioxippus_House1_EventScript_Worker_5
# 41 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	msgbox TowerOfDioxippus_House1_EventScript_Worker_Text_3
# 42 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	closemessage
# 44 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	delay 30
# 45 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	checkitem ITEM_LUM_BERRY, 5
# 46 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq TowerOfDioxippus_House1_EventScript_Worker_8
# 54 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 55 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	speakername TowerOfDioxippus_House1_EventScript_Worker_Text_0
# 56 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	msgbox TowerOfDioxippus_House1_EventScript_Worker_Text_5
# 57 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	closemessage
# 58 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	delay 5
# 59 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	givedecoration DECOR_HYDRAPPLE_DOLL
# 60 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	closemessage
# 61 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	delay 5
# 62 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	speakername TowerOfDioxippus_House1_EventScript_Worker_Text_0
# 63 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	msgbox TowerOfDioxippus_House1_EventScript_Worker_Text_6
# 64 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	closemessage
# 65 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	delay 20
# 66 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	completequest QUEST_DIOXIPPUS_BERRIES
TowerOfDioxippus_House1_EventScript_Worker_4:
# 70 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	release
	end

TowerOfDioxippus_House1_EventScript_Worker_2:
# 24 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	msgbox TowerOfDioxippus_House1_EventScript_Worker_Text_1
# 25 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	closemessage
# 26 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	release
	end

TowerOfDioxippus_House1_EventScript_Worker_5:
# 34 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	msgbox TowerOfDioxippus_House1_EventScript_Worker_Text_2
# 35 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	closemessage
# 36 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	delay 20
# 37 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	startquest QUEST_DIOXIPPUS_BERRIES
	goto TowerOfDioxippus_House1_EventScript_Worker_4

TowerOfDioxippus_House1_EventScript_Worker_8:
# 48 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	speakername TowerOfDioxippus_House1_EventScript_Worker_Text_0
# 49 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	msgbox TowerOfDioxippus_House1_EventScript_Worker_Text_4
# 50 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	closemessage
	goto TowerOfDioxippus_House1_EventScript_Worker_4


TowerOfDioxippus_House1_EventScript_LittleBoy_Text_0:
# 7 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	.string "Little Boy$"

TowerOfDioxippus_House1_EventScript_LittleBoy_Text_1:
# 8 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	.string "A lot of Dragon-type Pokémon live\n"
	.string "around here, it's so exciting!$"

TowerOfDioxippus_House1_EventScript_Worker_Text_0:
# 18 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	.string "Worker$"

TowerOfDioxippus_House1_EventScript_Worker_Text_1:
# 24 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	.string "Thanks to you, I can plant Berries all\n"
	.string "around the Tower of Dioxippus. That'll\l"
	.string "breathe some fresh air into this little\l"
	.string "village!$"

TowerOfDioxippus_House1_EventScript_Worker_Text_2:
# 34 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	.string "I'd like to plant some Berries around\n"
	.string "here to bring some life back to the\l"
	.string "area. The Tower of Dioxippus isn't the\l"
	.string "tourist attraction it used to be, so the\l"
	.string "village is falling into disrepair...\p"
	.string "You seem like an explorer, maybe you can\n"
	.string "help me! If you bring me {COLOR GREEN}5 Lum Berries{COLOR DARK_GRAY} to\l"
	.string "plant around town, I'll reward you.$"

TowerOfDioxippus_House1_EventScript_Worker_Text_3:
# 41 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	.string "I'm getting ready to plant some Berry\n"
	.string "Trees around town. Did you bring what I\l"
	.string "asked for?$"

TowerOfDioxippus_House1_EventScript_Worker_Text_4:
# 49 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	.string "Not yet? Berries are hard to grow, I\n"
	.string "know.\p"
	.string "Bring me {COLOR GREEN}5 Lum Berries{COLOR DARK_GRAY}, and I'll give you\n"
	.string "something cool in return.$"

TowerOfDioxippus_House1_EventScript_Worker_Text_5:
# 56 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	.string "Hey, you have 5 Lum Berries! I'll take\n"
	.string "those and get ready to plant them.\p"
	.string "You've been real helpful. Take this\n"
	.string "little something, from me.$"

TowerOfDioxippus_House1_EventScript_Worker_Text_6:
# 63 "data/maps/TowerOfDioxippus_House1/scripts.pory"
	.string "Dragon-type Pokémon are very\n"
	.string "important to the people of this village.\l"
	.string "Take care of that Decoration!$"

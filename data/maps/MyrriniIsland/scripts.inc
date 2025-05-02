MyrriniIsland_MapScripts::
# 2 "data/maps/MyrriniIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MyrriniIsland_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_VISITED_MYRRINI_ISLAND
# 5 "data/maps/MyrriniIsland/scripts.pory"
	call Route117_OnTransition
	return


MyrriniIsland_EventScript_BlackBelt::
# 11 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 12 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 13 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BlackBelt_Text_0
# 14 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BlackBelt_Text_1
# 15 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 16 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_PsychicM::
# 22 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 23 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 24 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_PsychicM_Text_0
# 25 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_PsychicM_Text_1
# 26 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 27 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Girl::
# 33 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 34 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 35 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Girl_Text_0
# 36 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Girl_Text_1
# 37 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 38 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_OldWoman::
# 44 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 45 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 46 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_OldWoman_Text_0
# 47 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_OldWoman_Text_1
# 48 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 49 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Beauty::
# 55 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 56 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 57 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Beauty_Text_0
# 58 "data/maps/MyrriniIsland/scripts.pory"
	message MyrriniIsland_EventScript_Beauty_Text_1
# 59 "data/maps/MyrriniIsland/scripts.pory"
	waitmessage
# 60 "data/maps/MyrriniIsland/scripts.pory"
	pokemart NectarMart
# 61 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 62 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 63 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Beauty_Text_0
# 64 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Beauty_Text_2
# 65 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 66 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


	.align 2
# 70 "data/maps/MyrriniIsland/scripts.pory"
NectarMart:
# 72 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_RED_NECTAR
# 73 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_YELLOW_NECTAR
# 74 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_PINK_NECTAR
# 75 "data/maps/MyrriniIsland/scripts.pory"
	.2byte ITEM_PURPLE_NECTAR
	.2byte ITEM_NONE

MyrriniIsland_EventScript_Ribombee::
# 80 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 81 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 82 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Ribombee_Text_0
# 83 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_RIBOMBEE, CRY_MODE_NORMAL
# 84 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Ribombee_Text_1
# 85 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 86 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 87 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Camper::
# 93 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 94 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 95 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 98 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MYRRINI_ALLERGIES
# 99 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq MyrriniIsland_EventScript_Camper_2
# 108 "data/maps/MyrriniIsland/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MYRRINI_ALLERGIES
# 109 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq MyrriniIsland_EventScript_Camper_5
# 119 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_3
# 120 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 122 "data/maps/MyrriniIsland/scripts.pory"
	checkitem ITEM_FULL_HEAL
# 123 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 124 "data/maps/MyrriniIsland/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq MyrriniIsland_EventScript_Camper_8
# 134 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 135 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_5
# 136 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 137 "data/maps/MyrriniIsland/scripts.pory"
	removeitem ITEM_FULL_HEAL
# 138 "data/maps/MyrriniIsland/scripts.pory"
	delay 30
# 139 "data/maps/MyrriniIsland/scripts.pory"
	applymovement 23, Common_Movement_Heart
# 140 "data/maps/MyrriniIsland/scripts.pory"
	waitmovement 0
# 141 "data/maps/MyrriniIsland/scripts.pory"
	delay 10
# 142 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 143 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_6
# 144 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 145 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 146 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_SILK_SCARF
# 147 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 149 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 150 "data/maps/MyrriniIsland/scripts.pory"
	completequest QUEST_MYRRINI_ALLERGIES
MyrriniIsland_EventScript_Camper_4:
# 153 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Camper_2:
# 101 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_1
# 102 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 103 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Camper_5:
# 111 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_2
# 112 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 114 "data/maps/MyrriniIsland/scripts.pory"
	delay 20
# 115 "data/maps/MyrriniIsland/scripts.pory"
	startquest QUEST_MYRRINI_ALLERGIES
	goto MyrriniIsland_EventScript_Camper_4

MyrriniIsland_EventScript_Camper_8:
# 126 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Camper_Text_0
# 127 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Camper_Text_4
# 128 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 129 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Girl2::
# 159 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 160 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 161 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Girl_Text_0
# 162 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Girl2_Text_0
# 163 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 164 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Panpour::
# 170 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 171 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 172 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Panpour_Text_0
# 173 "data/maps/MyrriniIsland/scripts.pory"
	playmoncry SPECIES_PANPOUR, CRY_MODE_NORMAL
# 174 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Panpour_Text_1
# 175 "data/maps/MyrriniIsland/scripts.pory"
	waitmoncry
# 176 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 177 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BugCatcher::
# 183 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 184 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 185 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_BugCatcher_Text_0
# 186 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_BugCatcher_Text_1
# 187 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 188 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Woman::
# 194 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 195 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 196 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Woman_Text_0
# 197 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Woman_Text_1
# 198 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 199 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_Artist::
# 205 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 206 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 207 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Artist_Text_0
# 208 "data/maps/MyrriniIsland/scripts.pory"
	goto_if_set FLAG_GOT_TM_POISON_FANG, MyrriniIsland_EventScript_Artist_2
# 215 "data/maps/MyrriniIsland/scripts.pory"
	setflag FLAG_GOT_TM_POISON_FANG
# 216 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Artist_Text_2
# 217 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 218 "data/maps/MyrriniIsland/scripts.pory"
	delay 5
# 219 "data/maps/MyrriniIsland/scripts.pory"
	giveitem ITEM_TM_POISON_FANG
# 220 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
MyrriniIsland_EventScript_Artist_1:
# 222 "data/maps/MyrriniIsland/scripts.pory"
	release
	end

MyrriniIsland_EventScript_Artist_2:
# 210 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Artist_Text_1
# 211 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
	goto MyrriniIsland_EventScript_Artist_1


MyrriniIsland_EventScript_Farmer1::
# 228 "data/maps/MyrriniIsland/scripts.pory"
	lock
# 229 "data/maps/MyrriniIsland/scripts.pory"
	faceplayer
# 230 "data/maps/MyrriniIsland/scripts.pory"
	speakername MyrriniIsland_EventScript_Farmer1_Text_0
# 231 "data/maps/MyrriniIsland/scripts.pory"
	msgbox MyrriniIsland_EventScript_Farmer1_Text_1
# 232 "data/maps/MyrriniIsland/scripts.pory"
	closemessage
# 233 "data/maps/MyrriniIsland/scripts.pory"
	release
	end


MyrriniIsland_EventScript_BlackBelt_Text_0:
# 13 "data/maps/MyrriniIsland/scripts.pory"
	.string "Black Belt$"

MyrriniIsland_EventScript_BlackBelt_Text_1:
# 14 "data/maps/MyrriniIsland/scripts.pory"
	.string "Sometimes, you have to kick back and relax. Myrrini Island is perfect for that!$"

MyrriniIsland_EventScript_PsychicM_Text_0:
# 24 "data/maps/MyrriniIsland/scripts.pory"
	.string "Psychic$"

MyrriniIsland_EventScript_PsychicM_Text_1:
# 25 "data/maps/MyrriniIsland/scripts.pory"
	.string "This island has lots of grape vines,\n"
	.string "purple fruited trees, and purple\l"
	.string "buildings. Purple is my favorite color,\l"
	.string "so I love it!$"

MyrriniIsland_EventScript_Girl_Text_0:
# 35 "data/maps/MyrriniIsland/scripts.pory"
	.string "Girl$"

MyrriniIsland_EventScript_Girl_Text_1:
# 36 "data/maps/MyrriniIsland/scripts.pory"
	.string "Migratory Pokémon stop on Myrrini\n"
	.string "Island while they fly, like that Swanna\l"
	.string "on the roof! They join up with the\l"
	.string "native Oricorio found here to dance and\l"
	.string "sing.$"

MyrriniIsland_EventScript_OldWoman_Text_0:
# 46 "data/maps/MyrriniIsland/scripts.pory"
	.string "Old Woman$"

MyrriniIsland_EventScript_OldWoman_Text_1:
# 47 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ahh, this is the life... I knew moving to\n"
	.string "Myrrini Island was the right choice. The\l"
	.string "folks here are nice, and that old sailor\l"
	.string "over there is nice on the eyes... ehehe!$"

MyrriniIsland_EventScript_Beauty_Text_0:
# 57 "data/maps/MyrriniIsland/scripts.pory"
	.string "Beauty$"

MyrriniIsland_EventScript_Beauty_Text_1:
# 58 "data/maps/MyrriniIsland/scripts.pory"
	.string "The wildflowers growing on this island\n"
	.string "make it a dream! My Ribombee is having\l"
	.string "the time of her life gathering nectar\l"
	.string "and pollen from them all.\p"
	.string "Are you interested in buying any of the\n"
	.string "Nectar? Oricorio seem to love it!$"

MyrriniIsland_EventScript_Beauty_Text_2:
# 64 "data/maps/MyrriniIsland/scripts.pory"
	.string "Come again! I'll still be here with my\n"
	.string "sweet Ribombee.$"

MyrriniIsland_EventScript_Ribombee_Text_0:
# 82 "data/maps/MyrriniIsland/scripts.pory"
	.string "Ribombee$"

MyrriniIsland_EventScript_Ribombee_Text_1:
# 84 "data/maps/MyrriniIsland/scripts.pory"
	.string "Zee-ee-ee!$"

MyrriniIsland_EventScript_Camper_Text_0:
# 95 "data/maps/MyrriniIsland/scripts.pory"
	.string "Camper$"

MyrriniIsland_EventScript_Camper_Text_1:
# 101 "data/maps/MyrriniIsland/scripts.pory"
	.string "My allergies are all cleared up! Now I\n"
	.string "can fully enjoy Myrrini Island!$"

MyrriniIsland_EventScript_Camper_Text_2:
# 111 "data/maps/MyrriniIsland/scripts.pory"
	.string "The outdoors are great and all, but...\n"
	.string "ACHOO! SHNIFF! My allergies are acting\l"
	.string "up...\p"
	.string "You seem like you're doing alright, could\n"
	.string "you bring me a {COLOR GREEN}Full Heal{COLOR DARK_GRAY}? Maybe that'll\l"
	.string "help my allergies.$"

MyrriniIsland_EventScript_Camper_Text_3:
# 119 "data/maps/MyrriniIsland/scripts.pory"
	.string "ACHOO! H-hey... SHNIFFLE! Did you\n"
	.string "happen to bring a Full Heal...?$"

MyrriniIsland_EventScript_Camper_Text_4:
# 127 "data/maps/MyrriniIsland/scripts.pory"
	.string "Aww, but my nose is totally clogged.\p"
	.string "Bring me a {COLOR GREEN}Full Heal{COLOR DARK_GRAY} for my pollen\n"
	.string "allergy, please!$"

MyrriniIsland_EventScript_Camper_Text_5:
# 135 "data/maps/MyrriniIsland/scripts.pory"
	.string "Oh, you've got it! Let me just use this\n"
	.string "quick...$"

MyrriniIsland_EventScript_Camper_Text_6:
# 143 "data/maps/MyrriniIsland/scripts.pory"
	.string "Woah, what a difference that made! I\n"
	.string "can totally breathe now!\p"
	.string "Now I can have fun outside with the\n"
	.string "flowers. Thank you! Take this!$"

MyrriniIsland_EventScript_Girl2_Text_0:
# 162 "data/maps/MyrriniIsland/scripts.pory"
	.string "The crops and fruits grown on Myrrini\n"
	.string "Island are the best in Ilios! I think\l"
	.string "it's the sunlight and the warm weather.$"

MyrriniIsland_EventScript_Panpour_Text_0:
# 172 "data/maps/MyrriniIsland/scripts.pory"
	.string "Panpour$"

MyrriniIsland_EventScript_Panpour_Text_1:
# 174 "data/maps/MyrriniIsland/scripts.pory"
	.string "Hia hee ee!$"

MyrriniIsland_EventScript_BugCatcher_Text_0:
# 185 "data/maps/MyrriniIsland/scripts.pory"
	.string "Bug Catcher$"

MyrriniIsland_EventScript_BugCatcher_Text_1:
# 186 "data/maps/MyrriniIsland/scripts.pory"
	.string "These markets always attract a bunch\n"
	.string "of Pokémon. I'm looking for any\l"
	.string "Bug-type Pokémon that show up!$"

MyrriniIsland_EventScript_Woman_Text_0:
# 196 "data/maps/MyrriniIsland/scripts.pory"
	.string "Performer$"

MyrriniIsland_EventScript_Woman_Text_1:
# 197 "data/maps/MyrriniIsland/scripts.pory"
	.string "Can you smell it? The pollen in the air,\n"
	.string "the fruits, and the salt sea spray... I'm\l"
	.string "so glad I moved here!$"

MyrriniIsland_EventScript_Artist_Text_0:
# 207 "data/maps/MyrriniIsland/scripts.pory"
	.string "Artist$"

MyrriniIsland_EventScript_Artist_Text_1:
# 210 "data/maps/MyrriniIsland/scripts.pory"
	.string "Inflicting opposing Pokémon with\n"
	.string "status effects is a sure way to win\l"
	.string "Pokémon battles!$"

MyrriniIsland_EventScript_Artist_Text_2:
# 216 "data/maps/MyrriniIsland/scripts.pory"
	.string "The Gym Leader on Myrrini Island\n"
	.string "specializes in Poison-type moves, which\l"
	.string "can tear through teams by inflicting\l"
	.string "the Poison effect on your Pokémon. I\l"
	.string "created this TM based on those\l"
	.string "techniques!$"

MyrriniIsland_EventScript_Farmer1_Text_0:
# 230 "data/maps/MyrriniIsland/scripts.pory"
	.string "Farmer$"

MyrriniIsland_EventScript_Farmer1_Text_1:
# 231 "data/maps/MyrriniIsland/scripts.pory"
	.string "These fruit trees are blooming all\n"
	.string "across the island! We're gonna make a\l"
	.string "fortune selling all this!$"

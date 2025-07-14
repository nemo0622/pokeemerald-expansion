FrescoIsles_House3_MapScripts::
	.byte 0


FrescoIsles_House3_EventScript_Boy::
# 5 "data/maps/FrescoIsles_House3/scripts.pory"
	lock
# 6 "data/maps/FrescoIsles_House3/scripts.pory"
	faceplayer
# 7 "data/maps/FrescoIsles_House3/scripts.pory"
	speakername FrescoIsles_House3_EventScript_Boy_Text_0
# 8 "data/maps/FrescoIsles_House3/scripts.pory"
	msgbox FrescoIsles_House3_EventScript_Boy_Text_1
# 9 "data/maps/FrescoIsles_House3/scripts.pory"
	closemessage
# 10 "data/maps/FrescoIsles_House3/scripts.pory"
	release
	end


FrescoIsles_House3_EventScript_BattleGirl::
# 16 "data/maps/FrescoIsles_House3/scripts.pory"
	lock
# 17 "data/maps/FrescoIsles_House3/scripts.pory"
	faceplayer
# 18 "data/maps/FrescoIsles_House3/scripts.pory"
	speakername FrescoIsles_House3_EventScript_BattleGirl_Text_0
# 21 "data/maps/FrescoIsles_House3/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FIND_RELICANTH
# 22 "data/maps/FrescoIsles_House3/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq FrescoIsles_House3_EventScript_BattleGirl_2
# 31 "data/maps/FrescoIsles_House3/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FIND_RELICANTH
# 32 "data/maps/FrescoIsles_House3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq FrescoIsles_House3_EventScript_BattleGirl_5
# 42 "data/maps/FrescoIsles_House3/scripts.pory"
	msgbox FrescoIsles_House3_EventScript_BattleGirl_Text_3
# 43 "data/maps/FrescoIsles_House3/scripts.pory"
	closemessage
# 45 "data/maps/FrescoIsles_House3/scripts.pory"
	delay 30
# 46 "data/maps/FrescoIsles_House3/scripts.pory"
	getcaughtmon SPECIES_RELICANTH
# 47 "data/maps/FrescoIsles_House3/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq FrescoIsles_House3_EventScript_BattleGirl_8
# 55 "data/maps/FrescoIsles_House3/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 56 "data/maps/FrescoIsles_House3/scripts.pory"
	speakername FrescoIsles_House3_EventScript_BattleGirl_Text_0
# 57 "data/maps/FrescoIsles_House3/scripts.pory"
	msgbox FrescoIsles_House3_EventScript_BattleGirl_Text_5
# 58 "data/maps/FrescoIsles_House3/scripts.pory"
	closemessage
# 59 "data/maps/FrescoIsles_House3/scripts.pory"
	delay 30
# 60 "data/maps/FrescoIsles_House3/scripts.pory"
	speakername FrescoIsles_House3_EventScript_BattleGirl_Text_0
# 61 "data/maps/FrescoIsles_House3/scripts.pory"
	msgbox FrescoIsles_House3_EventScript_BattleGirl_Text_6
# 62 "data/maps/FrescoIsles_House3/scripts.pory"
	closemessage
# 63 "data/maps/FrescoIsles_House3/scripts.pory"
	delay 5
# 64 "data/maps/FrescoIsles_House3/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 65 "data/maps/FrescoIsles_House3/scripts.pory"
	closemessage
# 67 "data/maps/FrescoIsles_House3/scripts.pory"
	delay 20
# 68 "data/maps/FrescoIsles_House3/scripts.pory"
	completequest QUEST_FIND_RELICANTH
FrescoIsles_House3_EventScript_BattleGirl_4:
# 71 "data/maps/FrescoIsles_House3/scripts.pory"
	release
	end

FrescoIsles_House3_EventScript_BattleGirl_2:
# 24 "data/maps/FrescoIsles_House3/scripts.pory"
	msgbox FrescoIsles_House3_EventScript_BattleGirl_Text_1
# 25 "data/maps/FrescoIsles_House3/scripts.pory"
	closemessage
# 26 "data/maps/FrescoIsles_House3/scripts.pory"
	release
	end

FrescoIsles_House3_EventScript_BattleGirl_5:
# 34 "data/maps/FrescoIsles_House3/scripts.pory"
	msgbox FrescoIsles_House3_EventScript_BattleGirl_Text_2
# 35 "data/maps/FrescoIsles_House3/scripts.pory"
	closemessage
# 37 "data/maps/FrescoIsles_House3/scripts.pory"
	delay 20
# 38 "data/maps/FrescoIsles_House3/scripts.pory"
	startquest QUEST_FIND_RELICANTH
	goto FrescoIsles_House3_EventScript_BattleGirl_4

FrescoIsles_House3_EventScript_BattleGirl_8:
# 49 "data/maps/FrescoIsles_House3/scripts.pory"
	speakername FrescoIsles_House3_EventScript_BattleGirl_Text_0
# 50 "data/maps/FrescoIsles_House3/scripts.pory"
	msgbox FrescoIsles_House3_EventScript_BattleGirl_Text_4
# 51 "data/maps/FrescoIsles_House3/scripts.pory"
	closemessage
	goto FrescoIsles_House3_EventScript_BattleGirl_4


FrescoIsles_House3_EventScript_Boy_Text_0:
# 7 "data/maps/FrescoIsles_House3/scripts.pory"
	.string "Boy$"

FrescoIsles_House3_EventScript_Boy_Text_1:
# 8 "data/maps/FrescoIsles_House3/scripts.pory"
	.string "There's all sorts of information kept in\n"
	.string "these books!$"

FrescoIsles_House3_EventScript_BattleGirl_Text_0:
# 18 "data/maps/FrescoIsles_House3/scripts.pory"
	.string "Battle Girl$"

FrescoIsles_House3_EventScript_BattleGirl_Text_1:
# 24 "data/maps/FrescoIsles_House3/scripts.pory"
	.string "I'll head out and catch a Relicanth for\n"
	.string "myself soon! What an incredible\l"
	.string "Pokémon.$"

FrescoIsles_House3_EventScript_BattleGirl_Text_2:
# 34 "data/maps/FrescoIsles_House3/scripts.pory"
	.string "The old Pokémon Ecology books we have\n"
	.string "here list Relicanth as extinct, but\l"
	.string "about 80 years ago, it was rediscovered\l"
	.string "living deep underwater! Before then, it\l"
	.string "was only known from ancient fossils.\l"
	.string "That makes it the {COLOR GREEN}earliest Lazarus\l"
	.string "Taxon Pokémon we know of{COLOR DARK_GRAY}.\p"
	.string "I've always wanted to see one for\n"
	.string "myself. If you {COLOR GREEN}catch a Relicanth{COLOR DARK_GRAY}, show\l"
	.string "me the Pokédex data!$"

FrescoIsles_House3_EventScript_BattleGirl_Text_3:
# 42 "data/maps/FrescoIsles_House3/scripts.pory"
	.string "Chaire, hello! I still want to see a\n"
	.string "Relicanth in the wild, but I'm not sure\l"
	.string "where they live. Do you have {COLOR GREEN}Relicanth's\l"
	.string "Pokédex data{COLOR DARK_GRAY}?$"

FrescoIsles_House3_EventScript_BattleGirl_Text_4:
# 50 "data/maps/FrescoIsles_House3/scripts.pory"
	.string "No Relicanth yet, hm? They're\n"
	.string "exceedingly rare, from what I can tell.\p"
	.string "From what I hear, they live deep\n"
	.string "underwater, but I don't know where\l"
	.string "exactly. When you catch a {COLOR GREEN}Relicanth{COLOR DARK_GRAY},\l"
	.string "please, show me the Pokédex data!$"

FrescoIsles_House3_EventScript_BattleGirl_Text_5:
# 57 "data/maps/FrescoIsles_House3/scripts.pory"
	.string "Wow, you have the Pokédex data for\n"
	.string "Relicanth! Let me see!$"

FrescoIsles_House3_EventScript_BattleGirl_Text_6:
# 61 "data/maps/FrescoIsles_House3/scripts.pory"
	.string "Hmm, I see... According to your Rotom\n"
	.string "Phone's Pokédex data, Relicanth can be\l"
	.string "found deep underwater in the Sea of\l"
	.string "Vulcai's northern section. I'll have to\l"
	.string "Dive out there soon!\p"
	.string "I can't thank you enough for showing me\n"
	.string "this. Take this!$"

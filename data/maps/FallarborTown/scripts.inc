# 1 "data/maps/FallarborTown/scripts.pory"

# 2 "data/maps/FallarborTown/scripts.pory"
FallarborTown_MapScripts::
# 3 "data/maps/FallarborTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FallarborTown_OnTransition
# 4 "data/maps/FallarborTown/scripts.pory"
	.byte 0
# 5 "data/maps/FallarborTown/scripts.pory"

# 6 "data/maps/FallarborTown/scripts.pory"
FallarborTown_OnTransition:
# 7 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_VISITED_FALLARBOR_TOWN
# 8 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 9 "data/maps/FallarborTown/scripts.pory"
	clearflag FLAG_CONTEST_SKETCH_CREATED
# 10 "data/maps/FallarborTown/scripts.pory"
	end
# 11 "data/maps/FallarborTown/scripts.pory"

# 12 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertM::
# 13 "data/maps/FallarborTown/scripts.pory"
	lock
# 14 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 15 "data/maps/FallarborTown/scripts.pory"
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_EventScript_ExpertMNormal
# 16 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_ShadyCharactersCozmosHome, MSGBOX_DEFAULT
# 17 "data/maps/FallarborTown/scripts.pory"
	release
# 18 "data/maps/FallarborTown/scripts.pory"
	end
# 19 "data/maps/FallarborTown/scripts.pory"

# 20 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_ExpertMNormal::
# 21 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_RegionKnownForMeteors, MSGBOX_DEFAULT
# 22 "data/maps/FallarborTown/scripts.pory"
	release
# 23 "data/maps/FallarborTown/scripts.pory"
	end
# 24 "data/maps/FallarborTown/scripts.pory"

# 25 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Girl::
# 26 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MyPreciousAzurill, MSGBOX_NPC
# 27 "data/maps/FallarborTown/scripts.pory"
	end
# 28 "data/maps/FallarborTown/scripts.pory"

# 29 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Gentleman::
# 30 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_HaveYouChallengedFlannery, MSGBOX_NPC
# 31 "data/maps/FallarborTown/scripts.pory"
	end
# 32 "data/maps/FallarborTown/scripts.pory"

# 33 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_Azurill::
# 34 "data/maps/FallarborTown/scripts.pory"
	lock
# 35 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 36 "data/maps/FallarborTown/scripts.pory"
	waitse
# 37 "data/maps/FallarborTown/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
# 38 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_Azurill, MSGBOX_DEFAULT
# 39 "data/maps/FallarborTown/scripts.pory"
	waitmoncry
# 40 "data/maps/FallarborTown/scripts.pory"
	release
# 41 "data/maps/FallarborTown/scripts.pory"
	end
# 42 "data/maps/FallarborTown/scripts.pory"

# 43 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_BattleTentSign::
# 44 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_BattleTentSign, MSGBOX_SIGN
# 45 "data/maps/FallarborTown/scripts.pory"
	end
# 46 "data/maps/FallarborTown/scripts.pory"

# 47 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_TownSign::
# 48 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_TownSign, MSGBOX_SIGN
# 49 "data/maps/FallarborTown/scripts.pory"
	end
# 50 "data/maps/FallarborTown/scripts.pory"

# 51 "data/maps/FallarborTown/scripts.pory"
FallarborTown_EventScript_MoveTutorSign::
# 52 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_Text_MoveTutorSign, MSGBOX_SIGN
# 53 "data/maps/FallarborTown/scripts.pory"
	end
# 54 "data/maps/FallarborTown/scripts.pory"

# 55 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_ShadyCharactersCozmosHome:
# 56 "data/maps/FallarborTown/scripts.pory"
	.string "Something's happening,\n"
# 57 "data/maps/FallarborTown/scripts.pory"
	.string "and I don't like it!\p"
# 58 "data/maps/FallarborTown/scripts.pory"
	.string "I've seen shady characters wandering\n"
# 59 "data/maps/FallarborTown/scripts.pory"
	.string "in and out of PROF. COZMO's home…$"
# 60 "data/maps/FallarborTown/scripts.pory"

# 61 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_RegionKnownForMeteors:
# 62 "data/maps/FallarborTown/scripts.pory"
	.string "This region's been known for meteors\n"
# 63 "data/maps/FallarborTown/scripts.pory"
	.string "since the olden days.\p"
# 64 "data/maps/FallarborTown/scripts.pory"
	.string "They say METEOR FALLS was gouged out\n"
# 65 "data/maps/FallarborTown/scripts.pory"
	.string "by a falling meteorite long ago.$"
# 66 "data/maps/FallarborTown/scripts.pory"

# 67 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MyPreciousAzurill:
# 68 "data/maps/FallarborTown/scripts.pory"
	.string "See! Take a look!\n"
# 69 "data/maps/FallarborTown/scripts.pory"
	.string "This is my precious AZURILL!\p"
# 70 "data/maps/FallarborTown/scripts.pory"
	.string "It's slick and smooth and plushy, too!$"
# 71 "data/maps/FallarborTown/scripts.pory"

# 72 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_Azurill:
# 73 "data/maps/FallarborTown/scripts.pory"
	.string "AZURILL: Rooreelooo.$"
# 74 "data/maps/FallarborTown/scripts.pory"

# 75 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_HaveYouChallengedFlannery:
# 76 "data/maps/FallarborTown/scripts.pory"
	.string "Have you already challenged FLANNERY,\n"
# 77 "data/maps/FallarborTown/scripts.pory"
	.string "the LEADER of LAVARIDGE GYM?\p"
# 78 "data/maps/FallarborTown/scripts.pory"
	.string "The girl's grandfather was famous.\n"
# 79 "data/maps/FallarborTown/scripts.pory"
	.string "He was one of the ELITE FOUR in the\l"
# 80 "data/maps/FallarborTown/scripts.pory"
	.string "POKéMON LEAGUE at one point.\p"
# 81 "data/maps/FallarborTown/scripts.pory"
	.string "It wouldn't surprise me to see FLANNERY\n"
# 82 "data/maps/FallarborTown/scripts.pory"
	.string "become a great TRAINER in her own\l"
# 83 "data/maps/FallarborTown/scripts.pory"
	.string "right.$"
# 84 "data/maps/FallarborTown/scripts.pory"

# 85 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_BattleTentSign:
# 86 "data/maps/FallarborTown/scripts.pory"
	.string "BATTLE TENT FALLARBOR SITE\n"
# 87 "data/maps/FallarborTown/scripts.pory"
	.string "“May the Greatest Teams Gather!”$"
# 88 "data/maps/FallarborTown/scripts.pory"

# 89 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_TownSign:
# 90 "data/maps/FallarborTown/scripts.pory"
	.string "FALLARBOR TOWN\n"
# 91 "data/maps/FallarborTown/scripts.pory"
	.string "“A farm community with small gardens.”$"
# 92 "data/maps/FallarborTown/scripts.pory"

# 93 "data/maps/FallarborTown/scripts.pory"
FallarborTown_Text_MoveTutorSign:
# 94 "data/maps/FallarborTown/scripts.pory"
	.string "MOVE TUTOR'S HOUSE\n"
# 95 "data/maps/FallarborTown/scripts.pory"
	.string "“New moves taught to POKéMON.”$"

FallarborTown_EventScript_ProfElm::
# 101 "data/maps/FallarborTown/scripts.pory"
	lockall
# 102 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 104 "data/maps/FallarborTown/scripts.pory"
	goto_if_unset FLAG_MET_PROF_ELM, FallarborTown_EventScript_ProfElm_2
# 119 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_ProfElm_Text_2
# 120 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_0x8004, 1
# 121 "data/maps/FallarborTown/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPokedexInfo
# 122 "data/maps/FallarborTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 123 "data/maps/FallarborTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 124 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_ProfElm_Text_3
# 125 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 127 "data/maps/FallarborTown/scripts.pory"
	compare VAR_0x8009, 50
	goto_if_lt FallarborTown_EventScript_ProfElm_5
# 136 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_ProfElm_Text_5
# 137 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 138 "data/maps/FallarborTown/scripts.pory"
	setvar VAR_TEMP_TRANSFERRED_SPECIES, SPECIES_PICHU_SPIKY_EARED
# 139 "data/maps/FallarborTown/scripts.pory"
	givemon SPECIES_PICHU_SPIKY_EARED, 5
# 141 "data/maps/FallarborTown/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 142 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_ProfElm_Text_6
# 143 "data/maps/FallarborTown/scripts.pory"
	waitfanfare
# 144 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 146 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_ProfElm_Text_7
# 147 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 148 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_COMPLETED_PICHU_QUEST
# 149 "data/maps/FallarborTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 150 "data/maps/FallarborTown/scripts.pory"
	removeobject 18
# 151 "data/maps/FallarborTown/scripts.pory"
	delay 60
# 152 "data/maps/FallarborTown/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 153 "data/maps/FallarborTown/scripts.pory"
	releaseall
	end

# 158 "data/maps/FallarborTown/scripts.pory"
	releaseall
	end

FallarborTown_EventScript_ProfElm_2:
# 106 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_ProfElm_Text_0
# 107 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 108 "data/maps/FallarborTown/scripts.pory"
	delay 60
# 109 "data/maps/FallarborTown/scripts.pory"
	applymovement 18, Common_Movement_ExclamationMark
# 110 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 111 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_ProfElm_Text_1
# 112 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 113 "data/maps/FallarborTown/scripts.pory"
	setflag FLAG_MET_PROF_ELM
# 114 "data/maps/FallarborTown/scripts.pory"
	releaseall
	end

FallarborTown_EventScript_ProfElm_5:
# 129 "data/maps/FallarborTown/scripts.pory"
	msgbox FallarborTown_EventScript_ProfElm_Text_4
# 130 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 131 "data/maps/FallarborTown/scripts.pory"
	releaseall
	end


BattleTent_EventScript_BlockBattleTent::
# 164 "data/maps/FallarborTown/scripts.pory"
	lock
# 165 "data/maps/FallarborTown/scripts.pory"
	faceplayer
# 166 "data/maps/FallarborTown/scripts.pory"
	msgbox BattleTent_EventScript_BlockBattleTent_Text_0
# 167 "data/maps/FallarborTown/scripts.pory"
	closemessage
# 168 "data/maps/FallarborTown/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 169 "data/maps/FallarborTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/FallarborTown/scripts.pory"
	release
	end


FallarborTown_EventScript_ProfElm_Text_0:
# 106 "data/maps/FallarborTown/scripts.pory"
	.string "Hey there! My name is Professor Elm. I'm\n"
	.string "visiting from the JOHTO region to see\l"
	.string "the local HOENN POKéMON. And you are...?$"

FallarborTown_EventScript_ProfElm_Text_1:
# 111 "data/maps/FallarborTown/scripts.pory"
	.string "Oh? You moved to HOENN from JOHTO?\n"
	.string "That's great! I see you're a TRAINER\l"
	.string "with a POKéDEX, so I've got a little\l"
	.string "challenge for you.\p"
	.string "Show me you've caught 50 POKéMON\n"
	.string "species, and I'll give you a special\l"
	.string "POKéMON from JOHTO!$"

FallarborTown_EventScript_ProfElm_Text_2:
# 119 "data/maps/FallarborTown/scripts.pory"
	.string "How's it going, {PLAYER}? Here to try\n"
	.string "to earn that reward? Let's see your\l"
	.string "progress...$"

FallarborTown_EventScript_ProfElm_Text_3:
# 124 "data/maps/FallarborTown/scripts.pory"
	.string "You've caught {STR_VAR_2} POKéMON!$"

FallarborTown_EventScript_ProfElm_Text_4:
# 129 "data/maps/FallarborTown/scripts.pory"
	.string "Looks like you've got work to do!\p"
	.string "I want to make sure this JOHTO POKéMON\n"
	.string "goes to the right TRAINER, it's very,\l"
	.string "very special.$"

FallarborTown_EventScript_ProfElm_Text_5:
# 136 "data/maps/FallarborTown/scripts.pory"
	.string "Look at that, you did it! As promised,\n"
	.string "here's the JOHTO POKéMON!$"

FallarborTown_EventScript_ProfElm_Text_6:
# 142 "data/maps/FallarborTown/scripts.pory"
	.string "{PLAYER} received a special Pichu!$"

FallarborTown_EventScript_ProfElm_Text_7:
# 146 "data/maps/FallarborTown/scripts.pory"
	.string "That Pichu is special! The scientists in\n"
	.string "JOHTO believe she traveled through\l"
	.string "time with Celebi, so it has unique stats\l"
	.string "and cannot evolve.\p"
	.string "She's been stuck in the lab for a while,\n"
	.string "but she always seems to want out. Now,\l"
	.string "she can go on an adventure with you!\p"
	.string "I should probably continue my travels.\n"
	.string "See you around, {PLAYER}!$"

BattleTent_EventScript_BlockBattleTent_Text_0:
# 166 "data/maps/FallarborTown/scripts.pory"
	.string "The BATTLE TENT is currently closed for\n"
	.string "repairs. Sorry about that.$"

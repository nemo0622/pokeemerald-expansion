# 1 "data/maps/FortreeCity_House3/scripts.pory"

# 2 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_MapScripts::
# 3 "data/maps/FortreeCity_House3/scripts.pory"
	.byte 0
# 4 "data/maps/FortreeCity_House3/scripts.pory"

# 5 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_Maniac::
# 6 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_MetStevenHadAmazingPokemon, MSGBOX_NPC
# 7 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 8 "data/maps/FortreeCity_House3/scripts.pory"

# 9 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_EventScript_SchoolKidM::
# 10 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_House3_Text_OhYouHavePokedex, MSGBOX_NPC
# 11 "data/maps/FortreeCity_House3/scripts.pory"
	end
# 12 "data/maps/FortreeCity_House3/scripts.pory"

# 13 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_Text_MetStevenHadAmazingPokemon:
# 14 "data/maps/FortreeCity_House3/scripts.pory"
	.string "While speaking about POKéDEXES,\n"
# 15 "data/maps/FortreeCity_House3/scripts.pory"
	.string "I remembered something.\p"
# 16 "data/maps/FortreeCity_House3/scripts.pory"
	.string "I met this TRAINER, STEVEN, when\n"
# 17 "data/maps/FortreeCity_House3/scripts.pory"
	.string "I was searching for rare stones.\p"
# 18 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Hoo, boy, he had some amazing POKéMON\n"
# 19 "data/maps/FortreeCity_House3/scripts.pory"
	.string "with him.\p"
# 20 "data/maps/FortreeCity_House3/scripts.pory"
	.string "They weren't just rare, they were\n"
# 21 "data/maps/FortreeCity_House3/scripts.pory"
	.string "trained to terrifying extremes!\p"
# 22 "data/maps/FortreeCity_House3/scripts.pory"
	.string "He might even be stronger than the\n"
# 23 "data/maps/FortreeCity_House3/scripts.pory"
	.string "GYM LEADER in this town…$"
# 24 "data/maps/FortreeCity_House3/scripts.pory"

# 25 "data/maps/FortreeCity_House3/scripts.pory"
FortreeCity_House3_Text_OhYouHavePokedex:
# 26 "data/maps/FortreeCity_House3/scripts.pory"
	.string "What's that thing you have there?\p"
# 27 "data/maps/FortreeCity_House3/scripts.pory"
	.string "… … … … … …\p"
# 28 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Oh, it's called a POKéDEX?\n"
# 29 "data/maps/FortreeCity_House3/scripts.pory"
	.string "It's really awesome!$"

FortreeCity_EventScript_FortreeShrineHint_OldMan::
# 35 "data/maps/FortreeCity_House3/scripts.pory"
	lock
# 36 "data/maps/FortreeCity_House3/scripts.pory"
	faceplayer
# 37 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_EventScript_FortreeShrineHint_OldMan_Text_0
# 38 "data/maps/FortreeCity_House3/scripts.pory"
	closemessage
# 39 "data/maps/FortreeCity_House3/scripts.pory"
	applymovement 3, Common_Movement_QuestionMark
# 40 "data/maps/FortreeCity_House3/scripts.pory"
	waitmovement 0
# 41 "data/maps/FortreeCity_House3/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 42 "data/maps/FortreeCity_House3/scripts.pory"
	waitmovement 0
# 43 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_EventScript_FortreeShrineHint_OldMan_Text_1
# 44 "data/maps/FortreeCity_House3/scripts.pory"
	closemessage
# 45 "data/maps/FortreeCity_House3/scripts.pory"
	applymovement 3, Common_Movement_FacePlayer
# 46 "data/maps/FortreeCity_House3/scripts.pory"
	waitmovement 0
# 47 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_EventScript_FortreeShrineHint_OldMan_Text_2
# 48 "data/maps/FortreeCity_House3/scripts.pory"
	closemessage
# 49 "data/maps/FortreeCity_House3/scripts.pory"
	release
	end


FortreeCity_EventScript_FortreeShrineHint_Lady::
# 55 "data/maps/FortreeCity_House3/scripts.pory"
	lock
# 56 "data/maps/FortreeCity_House3/scripts.pory"
	faceplayer
# 57 "data/maps/FortreeCity_House3/scripts.pory"
	msgbox FortreeCity_EventScript_FortreeShrineHint_Lady_Text_0
# 58 "data/maps/FortreeCity_House3/scripts.pory"
	closemessage
# 59 "data/maps/FortreeCity_House3/scripts.pory"
	release
	end


FortreeCity_EventScript_FortreeShrineHint_OldMan_Text_0:
# 37 "data/maps/FortreeCity_House3/scripts.pory"
	.string "You! Did you see it!? The other night...\n"
	.string "every shrine from the EAST to the WEST\l"
	.string "in FORTREE lit up one by one...\p"
	.string "You have to check for me!$"

FortreeCity_EventScript_FortreeShrineHint_OldMan_Text_1:
# 43 "data/maps/FortreeCity_House3/scripts.pory"
	.string "Grandpa, what are you talking about?\n"
	.string "None of us saw anything!$"

FortreeCity_EventScript_FortreeShrineHint_OldMan_Text_2:
# 47 "data/maps/FortreeCity_House3/scripts.pory"
	.string "I'm sorry about him. He seems to think\n"
	.string "one of the shrines in FORTREE has\l"
	.string "something to help TRAINERS.$"

FortreeCity_EventScript_FortreeShrineHint_Lady_Text_0:
# 57 "data/maps/FortreeCity_House3/scripts.pory"
	.string "My grandpa keeps talking about the\n"
	.string "shrines in FORTREE lighting up, one by\l"
	.string "one, from EAST to WEST. I wonder what he\l"
	.string "means.$"

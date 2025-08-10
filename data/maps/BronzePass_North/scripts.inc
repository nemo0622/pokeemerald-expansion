BronzePass_North_MapScripts::
# 2 "data/maps/BronzePass_North/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BronzePass_North_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BronzePass_North_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BronzePass_North/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, BronzePass_North_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BronzePass_North_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/BronzePass_North/scripts.pory"
	setobjectaswildencounter 8, ENCOUNTER_LAND
# 21 "data/maps/BronzePass_North/scripts.pory"
	setobjectaswildencounter 9, ENCOUNTER_LAND
# 22 "data/maps/BronzePass_North/scripts.pory"
	setobjectaswildencounter 10, ENCOUNTER_LAND
# 23 "data/maps/BronzePass_North/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
# 24 "data/maps/BronzePass_North/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
	return

BronzePass_North_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/BronzePass_North/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto BronzePass_North_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


BronzePass_North_EventScript_DirectionSign::
# 30 "data/maps/BronzePass_North/scripts.pory"
	lock
# 31 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_DirectionSign_Text_0
# 32 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 33 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_ChimeraThug::
# 39 "data/maps/BronzePass_North/scripts.pory"
	lock
# 40 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_ChimeraThug_Text_0
# 41 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_ChimeraThug_Text_1
# 42 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 43 "data/maps/BronzePass_North/scripts.pory"
	delay 30
# 44 "data/maps/BronzePass_North/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 45 "data/maps/BronzePass_North/scripts.pory"
	delay 30
# 46 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 47 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_ChimeraThug_Text_0
# 48 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_ChimeraThug_Text_2
# 49 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 50 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 51 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 52 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_Deliveryman::
# 58 "data/maps/BronzePass_North/scripts.pory"
	lock
# 59 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 60 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Deliveryman_Text_0
# 63 "data/maps/BronzePass_North/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DELIVERY, BronzePass_North_EventScript_Deliveryman_2
# 73 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_2
# 74 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 75 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, BronzePass_North_Movement_ChimeraEmphasizes
# 76 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 77 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_ChimeraThug_Text_0
# 78 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_3
# 79 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 80 "data/maps/BronzePass_North/scripts.pory"
	ballfollowingmon
# 81 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, BronzePass_North_Movement_ChimeraConfrontsPlayer
# 82 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 83 "data/maps/BronzePass_North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 84 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 85 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_ChimeraThug_Text_0
# 86 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_4
# 87 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 89 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_no_intro TRAINER_BRONZE_PASS_CHIMERA_GRUNT, BronzePass_North_Text_ChimeraGruntDefeated
# 91 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Deliveryman_Text_5
# 92 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_6
# 93 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 94 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, BronzePass_North_Movement_ChimeraGruntExits
# 95 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 96 "data/maps/BronzePass_North/scripts.pory"
	removeobject 2
# 97 "data/maps/BronzePass_North/scripts.pory"
	delay 20
# 99 "data/maps/BronzePass_North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 100 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 101 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Deliveryman_Text_0
# 102 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_7
# 103 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 104 "data/maps/BronzePass_North/scripts.pory"
	giveitem ITEM_PARCEL
# 105 "data/maps/BronzePass_North/scripts.pory"
	setflag FLAG_FOUND_LOST_DELIVERY
# 108 "data/maps/BronzePass_North/scripts.pory"
	release
	end

BronzePass_North_EventScript_Deliveryman_2:
# 65 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_1
# 66 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 67 "data/maps/BronzePass_North/scripts.pory"
	release
	end


# 117 "data/maps/BronzePass_North/scripts.pory"
BronzePass_North_Movement_ChimeraEmphasizes:
# 119 "data/maps/BronzePass_North/scripts.pory"
	walk_in_place_right
# 119 "data/maps/BronzePass_North/scripts.pory"
	walk_in_place_right
# 120 "data/maps/BronzePass_North/scripts.pory"
	step_end

# 123 "data/maps/BronzePass_North/scripts.pory"
BronzePass_North_Movement_ChimeraConfrontsPlayer:
# 125 "data/maps/BronzePass_North/scripts.pory"
	walk_down
# 126 "data/maps/BronzePass_North/scripts.pory"
	face_right
# 127 "data/maps/BronzePass_North/scripts.pory"
	step_end

# 130 "data/maps/BronzePass_North/scripts.pory"
BronzePass_North_Movement_ChimeraGruntExits:
# 132 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 132 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 132 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 132 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 132 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 132 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 133 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 133 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 133 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 134 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 135 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 135 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 135 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 135 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 136 "data/maps/BronzePass_North/scripts.pory"
	step_end

BronzePass_North_EventScript_PreventPassingSouth_GotParcel::
# 144 "data/maps/BronzePass_North/scripts.pory"
	lock
# 145 "data/maps/BronzePass_North/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 146 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 147 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_0
# 148 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_1
# 149 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 150 "data/maps/BronzePass_North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 151 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 152 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_LittleGirlBlockingExit::
# 158 "data/maps/BronzePass_North/scripts.pory"
	lock
# 159 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 160 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_0
# 161 "data/maps/BronzePass_North/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq BronzePass_North_EventScript_LittleGirlBlockingExit_2
# 168 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_LittleGirlBlockingExit_Text_1
# 169 "data/maps/BronzePass_North/scripts.pory"
	closemessage
BronzePass_North_EventScript_LittleGirlBlockingExit_1:
# 171 "data/maps/BronzePass_North/scripts.pory"
	release
	end

BronzePass_North_EventScript_LittleGirlBlockingExit_2:
# 163 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_LittleGirlBlockingExit_Text_0
# 164 "data/maps/BronzePass_North/scripts.pory"
	closemessage
	goto BronzePass_North_EventScript_LittleGirlBlockingExit_1


BronzePass_North_EventScript_Trainer_BronzePass_Chip::
# 182 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_single TRAINER_BRONZEPASS_CHIP, BronzePass_North_Text_Trainer_BronzePass_ChipIntro, BronzePass_North_Text_Trainer_BronzePass_ChipDefeat
# 183 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_0
# 184 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_1
# 185 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 186 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_NPC_Lass::
# 200 "data/maps/BronzePass_North/scripts.pory"
	lock
# 201 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 202 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_NPC_Lass_Text_0
# 203 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_NPC_Lass_Text_1
# 204 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 205 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_Trainer_BronzePass_Rose::
# 211 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_single TRAINER_BRONZEPASS_ROSE, BronzePass_North_Text_Trainer_BronzePass_RoseIntro, BronzePass_North_Text_Trainer_BronzePass_RoseDefeat
# 212 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_0
# 213 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_1
# 214 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 215 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_Trainer_BronzePass_Felix::
# 229 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_single TRAINER_BRONZEPASS_FELIX, BronzePass_North_Text_Trainer_BronzePass_FelixIntro, BronzePass_North_Text_Trainer_BronzePass_FelixDefeat
# 230 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_0
# 231 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_1
# 232 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 233 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_NPC_TeenageBoy::
# 247 "data/maps/BronzePass_North/scripts.pory"
	lock
# 248 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 249 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_NPC_TeenageBoy_Text_0
# 250 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_NPC_TeenageBoy_Text_1
# 251 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 252 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_DirectionSign_Text_0:
# 31 "data/maps/BronzePass_North/scripts.pory"
	.string "Bronze Fields - North\n"
	.string "A Path of Winding Rocks\p"
	.string "{UP_ARROW} Acrisia City\n"
	.string "Bronze Fields - South {DOWN_ARROW}$"

BronzePass_North_EventScript_ChimeraThug_Text_0:
# 40 "data/maps/BronzePass_North/scripts.pory"
	.string "Thug$"

BronzePass_North_EventScript_ChimeraThug_Text_1:
# 41 "data/maps/BronzePass_North/scripts.pory"
	.string "Gahaha, gimme your stuff! I know you've\n"
	.string "got a Rotom Phone in here somewhere!$"

BronzePass_North_EventScript_ChimeraThug_Text_2:
# 48 "data/maps/BronzePass_North/scripts.pory"
	.string "Get outta here, you! The work of Team\n"
	.string "Chimera is none of your business...$"

BronzePass_North_EventScript_Deliveryman_Text_0:
# 60 "data/maps/BronzePass_North/scripts.pory"
	.string "Deliveryman$"

BronzePass_North_EventScript_Deliveryman_Text_1:
# 65 "data/maps/BronzePass_North/scripts.pory"
	.string "Phew, that was a close call. That thug\n"
	.string "got away with a few trinkets, but\l"
	.string "nothing too valuable.\p"
	.string "That Rotom Phone in the shipment was\n"
	.string "unharmed, right? Remember, you can use\l"
	.string "it to check your {COLOR GREEN}Pokédex, ongoing\l"
	.string "Quests, and the Region Map{COLOR DARK_GRAY}!$"

BronzePass_North_EventScript_Deliveryman_Text_2:
# 73 "data/maps/BronzePass_North/scripts.pory"
	.string "You! You have to help me! This guy\n"
	.string "attacked my Mudbray and is trying to\l"
	.string "rob me!$"

BronzePass_North_EventScript_Deliveryman_Text_3:
# 78 "data/maps/BronzePass_North/scripts.pory"
	.string "Quit stalling for time, I know you've got\n"
	.string "good stuff here! I've knocked out your\l"
	.string "Pokémon, I'll knock you out next!$"

BronzePass_North_EventScript_Deliveryman_Text_4:
# 86 "data/maps/BronzePass_North/scripts.pory"
	.string "Trying to stop me, eh? I'll teach you a\n"
	.string "lesson!$"

BronzePass_North_EventScript_Deliveryman_Text_5:
# 91 "data/maps/BronzePass_North/scripts.pory"
	.string "Chimera Grunt$"

BronzePass_North_EventScript_Deliveryman_Text_6:
# 92 "data/maps/BronzePass_North/scripts.pory"
	.string "A Pokédex is key to our plans, we need\n"
	.string "to know where to find- ah, no, I almost\l"
	.string "let it slip!\p"
	.string "You just got lucky, kid! I'll get you for\n"
	.string "this!$"

BronzePass_North_EventScript_Deliveryman_Text_7:
# 102 "data/maps/BronzePass_North/scripts.pory"
	.string "Thanks for saving me, buddy! You're a\n"
	.string "new student at the University, right?\l"
	.string "Turns out, that's right where I was\l"
	.string "headed with this delivery.\p"
	.string "I've got to stay behind and clean this\n"
	.string "up. Here, take this {COLOR GREEN}package{COLOR DARK_GRAY} and bring it\l"
	.string "{COLOR GREEN}back to the University{COLOR DARK_GRAY}, I'm sure they'll\l"
	.string "want it.$"

BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_0:
# 147 "data/maps/BronzePass_North/scripts.pory"
	.string "Little Girl$"

BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_1:
# 148 "data/maps/BronzePass_North/scripts.pory"
	.string "E-excuse me... I think that deliveryman\n"
	.string "is in trouble! I ran away to hide from\l"
	.string "the scary man over here. Please, you\l"
	.string "have to help!$"

BronzePass_North_EventScript_LittleGirlBlockingExit_Text_0:
# 163 "data/maps/BronzePass_North/scripts.pory"
	.string "I'm too scared of that scary man to\n"
	.string "move... Please, don't go away without\l"
	.string "helping!$"

BronzePass_North_EventScript_LittleGirlBlockingExit_Text_1:
# 168 "data/maps/BronzePass_North/scripts.pory"
	.string "The scary man is gone! Thank you!$"

BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_0:
# 183 "data/maps/BronzePass_North/scripts.pory"
	.string "Chip$"

BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_1:
# 184 "data/maps/BronzePass_North/scripts.pory"
	.string "I guess I need to train my Bug Pokémon\n"
	.string "more.$"

BronzePass_North_EventScript_NPC_Lass_Text_0:
# 202 "data/maps/BronzePass_North/scripts.pory"
	.string "Girl$"

BronzePass_North_EventScript_NPC_Lass_Text_1:
# 203 "data/maps/BronzePass_North/scripts.pory"
	.string "The broken rails around here are a\n"
	.string "little creepy... It just looks messy to\l"
	.string "me!$"

BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_0:
# 212 "data/maps/BronzePass_North/scripts.pory"
	.string "Rose$"

BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_1:
# 213 "data/maps/BronzePass_North/scripts.pory"
	.string "We just moved to the Ilios Region. The\n"
	.string "Pokémon here are really different than\l"
	.string "they were at our old home.$"

BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_0:
# 230 "data/maps/BronzePass_North/scripts.pory"
	.string "Felix$"

BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_1:
# 231 "data/maps/BronzePass_North/scripts.pory"
	.string "I brought my Hoothoot from the Johto\n"
	.string "Region when we moved here. I didn't know\l"
	.string "Hoothoot lives here too!$"

BronzePass_North_EventScript_NPC_TeenageBoy_Text_0:
# 249 "data/maps/BronzePass_North/scripts.pory"
	.string "Teenage Boy$"

BronzePass_North_EventScript_NPC_TeenageBoy_Text_1:
# 250 "data/maps/BronzePass_North/scripts.pory"
	.string "Guess it's super rocky up here, huh?\n"
	.string "South of here, the Jusmail Town Gym is\l"
	.string "based around farming. The leader uses\l"
	.string "Grass and Bug-type Pokémon.$"

BronzePass_North_Text_ChimeraGruntDefeated::
# 112 "data/maps/BronzePass_North/scripts.pory"
	.string "Urgh, you're stronger than you look...$"

BronzePass_North_Text_Trainer_BronzePass_ChipIntro::
# 189 "data/maps/BronzePass_North/scripts.pory"
	.string "You'll never beat my Bug Pokémon!$"

BronzePass_North_Text_Trainer_BronzePass_ChipDefeat::
# 193 "data/maps/BronzePass_North/scripts.pory"
	.string "W-what? My Bug Pokémon!$"

BronzePass_North_Text_Trainer_BronzePass_RoseIntro::
# 218 "data/maps/BronzePass_North/scripts.pory"
	.string "My brother and I are looking for\n"
	.string "Pokémon here, but battling you sounds\l"
	.string "more fun!$"

BronzePass_North_Text_Trainer_BronzePass_RoseDefeat::
# 222 "data/maps/BronzePass_North/scripts.pory"
	.string "No way, I thought we had that!$"

BronzePass_North_Text_Trainer_BronzePass_FelixIntro::
# 236 "data/maps/BronzePass_North/scripts.pory"
	.string "Hey sis, I found an item! Huh? You're\n"
	.string "not my sister!$"

BronzePass_North_Text_Trainer_BronzePass_FelixDefeat::
# 240 "data/maps/BronzePass_North/scripts.pory"
	.string "Rats, the item was just a rock.$"

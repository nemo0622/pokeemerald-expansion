BronzePass_North_MapScripts::
# 2 "data/maps/BronzePass_North/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BronzePass_North_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BronzePass_North_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/BronzePass_North/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/BronzePass_North/scripts.pory"
	setobjectaswildencounter 8, ENCOUNTER_LAND
# 16 "data/maps/BronzePass_North/scripts.pory"
	setobjectaswildencounter 9, ENCOUNTER_LAND
# 17 "data/maps/BronzePass_North/scripts.pory"
	setobjectaswildencounter 10, ENCOUNTER_LAND
# 18 "data/maps/BronzePass_North/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
# 19 "data/maps/BronzePass_North/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
	return


BronzePass_North_EventScript_ChimeraThug::
# 25 "data/maps/BronzePass_North/scripts.pory"
	lock
# 26 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_ChimeraThug_Text_0
# 27 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_ChimeraThug_Text_1
# 28 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 29 "data/maps/BronzePass_North/scripts.pory"
	delay 30
# 30 "data/maps/BronzePass_North/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 31 "data/maps/BronzePass_North/scripts.pory"
	delay 30
# 32 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 33 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_ChimeraThug_Text_0
# 34 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_ChimeraThug_Text_2
# 35 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 36 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 37 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 38 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_Deliveryman::
# 44 "data/maps/BronzePass_North/scripts.pory"
	lock
# 45 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 46 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Deliveryman_Text_0
# 49 "data/maps/BronzePass_North/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DELIVERY, BronzePass_North_EventScript_Deliveryman_2
# 59 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_2
# 60 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 61 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, BronzePass_North_Movement_ChimeraEmphasizes
# 62 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 63 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_ChimeraThug_Text_0
# 64 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_3
# 65 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 66 "data/maps/BronzePass_North/scripts.pory"
	ballfollowingmon
# 67 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, BronzePass_North_Movement_ChimeraConfrontsPlayer
# 68 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 69 "data/maps/BronzePass_North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 70 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 71 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_ChimeraThug_Text_0
# 72 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_4
# 73 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 75 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_no_intro TRAINER_BRONZE_PASS_CHIMERA_GRUNT, BronzePass_North_Text_ChimeraGruntDefeated
# 77 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Deliveryman_Text_5
# 78 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_6
# 79 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 80 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, BronzePass_North_Movement_ChimeraGruntExits
# 81 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 82 "data/maps/BronzePass_North/scripts.pory"
	removeobject 2
# 83 "data/maps/BronzePass_North/scripts.pory"
	delay 20
# 85 "data/maps/BronzePass_North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 86 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 87 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Deliveryman_Text_0
# 88 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_7
# 89 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 90 "data/maps/BronzePass_North/scripts.pory"
	giveitem ITEM_PARCEL
# 91 "data/maps/BronzePass_North/scripts.pory"
	setflag FLAG_FOUND_LOST_DELIVERY
# 94 "data/maps/BronzePass_North/scripts.pory"
	release
	end

BronzePass_North_EventScript_Deliveryman_2:
# 51 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_1
# 52 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 53 "data/maps/BronzePass_North/scripts.pory"
	release
	end


# 103 "data/maps/BronzePass_North/scripts.pory"
BronzePass_North_Movement_ChimeraEmphasizes:
# 105 "data/maps/BronzePass_North/scripts.pory"
	walk_in_place_right
# 105 "data/maps/BronzePass_North/scripts.pory"
	walk_in_place_right
# 106 "data/maps/BronzePass_North/scripts.pory"
	step_end

# 109 "data/maps/BronzePass_North/scripts.pory"
BronzePass_North_Movement_ChimeraConfrontsPlayer:
# 111 "data/maps/BronzePass_North/scripts.pory"
	walk_down
# 112 "data/maps/BronzePass_North/scripts.pory"
	face_right
# 113 "data/maps/BronzePass_North/scripts.pory"
	step_end

# 116 "data/maps/BronzePass_North/scripts.pory"
BronzePass_North_Movement_ChimeraGruntExits:
# 118 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 118 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 118 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 118 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 118 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 118 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 119 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 119 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 119 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 120 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 121 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 121 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 121 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 121 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 122 "data/maps/BronzePass_North/scripts.pory"
	step_end

BronzePass_North_EventScript_PreventPassingSouth_GotParcel::
# 130 "data/maps/BronzePass_North/scripts.pory"
	lock
# 131 "data/maps/BronzePass_North/scripts.pory"
	applymovement 13, Common_Movement_FaceRight
# 132 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 133 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_0
# 134 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_1
# 135 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 136 "data/maps/BronzePass_North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 137 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 138 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_LittleGirlBlockingExit::
# 144 "data/maps/BronzePass_North/scripts.pory"
	lock
# 145 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 146 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_0
# 147 "data/maps/BronzePass_North/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq BronzePass_North_EventScript_LittleGirlBlockingExit_2
# 154 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_LittleGirlBlockingExit_Text_1
# 155 "data/maps/BronzePass_North/scripts.pory"
	closemessage
BronzePass_North_EventScript_LittleGirlBlockingExit_1:
# 157 "data/maps/BronzePass_North/scripts.pory"
	release
	end

BronzePass_North_EventScript_LittleGirlBlockingExit_2:
# 149 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_LittleGirlBlockingExit_Text_0
# 150 "data/maps/BronzePass_North/scripts.pory"
	closemessage
	goto BronzePass_North_EventScript_LittleGirlBlockingExit_1


BronzePass_North_EventScript_Trainer_BronzePass_Chip::
# 168 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_single TRAINER_BRONZEPASS_CHIP, BronzePass_North_Text_Trainer_BronzePass_ChipIntro, BronzePass_North_Text_Trainer_BronzePass_ChipDefeat
# 169 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_0
# 170 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_1
# 171 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 172 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_NPC_Lass::
# 186 "data/maps/BronzePass_North/scripts.pory"
	lock
# 187 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 188 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_NPC_Lass_Text_0
# 189 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_NPC_Lass_Text_1
# 190 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 191 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_Trainer_BronzePass_Rose::
# 197 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_single TRAINER_BRONZEPASS_ROSE, BronzePass_North_Text_Trainer_BronzePass_RoseIntro, BronzePass_North_Text_Trainer_BronzePass_RoseDefeat
# 198 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_0
# 199 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_1
# 200 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 201 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_Trainer_BronzePass_Felix::
# 215 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_single TRAINER_BRONZEPASS_FELIX, BronzePass_North_Text_Trainer_BronzePass_FelixIntro, BronzePass_North_Text_Trainer_BronzePass_FelixDefeat
# 216 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_0
# 217 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_1
# 218 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 219 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_NPC_TeenageBoy::
# 233 "data/maps/BronzePass_North/scripts.pory"
	lock
# 234 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 235 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_NPC_TeenageBoy_Text_0
# 236 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_NPC_TeenageBoy_Text_1
# 237 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 238 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_ChimeraThug_Text_0:
# 26 "data/maps/BronzePass_North/scripts.pory"
	.string "Thug$"

BronzePass_North_EventScript_ChimeraThug_Text_1:
# 27 "data/maps/BronzePass_North/scripts.pory"
	.string "Gahaha, gimme your stuff! I know you've\n"
	.string "got a Pokédex in here somewhere!$"

BronzePass_North_EventScript_ChimeraThug_Text_2:
# 34 "data/maps/BronzePass_North/scripts.pory"
	.string "Get outta here, you! The work of Team\n"
	.string "Chimera is none of your business...$"

BronzePass_North_EventScript_Deliveryman_Text_0:
# 46 "data/maps/BronzePass_North/scripts.pory"
	.string "Deliveryman$"

BronzePass_North_EventScript_Deliveryman_Text_1:
# 51 "data/maps/BronzePass_North/scripts.pory"
	.string "Phew, that was a close call. That thug\n"
	.string "got away with a few trinkets, but\l"
	.string "nothing too valuable.\p"
	.string "Now I just have to... clean all this up...\n"
	.string "hm.$"

BronzePass_North_EventScript_Deliveryman_Text_2:
# 59 "data/maps/BronzePass_North/scripts.pory"
	.string "You! You have to help me! This guy\n"
	.string "attacked my Mudbray and is trying to\l"
	.string "rob me!$"

BronzePass_North_EventScript_Deliveryman_Text_3:
# 64 "data/maps/BronzePass_North/scripts.pory"
	.string "Quit stalling for time, I know you've got\n"
	.string "good stuff here! I've knocked out your\l"
	.string "Pokémon, I'll knock you out next!$"

BronzePass_North_EventScript_Deliveryman_Text_4:
# 72 "data/maps/BronzePass_North/scripts.pory"
	.string "Trying to stop me, eh? I'll teach you a\n"
	.string "lesson!$"

BronzePass_North_EventScript_Deliveryman_Text_5:
# 77 "data/maps/BronzePass_North/scripts.pory"
	.string "Chimera Grunt$"

BronzePass_North_EventScript_Deliveryman_Text_6:
# 78 "data/maps/BronzePass_North/scripts.pory"
	.string "The Boss is gonna freak... well, they\n"
	.string "shouldn't have sent a new recruit like\l"
	.string "me out here anyway.\p"
	.string "You just got lucky, kid! I'll get you for\n"
	.string "this!$"

BronzePass_North_EventScript_Deliveryman_Text_7:
# 88 "data/maps/BronzePass_North/scripts.pory"
	.string "Thanks for saving me, buddy! You're a\n"
	.string "new student at the University, right?\l"
	.string "Turns out, that's right where I was\l"
	.string "headed with this delivery.\p"
	.string "I've got to stay behind and clean this\n"
	.string "up. Here, take this {COLOR GREEN}package{COLOR DARK_GRAY} and bring it\l"
	.string "{COLOR GREEN}back to the University{COLOR DARK_GRAY}, I'm sure they'll\l"
	.string "want it.$"

BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_0:
# 133 "data/maps/BronzePass_North/scripts.pory"
	.string "Little Girl$"

BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_1:
# 134 "data/maps/BronzePass_North/scripts.pory"
	.string "E-excuse me... I think that deliveryman\n"
	.string "is in trouble! I ran away to hide from\l"
	.string "the scary man over here. Please, you\l"
	.string "have to help!$"

BronzePass_North_EventScript_LittleGirlBlockingExit_Text_0:
# 149 "data/maps/BronzePass_North/scripts.pory"
	.string "I'm too scared of that scary man to\n"
	.string "move... Please, don't go away without\l"
	.string "helping!$"

BronzePass_North_EventScript_LittleGirlBlockingExit_Text_1:
# 154 "data/maps/BronzePass_North/scripts.pory"
	.string "The scary man is gone! Thank you!$"

BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_0:
# 169 "data/maps/BronzePass_North/scripts.pory"
	.string "Chip$"

BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_1:
# 170 "data/maps/BronzePass_North/scripts.pory"
	.string "I guess I need to train my Bug Pokémon\n"
	.string "more.$"

BronzePass_North_EventScript_NPC_Lass_Text_0:
# 188 "data/maps/BronzePass_North/scripts.pory"
	.string "Girl$"

BronzePass_North_EventScript_NPC_Lass_Text_1:
# 189 "data/maps/BronzePass_North/scripts.pory"
	.string "The broken rails around here are a\n"
	.string "little creepy... It just looks messy to\l"
	.string "me!$"

BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_0:
# 198 "data/maps/BronzePass_North/scripts.pory"
	.string "Rose$"

BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_1:
# 199 "data/maps/BronzePass_North/scripts.pory"
	.string "We just moved to the Ilios Region. The\n"
	.string "Pokémon here are really different than\l"
	.string "they were at our old home.$"

BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_0:
# 216 "data/maps/BronzePass_North/scripts.pory"
	.string "Felix$"

BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_1:
# 217 "data/maps/BronzePass_North/scripts.pory"
	.string "I brought my Hoothoot from the Johto\n"
	.string "Region when we moved here. I didn't know\l"
	.string "Hoothoot lives here too!$"

BronzePass_North_EventScript_NPC_TeenageBoy_Text_0:
# 235 "data/maps/BronzePass_North/scripts.pory"
	.string "Teenage Boy$"

BronzePass_North_EventScript_NPC_TeenageBoy_Text_1:
# 236 "data/maps/BronzePass_North/scripts.pory"
	.string "Guess it's super rocky up here, huh?\n"
	.string "South of here, the Jusmail Town Gym is\l"
	.string "based around farming. The leader uses\l"
	.string "Grass and Bug-type Pokémon.$"

BronzePass_North_Text_ChimeraGruntDefeated::
# 98 "data/maps/BronzePass_North/scripts.pory"
	.string "Urgh, you're stronger than you look...$"

BronzePass_North_Text_Trainer_BronzePass_ChipIntro::
# 175 "data/maps/BronzePass_North/scripts.pory"
	.string "You'll never beat my Bug Pokémon!$"

BronzePass_North_Text_Trainer_BronzePass_ChipDefeat::
# 179 "data/maps/BronzePass_North/scripts.pory"
	.string "W-what? My Bug Pokémon!$"

BronzePass_North_Text_Trainer_BronzePass_RoseIntro::
# 204 "data/maps/BronzePass_North/scripts.pory"
	.string "My brother and I are looking for\n"
	.string "Pokémon here, but battling you sounds\l"
	.string "more fun!$"

BronzePass_North_Text_Trainer_BronzePass_RoseDefeat::
# 208 "data/maps/BronzePass_North/scripts.pory"
	.string "No way, I thought we had that!$"

BronzePass_North_Text_Trainer_BronzePass_FelixIntro::
# 222 "data/maps/BronzePass_North/scripts.pory"
	.string "Hey sis, I found an item! Huh? You're\n"
	.string "not my sister!$"

BronzePass_North_Text_Trainer_BronzePass_FelixDefeat::
# 226 "data/maps/BronzePass_North/scripts.pory"
	.string "Rats, the item was just a rock.$"

BronzePass_North_MapScripts::
	.byte 0


BronzePass_North_EventScript_KleftisThug::
# 5 "data/maps/BronzePass_North/scripts.pory"
	lock
# 6 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_KleftisThug_Text_0
# 7 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_KleftisThug_Text_1
# 8 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 9 "data/maps/BronzePass_North/scripts.pory"
	delay 30
# 10 "data/maps/BronzePass_North/scripts.pory"
	emote 2, EMOTE_EXCLAM
# 11 "data/maps/BronzePass_North/scripts.pory"
	delay 30
# 12 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 13 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_KleftisThug_Text_0
# 14 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_KleftisThug_Text_2
# 15 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 16 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, Common_Movement_FaceOriginalDirection
# 17 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 18 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_Deliveryman::
# 24 "data/maps/BronzePass_North/scripts.pory"
	lock
# 25 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 26 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Deliveryman_Text_0
# 29 "data/maps/BronzePass_North/scripts.pory"
	goto_if_set FLAG_FOUND_LOST_DELIVERY, BronzePass_North_EventScript_Deliveryman_2
# 39 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_2
# 40 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 41 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, BronzePass_North_Movement_KleftisEmphasizes
# 42 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 43 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_KleftisThug_Text_0
# 44 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_3
# 45 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 46 "data/maps/BronzePass_North/scripts.pory"
	ballfollowingmon
# 47 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, BronzePass_North_Movement_KleftisConfrontsPlayer
# 48 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 49 "data/maps/BronzePass_North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 50 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 51 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_KleftisThug_Text_0
# 52 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_4
# 53 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 55 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_no_intro TRAINER_BRONZE_PASS_KLEFTIS_GRUNT, BronzePass_North_Text_KleftisGruntDefeated
# 57 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Deliveryman_Text_5
# 58 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_6
# 59 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 60 "data/maps/BronzePass_North/scripts.pory"
	applymovement 2, BronzePass_North_Movement_KleftisGruntExits
# 61 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 62 "data/maps/BronzePass_North/scripts.pory"
	removeobject 2
# 63 "data/maps/BronzePass_North/scripts.pory"
	delay 20
# 65 "data/maps/BronzePass_North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 66 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 67 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Deliveryman_Text_0
# 68 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_7
# 69 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 70 "data/maps/BronzePass_North/scripts.pory"
	giveitem ITEM_PARCEL
# 71 "data/maps/BronzePass_North/scripts.pory"
	setflag FLAG_FOUND_LOST_DELIVERY
# 74 "data/maps/BronzePass_North/scripts.pory"
	release
	end

BronzePass_North_EventScript_Deliveryman_2:
# 31 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Deliveryman_Text_1
# 32 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 33 "data/maps/BronzePass_North/scripts.pory"
	release
	end


# 83 "data/maps/BronzePass_North/scripts.pory"
BronzePass_North_Movement_KleftisEmphasizes:
# 85 "data/maps/BronzePass_North/scripts.pory"
	walk_in_place_right
# 85 "data/maps/BronzePass_North/scripts.pory"
	walk_in_place_right
# 86 "data/maps/BronzePass_North/scripts.pory"
	step_end

# 89 "data/maps/BronzePass_North/scripts.pory"
BronzePass_North_Movement_KleftisConfrontsPlayer:
# 91 "data/maps/BronzePass_North/scripts.pory"
	walk_down
# 92 "data/maps/BronzePass_North/scripts.pory"
	face_right
# 93 "data/maps/BronzePass_North/scripts.pory"
	step_end

# 96 "data/maps/BronzePass_North/scripts.pory"
BronzePass_North_Movement_KleftisGruntExits:
# 98 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 98 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 98 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 98 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 98 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 98 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 99 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 99 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 99 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 100 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_left
# 101 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 101 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 101 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 101 "data/maps/BronzePass_North/scripts.pory"
	walk_fast_down
# 102 "data/maps/BronzePass_North/scripts.pory"
	step_end

BronzePass_North_EventScript_PreventPassingSouth_GotParcel::
# 110 "data/maps/BronzePass_North/scripts.pory"
	lock
# 111 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_0
# 112 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 113 "data/maps/BronzePass_North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 114 "data/maps/BronzePass_North/scripts.pory"
	waitmovement 0
# 115 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_Trainer_BronzePass_Chip::
# 126 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_single TRAINER_BRONZEPASS_CHIP, BronzePass_North_Text_Trainer_BronzePass_ChipIntro, BronzePass_North_Text_Trainer_BronzePass_ChipDefeat
# 127 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_0
# 128 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_1
# 129 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 130 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_NPC_Lass::
# 144 "data/maps/BronzePass_North/scripts.pory"
	lock
# 145 "data/maps/BronzePass_North/scripts.pory"
	faceplayer
# 146 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_NPC_Lass_Text_0
# 147 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_NPC_Lass_Text_1
# 148 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 149 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_Trainer_BronzePass_Rose::
# 155 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_single TRAINER_BRONZEPASS_ROSE, BronzePass_North_Text_Trainer_BronzePass_RoseIntro, BronzePass_North_Text_Trainer_BronzePass_RoseDefeat
# 156 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_0
# 157 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_1
# 158 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 159 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_Trainer_BronzePass_Felix::
# 173 "data/maps/BronzePass_North/scripts.pory"
	trainerbattle_single TRAINER_BRONZEPASS_FELIX, BronzePass_North_Text_Trainer_BronzePass_FelixIntro, BronzePass_North_Text_Trainer_BronzePass_FelixDefeat
# 174 "data/maps/BronzePass_North/scripts.pory"
	speakername BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_0
# 175 "data/maps/BronzePass_North/scripts.pory"
	msgbox BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_1
# 176 "data/maps/BronzePass_North/scripts.pory"
	closemessage
# 177 "data/maps/BronzePass_North/scripts.pory"
	release
	end


BronzePass_North_EventScript_KleftisThug_Text_0:
# 6 "data/maps/BronzePass_North/scripts.pory"
	.string "Thug$"

BronzePass_North_EventScript_KleftisThug_Text_1:
# 7 "data/maps/BronzePass_North/scripts.pory"
	.string "Gahaha, gimme your stuff! I know you've\n"
	.string "got a Pokédex in here somewhere!$"

BronzePass_North_EventScript_KleftisThug_Text_2:
# 14 "data/maps/BronzePass_North/scripts.pory"
	.string "Get outta here, you! The work of Team\n"
	.string "Kleftis is none of your business...$"

BronzePass_North_EventScript_Deliveryman_Text_0:
# 26 "data/maps/BronzePass_North/scripts.pory"
	.string "Deliveryman$"

BronzePass_North_EventScript_Deliveryman_Text_1:
# 31 "data/maps/BronzePass_North/scripts.pory"
	.string "Phew, that was a close call. That thug\n"
	.string "got away with a few trinkets, but\l"
	.string "nothing too valuable.\p"
	.string "Now I just have to... clean all this up...\n"
	.string "hm.$"

BronzePass_North_EventScript_Deliveryman_Text_2:
# 39 "data/maps/BronzePass_North/scripts.pory"
	.string "You! You have to help me! This guy\n"
	.string "attacked my Mudbray and is trying to\l"
	.string "rob me!$"

BronzePass_North_EventScript_Deliveryman_Text_3:
# 44 "data/maps/BronzePass_North/scripts.pory"
	.string "Quit stalling for time, I know you've got\n"
	.string "good stuff here! I've knocked out your\l"
	.string "Pokémon, I'll knock you out next!$"

BronzePass_North_EventScript_Deliveryman_Text_4:
# 52 "data/maps/BronzePass_North/scripts.pory"
	.string "Trying to stop me, eh? I'll teach you a\n"
	.string "lesson!$"

BronzePass_North_EventScript_Deliveryman_Text_5:
# 57 "data/maps/BronzePass_North/scripts.pory"
	.string "Kleftis Grunt$"

BronzePass_North_EventScript_Deliveryman_Text_6:
# 58 "data/maps/BronzePass_North/scripts.pory"
	.string "The Boss is gonna freak... well, they\n"
	.string "shouldn't have sent a new recruit like\l"
	.string "me out here anyway.\p"
	.string "You just got lucky, kid! I'll get you for\n"
	.string "this!$"

BronzePass_North_EventScript_Deliveryman_Text_7:
# 68 "data/maps/BronzePass_North/scripts.pory"
	.string "Thanks for saving me, buddy! You're a\n"
	.string "new student at the University, right?\l"
	.string "Turns out, that's right where I was\l"
	.string "headed with this delivery.\p"
	.string "I've got to stay behind and clean this\n"
	.string "up. Here, take this {COLOR GREEN}package{COLOR DARK_GRAY} and bring it\l"
	.string "{COLOR GREEN}back to the University{COLOR DARK_GRAY}, I'm sure they'll\l"
	.string "want it.$"

BronzePass_North_EventScript_PreventPassingSouth_GotParcel_Text_0:
# 111 "data/maps/BronzePass_North/scripts.pory"
	.string "I shouldn't get too far from the\n"
	.string "University yet. Professor Elia would be\l"
	.string "concerned!$"

BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_0:
# 127 "data/maps/BronzePass_North/scripts.pory"
	.string "Chip$"

BronzePass_North_EventScript_Trainer_BronzePass_Chip_Text_1:
# 128 "data/maps/BronzePass_North/scripts.pory"
	.string "I guess I need to train my Bug Pokémon\n"
	.string "more.$"

BronzePass_North_EventScript_NPC_Lass_Text_0:
# 146 "data/maps/BronzePass_North/scripts.pory"
	.string "Girl$"

BronzePass_North_EventScript_NPC_Lass_Text_1:
# 147 "data/maps/BronzePass_North/scripts.pory"
	.string "The broken rails around here are a\n"
	.string "little creepy... It just looks messy to\l"
	.string "me!$"

BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_0:
# 156 "data/maps/BronzePass_North/scripts.pory"
	.string "Rose$"

BronzePass_North_EventScript_Trainer_BronzePass_Rose_Text_1:
# 157 "data/maps/BronzePass_North/scripts.pory"
	.string "We just moved to the Ilios Region. The\n"
	.string "Pokémon here are really different than\l"
	.string "they were at our old home.$"

BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_0:
# 174 "data/maps/BronzePass_North/scripts.pory"
	.string "Felix$"

BronzePass_North_EventScript_Trainer_BronzePass_Felix_Text_1:
# 175 "data/maps/BronzePass_North/scripts.pory"
	.string "I brought my Foongus from the Unova\n"
	.string "Region when we moved here. I didn't know\l"
	.string "Foongus lives here too!$"

BronzePass_North_Text_KleftisGruntDefeated::
# 78 "data/maps/BronzePass_North/scripts.pory"
	.string "Urgh, you're stronger than you look...$"

BronzePass_North_Text_Trainer_BronzePass_ChipIntro::
# 133 "data/maps/BronzePass_North/scripts.pory"
	.string "You'll never beat my Bug Pokémon!$"

BronzePass_North_Text_Trainer_BronzePass_ChipDefeat::
# 137 "data/maps/BronzePass_North/scripts.pory"
	.string "W-what? My Bug Pokémon!$"

BronzePass_North_Text_Trainer_BronzePass_RoseIntro::
# 162 "data/maps/BronzePass_North/scripts.pory"
	.string "My brother and I are looking for\n"
	.string "Pokémon here, but battling you sounds\l"
	.string "more fun!$"

BronzePass_North_Text_Trainer_BronzePass_RoseDefeat::
# 166 "data/maps/BronzePass_North/scripts.pory"
	.string "No way, I thought we had that!$"

BronzePass_North_Text_Trainer_BronzePass_FelixIntro::
# 180 "data/maps/BronzePass_North/scripts.pory"
	.string "Hey sis, I found an item! Huh? You're\n"
	.string "not my sister!$"

BronzePass_North_Text_Trainer_BronzePass_FelixDefeat::
# 184 "data/maps/BronzePass_North/scripts.pory"
	.string "Rats, the item was just my Foongus.$"

AsfalHills_MapScripts::
	.byte 0


AsfalHills_EventScript_DirectionSign::
# 5 "data/maps/AsfalHills/scripts.pory"
	lock
# 6 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_DirectionSign_Text_0
# 7 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 8 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Nurse::
# 14 "data/maps/AsfalHills/scripts.pory"
	lock
# 15 "data/maps/AsfalHills/scripts.pory"
	faceplayer
# 16 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 17 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_1, MSGBOX_YESNO
# 18 "data/maps/AsfalHills/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq AsfalHills_EventScript_Nurse_2
# 29 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 30 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_3
# 31 "data/maps/AsfalHills/scripts.pory"
	closemessage
AsfalHills_EventScript_Nurse_1:
# 33 "data/maps/AsfalHills/scripts.pory"
	release
	end

AsfalHills_EventScript_Nurse_2:
# 20 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 21 "data/maps/AsfalHills/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 22 "data/maps/AsfalHills/scripts.pory"
	delay 10
# 23 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Nurse_Text_0
# 24 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Nurse_Text_2
# 25 "data/maps/AsfalHills/scripts.pory"
	closemessage
	goto AsfalHills_EventScript_Nurse_1


AsfalHills_EventScript_Trainer_AsfalHills_Salmai::
# 39 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_SALMAI, AsfalHills_Text_Trainer_AsfalHills_SalmaiIntro, AsfalHills_Text_Trainer_AsfalHills_SalmaiDefeat
# 40 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_0
# 41 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_1
# 42 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 43 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_Trainer_AsfalHills_Ardrin::
# 57 "data/maps/AsfalHills/scripts.pory"
	trainerbattle_single TRAINER_ASFALHILLS_ARDRIN, AsfalHills_Text_Trainer_AsfalHills_ArdrinIntro, AsfalHills_Text_Trainer_AsfalHills_ArdrinDefeat
# 58 "data/maps/AsfalHills/scripts.pory"
	speakername AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_0
# 59 "data/maps/AsfalHills/scripts.pory"
	msgbox AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_1
# 60 "data/maps/AsfalHills/scripts.pory"
	closemessage
# 61 "data/maps/AsfalHills/scripts.pory"
	release
	end


AsfalHills_EventScript_DirectionSign_Text_0:
# 6 "data/maps/AsfalHills/scripts.pory"
	.string "Asfal Hills\n"
	.string "The Gentle Coastal Road\p"
	.string "{LEFT_ARROW} Froslass Cavern\n"
	.string "Sofos City {RIGHT_ARROW}$"

AsfalHills_EventScript_Nurse_Text_0:
# 16 "data/maps/AsfalHills/scripts.pory"
	.string "Nurse$"

AsfalHills_EventScript_Nurse_Text_1:
# 17 "data/maps/AsfalHills/scripts.pory"
	.string "Welcome to my Roadside Pokémon Healing\n"
	.string "Service! I'm here to help Trainers\l"
	.string "coming from Pythios Town make it to\l"
	.string "Sofos City.\p"
	.string "Would you like to heal your Pokémon?$"

AsfalHills_EventScript_Nurse_Text_2:
# 24 "data/maps/AsfalHills/scripts.pory"
	.string "Good luck on your adventures!$"

AsfalHills_EventScript_Nurse_Text_3:
# 30 "data/maps/AsfalHills/scripts.pory"
	.string "Feel free to come back any time!$"

AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_0:
# 40 "data/maps/AsfalHills/scripts.pory"
	.string "Salmai$"

AsfalHills_EventScript_Trainer_AsfalHills_Salmai_Text_1:
# 41 "data/maps/AsfalHills/scripts.pory"
	.string "Pokémon Eggs take many steps to hatch.\n"
	.string "Moving back and forth like this is a way\l"
	.string "to quickly hatch them!$"

AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_0:
# 58 "data/maps/AsfalHills/scripts.pory"
	.string "Ardrin$"

AsfalHills_EventScript_Trainer_AsfalHills_Ardrin_Text_1:
# 59 "data/maps/AsfalHills/scripts.pory"
	.string "I'm grateful for the roadside Nurse\n"
	.string "just over there.$"

AsfalHills_Text_Trainer_AsfalHills_SalmaiIntro::
# 46 "data/maps/AsfalHills/scripts.pory"
	.string "There's a good, long horizontal stretch\n"
	.string "on this route. Perfect for biking back\l"
	.string "and forth!$"

AsfalHills_Text_Trainer_AsfalHills_SalmaiDefeat::
# 50 "data/maps/AsfalHills/scripts.pory"
	.string "Huff, huff... I have to keep training!$"

AsfalHills_Text_Trainer_AsfalHills_ArdrinIntro::
# 64 "data/maps/AsfalHills/scripts.pory"
	.string "I'm hiking all the way from Jusmail Town.\n"
	.string "Where are you from?$"

AsfalHills_Text_Trainer_AsfalHills_ArdrinDefeat::
# 68 "data/maps/AsfalHills/scripts.pory"
	.string "That's quite a journey!$"

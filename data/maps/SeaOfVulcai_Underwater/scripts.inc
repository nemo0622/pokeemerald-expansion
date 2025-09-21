SeaOfVulcai_Underwater_MapScripts::
	.byte 0


VulcaiSea_Underwater_EventScript_Trainer_Underwater_Mauricius::
# 5 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	trainerbattle_single TRAINER_UNDERWATER_MAURICIUS, VulcaiSea_Underwater_Text_Trainer_Underwater_MauriciusIntro, VulcaiSea_Underwater_Text_Trainer_Underwater_MauriciusDefeat
# 6 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	speakername VulcaiSea_Underwater_EventScript_Trainer_Underwater_Mauricius_Text_0
# 7 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	msgbox VulcaiSea_Underwater_EventScript_Trainer_Underwater_Mauricius_Text_1
# 8 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	closemessage
# 9 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	release
	end


VulcaiSea_Underwater_EventScript_Trainer_Underwater_Quintus::
# 23 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	trainerbattle_single TRAINER_UNDERWATER_QUINTUS, VulcaiSea_Underwater_Text_Trainer_Underwater_QuintusIntro, VulcaiSea_Underwater_Text_Trainer_Underwater_QuintusDefeat
# 24 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	speakername VulcaiSea_Underwater_EventScript_Trainer_Underwater_Quintus_Text_0
# 25 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	msgbox VulcaiSea_Underwater_EventScript_Trainer_Underwater_Quintus_Text_1
# 26 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	closemessage
# 27 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	release
	end


VulcaiSea_Underwater_EventScript_Trainer_Underwater_Arik::
# 41 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	trainerbattle_single TRAINER_UNDERWATER_ARIK, VulcaiSea_Underwater_Text_Trainer_Underwater_ArikIntro, VulcaiSea_Underwater_Text_Trainer_Underwater_ArikDefeat
# 42 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	speakername VulcaiSea_Underwater_EventScript_Trainer_Underwater_Arik_Text_0
# 43 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	msgbox VulcaiSea_Underwater_EventScript_Trainer_Underwater_Arik_Text_1
# 44 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	closemessage
# 45 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	release
	end


VulcaiSea_Underwater_EventScript_DiverWithDoll::
# 59 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	lock
# 60 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	faceplayer
# 61 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	speakername VulcaiSea_Underwater_EventScript_DiverWithDoll_Text_0
# 62 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	msgbox VulcaiSea_Underwater_EventScript_DiverWithDoll_Text_1
# 63 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	closemessage
# 64 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	goto_if_unset FLAG_GOT_DRAGONITE_DOLL, VulcaiSea_Underwater_EventScript_DiverWithDoll_2
VulcaiSea_Underwater_EventScript_DiverWithDoll_1:
# 73 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	release
	end

VulcaiSea_Underwater_EventScript_DiverWithDoll_2:
# 66 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	speakername VulcaiSea_Underwater_EventScript_DiverWithDoll_Text_0
# 67 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	msgbox VulcaiSea_Underwater_EventScript_DiverWithDoll_Text_2
# 68 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	closemessage
# 69 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	delay 5
# 70 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	givedecoration DECOR_DRAGONITE_DOLL
# 71 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	closemessage
	goto VulcaiSea_Underwater_EventScript_DiverWithDoll_1


VulcaiSea_Underwater_EventScript_Trainer_Underwater_Mauricius_Text_0:
# 6 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "Mauricius$"

VulcaiSea_Underwater_EventScript_Trainer_Underwater_Mauricius_Text_1:
# 7 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "Most Trainers can't use Dive to get into\n"
	.string "these waters. It's hard for most people\l"
	.string "to get south to the Fresco Isles now.$"

VulcaiSea_Underwater_EventScript_Trainer_Underwater_Quintus_Text_0:
# 24 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "Quintus$"

VulcaiSea_Underwater_EventScript_Trainer_Underwater_Quintus_Text_1:
# 25 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "Lots of things are lost at sea and\n"
	.string "preserved. In fact, some areas further\l"
	.string "south have entire ancient buildings\l"
	.string "underwater!$"

VulcaiSea_Underwater_EventScript_Trainer_Underwater_Arik_Text_0:
# 42 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "Arik$"

VulcaiSea_Underwater_EventScript_Trainer_Underwater_Arik_Text_1:
# 43 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "The items needed to evolve Clamperl can\n"
	.string "be found down here. Apparently, they're\l"
	.string "super rare.$"

VulcaiSea_Underwater_EventScript_DiverWithDoll_Text_0:
# 61 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "Diver$"

VulcaiSea_Underwater_EventScript_DiverWithDoll_Text_1:
# 62 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "I've found some cool things in the\n"
	.string "wreckage down here. There's a long\l"
	.string "history of sailing in Ilios, and with\l"
	.string "that comes sunken treasure!$"

VulcaiSea_Underwater_EventScript_DiverWithDoll_Text_2:
# 67 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "Actually, I've found a few of these in\n"
	.string "sealed crates down here. Why don't you\l"
	.string "take one?$"

VulcaiSea_Underwater_Text_Trainer_Underwater_MauriciusIntro::
# 12 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "See that? We're swimming under the\n"
	.string "blockage between the Sea of Asteri and\l"
	.string "Sea of Vulcai!$"

VulcaiSea_Underwater_Text_Trainer_Underwater_MauriciusDefeat::
# 16 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "I'll keep swimming, then.$"

VulcaiSea_Underwater_Text_Trainer_Underwater_QuintusIntro::
# 30 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "Check out all these sunken ships... I\n"
	.string "wonder how old they are.$"

VulcaiSea_Underwater_Text_Trainer_Underwater_QuintusDefeat::
# 34 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "We'd better steer clear of them.$"

VulcaiSea_Underwater_Text_Trainer_Underwater_ArikIntro::
# 48 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "There's so much hidden treasure down\n"
	.string "here!$"

VulcaiSea_Underwater_Text_Trainer_Underwater_ArikDefeat::
# 52 "data/maps/SeaOfVulcai_Underwater/scripts.pory"
	.string "Hey, the treasure is mine!$"

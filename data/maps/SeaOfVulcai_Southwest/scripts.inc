SeaOfVulcai_Southwest_MapScripts::
# 2 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeaOfVulcai_Southwest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SeaOfVulcai_Southwest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
# 16 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
# 17 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 18 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 19 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_SURF
	return


VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli::
# 25 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_LEYLI, VulcaiSea_Text_Trainer_VulcaiSea_LeyliIntro, VulcaiSea_Text_Trainer_VulcaiSea_LeyliDefeat
# 26 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_0
# 27 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_1
# 28 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 29 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis::
# 43 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_ZISSIS, VulcaiSea_Text_Trainer_VulcaiSea_ZissisIntro, VulcaiSea_Text_Trainer_VulcaiSea_ZissisDefeat
# 44 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_0
# 45 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_1
# 46 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 47 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia::
# 61 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_PELAGIA, VulcaiSea_Text_Trainer_VulcaiSea_PelagiaIntro, VulcaiSea_Text_Trainer_VulcaiSea_PelagiaDefeat
# 62 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_0
# 63 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_1
# 64 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 65 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon::
# 79 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_JAXON, VulcaiSea_Text_Trainer_VulcaiSea_JaxonIntro, VulcaiSea_Text_Trainer_VulcaiSea_JaxonDefeat
# 80 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_0
# 81 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_1
# 82 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 83 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria::
# 97 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_VICTORIA, VulcaiSea_Text_Trainer_VulcaiSea_VictoriaIntro, VulcaiSea_Text_Trainer_VulcaiSea_VictoriaDefeat
# 98 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_0
# 99 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_1
# 100 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 101 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Julien::
# 115 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_JULIEN, VulcaiSea_Text_Trainer_VulcaiSea_JulienIntro, VulcaiSea_Text_Trainer_VulcaiSea_JulienDefeat
# 116 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_0
# 117 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_1
# 118 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 119 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata::
# 133 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_TABATA, VulcaiSea_Text_Trainer_VulcaiSea_TabataIntro, VulcaiSea_Text_Trainer_VulcaiSea_TabataDefeat
# 134 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_0
# 135 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_1
# 136 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 137 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Hiker::
# 151 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	lock
# 152 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	faceplayer
# 153 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Hiker_Text_0
# 154 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Hiker_Text_1
# 155 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 156 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian::
# 162 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_SEBASTIAN, VulcaiSea_Text_Trainer_VulcaiSea_SebastianIntro, VulcaiSea_Text_Trainer_VulcaiSea_SebastianDefeat
# 163 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_0
# 164 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_1
# 165 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 166 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_AceTrainer::
# 180 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	lock
# 181 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	faceplayer
# 182 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_AceTrainer_Text_0
# 183 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_AceTrainer_Text_1
# 184 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 185 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_0:
# 26 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Leyli$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_1:
# 27 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Head southeast of here to get to the\n"
	.string "Fresco Isles. If you pass the volcanic\l"
	.string "rock and reach Palati City, you've gone\l"
	.string "too far south!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_0:
# 44 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Zissis$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_1:
# 45 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My dog Pokémon all live with my family in\n"
	.string "the Fresco Isles!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_0:
# 62 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Pelagia$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_1:
# 63 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I'm keeping watch of Zissis while he\n"
	.string "plays in the water. Our parents get\l"
	.string "worried when he's alone.$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_0:
# 80 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Jaxon$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_1:
# 81 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "More volcanoes are east, making up the\n"
	.string "Fresco Isles. Maybe I'll check those\l"
	.string "out too!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_0:
# 98 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Victoria$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_1:
# 99 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "If you're on a Trainer journey, you\n"
	.string "should head east to the Fresco Isles\l"
	.string "before going to Palati City.$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_0:
# 116 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Julien$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_1:
# 117 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "There are a lot of sunken ruins around\n"
	.string "here. I wanna explore them all!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_0:
# 134 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Tabata$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_1:
# 135 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "It's hard for ships to get through all\n"
	.string "the volcanic rock in the Sea of Vulcai.$"

VulcaiSea_EventScript_Hiker_Text_0:
# 153 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Hiker$"

VulcaiSea_EventScript_Hiker_Text_1:
# 154 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Lots of rare Pokémon live around here.\n"
	.string "Folks say that ships carrying them\l"
	.string "crashed against these rocks, and the\l"
	.string "Pokémon escaped onto the islands.\p"
	.string "Some of them were {COLOR GREEN}starter Pokémon{COLOR DARK_GRAY}. Now,\n"
	.string "this is one of the only places in the\l"
	.string "world where they can be found!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_0:
# 163 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Sebastian$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_1:
# 164 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "An active volcano... it's a scary\n"
	.string "thought. The only thing protecting us\l"
	.string "right now is a layer of rock.$"

VulcaiSea_EventScript_AceTrainer_Text_0:
# 182 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Ace Trainer$"

VulcaiSea_EventScript_AceTrainer_Text_1:
# 183 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "The Fresco Isles are just east of here.\n"
	.string "I hear the Gym Leaders are twins that\l"
	.string "are always fighting... that should make\l"
	.string "them easier to beat! The sixth Gym\l"
	.string "Badge is as good as mine!$"

VulcaiSea_Text_Trainer_VulcaiSea_LeyliIntro::
# 32 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "The Fresco Isles are just southeast of\n"
	.string "here!$"

VulcaiSea_Text_Trainer_VulcaiSea_LeyliDefeat::
# 36 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I should swim to the Fresco Isles\n"
	.string "Pokémon Center.$"

VulcaiSea_Text_Trainer_VulcaiSea_ZissisIntro::
# 50 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Ehehe, my dog Pokémon all paddle so\n"
	.string "cute!$"

VulcaiSea_Text_Trainer_VulcaiSea_ZissisDefeat::
# 54 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My dogs!$"

VulcaiSea_Text_Trainer_VulcaiSea_PelagiaIntro::
# 68 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My brother is obsessed with swimming\n"
	.string "with his Pokémon. He needs to come home\l"
	.string "for a meal!$"

VulcaiSea_Text_Trainer_VulcaiSea_PelagiaDefeat::
# 72 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Him and his dogs...$"

VulcaiSea_Text_Trainer_VulcaiSea_JaxonIntro::
# 86 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Woah, I can feel the heat of the lava\n"
	.string "from here...$"

VulcaiSea_Text_Trainer_VulcaiSea_JaxonDefeat::
# 90 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "The heat was throwing me off!$"

VulcaiSea_Text_Trainer_VulcaiSea_VictoriaIntro::
# 104 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I'm headed south to Palati City! I'm\n"
	.string "gonna beat the seventh Gym Leader,\l"
	.string "easy!$"

VulcaiSea_Text_Trainer_VulcaiSea_VictoriaDefeat::
# 108 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Maybe I should try the sixth Gym Leader\n"
	.string "in the Fresco Isles instead...$"

VulcaiSea_Text_Trainer_VulcaiSea_JulienIntro::
# 122 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My friends told me about a sunken\n"
	.string "temple around here! Where could it be?$"

VulcaiSea_Text_Trainer_VulcaiSea_JulienDefeat::
# 126 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I have to keep looking.$"

VulcaiSea_Text_Trainer_VulcaiSea_TabataIntro::
# 140 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "So many rocks around here... my fishing\n"
	.string "line is getting tangled!$"

VulcaiSea_Text_Trainer_VulcaiSea_TabataDefeat::
# 144 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "All tangled up.$"

VulcaiSea_Text_Trainer_VulcaiSea_SebastianIntro::
# 169 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I come here every day to paint the\n"
	.string "environment.$"

VulcaiSea_Text_Trainer_VulcaiSea_SebastianDefeat::
# 173 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I need more paint!$"

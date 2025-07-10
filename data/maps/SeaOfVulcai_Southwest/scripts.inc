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


VulcaiSea_EventScript_DirectionSign::
# 25 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	lock
# 26 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_DirectionSign_Text_0
# 27 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 28 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli::
# 34 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_LEYLI, VulcaiSea_Text_Trainer_VulcaiSea_LeyliIntro, VulcaiSea_Text_Trainer_VulcaiSea_LeyliDefeat
# 35 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_0
# 36 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_1
# 37 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 38 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis::
# 52 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_ZISSIS, VulcaiSea_Text_Trainer_VulcaiSea_ZissisIntro, VulcaiSea_Text_Trainer_VulcaiSea_ZissisDefeat
# 53 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_0
# 54 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_1
# 55 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 56 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia::
# 70 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_PELAGIA, VulcaiSea_Text_Trainer_VulcaiSea_PelagiaIntro, VulcaiSea_Text_Trainer_VulcaiSea_PelagiaDefeat
# 71 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_0
# 72 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_1
# 73 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 74 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon::
# 88 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_JAXON, VulcaiSea_Text_Trainer_VulcaiSea_JaxonIntro, VulcaiSea_Text_Trainer_VulcaiSea_JaxonDefeat
# 89 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_0
# 90 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_1
# 91 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 92 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria::
# 106 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_VICTORIA, VulcaiSea_Text_Trainer_VulcaiSea_VictoriaIntro, VulcaiSea_Text_Trainer_VulcaiSea_VictoriaDefeat
# 107 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_0
# 108 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_1
# 109 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 110 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Julien::
# 124 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_JULIEN, VulcaiSea_Text_Trainer_VulcaiSea_JulienIntro, VulcaiSea_Text_Trainer_VulcaiSea_JulienDefeat
# 125 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_0
# 126 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_1
# 127 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 128 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata::
# 142 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_TABATA, VulcaiSea_Text_Trainer_VulcaiSea_TabataIntro, VulcaiSea_Text_Trainer_VulcaiSea_TabataDefeat
# 143 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_0
# 144 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_1
# 145 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 146 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Hiker::
# 160 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	lock
# 161 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	faceplayer
# 162 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Hiker_Text_0
# 163 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Hiker_Text_1
# 164 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 165 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian::
# 171 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_SEBASTIAN, VulcaiSea_Text_Trainer_VulcaiSea_SebastianIntro, VulcaiSea_Text_Trainer_VulcaiSea_SebastianDefeat
# 172 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_0
# 173 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_1
# 174 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 175 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_AceTrainer::
# 189 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	lock
# 190 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	faceplayer
# 191 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_AceTrainer_Text_0
# 192 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_AceTrainer_Text_1
# 193 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 194 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_DirectionSign_Text_0:
# 26 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Sea of Vulcai\n"
	.string "The Molten Sea\p"
	.string "{UP_ARROW} Sea of Asteri\n"
	.string "Fresco Isles {RIGHT_ARROW}\n"
	.string "{DOWN_ARROW} Palati City$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_0:
# 35 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Leyli$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_1:
# 36 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Head southeast of here to get to the\n"
	.string "Fresco Isles. If you pass the volcanic\l"
	.string "rock and reach Palati City, you've gone\l"
	.string "too far south!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_0:
# 53 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Zissis$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_1:
# 54 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My dog Pokémon all live with my family in\n"
	.string "the Fresco Isles!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_0:
# 71 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Pelagia$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_1:
# 72 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I'm keeping watch of Zissis while he\n"
	.string "plays in the water. Our parents get\l"
	.string "worried when he's alone.$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_0:
# 89 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Jaxon$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_1:
# 90 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "More volcanoes are east, making up the\n"
	.string "Fresco Isles. Maybe I'll check those\l"
	.string "out too!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_0:
# 107 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Victoria$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_1:
# 108 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "If you're on a Trainer journey, you\n"
	.string "should head east to the Fresco Isles\l"
	.string "before going to Palati City.$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_0:
# 125 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Julien$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_1:
# 126 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "There are a lot of sunken ruins around\n"
	.string "here. I wanna explore them all!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_0:
# 143 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Tabata$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_1:
# 144 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "It's hard for ships to get through all\n"
	.string "the volcanic rock in the Sea of Vulcai.$"

VulcaiSea_EventScript_Hiker_Text_0:
# 162 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Hiker$"

VulcaiSea_EventScript_Hiker_Text_1:
# 163 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Lots of rare Pokémon live around here.\n"
	.string "Folks say that ships carrying them\l"
	.string "crashed against these rocks, and the\l"
	.string "Pokémon escaped onto the islands.\p"
	.string "Some of them were {COLOR GREEN}starter Pokémon{COLOR DARK_GRAY}. Now,\n"
	.string "this is one of the only places in the\l"
	.string "world where they can be found!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_0:
# 172 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Sebastian$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_1:
# 173 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "An active volcano... it's a scary\n"
	.string "thought. The only thing protecting us\l"
	.string "right now is a layer of rock.$"

VulcaiSea_EventScript_AceTrainer_Text_0:
# 191 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Ace Trainer$"

VulcaiSea_EventScript_AceTrainer_Text_1:
# 192 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "The Fresco Isles are just east of here.\n"
	.string "I hear the Gym Leaders are twins that\l"
	.string "are always fighting... that should make\l"
	.string "them easier to beat! The sixth Gym\l"
	.string "Badge is as good as mine!$"

VulcaiSea_Text_Trainer_VulcaiSea_LeyliIntro::
# 41 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "The Fresco Isles are just southeast of\n"
	.string "here!$"

VulcaiSea_Text_Trainer_VulcaiSea_LeyliDefeat::
# 45 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I should swim to the Fresco Isles\n"
	.string "Pokémon Center.$"

VulcaiSea_Text_Trainer_VulcaiSea_ZissisIntro::
# 59 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Ehehe, my dog Pokémon all paddle so\n"
	.string "cute!$"

VulcaiSea_Text_Trainer_VulcaiSea_ZissisDefeat::
# 63 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My dogs!$"

VulcaiSea_Text_Trainer_VulcaiSea_PelagiaIntro::
# 77 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My brother is obsessed with swimming\n"
	.string "with his Pokémon. He needs to come home\l"
	.string "for a meal!$"

VulcaiSea_Text_Trainer_VulcaiSea_PelagiaDefeat::
# 81 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Him and his dogs...$"

VulcaiSea_Text_Trainer_VulcaiSea_JaxonIntro::
# 95 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Woah, I can feel the heat of the lava\n"
	.string "from here...$"

VulcaiSea_Text_Trainer_VulcaiSea_JaxonDefeat::
# 99 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "The heat was throwing me off!$"

VulcaiSea_Text_Trainer_VulcaiSea_VictoriaIntro::
# 113 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I'm headed south to Palati City! I'm\n"
	.string "gonna beat the seventh Gym Leader,\l"
	.string "easy!$"

VulcaiSea_Text_Trainer_VulcaiSea_VictoriaDefeat::
# 117 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Maybe I should try the sixth Gym Leader\n"
	.string "in the Fresco Isles instead...$"

VulcaiSea_Text_Trainer_VulcaiSea_JulienIntro::
# 131 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My friends told me about a sunken\n"
	.string "temple around here! Where could it be?$"

VulcaiSea_Text_Trainer_VulcaiSea_JulienDefeat::
# 135 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I have to keep looking.$"

VulcaiSea_Text_Trainer_VulcaiSea_TabataIntro::
# 149 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "So many rocks around here... my fishing\n"
	.string "line is getting tangled!$"

VulcaiSea_Text_Trainer_VulcaiSea_TabataDefeat::
# 153 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "All tangled up.$"

VulcaiSea_Text_Trainer_VulcaiSea_SebastianIntro::
# 178 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I come here every day to paint the\n"
	.string "environment.$"

VulcaiSea_Text_Trainer_VulcaiSea_SebastianDefeat::
# 182 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I need more paint!$"

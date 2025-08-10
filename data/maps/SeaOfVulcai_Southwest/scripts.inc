SeaOfVulcai_Southwest_MapScripts::
# 2 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeaOfVulcai_Southwest_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SeaOfVulcai_Southwest_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, SeaOfVulcai_Southwest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SeaOfVulcai_Southwest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
# 21 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
# 22 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 23 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 24 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_SURF
	return

SeaOfVulcai_Southwest_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto SeaOfVulcai_Southwest_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


VulcaiSea_EventScript_DirectionSign::
# 30 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	lock
# 31 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_DirectionSign_Text_0
# 32 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 33 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli::
# 39 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_LEYLI, VulcaiSea_Text_Trainer_VulcaiSea_LeyliIntro, VulcaiSea_Text_Trainer_VulcaiSea_LeyliDefeat
# 40 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_0
# 41 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_1
# 42 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 43 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis::
# 57 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_ZISSIS, VulcaiSea_Text_Trainer_VulcaiSea_ZissisIntro, VulcaiSea_Text_Trainer_VulcaiSea_ZissisDefeat
# 58 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_0
# 59 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_1
# 60 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 61 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia::
# 75 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_PELAGIA, VulcaiSea_Text_Trainer_VulcaiSea_PelagiaIntro, VulcaiSea_Text_Trainer_VulcaiSea_PelagiaDefeat
# 76 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_0
# 77 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_1
# 78 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 79 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon::
# 93 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_JAXON, VulcaiSea_Text_Trainer_VulcaiSea_JaxonIntro, VulcaiSea_Text_Trainer_VulcaiSea_JaxonDefeat
# 94 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_0
# 95 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_1
# 96 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 97 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria::
# 111 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_VICTORIA, VulcaiSea_Text_Trainer_VulcaiSea_VictoriaIntro, VulcaiSea_Text_Trainer_VulcaiSea_VictoriaDefeat
# 112 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_0
# 113 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_1
# 114 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 115 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Julien::
# 129 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_JULIEN, VulcaiSea_Text_Trainer_VulcaiSea_JulienIntro, VulcaiSea_Text_Trainer_VulcaiSea_JulienDefeat
# 130 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_0
# 131 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_1
# 132 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 133 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata::
# 147 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_TABATA, VulcaiSea_Text_Trainer_VulcaiSea_TabataIntro, VulcaiSea_Text_Trainer_VulcaiSea_TabataDefeat
# 148 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_0
# 149 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_1
# 150 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 151 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Hiker::
# 165 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	lock
# 166 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	faceplayer
# 167 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Hiker_Text_0
# 168 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Hiker_Text_1
# 169 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 170 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian::
# 176 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_SEBASTIAN, VulcaiSea_Text_Trainer_VulcaiSea_SebastianIntro, VulcaiSea_Text_Trainer_VulcaiSea_SebastianDefeat
# 177 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_0
# 178 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_1
# 179 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 180 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_AceTrainer::
# 194 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	lock
# 195 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	faceplayer
# 196 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	speakername VulcaiSea_EventScript_AceTrainer_Text_0
# 197 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	msgbox VulcaiSea_EventScript_AceTrainer_Text_1
# 198 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	closemessage
# 199 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	release
	end


VulcaiSea_EventScript_DirectionSign_Text_0:
# 31 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Sea of Vulcai\n"
	.string "The Molten Sea\p"
	.string "{UP_ARROW} Sea of Asteri\n"
	.string "Fresco Isles {RIGHT_ARROW}\n"
	.string "{DOWN_ARROW} Palati City$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_0:
# 40 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Leyli$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Leyli_Text_1:
# 41 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Head southeast of here to get to the\n"
	.string "Fresco Isles. If you pass the volcanic\l"
	.string "rock and reach Palati City, you've gone\l"
	.string "too far south!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_0:
# 58 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Zissis$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Zissis_Text_1:
# 59 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My dog Pokémon all live with my family in\n"
	.string "the Fresco Isles!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_0:
# 76 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Pelagia$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Pelagia_Text_1:
# 77 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I'm keeping watch of Zissis while he\n"
	.string "plays in the water. Our parents get\l"
	.string "worried when he's alone.$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_0:
# 94 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Jaxon$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Jaxon_Text_1:
# 95 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "More volcanoes are east, making up the\n"
	.string "Fresco Isles. Maybe I'll check those\l"
	.string "out too!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_0:
# 112 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Victoria$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Victoria_Text_1:
# 113 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "If you're on a Trainer journey, you\n"
	.string "should head east to the Fresco Isles\l"
	.string "before going to Palati City.$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_0:
# 130 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Julien$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Julien_Text_1:
# 131 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "There are some sunken ruins around\n"
	.string "here. I wanna explore them all!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_0:
# 148 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Tabata$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Tabata_Text_1:
# 149 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "It's hard for ships to get through all\n"
	.string "the volcanic rock in the Sea of Vulcai.$"

VulcaiSea_EventScript_Hiker_Text_0:
# 167 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Hiker$"

VulcaiSea_EventScript_Hiker_Text_1:
# 168 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Lots of rare Pokémon live around here.\n"
	.string "Folks say that ships carrying them\l"
	.string "crashed against these rocks, and the\l"
	.string "Pokémon escaped onto the islands.\p"
	.string "Some of them were {COLOR GREEN}starter Pokémon{COLOR DARK_GRAY}. Now,\n"
	.string "this is one of the only places in the\l"
	.string "world where they can be found!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_0:
# 177 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Sebastian$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sebastian_Text_1:
# 178 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "An active volcano... it's a scary\n"
	.string "thought. The only thing protecting us\l"
	.string "right now is a layer of rock.$"

VulcaiSea_EventScript_AceTrainer_Text_0:
# 196 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Ace Trainer$"

VulcaiSea_EventScript_AceTrainer_Text_1:
# 197 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "The Fresco Isles are just east of here.\n"
	.string "I hear the Gym Leaders are twins that\l"
	.string "are always fighting... that should make\l"
	.string "them easier to beat! The sixth Gym\l"
	.string "Badge is as good as mine!$"

VulcaiSea_Text_Trainer_VulcaiSea_LeyliIntro::
# 46 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "The Fresco Isles are just southeast of\n"
	.string "here!$"

VulcaiSea_Text_Trainer_VulcaiSea_LeyliDefeat::
# 50 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I should swim to the Fresco Isles\n"
	.string "Pokémon Center.$"

VulcaiSea_Text_Trainer_VulcaiSea_ZissisIntro::
# 64 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Ehehe, my dog Pokémon all paddle so\n"
	.string "cute!$"

VulcaiSea_Text_Trainer_VulcaiSea_ZissisDefeat::
# 68 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My dogs!$"

VulcaiSea_Text_Trainer_VulcaiSea_PelagiaIntro::
# 82 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My brother is obsessed with swimming\n"
	.string "with his Pokémon. He needs to come home\l"
	.string "for a meal!$"

VulcaiSea_Text_Trainer_VulcaiSea_PelagiaDefeat::
# 86 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Him and his dogs...$"

VulcaiSea_Text_Trainer_VulcaiSea_JaxonIntro::
# 100 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Woah, I can feel the heat of the lava\n"
	.string "from here...$"

VulcaiSea_Text_Trainer_VulcaiSea_JaxonDefeat::
# 104 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "The heat was throwing me off!$"

VulcaiSea_Text_Trainer_VulcaiSea_VictoriaIntro::
# 118 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I'm headed south to Palati City! I'm\n"
	.string "gonna beat the seventh Gym Leader,\l"
	.string "easy!$"

VulcaiSea_Text_Trainer_VulcaiSea_VictoriaDefeat::
# 122 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "Maybe I should try the sixth Gym Leader\n"
	.string "in the Fresco Isles instead...$"

VulcaiSea_Text_Trainer_VulcaiSea_JulienIntro::
# 136 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "My friends told me about a sunken\n"
	.string "temple around here! Where could it be?$"

VulcaiSea_Text_Trainer_VulcaiSea_JulienDefeat::
# 140 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I have to keep looking.$"

VulcaiSea_Text_Trainer_VulcaiSea_TabataIntro::
# 154 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "So many rocks around here... my fishing\n"
	.string "line is getting tangled!$"

VulcaiSea_Text_Trainer_VulcaiSea_TabataDefeat::
# 158 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "All tangled up.$"

VulcaiSea_Text_Trainer_VulcaiSea_SebastianIntro::
# 183 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I come here every day to paint the\n"
	.string "environment.$"

VulcaiSea_Text_Trainer_VulcaiSea_SebastianDefeat::
# 187 "data/maps/SeaOfVulcai_Southwest/scripts.pory"
	.string "I need more paint!$"

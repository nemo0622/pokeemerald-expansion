SeaOfAsteri_Central_MapScripts::
# 2 "data/maps/SeaOfAsteri_Central/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeaOfAsteri_Central_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SeaOfAsteri_Central_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SeaOfAsteri_Central/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, SeaOfAsteri_Central_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
SeaOfAsteri_Central_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 8 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 9 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 10 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 11 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 12 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 13 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 14 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 15 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 16 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 17 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 18 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 19 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 20 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
# 21 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 22 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 23 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_SURF
# 24 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_SURF
	return

SeaOfAsteri_Central_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 5 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto SeaOfAsteri_Central_MapScripts_MAP_SCRIPT_ON_TRANSITION_1


AsteriSea_Central_EventScript_DirectionSign::
# 30 "data/maps/SeaOfAsteri_Central/scripts.pory"
	lock
# 31 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_DirectionSign_Text_0
# 32 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 33 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Gentleman::
# 39 "data/maps/SeaOfAsteri_Central/scripts.pory"
	lock
# 40 "data/maps/SeaOfAsteri_Central/scripts.pory"
	faceplayer
# 41 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Gentleman_Text_0
# 42 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Gentleman_Text_1
# 43 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 44 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Matilda::
# 50 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_MATILDA, AsteriSea_Central_Text_Trainer_AsteriSea_MatildaIntro, AsteriSea_Central_Text_Trainer_AsteriSea_MatildaDefeat
# 51 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Matilda_Text_0
# 52 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Matilda_Text_1
# 53 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 54 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Harvey::
# 68 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_HARVEY, AsteriSea_Central_Text_Trainer_AsteriSea_HarveyIntro, AsteriSea_Central_Text_Trainer_AsteriSea_HarveyDefeat
# 69 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Harvey_Text_0
# 70 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Harvey_Text_1
# 71 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 72 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Joseph::
# 86 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_JOSEPH, AsteriSea_Central_Text_Trainer_AsteriSea_JosephIntro, AsteriSea_Central_Text_Trainer_AsteriSea_JosephDefeat
# 87 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Joseph_Text_0
# 88 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Joseph_Text_1
# 89 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 90 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Leon::
# 104 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_LEON, AsteriSea_Central_Text_Trainer_AsteriSea_LeonIntro, AsteriSea_Central_Text_Trainer_AsteriSea_LeonDefeat
# 105 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Leon_Text_0
# 106 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Leon_Text_1
# 107 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 108 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Maurie::
# 122 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_MAURIE, AsteriSea_Central_Text_Trainer_AsteriSea_MaurieIntro, AsteriSea_Central_Text_Trainer_AsteriSea_MaurieDefeat
# 123 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Maurie_Text_0
# 124 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Maurie_Text_1
# 125 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 126 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Sergius::
# 140 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_SERGIUS, AsteriSea_Central_Text_Trainer_AsteriSea_SergiusIntro, AsteriSea_Central_Text_Trainer_AsteriSea_SergiusDefeat
# 141 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Sergius_Text_0
# 142 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Sergius_Text_1
# 143 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 144 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Silvia::
# 158 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_SILVIA, AsteriSea_Central_Text_Trainer_AsteriSea_SilviaIntro, AsteriSea_Central_Text_Trainer_AsteriSea_SilviaDefeat
# 159 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Silvia_Text_0
# 160 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Silvia_Text_1
# 161 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 162 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Irene::
# 176 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_IRENE, AsteriSea_Central_Text_Trainer_AsteriSea_IreneIntro, AsteriSea_Central_Text_Trainer_AsteriSea_IreneDefeat
# 177 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Irene_Text_0
# 178 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Irene_Text_1
# 179 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 180 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Honoria::
# 194 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_HONORIA, AsteriSea_Central_Text_Trainer_AsteriSea_HonoriaIntro, AsteriSea_Central_Text_Trainer_AsteriSea_HonoriaDefeat
# 195 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Honoria_Text_0
# 196 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Honoria_Text_1
# 197 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 198 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_DirectionSign_Text_0:
# 31 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Asteri Sea - East\n"
	.string "The Sea of Grapes\p"
	.string "{LEFT_ARROW} Marmaro Island\n"
	.string "Myrrini Island {RIGHT_ARROW}$"

AsteriSea_Central_EventScript_Gentleman_Text_0:
# 41 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Gentleman$"

AsteriSea_Central_EventScript_Gentleman_Text_1:
# 42 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Sometimes, it's important to take a\n"
	.string "step back from the real world and\l"
	.string "connect with nature. That's why I come\l"
	.string "out here.$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Matilda_Text_0:
# 51 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Matilda$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Matilda_Text_1:
# 52 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I was chasing down a wild Pokémon, but\n"
	.string "it escaped into the trees. I think a lot\l"
	.string "of these Pokémon are pretty rare.$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Harvey_Text_0:
# 69 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Harvey$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Harvey_Text_1:
# 70 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I mean, you could say I'm patrolling the\n"
	.string "bridge. That's technically work!$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Joseph_Text_0:
# 87 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Joseph$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Joseph_Text_1:
# 88 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "You never know what you'll find when\n"
	.string "you explore areas like this.$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Leon_Text_0:
# 105 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Leon$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Leon_Text_1:
# 106 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Psychic-type Pokémon have all sorts of\n"
	.string "cool powers!$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Maurie_Text_0:
# 123 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Maurie$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Maurie_Text_1:
# 124 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Islands are really diverse areas! I\n"
	.string "think the shallow waters are perfect\l"
	.string "for Pokémon.$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Sergius_Text_0:
# 141 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Sergius$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Sergius_Text_1:
# 142 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Marmaro Island has a bit of a harsh\n"
	.string "vibe... Maybe I'll like Myrrini Island\l"
	.string "better.$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Silvia_Text_0:
# 159 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Silvia$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Silvia_Text_1:
# 160 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Between the land, the shallows, and the\n"
	.string "underwater depths, there are plenty of\l"
	.string "Pokémon to find around here!$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Irene_Text_0:
# 177 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Irene$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Irene_Text_1:
# 178 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "The fruits from Myrrini Island\n"
	.string "sometimes drop into the water. I've\l"
	.string "found a few floating this way!$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Honoria_Text_0:
# 195 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Honoria$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Honoria_Text_1:
# 196 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I'm looking for plants around here, but\n"
	.string "Pokémon keep jumping me!$"

AsteriSea_Central_Text_Trainer_AsteriSea_MatildaIntro::
# 57 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Aha! Caught ya!$"

AsteriSea_Central_Text_Trainer_AsteriSea_MatildaDefeat::
# 61 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Wait, you're not what I was looking for!$"

AsteriSea_Central_Text_Trainer_AsteriSea_HarveyIntro::
# 75 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "What? Hey! I'm, uh, on patrol! Hard at\n"
	.string "work!$"

AsteriSea_Central_Text_Trainer_AsteriSea_HarveyDefeat::
# 79 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Alright, fine... I was just sitting here.$"

AsteriSea_Central_Text_Trainer_AsteriSea_JosephIntro::
# 93 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "This is far off the beaten path. I\n"
	.string "wonder what could be out here.$"

AsteriSea_Central_Text_Trainer_AsteriSea_JosephDefeat::
# 97 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I'd better get back on the path home.$"

AsteriSea_Central_Text_Trainer_AsteriSea_LeonIntro::
# 111 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "My Pokémon can use their Psychic\n"
	.string "powers to levitate on water!$"

AsteriSea_Central_Text_Trainer_AsteriSea_LeonDefeat::
# 115 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I wish I could levitate, too.$"

AsteriSea_Central_Text_Trainer_AsteriSea_MaurieIntro::
# 129 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "There are so many Pokémon in the water!$"

AsteriSea_Central_Text_Trainer_AsteriSea_MaurieDefeat::
# 133 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Drat!$"

AsteriSea_Central_Text_Trainer_AsteriSea_SergiusIntro::
# 147 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Different Pokémon are found in\n"
	.string "different parts of the ocean!$"

AsteriSea_Central_Text_Trainer_AsteriSea_SergiusDefeat::
# 151 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I'd better swim to another part of the\n"
	.string "sea.$"

AsteriSea_Central_Text_Trainer_AsteriSea_SilviaIntro::
# 165 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Come on! I bet I'm faster than you!$"

AsteriSea_Central_Text_Trainer_AsteriSea_SilviaDefeat::
# 169 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Aww, I guess not...$"

AsteriSea_Central_Text_Trainer_AsteriSea_IreneIntro::
# 183 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Almost to Myrrini Island!$"

AsteriSea_Central_Text_Trainer_AsteriSea_IreneDefeat::
# 187 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "So close but so far!$"

AsteriSea_Central_Text_Trainer_AsteriSea_HonoriaIntro::
# 201 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I'm here for the unique plants that\n"
	.string "grow in shallow water. Have you found\l"
	.string "any?$"

AsteriSea_Central_Text_Trainer_AsteriSea_HonoriaDefeat::
# 205 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Time to keep looking!$"

SeaOfAsteri_Central_MapScripts::
# 2 "data/maps/SeaOfAsteri_Central/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeaOfAsteri_Central_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SeaOfAsteri_Central_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/SeaOfAsteri_Central/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
# 16 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 17 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 18 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_SURF
# 19 "data/maps/SeaOfAsteri_Central/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_SURF
	return


AsteriSea_Central_EventScript_Gentleman::
# 25 "data/maps/SeaOfAsteri_Central/scripts.pory"
	lock
# 26 "data/maps/SeaOfAsteri_Central/scripts.pory"
	faceplayer
# 27 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Gentleman_Text_0
# 28 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Gentleman_Text_1
# 29 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 30 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Matilda::
# 36 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_MATILDA, AsteriSea_Central_Text_Trainer_AsteriSea_MatildaIntro, AsteriSea_Central_Text_Trainer_AsteriSea_MatildaDefeat
# 37 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Matilda_Text_0
# 38 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Matilda_Text_1
# 39 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 40 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Harvey::
# 54 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_HARVEY, AsteriSea_Central_Text_Trainer_AsteriSea_HarveyIntro, AsteriSea_Central_Text_Trainer_AsteriSea_HarveyDefeat
# 55 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Harvey_Text_0
# 56 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Harvey_Text_1
# 57 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 58 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Joseph::
# 72 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_JOSEPH, AsteriSea_Central_Text_Trainer_AsteriSea_JosephIntro, AsteriSea_Central_Text_Trainer_AsteriSea_JosephDefeat
# 73 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Joseph_Text_0
# 74 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Joseph_Text_1
# 75 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 76 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Leon::
# 90 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_LEON, AsteriSea_Central_Text_Trainer_AsteriSea_LeonIntro, AsteriSea_Central_Text_Trainer_AsteriSea_LeonDefeat
# 91 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Leon_Text_0
# 92 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Leon_Text_1
# 93 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 94 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Maurie::
# 108 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_MAURIE, AsteriSea_Central_Text_Trainer_AsteriSea_MaurieIntro, AsteriSea_Central_Text_Trainer_AsteriSea_MaurieDefeat
# 109 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Maurie_Text_0
# 110 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Maurie_Text_1
# 111 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 112 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Sergius::
# 126 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_SERGIUS, AsteriSea_Central_Text_Trainer_AsteriSea_SergiusIntro, AsteriSea_Central_Text_Trainer_AsteriSea_SergiusDefeat
# 127 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Sergius_Text_0
# 128 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Sergius_Text_1
# 129 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 130 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Silvia::
# 144 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_SILVIA, AsteriSea_Central_Text_Trainer_AsteriSea_SilviaIntro, AsteriSea_Central_Text_Trainer_AsteriSea_SilviaDefeat
# 145 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Silvia_Text_0
# 146 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Silvia_Text_1
# 147 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 148 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Irene::
# 162 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_IRENE, AsteriSea_Central_Text_Trainer_AsteriSea_IreneIntro, AsteriSea_Central_Text_Trainer_AsteriSea_IreneDefeat
# 163 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Irene_Text_0
# 164 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Irene_Text_1
# 165 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 166 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Trainer_AsteriSea_Honoria::
# 180 "data/maps/SeaOfAsteri_Central/scripts.pory"
	trainerbattle_single TRAINER_ASTERISEA_HONORIA, AsteriSea_Central_Text_Trainer_AsteriSea_HonoriaIntro, AsteriSea_Central_Text_Trainer_AsteriSea_HonoriaDefeat
# 181 "data/maps/SeaOfAsteri_Central/scripts.pory"
	speakername AsteriSea_Central_EventScript_Trainer_AsteriSea_Honoria_Text_0
# 182 "data/maps/SeaOfAsteri_Central/scripts.pory"
	msgbox AsteriSea_Central_EventScript_Trainer_AsteriSea_Honoria_Text_1
# 183 "data/maps/SeaOfAsteri_Central/scripts.pory"
	closemessage
# 184 "data/maps/SeaOfAsteri_Central/scripts.pory"
	release
	end


AsteriSea_Central_EventScript_Gentleman_Text_0:
# 27 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Gentleman$"

AsteriSea_Central_EventScript_Gentleman_Text_1:
# 28 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Sometimes, it's important to take a\n"
	.string "step back from the real world and\l"
	.string "connect with nature. That's why I come\l"
	.string "out here.$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Matilda_Text_0:
# 37 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Matilda$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Matilda_Text_1:
# 38 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I was chasing down a wild Pokémon, but\n"
	.string "it escaped into the trees. I think a lot\l"
	.string "of these Pokémon are pretty rare.$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Harvey_Text_0:
# 55 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Harvey$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Harvey_Text_1:
# 56 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I mean, you could say I'm patrolling the\n"
	.string "bridge. That's technically work!$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Joseph_Text_0:
# 73 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Joseph$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Joseph_Text_1:
# 74 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "You never know what you'll find when\n"
	.string "you explore areas like this.$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Leon_Text_0:
# 91 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Leon$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Leon_Text_1:
# 92 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Psychic-type Pokémon have all sorts of\n"
	.string "cool powers!$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Maurie_Text_0:
# 109 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Maurie$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Maurie_Text_1:
# 110 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Islands are really diverse areas! I\n"
	.string "think the shallow waters are perfect\l"
	.string "for Pokémon.$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Sergius_Text_0:
# 127 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Sergius$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Sergius_Text_1:
# 128 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Marmaro Island has a bit of a harsh\n"
	.string "vibe... Maybe I'll like Myrrini Island\l"
	.string "better.$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Silvia_Text_0:
# 145 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Silvia$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Silvia_Text_1:
# 146 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Between the land, the shallows, and the\n"
	.string "underwater depths, there are plenty of\l"
	.string "Pokémon to find around here!$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Irene_Text_0:
# 163 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Irene$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Irene_Text_1:
# 164 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "The fruits from Myrrini Island\n"
	.string "sometimes drop into the water. I've\l"
	.string "found a few floating this way!$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Honoria_Text_0:
# 181 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Honoria$"

AsteriSea_Central_EventScript_Trainer_AsteriSea_Honoria_Text_1:
# 182 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I'm looking for plants around here, but\n"
	.string "Pokémon keep jumping me!$"

AsteriSea_Central_Text_Trainer_AsteriSea_MatildaIntro::
# 43 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Aha! Caught ya!$"

AsteriSea_Central_Text_Trainer_AsteriSea_MatildaDefeat::
# 47 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Wait, you're not what I was looking for!$"

AsteriSea_Central_Text_Trainer_AsteriSea_HarveyIntro::
# 61 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "What? Hey! I'm, uh, on patrol! Hard at\n"
	.string "work!$"

AsteriSea_Central_Text_Trainer_AsteriSea_HarveyDefeat::
# 65 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Alright, fine... I was just sitting here.$"

AsteriSea_Central_Text_Trainer_AsteriSea_JosephIntro::
# 79 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "This is far off the beaten path. I\n"
	.string "wonder what could be out here.$"

AsteriSea_Central_Text_Trainer_AsteriSea_JosephDefeat::
# 83 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I'd better get back on the path home.$"

AsteriSea_Central_Text_Trainer_AsteriSea_LeonIntro::
# 97 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "My Pokémon can use their Psychic\n"
	.string "powers to levitate on water!$"

AsteriSea_Central_Text_Trainer_AsteriSea_LeonDefeat::
# 101 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I wish I could levitate, too.$"

AsteriSea_Central_Text_Trainer_AsteriSea_MaurieIntro::
# 115 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "There are so many Pokémon in the water!$"

AsteriSea_Central_Text_Trainer_AsteriSea_MaurieDefeat::
# 119 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Drat!$"

AsteriSea_Central_Text_Trainer_AsteriSea_SergiusIntro::
# 133 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Different Pokémon are found in\n"
	.string "different parts of the ocean!$"

AsteriSea_Central_Text_Trainer_AsteriSea_SergiusDefeat::
# 137 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I'd better swim to another part of the\n"
	.string "sea.$"

AsteriSea_Central_Text_Trainer_AsteriSea_SilviaIntro::
# 151 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Come on! I bet I'm faster than you!$"

AsteriSea_Central_Text_Trainer_AsteriSea_SilviaDefeat::
# 155 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Aww, I guess not...$"

AsteriSea_Central_Text_Trainer_AsteriSea_IreneIntro::
# 169 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Almost to Myrrini Island!$"

AsteriSea_Central_Text_Trainer_AsteriSea_IreneDefeat::
# 173 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "So close but so far!$"

AsteriSea_Central_Text_Trainer_AsteriSea_HonoriaIntro::
# 187 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "I'm here for the unique plants that\n"
	.string "grow in shallow water. Have you found\l"
	.string "any?$"

AsteriSea_Central_Text_Trainer_AsteriSea_HonoriaDefeat::
# 191 "data/maps/SeaOfAsteri_Central/scripts.pory"
	.string "Time to keep looking!$"

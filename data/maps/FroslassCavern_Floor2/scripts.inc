FroslassCavern_Floor2_MapScripts::
# 2 "data/maps/FroslassCavern_Floor2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FroslassCavern_Floor2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FroslassCavern_Floor2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FroslassCavern_Floor2/scripts.pory"
	setflashlevel 4
	return


FroslassCavern_F2_EventScript_Trainer_FroslassCavern_F2_Sandor::
# 9 "data/maps/FroslassCavern_Floor2/scripts.pory"
	trainerbattle_single TRAINER_FROSLASSCAVERN_F2_SANDOR, FroslassCavern_F2_Text_Trainer_FroslassCavern_F2_SandorIntro, FroslassCavern_F2_Text_Trainer_FroslassCavern_F2_SandorDefeat
# 10 "data/maps/FroslassCavern_Floor2/scripts.pory"
	speakername FroslassCavern_F2_EventScript_Trainer_FroslassCavern_F2_Sandor_Text_0
# 11 "data/maps/FroslassCavern_Floor2/scripts.pory"
	msgbox FroslassCavern_F2_EventScript_Trainer_FroslassCavern_F2_Sandor_Text_1
# 12 "data/maps/FroslassCavern_Floor2/scripts.pory"
	closemessage
# 13 "data/maps/FroslassCavern_Floor2/scripts.pory"
	release
	end


FroslassCavern_F2_EventScript_Trainer_FroslassCavern_F2_Sandor_Text_0:
# 10 "data/maps/FroslassCavern_Floor2/scripts.pory"
	.string "Sandor$"

FroslassCavern_F2_EventScript_Trainer_FroslassCavern_F2_Sandor_Text_1:
# 11 "data/maps/FroslassCavern_Floor2/scripts.pory"
	.string "I don't just laugh at people on the ice,\n"
	.string "you know! I've sent my Pokémon to help\l"
	.string "before, I'm not a total jerk!$"

FroslassCavern_F2_Text_Trainer_FroslassCavern_F2_SandorIntro::
# 16 "data/maps/FroslassCavern_Floor2/scripts.pory"
	.string "It's hilarious watching people struggle\n"
	.string "to get across the ice!$"

FroslassCavern_F2_Text_Trainer_FroslassCavern_F2_SandorDefeat::
# 20 "data/maps/FroslassCavern_Floor2/scripts.pory"
	.string "Maybe I'm a bit too mean.$"

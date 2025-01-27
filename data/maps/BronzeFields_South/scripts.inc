BronzeFields_South_MapScripts::
# 2 "data/maps/BronzeFields_South/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BronzeFields_South_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BronzeFields_South_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/BronzeFields_South/scripts.pory"
	setobjectaswildencounter 8, ENCOUNTER_LAND
# 16 "data/maps/BronzeFields_South/scripts.pory"
	setobjectaswildencounter 9, ENCOUNTER_LAND
# 17 "data/maps/BronzeFields_South/scripts.pory"
	setobjectaswildencounter 10, ENCOUNTER_LAND
# 18 "data/maps/BronzeFields_South/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
# 19 "data/maps/BronzeFields_South/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
# 20 "data/maps/BronzeFields_South/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 21 "data/maps/BronzeFields_South/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
	return


BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick::
# 29 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_EMERICK_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_EmerickIntro, BronzeFields_South_Text_Trainer_BronzePass_EmerickDefeat
# 30 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_0
# 31 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_1
# 32 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 33 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph::
# 47 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_JosephIntro, BronzeFields_South_Text_Trainer_BronzePass_JosephDefeat
# 48 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_0
# 49 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_1
# 50 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 51 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_NPC_Man1::
# 65 "data/maps/BronzeFields_South/scripts.pory"
	lock
# 66 "data/maps/BronzeFields_South/scripts.pory"
	faceplayer
# 67 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_NPC_Man1_Text_0
# 68 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_NPC_Man1_Text_1
# 69 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 70 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt::
# 76 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_WYATT_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_WyattIntro, BronzeFields_South_Text_Trainer_BronzePass_WyattDefeat
# 77 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_0
# 78 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_1
# 79 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 80 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Milon::
# 94 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_MILON_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_MilonIntro, BronzeFields_South_Text_Trainer_BronzePass_MilonDefeat
# 95 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_0
# 96 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_1
# 97 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 98 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Kall::
# 112 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_KALL_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_KallIntro, BronzeFields_South_Text_Trainer_BronzePass_KallDefeat
# 113 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_0
# 114 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_1
# 115 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 116 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Therson::
# 130 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_THERSON_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_ThersonIntro, BronzeFields_South_Text_Trainer_BronzePass_ThersonDefeat
# 131 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_0
# 132 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_1
# 133 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 134 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_0:
# 30 "data/maps/BronzeFields_South/scripts.pory"
	.string "Emerick$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_1:
# 31 "data/maps/BronzeFields_South/scripts.pory"
	.string "Workin' the farm is tough, but my\n"
	.string "Pokémon do their best to help me out.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_0:
# 48 "data/maps/BronzeFields_South/scripts.pory"
	.string "Joseph$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_1:
# 49 "data/maps/BronzeFields_South/scripts.pory"
	.string "ACHOO! Why did I become a farmer? I'm\n"
	.string "allergic to hay!$"

BronzeFields_South_EventScript_NPC_Man1_Text_0:
# 67 "data/maps/BronzeFields_South/scripts.pory"
	.string "Man$"

BronzeFields_South_EventScript_NPC_Man1_Text_1:
# 68 "data/maps/BronzeFields_South/scripts.pory"
	.string "Different parts of Ilios have different\n"
	.string "climates! It's warm up here, but if you\l"
	.string "go south, the trees have red and orange\l"
	.string "leaves.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_0:
# 77 "data/maps/BronzeFields_South/scripts.pory"
	.string "Wyatt$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_1:
# 78 "data/maps/BronzeFields_South/scripts.pory"
	.string "Pokémon and people work together in\n"
	.string "these farms. We help each other out\l"
	.string "that way.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_0:
# 95 "data/maps/BronzeFields_South/scripts.pory"
	.string "Milon$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_1:
# 96 "data/maps/BronzeFields_South/scripts.pory"
	.string "I hear there are two things called Shiny\n"
	.string "Charms somewhere in Ilios. My friends\l"
	.string "say they make Shiny Pokémon show up\l"
	.string "more often!$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_0:
# 113 "data/maps/BronzeFields_South/scripts.pory"
	.string "Kall$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_1:
# 114 "data/maps/BronzeFields_South/scripts.pory"
	.string "Not many people stay in Jusmail Town.\n"
	.string "Usually, folks just pass through\l"
	.string "getting to Acrisia City.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_0:
# 131 "data/maps/BronzeFields_South/scripts.pory"
	.string "Therson$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_1:
# 132 "data/maps/BronzeFields_South/scripts.pory"
	.string "We grow all sorts of things in these\n"
	.string "fields. The soil is the best in Ilios.\p"
	.string "That's what I tell the customers,\n"
	.string "anyway! Bwahaha!$"

BronzeFields_South_Text_Trainer_BronzePass_EmerickIntro::
# 36 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon are farm-raised beauties!\n"
	.string "Think ya can win against me?$"

BronzeFields_South_Text_Trainer_BronzePass_EmerickDefeat::
# 40 "data/maps/BronzeFields_South/scripts.pory"
	.string "Bwahaha! Looks like I need a li'l more\n"
	.string "trainin'!$"

BronzeFields_South_Text_Trainer_BronzePass_JosephIntro::
# 54 "data/maps/BronzeFields_South/scripts.pory"
	.string "Ahh.. ahh... ACHOO! M-my allergies're bad\n"
	.string "right now...$"

BronzeFields_South_Text_Trainer_BronzePass_JosephDefeat::
# 58 "data/maps/BronzeFields_South/scripts.pory"
	.string "My eyes were jus' watery, that's why I\n"
	.string "lost!$"

BronzeFields_South_Text_Trainer_BronzePass_WyattIntro::
# 83 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Poliwag helps water my crops. I bet\n"
	.string "it can win against your Pokémon!$"

BronzeFields_South_Text_Trainer_BronzePass_WyattDefeat::
# 87 "data/maps/BronzeFields_South/scripts.pory"
	.string "Poliwag, no! Who'll water my crops now?$"

BronzeFields_South_Text_Trainer_BronzePass_MilonIntro::
# 101 "data/maps/BronzeFields_South/scripts.pory"
	.string "I'm looking for Shiny Pokémon! Have you\n"
	.string "found any?$"

BronzeFields_South_Text_Trainer_BronzePass_MilonDefeat::
# 105 "data/maps/BronzeFields_South/scripts.pory"
	.string "I thought my Grubbin was Shiny, but it\n"
	.string "was just the electricity around it.$"

BronzeFields_South_Text_Trainer_BronzePass_KallIntro::
# 119 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon helps me gather firewood\n"
	.string "around here. Wanna battle?$"

BronzeFields_South_Text_Trainer_BronzePass_KallDefeat::
# 123 "data/maps/BronzeFields_South/scripts.pory"
	.string "Aw, man! My Pokémon!$"

BronzeFields_South_Text_Trainer_BronzePass_ThersonIntro::
# 137 "data/maps/BronzeFields_South/scripts.pory"
	.string "Draggin' around these carts gets\n"
	.string "pretty borin'. There's only one thing to\l"
	.string "fix that... a battle!$"

BronzeFields_South_Text_Trainer_BronzePass_ThersonDefeat::
# 141 "data/maps/BronzeFields_South/scripts.pory"
	.string "Nothin' like a Pokémon battle to get\n"
	.string "excited!$"

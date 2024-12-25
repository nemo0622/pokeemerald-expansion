BronzeFields_South_MapScripts::
	.byte 0


BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick::
# 7 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_EMERICK_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_EmerickIntro, BronzeFields_South_Text_Trainer_BronzePass_EmerickDefeat
# 8 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_0
# 9 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_1
# 10 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 11 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph::
# 25 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_JosephIntro, BronzeFields_South_Text_Trainer_BronzePass_JosephDefeat
# 26 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_0
# 27 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_1
# 28 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 29 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_NPC_Man1::
# 43 "data/maps/BronzeFields_South/scripts.pory"
	lock
# 44 "data/maps/BronzeFields_South/scripts.pory"
	faceplayer
# 45 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_NPC_Man1_Text_0
# 46 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_NPC_Man1_Text_1
# 47 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 48 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt::
# 54 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_WYATT_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_WyattIntro, BronzeFields_South_Text_Trainer_BronzePass_WyattDefeat
# 55 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_0
# 56 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_1
# 57 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 58 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Milon::
# 72 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_MILON_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_MilonIntro, BronzeFields_South_Text_Trainer_BronzePass_MilonDefeat
# 73 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_0
# 74 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_1
# 75 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 76 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Kall::
# 90 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_KALL_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_KallIntro, BronzeFields_South_Text_Trainer_BronzePass_KallDefeat
# 91 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_0
# 92 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_1
# 93 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 94 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Therson::
# 108 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_THERSON_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_ThersonIntro, BronzeFields_South_Text_Trainer_BronzePass_ThersonDefeat
# 109 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_0
# 110 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_1
# 111 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 112 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_0:
# 8 "data/maps/BronzeFields_South/scripts.pory"
	.string "Emerick$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_1:
# 9 "data/maps/BronzeFields_South/scripts.pory"
	.string "Workin' the farm is tough, but my\n"
	.string "Pokémon do their best to help me out.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_0:
# 26 "data/maps/BronzeFields_South/scripts.pory"
	.string "Joseph$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_1:
# 27 "data/maps/BronzeFields_South/scripts.pory"
	.string "ACHOO! Why did I become a farmer? I'm\n"
	.string "allergic to hay!$"

BronzeFields_South_EventScript_NPC_Man1_Text_0:
# 45 "data/maps/BronzeFields_South/scripts.pory"
	.string "Man$"

BronzeFields_South_EventScript_NPC_Man1_Text_1:
# 46 "data/maps/BronzeFields_South/scripts.pory"
	.string "Different parts of Ilios have different\n"
	.string "climates! It's warm up here, but if you\l"
	.string "go south, the trees have red and orange\l"
	.string "leaves.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_0:
# 55 "data/maps/BronzeFields_South/scripts.pory"
	.string "Wyatt$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_1:
# 56 "data/maps/BronzeFields_South/scripts.pory"
	.string "Pokémon and people work together in\n"
	.string "these farms. We help each other out\l"
	.string "that way.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_0:
# 73 "data/maps/BronzeFields_South/scripts.pory"
	.string "Milon$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_1:
# 74 "data/maps/BronzeFields_South/scripts.pory"
	.string "I hear there are two things called Shiny\n"
	.string "Charms somewhere in Ilios. My friends\l"
	.string "say they make Shiny Pokémon show up\l"
	.string "more often!$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_0:
# 91 "data/maps/BronzeFields_South/scripts.pory"
	.string "Kall$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_1:
# 92 "data/maps/BronzeFields_South/scripts.pory"
	.string "Not many people stay in Jusmail Town.\n"
	.string "Usually, folks just pass through\l"
	.string "getting to Acrisia City.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_0:
# 109 "data/maps/BronzeFields_South/scripts.pory"
	.string "Therson$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_1:
# 110 "data/maps/BronzeFields_South/scripts.pory"
	.string "We grow all sorts of things in these\n"
	.string "fields. The soil is the best in Ilios.\p"
	.string "That's what I tell the customers,\n"
	.string "anyway! Bwahaha!$"

BronzeFields_South_Text_Trainer_BronzePass_EmerickIntro::
# 14 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon are farm-raised beauties!\n"
	.string "Think ya can win against me?$"

BronzeFields_South_Text_Trainer_BronzePass_EmerickDefeat::
# 18 "data/maps/BronzeFields_South/scripts.pory"
	.string "Bwahaha! Looks like I need a li'l more\n"
	.string "trainin'!$"

BronzeFields_South_Text_Trainer_BronzePass_JosephIntro::
# 32 "data/maps/BronzeFields_South/scripts.pory"
	.string "Ahh.. ahh... ACHOO! M-my allergies're bad\n"
	.string "right now...$"

BronzeFields_South_Text_Trainer_BronzePass_JosephDefeat::
# 36 "data/maps/BronzeFields_South/scripts.pory"
	.string "My eyes were jus' watery, that's why I\n"
	.string "lost!$"

BronzeFields_South_Text_Trainer_BronzePass_WyattIntro::
# 61 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Poliwag helps water my crops. I bet\n"
	.string "it can win against your Pokémon!$"

BronzeFields_South_Text_Trainer_BronzePass_WyattDefeat::
# 65 "data/maps/BronzeFields_South/scripts.pory"
	.string "Poliwag, no! Who'll water my crops now?$"

BronzeFields_South_Text_Trainer_BronzePass_MilonIntro::
# 79 "data/maps/BronzeFields_South/scripts.pory"
	.string "I'm looking for Shiny Pokémon! Have you\n"
	.string "found any?$"

BronzeFields_South_Text_Trainer_BronzePass_MilonDefeat::
# 83 "data/maps/BronzeFields_South/scripts.pory"
	.string "I thought my Grubbin was Shiny, but it\n"
	.string "was just the electricity around it.$"

BronzeFields_South_Text_Trainer_BronzePass_KallIntro::
# 97 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon helps me gather firewood\n"
	.string "around here. Wanna battle?$"

BronzeFields_South_Text_Trainer_BronzePass_KallDefeat::
# 101 "data/maps/BronzeFields_South/scripts.pory"
	.string "Aw, man! My Pokémon!$"

BronzeFields_South_Text_Trainer_BronzePass_ThersonIntro::
# 115 "data/maps/BronzeFields_South/scripts.pory"
	.string "Draggin' around these carts gets\n"
	.string "pretty borin'. There's only one thing to\l"
	.string "fix that... a battle!$"

BronzeFields_South_Text_Trainer_BronzePass_ThersonDefeat::
# 119 "data/maps/BronzeFields_South/scripts.pory"
	.string "Nothin' like a Pokémon battle to get\n"
	.string "excited!$"

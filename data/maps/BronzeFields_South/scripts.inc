BronzeFields_South_MapScripts::
# 2 "data/maps/BronzeFields_South/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BronzeFields_South_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/BronzeFields_South/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BronzeFields_South_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
	.byte 0

BronzeFields_South_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 7 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_TRIGGERED_WINDMILL_SPAWN
	return

BronzeFields_South_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 11 "data/maps/BronzeFields_South/scripts.pory"
	goto BronzeFields_South_SpawnWindmillVirtualObjects
	return


BronzeFields_South_EventScript_DirectionSign::
# 17 "data/maps/BronzeFields_South/scripts.pory"
	lock
# 18 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_DirectionSign_Text_0
# 19 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 20 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_TriggerWindmillSpawn::
# 26 "data/maps/BronzeFields_South/scripts.pory"
	setflag FLAG_TRIGGERED_WINDMILL_SPAWN
# 27 "data/maps/BronzeFields_South/scripts.pory"
	goto BronzeFields_South_SpawnWindmillVirtualObjects
	return


BronzeFields_South_SpawnWindmillVirtualObjects::
# 34 "data/maps/BronzeFields_South/scripts.pory"
	goto_if_set FLAG_TRIGGERED_WINDMILL_SPAWN, BronzeFields_South_SpawnWindmillVirtualObjects_2
BronzeFields_South_SpawnWindmillVirtualObjects_1:
# 42 "data/maps/BronzeFields_South/scripts.pory"
	release
	end

BronzeFields_South_SpawnWindmillVirtualObjects_2:
# 36 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TL, 15, 22, 27, 4, DIR_SOUTH
# 37 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TR, 16, 26, 27, 4, DIR_SOUTH
# 38 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BL, 17, 22, 31, 4, DIR_SOUTH
# 39 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BR, 18, 26, 31, 4, DIR_SOUTH
	goto BronzeFields_South_SpawnWindmillVirtualObjects_1


BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick::
# 50 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_EMERICK_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_EmerickIntro, BronzeFields_South_Text_Trainer_BronzePass_EmerickDefeat
# 51 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_0
# 52 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_1
# 53 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 54 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph::
# 68 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_JosephIntro, BronzeFields_South_Text_Trainer_BronzePass_JosephDefeat
# 69 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_0
# 70 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_1
# 71 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 72 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_NPC_Man1::
# 86 "data/maps/BronzeFields_South/scripts.pory"
	lock
# 87 "data/maps/BronzeFields_South/scripts.pory"
	faceplayer
# 88 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_NPC_Man1_Text_0
# 89 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_NPC_Man1_Text_1
# 90 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 91 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt::
# 97 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_WYATT_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_WyattIntro, BronzeFields_South_Text_Trainer_BronzePass_WyattDefeat
# 98 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_0
# 99 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_1
# 100 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 101 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Milon::
# 115 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_MILON_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_MilonIntro, BronzeFields_South_Text_Trainer_BronzePass_MilonDefeat
# 116 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_0
# 117 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_1
# 118 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 119 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Kall::
# 133 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_KALL_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_KallIntro, BronzeFields_South_Text_Trainer_BronzePass_KallDefeat
# 134 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_0
# 135 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_1
# 136 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 137 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Therson::
# 151 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_THERSON_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_ThersonIntro, BronzeFields_South_Text_Trainer_BronzePass_ThersonDefeat
# 152 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_0
# 153 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_1
# 154 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 155 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_DirectionSign_Text_0:
# 18 "data/maps/BronzeFields_South/scripts.pory"
	.string "Bronze Fields - South\n"
	.string "The Farmer's Delight\p"
	.string "{UP_ARROW} Bronze Fields - North\n"
	.string "Jusmail Town {DOWN_ARROW}$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_0:
# 51 "data/maps/BronzeFields_South/scripts.pory"
	.string "Emerick$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_1:
# 52 "data/maps/BronzeFields_South/scripts.pory"
	.string "Workin' the farm is tough, but my\n"
	.string "Pokémon do their best to help me out.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_0:
# 69 "data/maps/BronzeFields_South/scripts.pory"
	.string "Joseph$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_1:
# 70 "data/maps/BronzeFields_South/scripts.pory"
	.string "ACHOO! Why did I become a farmer? I'm\n"
	.string "allergic to hay!$"

BronzeFields_South_EventScript_NPC_Man1_Text_0:
# 88 "data/maps/BronzeFields_South/scripts.pory"
	.string "Man$"

BronzeFields_South_EventScript_NPC_Man1_Text_1:
# 89 "data/maps/BronzeFields_South/scripts.pory"
	.string "Different parts of Ilios have different\n"
	.string "climates! It's warm up here, but if you\l"
	.string "go south, the trees have red and orange\l"
	.string "leaves.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_0:
# 98 "data/maps/BronzeFields_South/scripts.pory"
	.string "Wyatt$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_1:
# 99 "data/maps/BronzeFields_South/scripts.pory"
	.string "Pokémon and people work together in\n"
	.string "these farms. We help each other out\l"
	.string "that way.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_0:
# 116 "data/maps/BronzeFields_South/scripts.pory"
	.string "Milon$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_1:
# 117 "data/maps/BronzeFields_South/scripts.pory"
	.string "I hear there are two things called Shiny\n"
	.string "Charms somewhere in Ilios. My friends\l"
	.string "say they make Shiny Pokémon show up\l"
	.string "more often!$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_0:
# 134 "data/maps/BronzeFields_South/scripts.pory"
	.string "Kall$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_1:
# 135 "data/maps/BronzeFields_South/scripts.pory"
	.string "Not many people stay in Jusmail Town.\n"
	.string "Usually, folks just pass through\l"
	.string "getting to Acrisia City.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_0:
# 152 "data/maps/BronzeFields_South/scripts.pory"
	.string "Therson$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_1:
# 153 "data/maps/BronzeFields_South/scripts.pory"
	.string "We grow all sorts of things in these\n"
	.string "fields. The soil is the best in Ilios.\p"
	.string "That's what I tell the customers,\n"
	.string "anyway! Bwahaha!$"

BronzeFields_South_Text_Trainer_BronzePass_EmerickIntro::
# 57 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon are farm-raised beauties!\n"
	.string "Think ya can win against me?$"

BronzeFields_South_Text_Trainer_BronzePass_EmerickDefeat::
# 61 "data/maps/BronzeFields_South/scripts.pory"
	.string "Bwahaha! Looks like I need a li'l more\n"
	.string "trainin'!$"

BronzeFields_South_Text_Trainer_BronzePass_JosephIntro::
# 75 "data/maps/BronzeFields_South/scripts.pory"
	.string "Ahh.. ahh... ACHOO! M-my allergies're bad\n"
	.string "right now...$"

BronzeFields_South_Text_Trainer_BronzePass_JosephDefeat::
# 79 "data/maps/BronzeFields_South/scripts.pory"
	.string "My eyes were jus' watery, that's why I\n"
	.string "lost!$"

BronzeFields_South_Text_Trainer_BronzePass_WyattIntro::
# 104 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon helps water my crops. I bet\n"
	.string "it can win against your Pokémon!$"

BronzeFields_South_Text_Trainer_BronzePass_WyattDefeat::
# 108 "data/maps/BronzeFields_South/scripts.pory"
	.string "No, my Pokémon! Who'll help me work now?$"

BronzeFields_South_Text_Trainer_BronzePass_MilonIntro::
# 122 "data/maps/BronzeFields_South/scripts.pory"
	.string "I'm looking for Shiny Pokémon! Have you\n"
	.string "found any?$"

BronzeFields_South_Text_Trainer_BronzePass_MilonDefeat::
# 126 "data/maps/BronzeFields_South/scripts.pory"
	.string "I thought my Grubbin was Shiny, but it\n"
	.string "was just the electricity around it.$"

BronzeFields_South_Text_Trainer_BronzePass_KallIntro::
# 140 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon helps me gather firewood\n"
	.string "around here. Wanna battle?$"

BronzeFields_South_Text_Trainer_BronzePass_KallDefeat::
# 144 "data/maps/BronzeFields_South/scripts.pory"
	.string "Aw, man! My Pokémon!$"

BronzeFields_South_Text_Trainer_BronzePass_ThersonIntro::
# 158 "data/maps/BronzeFields_South/scripts.pory"
	.string "Draggin' around these carts gets\n"
	.string "pretty borin'. There's only one thing to\l"
	.string "fix that... a battle!$"

BronzeFields_South_Text_Trainer_BronzePass_ThersonDefeat::
# 162 "data/maps/BronzeFields_South/scripts.pory"
	.string "Nothin' like a Pokémon battle to get\n"
	.string "excited!$"

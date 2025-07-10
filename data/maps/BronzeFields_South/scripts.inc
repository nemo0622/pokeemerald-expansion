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


BronzeFields_South_EventScript_UniversityStudentRouteCheck::
# 26 "data/maps/BronzeFields_South/scripts.pory"
	lock
# 27 "data/maps/BronzeFields_South/scripts.pory"
	faceplayer
# 28 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_0
# 30 "data/maps/BronzeFields_South/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_BRONZE_FIELDS, BronzeFields_South_EventScript_UniversityStudentRouteCheck_2
# 37 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_2
# 38 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 39 "data/maps/BronzeFields_South/scripts.pory"
	special CheckRouteCaptureProgress
# 40 "data/maps/BronzeFields_South/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BronzeFields_South_EventScript_UniversityStudentRouteCheck_5
BronzeFields_South_EventScript_UniversityStudentRouteCheck_1:
# 57 "data/maps/BronzeFields_South/scripts.pory"
	release
	end

BronzeFields_South_EventScript_UniversityStudentRouteCheck_2:
# 32 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_1
# 33 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
	goto BronzeFields_South_EventScript_UniversityStudentRouteCheck_1

BronzeFields_South_EventScript_UniversityStudentRouteCheck_5:
# 42 "data/maps/BronzeFields_South/scripts.pory"
	delay 20
# 43 "data/maps/BronzeFields_South/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 44 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_0
# 45 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_3
# 46 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 47 "data/maps/BronzeFields_South/scripts.pory"
	delay 5
# 50 "data/maps/BronzeFields_South/scripts.pory"
	giveitem ITEM_BRIGHT_POWDER
# 51 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 53 "data/maps/BronzeFields_South/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_BRONZE_FIELDS
	goto BronzeFields_South_EventScript_UniversityStudentRouteCheck_1


BronzeFields_South_EventScript_TriggerWindmillSpawn::
# 63 "data/maps/BronzeFields_South/scripts.pory"
	setflag FLAG_TRIGGERED_WINDMILL_SPAWN
# 64 "data/maps/BronzeFields_South/scripts.pory"
	goto BronzeFields_South_SpawnWindmillVirtualObjects
	return


BronzeFields_South_SpawnWindmillVirtualObjects::
# 71 "data/maps/BronzeFields_South/scripts.pory"
	goto_if_set FLAG_TRIGGERED_WINDMILL_SPAWN, BronzeFields_South_SpawnWindmillVirtualObjects_2
BronzeFields_South_SpawnWindmillVirtualObjects_1:
# 79 "data/maps/BronzeFields_South/scripts.pory"
	release
	end

BronzeFields_South_SpawnWindmillVirtualObjects_2:
# 73 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TL, 15, 22, 27, 4, DIR_SOUTH
# 74 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TR, 16, 26, 27, 4, DIR_SOUTH
# 75 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BL, 17, 22, 31, 4, DIR_SOUTH
# 76 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BR, 18, 26, 31, 4, DIR_SOUTH
	goto BronzeFields_South_SpawnWindmillVirtualObjects_1


BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick::
# 87 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_EMERICK_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_EmerickIntro, BronzeFields_South_Text_Trainer_BronzePass_EmerickDefeat
# 88 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_0
# 89 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_1
# 90 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 91 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph::
# 105 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_JosephIntro, BronzeFields_South_Text_Trainer_BronzePass_JosephDefeat
# 106 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_0
# 107 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_1
# 108 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 109 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_NPC_Man1::
# 123 "data/maps/BronzeFields_South/scripts.pory"
	lock
# 124 "data/maps/BronzeFields_South/scripts.pory"
	faceplayer
# 125 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_NPC_Man1_Text_0
# 126 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_NPC_Man1_Text_1
# 127 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 128 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt::
# 134 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_WYATT_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_WyattIntro, BronzeFields_South_Text_Trainer_BronzePass_WyattDefeat
# 135 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_0
# 136 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_1
# 137 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 138 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Milon::
# 152 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_MILON_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_MilonIntro, BronzeFields_South_Text_Trainer_BronzePass_MilonDefeat
# 153 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_0
# 154 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_1
# 155 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 156 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Kall::
# 170 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_KALL_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_KallIntro, BronzeFields_South_Text_Trainer_BronzePass_KallDefeat
# 171 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_0
# 172 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_1
# 173 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 174 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Therson::
# 188 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_THERSON_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_ThersonIntro, BronzeFields_South_Text_Trainer_BronzePass_ThersonDefeat
# 189 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_0
# 190 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_1
# 191 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 192 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_DirectionSign_Text_0:
# 18 "data/maps/BronzeFields_South/scripts.pory"
	.string "Bronze Fields - South\n"
	.string "The Farmer's Delight\p"
	.string "{UP_ARROW} Bronze Fields - North\n"
	.string "Jusmail Town {DOWN_ARROW}$"

BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_0:
# 28 "data/maps/BronzeFields_South/scripts.pory"
	.string "Uni. Student$"

BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_1:
# 32 "data/maps/BronzeFields_South/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_2:
# 37 "data/maps/BronzeFields_South/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in the Bronze Fields. If\l"
	.string "you've caught all the Pokémon here,\l"
	.string "please let me know.$"

BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_3:
# 45 "data/maps/BronzeFields_South/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_0:
# 88 "data/maps/BronzeFields_South/scripts.pory"
	.string "Emerick$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_1:
# 89 "data/maps/BronzeFields_South/scripts.pory"
	.string "Workin' the farm is tough, but my\n"
	.string "Pokémon do their best to help me out.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_0:
# 106 "data/maps/BronzeFields_South/scripts.pory"
	.string "Joseph$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_1:
# 107 "data/maps/BronzeFields_South/scripts.pory"
	.string "ACHOO! Why did I become a farmer? I'm\n"
	.string "allergic to hay!$"

BronzeFields_South_EventScript_NPC_Man1_Text_0:
# 125 "data/maps/BronzeFields_South/scripts.pory"
	.string "Man$"

BronzeFields_South_EventScript_NPC_Man1_Text_1:
# 126 "data/maps/BronzeFields_South/scripts.pory"
	.string "Different parts of Ilios have different\n"
	.string "climates! It's warm up here, but if you\l"
	.string "go south, the trees have red and orange\l"
	.string "leaves.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_0:
# 135 "data/maps/BronzeFields_South/scripts.pory"
	.string "Wyatt$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_1:
# 136 "data/maps/BronzeFields_South/scripts.pory"
	.string "Pokémon and people work together in\n"
	.string "these farms. We help each other out\l"
	.string "that way.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_0:
# 153 "data/maps/BronzeFields_South/scripts.pory"
	.string "Milon$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_1:
# 154 "data/maps/BronzeFields_South/scripts.pory"
	.string "I hear there are two things called Shiny\n"
	.string "Charms somewhere in Ilios. My friends\l"
	.string "say they make Shiny Pokémon show up\l"
	.string "more often!$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_0:
# 171 "data/maps/BronzeFields_South/scripts.pory"
	.string "Kall$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_1:
# 172 "data/maps/BronzeFields_South/scripts.pory"
	.string "Not many people stay in Jusmail Town.\n"
	.string "Usually, folks just pass through\l"
	.string "getting to Acrisia City.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_0:
# 189 "data/maps/BronzeFields_South/scripts.pory"
	.string "Therson$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_1:
# 190 "data/maps/BronzeFields_South/scripts.pory"
	.string "We grow all sorts of things in these\n"
	.string "fields. The soil is the best in Ilios.\p"
	.string "That's what I tell the customers,\n"
	.string "anyway! Bwahaha!$"

BronzeFields_South_Text_Trainer_BronzePass_EmerickIntro::
# 94 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon are farm-raised beauties!\n"
	.string "Think ya can win against me?$"

BronzeFields_South_Text_Trainer_BronzePass_EmerickDefeat::
# 98 "data/maps/BronzeFields_South/scripts.pory"
	.string "Bwahaha! Looks like I need a li'l more\n"
	.string "trainin'!$"

BronzeFields_South_Text_Trainer_BronzePass_JosephIntro::
# 112 "data/maps/BronzeFields_South/scripts.pory"
	.string "Ahh.. ahh... ACHOO! M-my allergies're bad\n"
	.string "right now...$"

BronzeFields_South_Text_Trainer_BronzePass_JosephDefeat::
# 116 "data/maps/BronzeFields_South/scripts.pory"
	.string "My eyes were jus' watery, that's why I\n"
	.string "lost!$"

BronzeFields_South_Text_Trainer_BronzePass_WyattIntro::
# 141 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon helps water my crops. I bet\n"
	.string "it can win against your Pokémon!$"

BronzeFields_South_Text_Trainer_BronzePass_WyattDefeat::
# 145 "data/maps/BronzeFields_South/scripts.pory"
	.string "No, my Pokémon! Who'll help me work now?$"

BronzeFields_South_Text_Trainer_BronzePass_MilonIntro::
# 159 "data/maps/BronzeFields_South/scripts.pory"
	.string "I'm looking for Shiny Pokémon! Have you\n"
	.string "found any?$"

BronzeFields_South_Text_Trainer_BronzePass_MilonDefeat::
# 163 "data/maps/BronzeFields_South/scripts.pory"
	.string "I thought my Grubbin was Shiny, but it\n"
	.string "was just the electricity around it.$"

BronzeFields_South_Text_Trainer_BronzePass_KallIntro::
# 177 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon helps me gather firewood\n"
	.string "around here. Wanna battle?$"

BronzeFields_South_Text_Trainer_BronzePass_KallDefeat::
# 181 "data/maps/BronzeFields_South/scripts.pory"
	.string "Aw, man! My Pokémon!$"

BronzeFields_South_Text_Trainer_BronzePass_ThersonIntro::
# 195 "data/maps/BronzeFields_South/scripts.pory"
	.string "Draggin' around these carts gets\n"
	.string "pretty borin'. There's only one thing to\l"
	.string "fix that... a battle!$"

BronzeFields_South_Text_Trainer_BronzePass_ThersonDefeat::
# 199 "data/maps/BronzeFields_South/scripts.pory"
	.string "Nothin' like a Pokémon battle to get\n"
	.string "excited!$"

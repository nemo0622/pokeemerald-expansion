BronzeFields_South_MapScripts::
# 2 "data/maps/BronzeFields_South/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BronzeFields_South_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 15 "data/maps/BronzeFields_South/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, BronzeFields_South_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD
	.byte 0

BronzeFields_South_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 6 "data/maps/BronzeFields_South/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, BronzeFields_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
BronzeFields_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 12 "data/maps/BronzeFields_South/scripts.pory"
	clearflag FLAG_TRIGGERED_WINDMILL_SPAWN
	return

BronzeFields_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 8 "data/maps/BronzeFields_South/scripts.pory"
	setweather WEATHER_ABNORMAL
	goto BronzeFields_South_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

BronzeFields_South_MapScripts_MAP_SCRIPT_ON_RETURN_TO_FIELD:
# 16 "data/maps/BronzeFields_South/scripts.pory"
	goto BronzeFields_South_SpawnWindmillVirtualObjects
	return


BronzeFields_South_EventScript_DirectionSign::
# 22 "data/maps/BronzeFields_South/scripts.pory"
	lock
# 23 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_DirectionSign_Text_0
# 24 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 25 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_UniversityStudentRouteCheck::
# 31 "data/maps/BronzeFields_South/scripts.pory"
	lock
# 32 "data/maps/BronzeFields_South/scripts.pory"
	faceplayer
# 33 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_0
# 35 "data/maps/BronzeFields_South/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_BRONZE_FIELDS, BronzeFields_South_EventScript_UniversityStudentRouteCheck_2
# 42 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_2
# 43 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 44 "data/maps/BronzeFields_South/scripts.pory"
	special CheckRouteCaptureProgress
# 45 "data/maps/BronzeFields_South/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BronzeFields_South_EventScript_UniversityStudentRouteCheck_5
BronzeFields_South_EventScript_UniversityStudentRouteCheck_1:
# 62 "data/maps/BronzeFields_South/scripts.pory"
	release
	end

BronzeFields_South_EventScript_UniversityStudentRouteCheck_2:
# 37 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_1
# 38 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
	goto BronzeFields_South_EventScript_UniversityStudentRouteCheck_1

BronzeFields_South_EventScript_UniversityStudentRouteCheck_5:
# 47 "data/maps/BronzeFields_South/scripts.pory"
	delay 20
# 48 "data/maps/BronzeFields_South/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 49 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_0
# 50 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_3
# 51 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 52 "data/maps/BronzeFields_South/scripts.pory"
	delay 5
# 55 "data/maps/BronzeFields_South/scripts.pory"
	giveitem ITEM_BRIGHT_POWDER
# 56 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 58 "data/maps/BronzeFields_South/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_BRONZE_FIELDS
	goto BronzeFields_South_EventScript_UniversityStudentRouteCheck_1


BronzeFields_South_EventScript_TriggerWindmillSpawn::
# 68 "data/maps/BronzeFields_South/scripts.pory"
	setflag FLAG_TRIGGERED_WINDMILL_SPAWN
# 69 "data/maps/BronzeFields_South/scripts.pory"
	goto BronzeFields_South_SpawnWindmillVirtualObjects
	return


BronzeFields_South_SpawnWindmillVirtualObjects::
# 76 "data/maps/BronzeFields_South/scripts.pory"
	goto_if_set FLAG_TRIGGERED_WINDMILL_SPAWN, BronzeFields_South_SpawnWindmillVirtualObjects_2
BronzeFields_South_SpawnWindmillVirtualObjects_1:
# 84 "data/maps/BronzeFields_South/scripts.pory"
	release
	end

BronzeFields_South_SpawnWindmillVirtualObjects_2:
# 78 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TL, 15, 22, 27, 4, DIR_SOUTH
# 79 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_TR, 16, 26, 27, 4, DIR_SOUTH
# 80 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BL, 17, 22, 31, 4, DIR_SOUTH
# 81 "data/maps/BronzeFields_South/scripts.pory"
	createvobject OBJ_EVENT_GFX_WINDMILL_BR, 18, 26, 31, 4, DIR_SOUTH
	goto BronzeFields_South_SpawnWindmillVirtualObjects_1


BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick::
# 92 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_EMERICK_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_EmerickIntro, BronzeFields_South_Text_Trainer_BronzePass_EmerickDefeat
# 93 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_0
# 94 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_1
# 95 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 96 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph::
# 110 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_JosephIntro, BronzeFields_South_Text_Trainer_BronzePass_JosephDefeat
# 111 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_0
# 112 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_1
# 113 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 114 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_NPC_Man1::
# 128 "data/maps/BronzeFields_South/scripts.pory"
	lock
# 129 "data/maps/BronzeFields_South/scripts.pory"
	faceplayer
# 130 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_NPC_Man1_Text_0
# 131 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_NPC_Man1_Text_1
# 132 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 133 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt::
# 139 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_WYATT_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_WyattIntro, BronzeFields_South_Text_Trainer_BronzePass_WyattDefeat
# 140 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_0
# 141 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_1
# 142 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 143 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Milon::
# 157 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_MILON_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_MilonIntro, BronzeFields_South_Text_Trainer_BronzePass_MilonDefeat
# 158 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_0
# 159 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_1
# 160 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 161 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Kall::
# 175 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_KALL_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_KallIntro, BronzeFields_South_Text_Trainer_BronzePass_KallDefeat
# 176 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_0
# 177 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_1
# 178 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 179 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_Trainer_BronzeFields_Therson::
# 193 "data/maps/BronzeFields_South/scripts.pory"
	trainerbattle_single TRAINER_THERSON_BRONZEFIELDS, BronzeFields_South_Text_Trainer_BronzePass_ThersonIntro, BronzeFields_South_Text_Trainer_BronzePass_ThersonDefeat
# 194 "data/maps/BronzeFields_South/scripts.pory"
	speakername BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_0
# 195 "data/maps/BronzeFields_South/scripts.pory"
	msgbox BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_1
# 196 "data/maps/BronzeFields_South/scripts.pory"
	closemessage
# 197 "data/maps/BronzeFields_South/scripts.pory"
	release
	end


BronzeFields_South_EventScript_DirectionSign_Text_0:
# 23 "data/maps/BronzeFields_South/scripts.pory"
	.string "Bronze Fields - South\n"
	.string "The Farmer's Delight\p"
	.string "{UP_ARROW} Bronze Fields - North\n"
	.string "Jusmail Town {DOWN_ARROW}$"

BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_0:
# 33 "data/maps/BronzeFields_South/scripts.pory"
	.string "Uni. Student$"

BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_1:
# 37 "data/maps/BronzeFields_South/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_2:
# 42 "data/maps/BronzeFields_South/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in the southern Bronze\l"
	.string "Fields. If you've caught all the Pokémon\l"
	.string "here, please let me know.$"

BronzeFields_South_EventScript_UniversityStudentRouteCheck_Text_3:
# 50 "data/maps/BronzeFields_South/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_0:
# 93 "data/maps/BronzeFields_South/scripts.pory"
	.string "Emerick$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Emerick_Text_1:
# 94 "data/maps/BronzeFields_South/scripts.pory"
	.string "Workin' the farm is tough, but my\n"
	.string "Pokémon do their best to help me out.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_0:
# 111 "data/maps/BronzeFields_South/scripts.pory"
	.string "Joseph$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Joseph_Text_1:
# 112 "data/maps/BronzeFields_South/scripts.pory"
	.string "ACHOO! Why did I become a farmer? I'm\n"
	.string "allergic to hay!$"

BronzeFields_South_EventScript_NPC_Man1_Text_0:
# 130 "data/maps/BronzeFields_South/scripts.pory"
	.string "Man$"

BronzeFields_South_EventScript_NPC_Man1_Text_1:
# 131 "data/maps/BronzeFields_South/scripts.pory"
	.string "Different parts of Ilios have different\n"
	.string "climates! It's warm up here, but if you\l"
	.string "go south, the trees have red and orange\l"
	.string "leaves.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_0:
# 140 "data/maps/BronzeFields_South/scripts.pory"
	.string "Wyatt$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Wyatt_Text_1:
# 141 "data/maps/BronzeFields_South/scripts.pory"
	.string "Pokémon and people work together in\n"
	.string "these farms. We help each other out\l"
	.string "that way.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_0:
# 158 "data/maps/BronzeFields_South/scripts.pory"
	.string "Milon$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Milon_Text_1:
# 159 "data/maps/BronzeFields_South/scripts.pory"
	.string "I hear there are two things called Shiny\n"
	.string "Charms somewhere in Ilios. My friends\l"
	.string "say they make Shiny Pokémon show up\l"
	.string "more often!$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_0:
# 176 "data/maps/BronzeFields_South/scripts.pory"
	.string "Kall$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Kall_Text_1:
# 177 "data/maps/BronzeFields_South/scripts.pory"
	.string "Not many people stay in Jusmail Town.\n"
	.string "Usually, folks just pass through\l"
	.string "getting to Acrisia City.$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_0:
# 194 "data/maps/BronzeFields_South/scripts.pory"
	.string "Therson$"

BronzeFields_South_EventScript_Trainer_BronzeFields_Therson_Text_1:
# 195 "data/maps/BronzeFields_South/scripts.pory"
	.string "We grow all sorts of things in these\n"
	.string "fields. The soil is the best in Ilios.\p"
	.string "That's what I tell the customers,\n"
	.string "anyway! Bwahaha!$"

BronzeFields_South_Text_Trainer_BronzePass_EmerickIntro::
# 99 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon are farm-raised beauties!\n"
	.string "Think ya can win against me?$"

BronzeFields_South_Text_Trainer_BronzePass_EmerickDefeat::
# 103 "data/maps/BronzeFields_South/scripts.pory"
	.string "Bwahaha! Looks like I need a li'l more\n"
	.string "trainin'!$"

BronzeFields_South_Text_Trainer_BronzePass_JosephIntro::
# 117 "data/maps/BronzeFields_South/scripts.pory"
	.string "Ahh.. ahh... ACHOO! M-my allergies're bad\n"
	.string "right now...$"

BronzeFields_South_Text_Trainer_BronzePass_JosephDefeat::
# 121 "data/maps/BronzeFields_South/scripts.pory"
	.string "My eyes were jus' watery, that's why I\n"
	.string "lost!$"

BronzeFields_South_Text_Trainer_BronzePass_WyattIntro::
# 146 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon helps water my crops. I bet\n"
	.string "it can win against your Pokémon!$"

BronzeFields_South_Text_Trainer_BronzePass_WyattDefeat::
# 150 "data/maps/BronzeFields_South/scripts.pory"
	.string "No, my Pokémon! Who'll help me work now?$"

BronzeFields_South_Text_Trainer_BronzePass_MilonIntro::
# 164 "data/maps/BronzeFields_South/scripts.pory"
	.string "I'm looking for Shiny Pokémon! Have you\n"
	.string "found any?$"

BronzeFields_South_Text_Trainer_BronzePass_MilonDefeat::
# 168 "data/maps/BronzeFields_South/scripts.pory"
	.string "I thought my Grubbin was Shiny, but it\n"
	.string "was just the electricity around it.$"

BronzeFields_South_Text_Trainer_BronzePass_KallIntro::
# 182 "data/maps/BronzeFields_South/scripts.pory"
	.string "My Pokémon helps me gather firewood\n"
	.string "around here. Wanna battle?$"

BronzeFields_South_Text_Trainer_BronzePass_KallDefeat::
# 186 "data/maps/BronzeFields_South/scripts.pory"
	.string "Aw, man! My Pokémon!$"

BronzeFields_South_Text_Trainer_BronzePass_ThersonIntro::
# 200 "data/maps/BronzeFields_South/scripts.pory"
	.string "Draggin' around these carts gets\n"
	.string "pretty borin'. There's only one thing to\l"
	.string "fix that... a battle!$"

BronzeFields_South_Text_Trainer_BronzePass_ThersonDefeat::
# 204 "data/maps/BronzeFields_South/scripts.pory"
	.string "Nothin' like a Pokémon battle to get\n"
	.string "excited!$"

PollenRoad_MapScripts::
# 2 "data/maps/PollenRoad/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PollenRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PollenRoad_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/PollenRoad/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/PollenRoad/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 16 "data/maps/PollenRoad/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 17 "data/maps/PollenRoad/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_LAND
# 18 "data/maps/PollenRoad/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_LAND
# 19 "data/maps/PollenRoad/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_LAND
# 20 "data/maps/PollenRoad/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
# 21 "data/maps/PollenRoad/scripts.pory"
	setobjectaswildencounter 20, ENCOUNTER_LAND
# 22 "data/maps/PollenRoad/scripts.pory"
	setobjectaswildencounter 21, ENCOUNTER_LAND
# 23 "data/maps/PollenRoad/scripts.pory"
	setobjectaswildencounter 22, ENCOUNTER_LAND
# 24 "data/maps/PollenRoad/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_SURF
	return


PollenRoad_EventScript_DirectionSign::
# 30 "data/maps/PollenRoad/scripts.pory"
	lock
# 31 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_DirectionSign_Text_0
# 32 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 33 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_Trainer_PollenRoad_Ruben::
# 39 "data/maps/PollenRoad/scripts.pory"
	trainerbattle_single TRAINER_POLLENROAD_RUBEN, PollenRoad_Text_Trainer_PollenRoad_RubenIntro, PollenRoad_Text_Trainer_PollenRoad_RubenDefeat
# 40 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Trainer_PollenRoad_Ruben_Text_0
# 41 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Trainer_PollenRoad_Ruben_Text_1
# 42 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 43 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_Trainer_PollenRoad_Jonah::
# 57 "data/maps/PollenRoad/scripts.pory"
	trainerbattle_single TRAINER_POLLENROAD_JONAH, PollenRoad_Text_Trainer_PollenRoad_JonahIntro, PollenRoad_Text_Trainer_PollenRoad_JonahDefeat
# 58 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Trainer_PollenRoad_Jonah_Text_0
# 59 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Trainer_PollenRoad_Jonah_Text_1
# 60 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 61 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_GirlGatheringFlowers::
# 75 "data/maps/PollenRoad/scripts.pory"
	lock
# 76 "data/maps/PollenRoad/scripts.pory"
	faceplayer
# 77 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_GirlGatheringFlowers_Text_0
# 78 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_GirlGatheringFlowers_Text_1
# 79 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 80 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_Trainer_PollenRoad_Hannah::
# 86 "data/maps/PollenRoad/scripts.pory"
	trainerbattle_single TRAINER_POLLENROAD_HANNAH, PollenRoad_Text_Trainer_PollenRoad_HannahIntro, PollenRoad_Text_Trainer_PollenRoad_HannahDefeat
# 87 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Trainer_PollenRoad_Hannah_Text_0
# 88 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Trainer_PollenRoad_Hannah_Text_1
# 89 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 90 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_Trainer_PollenRoad_Ashari::
# 104 "data/maps/PollenRoad/scripts.pory"
	trainerbattle_single TRAINER_POLLENROAD_ASHARI, PollenRoad_Text_Trainer_PollenRoad_AshariIntro, PollenRoad_Text_Trainer_PollenRoad_AshariDefeat
# 105 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Trainer_PollenRoad_Ashari_Text_0
# 106 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Trainer_PollenRoad_Ashari_Text_1
# 107 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 108 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_Trainer_PollenRoad_Martin::
# 122 "data/maps/PollenRoad/scripts.pory"
	trainerbattle_single TRAINER_POLLENROAD_MARTIN, PollenRoad_Text_Trainer_PollenRoad_MartinIntro, PollenRoad_Text_Trainer_PollenRoad_MartinDefeat
# 123 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Trainer_PollenRoad_Martin_Text_0
# 124 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Trainer_PollenRoad_Martin_Text_1
# 125 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 126 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_BugCatcher::
# 140 "data/maps/PollenRoad/scripts.pory"
	lock
# 141 "data/maps/PollenRoad/scripts.pory"
	faceplayer
# 142 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_BugCatcher_Text_0
# 143 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_BugCatcher_Text_1
# 144 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 145 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_Trainer_PollenRoad_Viktor::
# 151 "data/maps/PollenRoad/scripts.pory"
	trainerbattle_single TRAINER_POLLENROAD_VIKTOR, PollenRoad_Text_Trainer_PollenRoad_ViktorIntro, PollenRoad_Text_Trainer_PollenRoad_ViktorDefeat
# 152 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Trainer_PollenRoad_Viktor_Text_0
# 153 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Trainer_PollenRoad_Viktor_Text_1
# 154 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 155 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_Trainer_PollenRoad_Alicia::
# 169 "data/maps/PollenRoad/scripts.pory"
	trainerbattle_single TRAINER_POLLENROAD_ALICIA, PollenRoad_Text_Trainer_PollenRoad_AliciaIntro, PollenRoad_Text_Trainer_PollenRoad_AliciaDefeat
# 170 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Trainer_PollenRoad_Alicia_Text_0
# 171 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Trainer_PollenRoad_Alicia_Text_1
# 172 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 173 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_Youngster::
# 187 "data/maps/PollenRoad/scripts.pory"
	lock
# 188 "data/maps/PollenRoad/scripts.pory"
	faceplayer
# 189 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Youngster_Text_0
# 190 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Youngster_Text_1
# 191 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 192 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_Nurse::
# 198 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Nurse_Text_0
# 199 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Nurse_Text_1
# 200 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 201 "data/maps/PollenRoad/scripts.pory"
	applymovement 10, Common_Movement_FaceUp
# 202 "data/maps/PollenRoad/scripts.pory"
	waitmovement 0
# 203 "data/maps/PollenRoad/scripts.pory"
	special HealPlayerParty
# 204 "data/maps/PollenRoad/scripts.pory"
	callnative UpdateFollowingPokemon
# 205 "data/maps/PollenRoad/scripts.pory"
	delay 60
# 206 "data/maps/PollenRoad/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 207 "data/maps/PollenRoad/scripts.pory"
	waitmovement 0
# 208 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Nurse_Text_0
# 209 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Nurse_Text_2
# 210 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 211 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_Comfey::
# 217 "data/maps/PollenRoad/scripts.pory"
	lock
# 218 "data/maps/PollenRoad/scripts.pory"
	faceplayer
# 219 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_Comfey_Text_0
# 220 "data/maps/PollenRoad/scripts.pory"
	playmoncry SPECIES_COMFEY, CRY_MODE_NORMAL
# 221 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_Comfey_Text_1
# 222 "data/maps/PollenRoad/scripts.pory"
	waitmoncry
# 223 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 224 "data/maps/PollenRoad/scripts.pory"
	release
	end


PollenRoad_EventScript_UniversityStudentRouteCheck::
# 230 "data/maps/PollenRoad/scripts.pory"
	lock
# 231 "data/maps/PollenRoad/scripts.pory"
	faceplayer
# 232 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_UniversityStudentRouteCheck_Text_0
# 234 "data/maps/PollenRoad/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_POLLEN_ROAD, PollenRoad_EventScript_UniversityStudentRouteCheck_2
# 241 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_UniversityStudentRouteCheck_Text_2
# 242 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 243 "data/maps/PollenRoad/scripts.pory"
	special CheckRouteCaptureProgress
# 244 "data/maps/PollenRoad/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq PollenRoad_EventScript_UniversityStudentRouteCheck_5
PollenRoad_EventScript_UniversityStudentRouteCheck_1:
# 262 "data/maps/PollenRoad/scripts.pory"
	release
	end

PollenRoad_EventScript_UniversityStudentRouteCheck_2:
# 236 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_UniversityStudentRouteCheck_Text_1
# 237 "data/maps/PollenRoad/scripts.pory"
	closemessage
	goto PollenRoad_EventScript_UniversityStudentRouteCheck_1

PollenRoad_EventScript_UniversityStudentRouteCheck_5:
# 246 "data/maps/PollenRoad/scripts.pory"
	delay 20
# 247 "data/maps/PollenRoad/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 248 "data/maps/PollenRoad/scripts.pory"
	speakername PollenRoad_EventScript_UniversityStudentRouteCheck_Text_0
# 249 "data/maps/PollenRoad/scripts.pory"
	msgbox PollenRoad_EventScript_UniversityStudentRouteCheck_Text_3
# 250 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 251 "data/maps/PollenRoad/scripts.pory"
	delay 5
# 254 "data/maps/PollenRoad/scripts.pory"
	giveitem ITEM_EXP_CANDY_XL, 3
# 255 "data/maps/PollenRoad/scripts.pory"
	closemessage
# 256 "data/maps/PollenRoad/scripts.pory"
	delay 5
# 258 "data/maps/PollenRoad/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_POLLEN_ROAD
	goto PollenRoad_EventScript_UniversityStudentRouteCheck_1


PollenRoad_EventScript_DirectionSign_Text_0:
# 31 "data/maps/PollenRoad/scripts.pory"
	.string "Pollen Road\n"
	.string "Péntepetal City's Backyard\p"
	.string "{LEFT_ARROW} Péntepetal City\n"
	.string "Davosi Straits {RIGHT_ARROW}$"

PollenRoad_EventScript_Trainer_PollenRoad_Ruben_Text_0:
# 40 "data/maps/PollenRoad/scripts.pory"
	.string "Ruben$"

PollenRoad_EventScript_Trainer_PollenRoad_Ruben_Text_1:
# 41 "data/maps/PollenRoad/scripts.pory"
	.string "This road ends at the other side of the\n"
	.string "island. I wonder where the water leads?$"

PollenRoad_EventScript_Trainer_PollenRoad_Jonah_Text_0:
# 58 "data/maps/PollenRoad/scripts.pory"
	.string "Jonah$"

PollenRoad_EventScript_Trainer_PollenRoad_Jonah_Text_1:
# 59 "data/maps/PollenRoad/scripts.pory"
	.string "The Pollen Road is winding and worn\n"
	.string "down, but plenty of people travel it.$"

PollenRoad_EventScript_GirlGatheringFlowers_Text_0:
# 77 "data/maps/PollenRoad/scripts.pory"
	.string "Girl$"

PollenRoad_EventScript_GirlGatheringFlowers_Text_1:
# 78 "data/maps/PollenRoad/scripts.pory"
	.string "I'm picking flowers to bring back to\n"
	.string "Péntepetal City. Giving away flowers is\l"
	.string "a tradition there!$"

PollenRoad_EventScript_Trainer_PollenRoad_Hannah_Text_0:
# 87 "data/maps/PollenRoad/scripts.pory"
	.string "Hannah$"

PollenRoad_EventScript_Trainer_PollenRoad_Hannah_Text_1:
# 88 "data/maps/PollenRoad/scripts.pory"
	.string "I think I'd be happier down in Port\n"
	.string "Pello... Maybe I could even win some\l"
	.string "battles there.$"

PollenRoad_EventScript_Trainer_PollenRoad_Ashari_Text_0:
# 105 "data/maps/PollenRoad/scripts.pory"
	.string "Ashari$"

PollenRoad_EventScript_Trainer_PollenRoad_Ashari_Text_1:
# 106 "data/maps/PollenRoad/scripts.pory"
	.string "Phew, the battles just get harder and\n"
	.string "harder as I go...$"

PollenRoad_EventScript_Trainer_PollenRoad_Martin_Text_0:
# 123 "data/maps/PollenRoad/scripts.pory"
	.string "Martin$"

PollenRoad_EventScript_Trainer_PollenRoad_Martin_Text_1:
# 124 "data/maps/PollenRoad/scripts.pory"
	.string "I think I'll head home to Péntepetal\n"
	.string "City soon.$"

PollenRoad_EventScript_BugCatcher_Text_0:
# 142 "data/maps/PollenRoad/scripts.pory"
	.string "Bug Catcher$"

PollenRoad_EventScript_BugCatcher_Text_1:
# 143 "data/maps/PollenRoad/scripts.pory"
	.string "I'm taking a break by these Berry Trees.\n"
	.string "I hear that Jusmail Town has a whole\l"
	.string "Berry Club!$"

PollenRoad_EventScript_Trainer_PollenRoad_Viktor_Text_0:
# 152 "data/maps/PollenRoad/scripts.pory"
	.string "Viktor$"

PollenRoad_EventScript_Trainer_PollenRoad_Viktor_Text_1:
# 153 "data/maps/PollenRoad/scripts.pory"
	.string "Maybe I'll go fishing for some food.$"

PollenRoad_EventScript_Trainer_PollenRoad_Alicia_Text_0:
# 170 "data/maps/PollenRoad/scripts.pory"
	.string "Alicia$"

PollenRoad_EventScript_Trainer_PollenRoad_Alicia_Text_1:
# 171 "data/maps/PollenRoad/scripts.pory"
	.string "I'm glad there's a Nurse just up ahead, I\n"
	.string "need to heal my Pokémon.$"

PollenRoad_EventScript_Youngster_Text_0:
# 189 "data/maps/PollenRoad/scripts.pory"
	.string "Youngster$"

PollenRoad_EventScript_Youngster_Text_1:
# 190 "data/maps/PollenRoad/scripts.pory"
	.string "Woah... It's the ocean! My parents told\n"
	.string "me not to swim here because of the\l"
	.string "rough waters, but I'm a strong swimmer!$"

PollenRoad_EventScript_Nurse_Text_0:
# 198 "data/maps/PollenRoad/scripts.pory"
	.string "Nurse$"

PollenRoad_EventScript_Nurse_Text_1:
# 199 "data/maps/PollenRoad/scripts.pory"
	.string "Are you here to heal your Pokémon? Just\n"
	.string "hand them over to me.$"

PollenRoad_EventScript_Nurse_Text_2:
# 209 "data/maps/PollenRoad/scripts.pory"
	.string "Here's your Pokémon. Good luck out\n"
	.string "there!$"

PollenRoad_EventScript_Comfey_Text_0:
# 219 "data/maps/PollenRoad/scripts.pory"
	.string "Comfey$"

PollenRoad_EventScript_Comfey_Text_1:
# 221 "data/maps/PollenRoad/scripts.pory"
	.string "Breef!$"

PollenRoad_EventScript_UniversityStudentRouteCheck_Text_0:
# 232 "data/maps/PollenRoad/scripts.pory"
	.string "Uni. Student$"

PollenRoad_EventScript_UniversityStudentRouteCheck_Text_1:
# 236 "data/maps/PollenRoad/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

PollenRoad_EventScript_UniversityStudentRouteCheck_Text_2:
# 241 "data/maps/PollenRoad/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Pollen Road. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

PollenRoad_EventScript_UniversityStudentRouteCheck_Text_3:
# 249 "data/maps/PollenRoad/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

PollenRoad_Text_Trainer_PollenRoad_RubenIntro::
# 46 "data/maps/PollenRoad/scripts.pory"
	.string "I finally made it to Pollen Road! You'll\n"
	.string "be my first challenge!$"

PollenRoad_Text_Trainer_PollenRoad_RubenDefeat::
# 50 "data/maps/PollenRoad/scripts.pory"
	.string "Knocked down at my first challenge?!$"

PollenRoad_Text_Trainer_PollenRoad_JonahIntro::
# 64 "data/maps/PollenRoad/scripts.pory"
	.string "I'll make you work up a sweat!$"

PollenRoad_Text_Trainer_PollenRoad_JonahDefeat::
# 68 "data/maps/PollenRoad/scripts.pory"
	.string "Ouch! I'm outmatched!$"

PollenRoad_Text_Trainer_PollenRoad_HannahIntro::
# 93 "data/maps/PollenRoad/scripts.pory"
	.string "This'll be my breakout performance!$"

PollenRoad_Text_Trainer_PollenRoad_HannahDefeat::
# 97 "data/maps/PollenRoad/scripts.pory"
	.string "No, my performance was ruined!$"

PollenRoad_Text_Trainer_PollenRoad_AshariIntro::
# 111 "data/maps/PollenRoad/scripts.pory"
	.string "If I stop, my wheels will get caught in\n"
	.string "the grass!$"

PollenRoad_Text_Trainer_PollenRoad_AshariDefeat::
# 115 "data/maps/PollenRoad/scripts.pory"
	.string "My wheels are stuck!$"

PollenRoad_Text_Trainer_PollenRoad_MartinIntro::
# 129 "data/maps/PollenRoad/scripts.pory"
	.string "Phew, I'm almost wiped out!$"

PollenRoad_Text_Trainer_PollenRoad_MartinDefeat::
# 133 "data/maps/PollenRoad/scripts.pory"
	.string "Uh oh!$"

PollenRoad_Text_Trainer_PollenRoad_ViktorIntro::
# 158 "data/maps/PollenRoad/scripts.pory"
	.string "I'm straving... Got anything to eat?$"

PollenRoad_Text_Trainer_PollenRoad_ViktorDefeat::
# 162 "data/maps/PollenRoad/scripts.pory"
	.string "I can't battle on an empty stomach!$"

PollenRoad_Text_Trainer_PollenRoad_AliciaIntro::
# 176 "data/maps/PollenRoad/scripts.pory"
	.string "HA! Did I get ya?$"

PollenRoad_Text_Trainer_PollenRoad_AliciaDefeat::
# 180 "data/maps/PollenRoad/scripts.pory"
	.string "Looks like you got me!$"

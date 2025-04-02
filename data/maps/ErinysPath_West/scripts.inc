ErinysPath_West_MapScripts::
# 2 "data/maps/ErinysPath_West/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ErinysPath_West_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

ErinysPath_West_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/ErinysPath_West/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/ErinysPath_West/scripts.pory"
	setobjectaswildencounter 12, ENCOUNTER_LAND
# 16 "data/maps/ErinysPath_West/scripts.pory"
	setobjectaswildencounter 13, ENCOUNTER_LAND
# 17 "data/maps/ErinysPath_West/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 18 "data/maps/ErinysPath_West/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 19 "data/maps/ErinysPath_West/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_LAND
	return


ErinysPath_West_SignBlockingDemoProgress::
# 25 "data/maps/ErinysPath_West/scripts.pory"
	lock
# 26 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_SignBlockingDemoProgress_Text_0
# 27 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 28 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_EventScript_DirectionSign::
# 34 "data/maps/ErinysPath_West/scripts.pory"
	lock
# 35 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_DirectionSign_Text_0
# 36 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 37 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_EventScript_FatMan::
# 43 "data/maps/ErinysPath_West/scripts.pory"
	lock
# 44 "data/maps/ErinysPath_West/scripts.pory"
	faceplayer
# 47 "data/maps/ErinysPath_West/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_YACHE_BERRY_FROST_BREATH
# 48 "data/maps/ErinysPath_West/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ErinysPath_West_EventScript_FatMan_2
# 58 "data/maps/ErinysPath_West/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_YACHE_BERRY_FROST_BREATH
# 59 "data/maps/ErinysPath_West/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ErinysPath_West_EventScript_FatMan_5
# 70 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 71 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_3
# 72 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 74 "data/maps/ErinysPath_West/scripts.pory"
	checkitem ITEM_YACHE_BERRY
# 75 "data/maps/ErinysPath_West/scripts.pory"
	delay 30
# 77 "data/maps/ErinysPath_West/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq ErinysPath_West_EventScript_FatMan_8
# 85 "data/maps/ErinysPath_West/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 86 "data/maps/ErinysPath_West/scripts.pory"
	waitmovement 0
# 87 "data/maps/ErinysPath_West/scripts.pory"
	delay 10
# 88 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 89 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_5
# 90 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 91 "data/maps/ErinysPath_West/scripts.pory"
	removeitem ITEM_YACHE_BERRY
# 92 "data/maps/ErinysPath_West/scripts.pory"
	delay 30
# 94 "data/maps/ErinysPath_West/scripts.pory"
	applymovement 1, Common_Movement_JumpInPlaceCircle
# 95 "data/maps/ErinysPath_West/scripts.pory"
	waitmovement 0
# 96 "data/maps/ErinysPath_West/scripts.pory"
	applymovement 1, Common_Movement_FacePlayer
# 97 "data/maps/ErinysPath_West/scripts.pory"
	waitmovement 0
# 98 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 99 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_6
# 100 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 102 "data/maps/ErinysPath_West/scripts.pory"
	giveitem ITEM_TM52
# 104 "data/maps/ErinysPath_West/scripts.pory"
	delay 5
# 105 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 106 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_7
# 107 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 109 "data/maps/ErinysPath_West/scripts.pory"
	delay 20
# 110 "data/maps/ErinysPath_West/scripts.pory"
	completequest QUEST_YACHE_BERRY_FROST_BREATH
ErinysPath_West_EventScript_FatMan_4:
# 113 "data/maps/ErinysPath_West/scripts.pory"
	release
	end

ErinysPath_West_EventScript_FatMan_2:
# 50 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 51 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_1
# 52 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 53 "data/maps/ErinysPath_West/scripts.pory"
	release
	end

ErinysPath_West_EventScript_FatMan_5:
# 61 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 62 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_2
# 63 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 65 "data/maps/ErinysPath_West/scripts.pory"
	delay 20
# 66 "data/maps/ErinysPath_West/scripts.pory"
	startquest QUEST_YACHE_BERRY_FROST_BREATH
	goto ErinysPath_West_EventScript_FatMan_4

ErinysPath_West_EventScript_FatMan_8:
# 79 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_FatMan_Text_0
# 80 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_FatMan_Text_4
# 81 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
	goto ErinysPath_West_EventScript_FatMan_4


ErinysPath_West_EventScript_Trainer_ErinysPath_W_Helena::
# 119 "data/maps/ErinysPath_West/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_W_HELENA, ErinysPath_West_Text_Trainer_ErinysPath_W_HelenaIntro, ErinysPath_West_Text_Trainer_ErinysPath_W_HelenaDefeat
# 120 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_Trainer_ErinysPath_W_Helena_Text_0
# 121 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_Trainer_ErinysPath_W_Helena_Text_1
# 122 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 123 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_EventScript_Trainer_ErinysPath_W_Lewey::
# 137 "data/maps/ErinysPath_West/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_W_LEWEY, ErinysPath_West_Text_Trainer_ErinysPath_W_LeweyIntro, ErinysPath_West_Text_Trainer_ErinysPath_W_LeweyDefeat
# 138 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_Trainer_ErinysPath_W_Lewey_Text_0
# 139 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_Trainer_ErinysPath_W_Lewey_Text_1
# 140 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 141 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_EventScript_Trainer_ErinysPath_W_Iro::
# 155 "data/maps/ErinysPath_West/scripts.pory"
	trainerbattle_double TRAINER_ERINYSPATH_W_IRO_AND_ANNA, ErinysPath_West_Text_Trainer_ErinysPath_W_IroIntro, ErinysPath_West_Text_Trainer_ErinysPath_W_IroDefeat, ErinysPath_West_Text_Trainer_ErinysPath_W_IroNotEnoughMons
# 156 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_Trainer_ErinysPath_W_Iro_Text_0
# 157 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_Trainer_ErinysPath_W_Iro_Text_1
# 158 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 159 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_EventScript_Trainer_ErinysPath_W_Anna::
# 177 "data/maps/ErinysPath_West/scripts.pory"
	trainerbattle_double TRAINER_ERINYSPATH_W_IRO_AND_ANNA, ErinysPath_West_Text_Trainer_ErinysPath_W_AnnaIntro, ErinysPath_West_Text_Trainer_ErinysPath_W_AnnaDefeat, ErinysPath_West_Text_Trainer_ErinysPath_W_AnnaNotEnoughMons
# 178 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_Trainer_ErinysPath_W_Anna_Text_0
# 179 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_Trainer_ErinysPath_W_Anna_Text_1
# 180 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 181 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_EventScript_Performer::
# 199 "data/maps/ErinysPath_West/scripts.pory"
	lock
# 200 "data/maps/ErinysPath_West/scripts.pory"
	faceplayer
# 201 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_Performer_Text_0
# 202 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_Performer_Text_1
# 203 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 204 "data/maps/ErinysPath_West/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 205 "data/maps/ErinysPath_West/scripts.pory"
	waitmovement 0
# 206 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_EventScript_Trainer_ErinysPath_W_Damon::
# 212 "data/maps/ErinysPath_West/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_W_DAMON, ErinysPath_West_Text_Trainer_ErinysPath_W_DamonIntro, ErinysPath_West_Text_Trainer_ErinysPath_W_DamonDefeat
# 213 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_Trainer_ErinysPath_W_Damon_Text_0
# 214 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_Trainer_ErinysPath_W_Damon_Text_1
# 215 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 216 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_EventScript_Trainer_ErinysPath_W_Tisias::
# 230 "data/maps/ErinysPath_West/scripts.pory"
	trainerbattle_single TRAINER_ERINYSPATH_W_TISIAS, ErinysPath_West_Text_Trainer_ErinysPath_W_TisiasIntro, ErinysPath_West_Text_Trainer_ErinysPath_W_TisiasDefeat
# 231 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_Trainer_ErinysPath_W_Tisias_Text_0
# 232 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_Trainer_ErinysPath_W_Tisias_Text_1
# 233 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 234 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_EventScript_Hiker::
# 248 "data/maps/ErinysPath_West/scripts.pory"
	lock
# 249 "data/maps/ErinysPath_West/scripts.pory"
	faceplayer
# 250 "data/maps/ErinysPath_West/scripts.pory"
	speakername ErinysPath_West_EventScript_Hiker_Text_0
# 251 "data/maps/ErinysPath_West/scripts.pory"
	msgbox ErinysPath_West_EventScript_Hiker_Text_1
# 252 "data/maps/ErinysPath_West/scripts.pory"
	closemessage
# 253 "data/maps/ErinysPath_West/scripts.pory"
	release
	end


ErinysPath_West_SignBlockingDemoProgress_Text_0:
# 26 "data/maps/ErinysPath_West/scripts.pory"
	.string "This is the end of the Pokémon Lazarus\n"
	.string "Demo content.\p"
	.string "Join the Nemo622 Rom Hack Development\n"
	.string "Discord server to stay up-to-date with\l"
	.string "the official release!\p"
	.string "Thank you for playing! -Nemo$"

ErinysPath_West_EventScript_DirectionSign_Text_0:
# 35 "data/maps/ErinysPath_West/scripts.pory"
	.string "Erinys Path - East\n"
	.string "Where Winter Winds Rise\p"
	.string "{LEFT_ARROW} Erinys Path - West\n"
	.string "Froslass Cavern {RIGHT_ARROW}$"

ErinysPath_West_EventScript_FatMan_Text_0:
# 50 "data/maps/ErinysPath_West/scripts.pory"
	.string "Berry Enthusiast$"

ErinysPath_West_EventScript_FatMan_Text_1:
# 51 "data/maps/ErinysPath_West/scripts.pory"
	.string "Thanks to that Yache Berry, I can stand\n"
	.string "in the cold just fine! Berries are so\l"
	.string "amazing.$"

ErinysPath_West_EventScript_FatMan_Text_2:
# 62 "data/maps/ErinysPath_West/scripts.pory"
	.string "Berries found here are growing right at\n"
	.string "the snow line. These are some tough\l"
	.string "little plants!\p"
	.string "Brrr, it's real chilly up here... I have an\n"
	.string "idea. How about you bring me back a\l"
	.string "Berry that can help me {COLOR GREEN}resist Ice-type\l"
	.string "damage{COLOR DARK_GRAY}? I'm not sure if Berries work on\l"
	.string "humans, but it's worth a try.$"

ErinysPath_West_EventScript_FatMan_Text_3:
# 71 "data/maps/ErinysPath_West/scripts.pory"
	.string "Brrr, it's freezing up here! Do you have\n"
	.string "a {COLOR GREEN}Yache Berry{COLOR DARK_GRAY} for me to try yet? Maybe\l"
	.string "it'll help me shrug off the cold.$"

ErinysPath_West_EventScript_FatMan_Text_4:
# 80 "data/maps/ErinysPath_West/scripts.pory"
	.string "No, I can't smell it. Berries all have a\n"
	.string "unique smell, but I can't sense a Yache\l"
	.string "Berry around here.\p"
	.string "From what I remember from those people\n"
	.string "at the Jusmail Town Berry Club, you need\l"
	.string "to {COLOR GREEN}grow Aspear and Persim Berries next\l"
	.string "to each other{COLOR DARK_GRAY} to get the hybrid Yache\l"
	.string "Berry.$"

ErinysPath_West_EventScript_FatMan_Text_5:
# 89 "data/maps/ErinysPath_West/scripts.pory"
	.string "Sniff sniff sniff... Hey, I know that\n"
	.string "smell! It must be a Yache Berry! Quick,\l"
	.string "give it here!$"

ErinysPath_West_EventScript_FatMan_Text_6:
# 99 "data/maps/ErinysPath_West/scripts.pory"
	.string "Yum-yum-yum! Wow, I think I feel less\n"
	.string "cold!\p"
	.string "Thanks, bud. Here, I've got something\n"
	.string "for you.$"

ErinysPath_West_EventScript_FatMan_Text_7:
# 106 "data/maps/ErinysPath_West/scripts.pory"
	.string "That TM contains the move {COLOR GREEN}Frost\n"
	.string "Breath{COLOR DARK_GRAY}. By itself, it's not the\l"
	.string "strongest, but it always lands a\l"
	.string "critical hit!\p"
	.string "My Pokémon and I learned how to do that\n"
	.string "up here in the cold. Hopefully, with my\l"
	.string "Yache Berry, I won't ever have to do\l"
	.string "that again!$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Helena_Text_0:
# 120 "data/maps/ErinysPath_West/scripts.pory"
	.string "Helena$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Helena_Text_1:
# 121 "data/maps/ErinysPath_West/scripts.pory"
	.string "Maybe I'll find a boat to take me to\n"
	.string "Sofos City. Froslass Cavern sounds\l"
	.string "scary!$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Lewey_Text_0:
# 138 "data/maps/ErinysPath_West/scripts.pory"
	.string "Lewey$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Lewey_Text_1:
# 139 "data/maps/ErinysPath_West/scripts.pory"
	.string "No, no, I don't need help, I'll just keep\n"
	.string "pedaling. It's bound to work sooner or\l"
	.string "later!$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Iro_Text_0:
# 156 "data/maps/ErinysPath_West/scripts.pory"
	.string "Iro$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Iro_Text_1:
# 157 "data/maps/ErinysPath_West/scripts.pory"
	.string "My sister and I come here to play all\n"
	.string "the time. All the wild Pokémon like us!$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Anna_Text_0:
# 178 "data/maps/ErinysPath_West/scripts.pory"
	.string "Anna$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Anna_Text_1:
# 179 "data/maps/ErinysPath_West/scripts.pory"
	.string "Iro tells me scary stories about the\n"
	.string "Froslass in the caves, but I'm not\l"
	.string "scared! It made the cold and snow for\l"
	.string "us to play in!$"

ErinysPath_West_EventScript_Performer_Text_0:
# 201 "data/maps/ErinysPath_West/scripts.pory"
	.string "Performer$"

ErinysPath_West_EventScript_Performer_Text_1:
# 202 "data/maps/ErinysPath_West/scripts.pory"
	.string "This area around Froslass Cavern is\n"
	.string "just about the only snowy place in the\l"
	.string "Ilios Region. It's worth visiting here to\l"
	.string "play in the snow sometimes!$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Damon_Text_0:
# 213 "data/maps/ErinysPath_West/scripts.pory"
	.string "Damon$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Damon_Text_1:
# 214 "data/maps/ErinysPath_West/scripts.pory"
	.string "While I'm up here, I might as well make a\n"
	.string "few snowballs. My Ice-type Pokémon like\l"
	.string "it here!$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Tisias_Text_0:
# 231 "data/maps/ErinysPath_West/scripts.pory"
	.string "Tisias$"

ErinysPath_West_EventScript_Trainer_ErinysPath_W_Tisias_Text_1:
# 232 "data/maps/ErinysPath_West/scripts.pory"
	.string "Maybe the snowmen aren't fighting,\n"
	.string "maybe they're friends!$"

ErinysPath_West_EventScript_Hiker_Text_0:
# 250 "data/maps/ErinysPath_West/scripts.pory"
	.string "Hiker$"

ErinysPath_West_EventScript_Hiker_Text_1:
# 251 "data/maps/ErinysPath_West/scripts.pory"
	.string "Froslass Cavern has huge sheets of ice\n"
	.string "on the cave floor. I tried to slide\l"
	.string "across them, but I slipped and fell!$"

ErinysPath_West_Text_Trainer_ErinysPath_W_HelenaIntro::
# 126 "data/maps/ErinysPath_West/scripts.pory"
	.string "We're not far from Froslass Cavern! A\n"
	.string "little battle practice should help us\l"
	.string "get through!$"

ErinysPath_West_Text_Trainer_ErinysPath_W_HelenaDefeat::
# 130 "data/maps/ErinysPath_West/scripts.pory"
	.string "Aw, I better head home...$"

ErinysPath_West_Text_Trainer_ErinysPath_W_LeweyIntro::
# 144 "data/maps/ErinysPath_West/scripts.pory"
	.string "My bike wheels got stuck in the mud!$"

ErinysPath_West_Text_Trainer_ErinysPath_W_LeweyDefeat::
# 148 "data/maps/ErinysPath_West/scripts.pory"
	.string "Not my best day, huh?$"

ErinysPath_West_Text_Trainer_ErinysPath_W_IroIntro::
# 162 "data/maps/ErinysPath_West/scripts.pory"
	.string "We caught these Pokémon while we built\n"
	.string "snowmen!$"

ErinysPath_West_Text_Trainer_ErinysPath_W_IroDefeat::
# 166 "data/maps/ErinysPath_West/scripts.pory"
	.string "At least we made some new friends!$"

ErinysPath_West_Text_Trainer_ErinysPath_W_IroNotEnoughMons::
# 170 "data/maps/ErinysPath_West/scripts.pory"
	.string "Aw, you don't have enough Pokémon to\n"
	.string "battle us. It wouldn't be fair!$"

ErinysPath_West_Text_Trainer_ErinysPath_W_AnnaIntro::
# 184 "data/maps/ErinysPath_West/scripts.pory"
	.string "We caught these Pokémon while we built\n"
	.string "snowmen!$"

ErinysPath_West_Text_Trainer_ErinysPath_W_AnnaDefeat::
# 188 "data/maps/ErinysPath_West/scripts.pory"
	.string "Who'll help us build snowmen now?$"

ErinysPath_West_Text_Trainer_ErinysPath_W_AnnaNotEnoughMons::
# 192 "data/maps/ErinysPath_West/scripts.pory"
	.string "Our parents say we can't battle\n"
	.string "someone without at least 2 Pokémon, or\l"
	.string "else it wouldn't be fair.$"

ErinysPath_West_Text_Trainer_ErinysPath_W_DamonIntro::
# 219 "data/maps/ErinysPath_West/scripts.pory"
	.string "I got a maintenance call for someone up\n"
	.string "here... Where are they?$"

ErinysPath_West_Text_Trainer_ErinysPath_W_DamonDefeat::
# 223 "data/maps/ErinysPath_West/scripts.pory"
	.string "Argh, I bet it was just a prank call.$"

ErinysPath_West_Text_Trainer_ErinysPath_W_TisiasIntro::
# 237 "data/maps/ErinysPath_West/scripts.pory"
	.string "Look! These snowmen look like they're\n"
	.string "battling! Let's battle, too!$"

ErinysPath_West_Text_Trainer_ErinysPath_W_TisiasDefeat::
# 241 "data/maps/ErinysPath_West/scripts.pory"
	.string "I couldn't even win with all this money?!$"

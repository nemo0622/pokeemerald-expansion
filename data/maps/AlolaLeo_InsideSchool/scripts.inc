AlolaLeo_InsideSchool_MapScripts::
	.byte 0


AlolaLeo_InsideSchool_NPC_Teacher1::
# 5 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 6 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 7 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_Teacher1_Text_0
# 8 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_Teacher1_Text_1
# 9 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 10 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 11 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	delay 20
# 12 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_Teacher1_Text_0
# 13 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_Teacher1_Text_2
# 14 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 15 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 16 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	waitmovement 0
# 17 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_NPC_Teacher2::
# 23 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 24 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 25 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_Teacher1_Text_0
# 26 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_Teacher2_Text_0
# 27 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 28 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 29 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	waitmovement 0
# 30 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_NPC_Teacher3::
# 36 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 37 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 38 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_Teacher1_Text_0
# 39 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_Teacher3_Text_0
# 40 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 41 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 42 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	waitmovement 0
# 43 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_NPC_YoungsterPokeRide::
# 49 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 50 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 51 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_YoungsterPokeRide_Text_0
# 52 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_YoungsterPokeRide_Text_1
# 53 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 54 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_NPC_SchoolBoyGoofingOff::
# 60 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 61 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 62 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_SchoolBoyGoofingOff_Text_0
# 63 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_SchoolBoyGoofingOff_Text_1
# 64 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 65 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_NPC_QuickClawScientist::
# 71 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 72 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 73 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_QuickClawScientist_Text_0
# 74 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_QuickClawScientist_Text_1
# 75 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	goto_if_unset FLAG_GOT_QUICK_CLAW_TRAINER_SCHOOL, AlolaLeo_InsideSchool_NPC_QuickClawScientist_2
AlolaLeo_InsideSchool_NPC_QuickClawScientist_1:
# 83 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end

AlolaLeo_InsideSchool_NPC_QuickClawScientist_2:
# 77 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_QuickClawScientist_Text_0
# 78 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_QuickClawScientist_Text_2
# 79 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 80 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	giveitem ITEM_QUICK_CLAW
# 81 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setflag FLAG_GOT_QUICK_CLAW_TRAINER_SCHOOL
	goto AlolaLeo_InsideSchool_NPC_QuickClawScientist_1


AlolaLeo_InsideSchool_NPC_Picnicker::
# 89 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 90 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 91 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_Picnicker_Text_0
# 92 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_Picnicker_Text_1
# 93 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 94 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_NPC_SightseerLearning::
# 100 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 101 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 102 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_SightseerLearning_Text_0
# 103 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_SightseerLearning_Text_1
# 104 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 105 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_Pokemon_Chingling::
# 111 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 112 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 113 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_Pokemon_Chingling_Text_0
# 114 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	playmoncry SPECIES_CHINGLING, CRY_MODE_NORMAL
# 115 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_Pokemon_Chingling_Text_1
# 116 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	waitmoncry
# 117 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 118 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_Pokemon_Metapod::
# 124 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 125 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 126 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_Pokemon_Metapod_Text_0
# 127 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	playmoncry SPECIES_METAPOD, CRY_MODE_NORMAL
# 128 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_Pokemon_Metapod_Text_1
# 129 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	waitmoncry
# 130 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 131 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_Pokemon_Grimer::
# 137 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 138 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 139 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_Pokemon_Grimer_Text_0
# 140 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	playmoncry SPECIES_GRIMER_ALOLA, CRY_MODE_NORMAL
# 141 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_Pokemon_Grimer_Text_1
# 142 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	waitmoncry
# 143 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 144 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_Pokemon_Cosmog::
# 150 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 151 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 152 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_Pokemon_Cosmog_Text_0
# 153 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	playmoncry SPECIES_COSMOG, CRY_MODE_NORMAL
# 154 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_Pokemon_Cosmog_Text_1
# 155 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	waitmoncry
# 156 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 157 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
# 158 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	waitmovement 0
# 159 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_NPC_Lillie::
# 165 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	lock
# 166 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_Lillie_Text_0
# 167 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_OTHER
# 168 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_Lillie_Text_1
# 169 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 170 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	faceplayer
# 171 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_NPC_Lillie_Text_0
# 172 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	createfieldmugshot MUGSHOT_LILLIE_HAT, EMOTION_SAD
# 173 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_NPC_Lillie_Text_2
# 174 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 175 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceRight
# 176 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	waitmovement 0
# 177 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_Trainer_SchoolGirlMia::
# 185 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	trainerbattle_single TRAINER_SCHOOL_GIRL_MIA, AlolaLeo_InsideSchool_Trainer_SchoolGirlMia_Text_0, AlolaLeo_InsideSchool_Trainer_SchoolGirlMia_Text_1
# 189 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_Trainer_SchoolGirlMia_Text_2
# 190 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_Trainer_SchoolGirlMia_Text_3
# 191 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 192 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_Trainer_YoungsterJoey::
# 198 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOEY, AlolaLeo_InsideSchool_Trainer_YoungsterJoey_Text_0, AlolaLeo_InsideSchool_Trainer_YoungsterJoey_Text_1
# 202 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	setspeaker AlolaLeo_InsideSchool_Trainer_YoungsterJoey_Text_2
# 203 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	msgbox AlolaLeo_InsideSchool_Trainer_YoungsterJoey_Text_3
# 204 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	closemessage
# 205 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	release
	end


AlolaLeo_InsideSchool_NPC_Teacher1_Text_0:
# 7 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Teacher$"

AlolaLeo_InsideSchool_NPC_Teacher1_Text_1:
# 8 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Ahem... Kids, kids! Ugh, nobody listens\n"
	.string "to me...$"

AlolaLeo_InsideSchool_NPC_Teacher1_Text_2:
# 13 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Wait... You're listening! I'll give you\n"
	.string "some exclusive info as a reward.\p"
	.string "The Alola Leo staff have been putting\n"
	.string "up {COLOR GREEN}large signs{COLOR DARK_GRAY} all over the region. Make\l"
	.string "sure to {COLOR GREEN}read them all{COLOR DARK_GRAY} - you'll learn more\l"
	.string "about the Pokémon nearby, and the\l"
	.string "information can be registered in your\l"
	.string "Pokédex!$"

AlolaLeo_InsideSchool_NPC_Teacher2_Text_0:
# 26 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Today's lesson is on the Wild Pokémon of\n"
	.string "Alola.\p"
	.string "Did you know that many Pokémon found\n"
	.string "on our islands aren't native to here?\l"
	.string "Dozens of species have come here in\l"
	.string "recent years. Some were brought\l"
	.string "intentionally, while others were\l"
	.string "carelessly released and established\l"
	.string "wild populations.$"

AlolaLeo_InsideSchool_NPC_Teacher3_Text_0:
# 39 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Alright kids, today we'll be talking\n"
	.string "about Ride Pokémon.\p"
	.string "In many other regions, Pokémon usually\n"
	.string "stay inside their Poké ball. Alolan\l"
	.string "Pokémon often form much closer bonds\l"
	.string "with people, so most folks live their\l"
	.string "daily lives surrounded by their\l"
	.string "partners!\p"
	.string "Some people go even further, choosing\n"
	.string "to {COLOR GREEN}ride their Pokémon{COLOR DARK_GRAY} to traverse Alola\l"
	.string "in new ways. Some areas can only be\l"
	.string "reached by riding specific Pokémon!$"

AlolaLeo_InsideSchool_NPC_YoungsterPokeRide_Text_0:
# 51 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Youngster$"

AlolaLeo_InsideSchool_NPC_YoungsterPokeRide_Text_1:
# 52 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Aw, yeah! I hope we get to ride a {COLOR BLUE}Tauros{COLOR DARK_GRAY}\n"
	.string "after this lesson!\p"
	.string "My dad says the Tauros are raised in\n"
	.string "Paniola Ranch over on Akala Island. Can\l"
	.string "you imagine all the Tauros riders?$"

AlolaLeo_InsideSchool_NPC_SchoolBoyGoofingOff_Text_0:
# 62 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "School Boy$"

AlolaLeo_InsideSchool_NPC_SchoolBoyGoofingOff_Text_1:
# 63 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "There the teacher goes again, talking\n"
	.string "about signs or whatever... Why should I\l"
	.string "care about reading and writing? I can\l"
	.string "just have Pokémon battles instead!$"

AlolaLeo_InsideSchool_NPC_QuickClawScientist_Text_0:
# 73 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Scientist$"

AlolaLeo_InsideSchool_NPC_QuickClawScientist_Text_1:
# 74 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "I just held a guest lecture on\n"
	.string "Pokémon's Speed stat.$"

AlolaLeo_InsideSchool_NPC_QuickClawScientist_Text_2:
# 78 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "This item gives slower Pokémon a chance\n"
	.string "to move first. I'm sure they'll get a\l"
	.string "kick out of it!$"

AlolaLeo_InsideSchool_NPC_Picnicker_Text_0:
# 91 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Picnicker$"

AlolaLeo_InsideSchool_NPC_Picnicker_Text_1:
# 92 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Some items don't do anything unless a\n"
	.string "Pokémon is holding them. They sure are\l"
	.string "smart!$"

AlolaLeo_InsideSchool_NPC_SightseerLearning_Text_0:
# 102 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Sightseer$"

AlolaLeo_InsideSchool_NPC_SightseerLearning_Text_1:
# 103 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Oh, I'm here for the open lesson on Ride\n"
	.string "Pokémon!\p"
	.string "We let Pokémon follow us sometimes in\n"
	.string "Johto, but it looks like Alola takes\l"
	.string "that way further!$"

AlolaLeo_InsideSchool_Pokemon_Chingling_Text_0:
# 113 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Chingling$"

AlolaLeo_InsideSchool_Pokemon_Chingling_Text_1:
# 115 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Ding ding!$"

AlolaLeo_InsideSchool_Pokemon_Metapod_Text_0:
# 126 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Metapod$"

AlolaLeo_InsideSchool_Pokemon_Metapod_Text_1:
# 128 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "...$"

AlolaLeo_InsideSchool_Pokemon_Grimer_Text_0:
# 139 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Grimer$"

AlolaLeo_InsideSchool_Pokemon_Grimer_Text_1:
# 141 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Greugh!$"

AlolaLeo_InsideSchool_Pokemon_Cosmog_Text_0:
# 152 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Nebbie$"

AlolaLeo_InsideSchool_Pokemon_Cosmog_Text_1:
# 154 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Pew pew!$"

AlolaLeo_InsideSchool_NPC_Lillie_Text_0:
# 166 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Lillie$"

AlolaLeo_InsideSchool_NPC_Lillie_Text_1:
# 168 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY}, you know it's not safe for you\n"
	.string "to battle!$"

AlolaLeo_InsideSchool_NPC_Lillie_Text_2:
# 173 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "{COLOR BLUE}Nebbie{COLOR DARK_GRAY} is a {COLOR BLUE}Cosmog{COLOR DARK_GRAY}, so it can only use a\n"
	.string "few feeble moves in proper battles.\l"
	.string "Besides, people shouldn't see it for too\l"
	.string "long...$"

AlolaLeo_InsideSchool_Trainer_SchoolGirlMia_Text_0:
# 186 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Go, my secret Berry strategy!$"

AlolaLeo_InsideSchool_Trainer_SchoolGirlMia_Text_1:
# 187 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "M-my expert strategy...!$"

AlolaLeo_InsideSchool_Trainer_SchoolGirlMia_Text_2:
# 189 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "School Girl Mia$"

AlolaLeo_InsideSchool_Trainer_SchoolGirlMia_Text_3:
# 190 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Lots of Berries grow in Alola. Maybe I'll\n"
	.string "have a Berry farm when I grow up!$"

AlolaLeo_InsideSchool_Trainer_YoungsterJoey_Text_0:
# 199 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "I'll show you my Grimer's best move!\n"
	.string "There's nothing you can do against our\l"
	.string "Poison Gas!$"

AlolaLeo_InsideSchool_Trainer_YoungsterJoey_Text_1:
# 200 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Hehehe... Poison Gas!$"

AlolaLeo_InsideSchool_Trainer_YoungsterJoey_Text_2:
# 202 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Youngster Joey$"

AlolaLeo_InsideSchool_Trainer_YoungsterJoey_Text_3:
# 203 "data//maps/AlolaLeo_InsideSchool/scripts.pory"
	.string "Certain Pokémon are immune to some\n"
	.string "status conditions... Is that how you\l"
	.string "got through Grimer's gas?$"

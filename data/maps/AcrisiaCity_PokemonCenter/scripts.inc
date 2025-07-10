AcrisiaCity_PokemonCenter_MapScripts::
	.byte 0


AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse::
# 5 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	lock
# 6 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	faceplayer
# 7 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 8 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1, MSGBOX_YESNO
# 9 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_2
# 17 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 18 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3
# 19 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 20 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	ballfollowingmon
# 21 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_FaceLeft
# 22 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 23 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	dofieldeffect FLDEFF_POKECENTER_HEAL
# 24 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitfieldeffect FLDEFF_POKECENTER_HEAL
# 25 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceFasterDown
# 26 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 27 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	special HealPlayerParty
# 28 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	callnative UpdateFollowingPokemon
# 29 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 30 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4
# 31 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 34 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_ACRISIA_CITY
AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_1:
# 36 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end

AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_2:
# 11 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0
# 12 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2
# 13 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
	goto AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_1


AcrisiaCity_PokemonCenter_EventScript_Togetic::
# 42 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	lock
# 43 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	faceplayer
# 44 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_Togetic_Text_0
# 45 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	playmoncry SPECIES_TOGETIC, CRY_MODE_NORMAL
# 46 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_Togetic_Text_1
# 47 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitmoncry
# 48 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 49 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end


Common_PokemonCenter_EventScript_Innkeeper::
# 57 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	lock
# 58 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	faceplayer
# 59 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	setflag FLAG_SYS_CLOCK_SET
# 60 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	goto_if_unset FLAG_MET_INKEEPER, Common_PokemonCenter_EventScript_Innkeeper_2
Common_PokemonCenter_EventScript_Innkeeper_1:
# 68 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 69 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	message Common_PokemonCenter_EventScript_Innkeeper_Text_2
# 70 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitmessage
# 71 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	multichoice 21, 2, MULTI_CHOOSE_INN_TIME, TRUE
# 72 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 73 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 5
# 76 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq Common_PokemonCenter_EventScript_Innkeeper_4
# 84 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Common_PokemonCenter_EventScript_Innkeeper_5
# 107 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Common_PokemonCenter_EventScript_Innkeeper_6
# 130 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Common_PokemonCenter_EventScript_Innkeeper_7
# 155 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 156 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_Innkeeper_Text_10
# 157 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 158 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	ballfollowingmon
# 159 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	fadescreen FADE_TO_BLACK
# 160 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 162 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	setfakertcnight
# 163 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	playfanfare MUS_RG_POKE_FLUTE
# 164 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitfanfare
# 166 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 167 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 168 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 170 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 171 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_Innkeeper_Text_11
# 172 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 173 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end

Common_PokemonCenter_EventScript_Innkeeper_2:
# 62 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	setflag FLAG_MET_INKEEPER
# 63 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 64 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_Innkeeper_Text_1
# 65 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 66 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 5
	goto Common_PokemonCenter_EventScript_Innkeeper_1

Common_PokemonCenter_EventScript_Innkeeper_4:
# 78 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 79 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_Innkeeper_Text_3
# 80 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 81 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end

Common_PokemonCenter_EventScript_Innkeeper_5:
# 86 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 87 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_Innkeeper_Text_4
# 88 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 89 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	ballfollowingmon
# 90 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	fadescreen FADE_TO_BLACK
# 91 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 93 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	setfakertcmorning
# 94 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	playfanfare MUS_RG_POKE_FLUTE
# 95 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitfanfare
# 97 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 98 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 99 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 101 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 102 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_Innkeeper_Text_5
# 103 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 104 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end

Common_PokemonCenter_EventScript_Innkeeper_6:
# 109 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 110 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_Innkeeper_Text_6
# 111 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 112 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	ballfollowingmon
# 113 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	fadescreen FADE_TO_BLACK
# 114 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 116 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	setfakertcnoon
# 117 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	playfanfare MUS_RG_POKE_FLUTE
# 118 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitfanfare
# 120 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 121 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 122 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 124 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 125 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_Innkeeper_Text_7
# 126 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 127 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end

Common_PokemonCenter_EventScript_Innkeeper_7:
# 132 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 133 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_Innkeeper_Text_8
# 134 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 135 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	ballfollowingmon
# 136 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	fadescreen FADE_TO_BLACK
# 137 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 139 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	setfakertcevening
# 140 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	playfanfare MUS_RG_POKE_FLUTE
# 141 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	waitfanfare
# 143 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 144 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 145 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 30
# 147 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername Common_PokemonCenter_EventScript_Innkeeper_Text_0
# 148 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_Innkeeper_Text_9
# 149 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 150 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end


Common_PokemonCenter_EventScript_CandleSign::
# 180 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	lock
# 181 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox Common_PokemonCenter_EventScript_CandleSign_Text_0
# 182 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 183 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end


AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck::
# 191 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	lock
# 192 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	faceplayer
# 193 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 195 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_ACRISIA_CITY, AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_2
# 202 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2
# 203 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 204 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	special CheckRouteCaptureProgress
# 205 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_5
AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1:
# 222 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	release
	end

AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_2:
# 197 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1
# 198 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
	goto AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1

AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_5:
# 207 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 20
# 208 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 209 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	speakername AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0
# 210 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	msgbox AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3
# 211 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 212 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	delay 5
# 215 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	giveitem ITEM_NEST_BALL, 15
# 216 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	closemessage
# 218 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_ACRISIA_CITY
	goto AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_1


AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_0:
# 7 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Nurse$"

AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_1:
# 8 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Welcome to the Acrisia City Pokémon\n"
	.string "Center! Would you like to heal your\l"
	.string "Pokémon?$"

AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_2:
# 12 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "We hope to see you again!$"

AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_3:
# 18 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Okay, I'll take your Pokémon for a few\n"
	.string "seconds!$"

AcrisiaCity_PokemonCenter_EventScript_PkmnCenterNurse_Text_4:
# 30 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Your Pokémon are happy and healthy! We\n"
	.string "hope to see you again!$"

AcrisiaCity_PokemonCenter_EventScript_Togetic_Text_0:
# 44 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Togetic$"

AcrisiaCity_PokemonCenter_EventScript_Togetic_Text_1:
# 46 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Bee-eh!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_0:
# 63 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Innkeeper$"

Common_PokemonCenter_EventScript_Innkeeper_Text_1:
# 64 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Oh, a new customer! Welcome to the\n"
	.string "Pokémon Center Inn!\p"
	.string "Wait... yes, I can't believe it! You're the\n"
	.string "100,000th visitor to the system of\l"
	.string "Pokémon Center Inns! Congratulations,\l"
	.string "you've won a free lifetime membership!\p"
	.string "We offer services in every Pokémon\n"
	.string "Center, allowing Trainers to sleep and\l"
	.string "{COLOR GREEN}skip to a chosen time{COLOR DARK_GRAY}. This helps for\l"
	.string "Trainers looking for Pokémon which only\l"
	.string "come out at certain times!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_2:
# 69 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Are you interested in taking a rest? My\n"
	.string "Musharna guarantees sweet dreams!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_3:
# 79 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Okay! Come back when you need a good\n"
	.string "rest!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_4:
# 87 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Ah, the best time of day! I love waking\n"
	.string "up to wild Pikipek chirping outside.\l"
	.string "Sweet dreams!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_5:
# 102 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Good morning, rise and shine! It's 7:00\n"
	.string "AM, just as you requested.\p"
	.string "We hope you stay well-rested and\n"
	.string "healthy!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_6:
# 110 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Lovely, just as the sun shines\n"
	.string "brightest! Tons of Pokémon are at their\l"
	.string "most active around noon. Sweet dreams!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_7:
# 125 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Rise and shine! It's 12:00 Noon, just as\n"
	.string "you requested.\p"
	.string "We hope you stay well-rested and\n"
	.string "healthy!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_8:
# 133 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Ah, preparing for some end-of-day\n"
	.string "exploring? Maybe you can catch the\l"
	.string "sunset as you wake up. Sweet dreams!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_9:
# 148 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Good evening! It's 7:00 PM, just as you\n"
	.string "requested.\p"
	.string "We hope you stay well-rested and\n"
	.string "healthy!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_10:
# 156 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Living like a Noctowl, huh? Some\n"
	.string "Pokémon are only found at night, maybe\l"
	.string "you can find a few! Sweet dreams!$"

Common_PokemonCenter_EventScript_Innkeeper_Text_11:
# 171 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "I hope you're ready for a late night!\n"
	.string "It's 10:00 PM, just as you requested.\p"
	.string "We hope you stay well-rested and\n"
	.string "healthy!$"

Common_PokemonCenter_EventScript_CandleSign_Text_0:
# 181 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "It's a candle with a soothing aroma. It\n"
	.string "almost smells like a Flabébé flower!\p"
	.string "The sign above is advertising the\n"
	.string "Pokémon Center Inn services.$"

AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_0:
# 193 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Uni. Student$"

AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_1:
# 197 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_2:
# 202 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Chaire (Hyeh-rei)! I'm a student from\n"
	.string "the Acrisia University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Acrisia City. If you've\l"
	.string "caught all the Pokémon here, please let\l"
	.string "me know.$"

AcrisiaCity_PokemonCenter_EventScript_UniversityStudentRouteCheck_Text_3:
# 210 "data/maps/AcrisiaCity_PokemonCenter/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

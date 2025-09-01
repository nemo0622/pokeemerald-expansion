TheRattway_MapScripts::
# 2 "data/maps/TheRattway/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TheRattway_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TheRattway_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/TheRattway/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/TheRattway/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 16 "data/maps/TheRattway/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_LAND
# 17 "data/maps/TheRattway/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_LAND
# 18 "data/maps/TheRattway/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_LAND
# 19 "data/maps/TheRattway/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
# 20 "data/maps/TheRattway/scripts.pory"
	setobjectaswildencounter 20, ENCOUNTER_LAND
# 21 "data/maps/TheRattway/scripts.pory"
	setobjectaswildencounter 21, ENCOUNTER_LAND
	return


CorrinCrossing_EventScript_UniversityStudentRouteCheck::
# 27 "data/maps/TheRattway/scripts.pory"
	lock
# 28 "data/maps/TheRattway/scripts.pory"
	faceplayer
# 29 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_UniversityStudentRouteCheck_Text_0
# 31 "data/maps/TheRattway/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_CORRIN_CROSSING, CorrinCrossing_EventScript_UniversityStudentRouteCheck_2
# 38 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_UniversityStudentRouteCheck_Text_2
# 39 "data/maps/TheRattway/scripts.pory"
	closemessage
# 40 "data/maps/TheRattway/scripts.pory"
	special CheckRouteCaptureProgress
# 41 "data/maps/TheRattway/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CorrinCrossing_EventScript_UniversityStudentRouteCheck_5
CorrinCrossing_EventScript_UniversityStudentRouteCheck_1:
# 58 "data/maps/TheRattway/scripts.pory"
	release
	end

CorrinCrossing_EventScript_UniversityStudentRouteCheck_2:
# 33 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_UniversityStudentRouteCheck_Text_1
# 34 "data/maps/TheRattway/scripts.pory"
	closemessage
	goto CorrinCrossing_EventScript_UniversityStudentRouteCheck_1

CorrinCrossing_EventScript_UniversityStudentRouteCheck_5:
# 43 "data/maps/TheRattway/scripts.pory"
	delay 20
# 44 "data/maps/TheRattway/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 45 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_UniversityStudentRouteCheck_Text_0
# 46 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_UniversityStudentRouteCheck_Text_3
# 47 "data/maps/TheRattway/scripts.pory"
	closemessage
# 48 "data/maps/TheRattway/scripts.pory"
	delay 5
# 51 "data/maps/TheRattway/scripts.pory"
	giveitem ITEM_TM54
# 52 "data/maps/TheRattway/scripts.pory"
	closemessage
# 54 "data/maps/TheRattway/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_CORRIN_CROSSING
	goto CorrinCrossing_EventScript_UniversityStudentRouteCheck_1


CorrinCrossing_EventScript_Gentleman::
# 64 "data/maps/TheRattway/scripts.pory"
	lock
# 65 "data/maps/TheRattway/scripts.pory"
	faceplayer
# 66 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_Gentleman_Text_0
# 67 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_Gentleman_Text_1
# 68 "data/maps/TheRattway/scripts.pory"
	closemessage
# 69 "data/maps/TheRattway/scripts.pory"
	release
	end


CorrinCrossing_EventScript_Trainer_CorrinCrossing_Wyatt::
# 75 "data/maps/TheRattway/scripts.pory"
	trainerbattle_single TRAINER_CORRINCROSSING_WYATT, CorrinCrossing_Text_Trainer_CorrinCrossing_WyattIntro, CorrinCrossing_Text_Trainer_CorrinCrossing_WyattDefeat
# 76 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_Trainer_CorrinCrossing_Wyatt_Text_0
# 77 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_Trainer_CorrinCrossing_Wyatt_Text_1
# 78 "data/maps/TheRattway/scripts.pory"
	closemessage
# 79 "data/maps/TheRattway/scripts.pory"
	release
	end


CorrinCrossing_EventScript_Trainer_CorrinCrossing_Junior::
# 93 "data/maps/TheRattway/scripts.pory"
	trainerbattle_single TRAINER_CORRINCROSSING_JUNIOR, CorrinCrossing_Text_Trainer_CorrinCrossing_JuniorIntro, CorrinCrossing_Text_Trainer_CorrinCrossing_JuniorDefeat
# 94 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_Trainer_CorrinCrossing_Junior_Text_0
# 95 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_Trainer_CorrinCrossing_Junior_Text_1
# 96 "data/maps/TheRattway/scripts.pory"
	closemessage
# 97 "data/maps/TheRattway/scripts.pory"
	release
	end


CorrinCrossing_EventScript_CyclingTriathleteF::
# 111 "data/maps/TheRattway/scripts.pory"
	lock
# 112 "data/maps/TheRattway/scripts.pory"
	faceplayer
# 113 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_CyclingTriathleteF_Text_0
# 114 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_CyclingTriathleteF_Text_1
# 115 "data/maps/TheRattway/scripts.pory"
	closemessage
# 116 "data/maps/TheRattway/scripts.pory"
	release
	end


CorrinCrossing_EventScript_Trainer_CorrinCrossing_Vasia::
# 122 "data/maps/TheRattway/scripts.pory"
	trainerbattle_single TRAINER_CORRINCROSSING_VASIA, CorrinCrossing_Text_Trainer_CorrinCrossing_VasiaIntro, CorrinCrossing_Text_Trainer_CorrinCrossing_VasiaDefeat
# 123 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_Trainer_CorrinCrossing_Vasia_Text_0
# 124 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_Trainer_CorrinCrossing_Vasia_Text_1
# 125 "data/maps/TheRattway/scripts.pory"
	closemessage
# 126 "data/maps/TheRattway/scripts.pory"
	release
	end


CorrinCrossing_EventScript_Trainer_CorrinCrossing_Alfred::
# 140 "data/maps/TheRattway/scripts.pory"
	trainerbattle_single TRAINER_CORRINCROSSING_ALFRED, CorrinCrossing_Text_Trainer_CorrinCrossing_AlfredIntro, CorrinCrossing_Text_Trainer_CorrinCrossing_AlfredDefeat
# 141 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_Trainer_CorrinCrossing_Alfred_Text_0
# 142 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_Trainer_CorrinCrossing_Alfred_Text_1
# 143 "data/maps/TheRattway/scripts.pory"
	closemessage
# 144 "data/maps/TheRattway/scripts.pory"
	release
	end


CorrinCrossing_EventScript_SuperRodFishingGuru::
# 158 "data/maps/TheRattway/scripts.pory"
	lock
# 159 "data/maps/TheRattway/scripts.pory"
	faceplayer
# 160 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_SuperRodFishingGuru_Text_0
# 161 "data/maps/TheRattway/scripts.pory"
	goto_if_unset FLAG_RECEIVED_SUPER_ROD, CorrinCrossing_EventScript_SuperRodFishingGuru_2
# 173 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_SuperRodFishingGuru_Text_2
# 174 "data/maps/TheRattway/scripts.pory"
	closemessage
CorrinCrossing_EventScript_SuperRodFishingGuru_1:
# 176 "data/maps/TheRattway/scripts.pory"
	release
	end

CorrinCrossing_EventScript_SuperRodFishingGuru_2:
# 163 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_SuperRodFishingGuru_Text_1
# 164 "data/maps/TheRattway/scripts.pory"
	closemessage
# 165 "data/maps/TheRattway/scripts.pory"
	giveitem ITEM_SUPER_ROD
# 166 "data/maps/TheRattway/scripts.pory"
	setflag FLAG_RECEIVED_SUPER_ROD
# 167 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_SuperRodFishingGuru_Text_0
# 168 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_SuperRodFishingGuru_Text_2
# 169 "data/maps/TheRattway/scripts.pory"
	closemessage
	goto CorrinCrossing_EventScript_SuperRodFishingGuru_1


CorrinCrossing_EventScript_Trainer_CorrinCrossing_Darcey::
# 182 "data/maps/TheRattway/scripts.pory"
	trainerbattle_single TRAINER_CORRINCROSSING_DARCEY, CorrinCrossing_Text_Trainer_CorrinCrossing_DarceyIntro, CorrinCrossing_Text_Trainer_CorrinCrossing_DarceyDefeat
# 183 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_Trainer_CorrinCrossing_Darcey_Text_0
# 184 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_Trainer_CorrinCrossing_Darcey_Text_1
# 185 "data/maps/TheRattway/scripts.pory"
	closemessage
# 186 "data/maps/TheRattway/scripts.pory"
	release
	end


CorrinCrossing_EventScript_Trainer_CorrinCrossing_Maxim::
# 200 "data/maps/TheRattway/scripts.pory"
	trainerbattle_single TRAINER_CORRINCROSSING_MAXIM, CorrinCrossing_Text_Trainer_CorrinCrossing_MaximIntro, CorrinCrossing_Text_Trainer_CorrinCrossing_MaximDefeat
# 201 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_Trainer_CorrinCrossing_Maxim_Text_0
# 202 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_Trainer_CorrinCrossing_Maxim_Text_1
# 203 "data/maps/TheRattway/scripts.pory"
	closemessage
# 204 "data/maps/TheRattway/scripts.pory"
	release
	end


CorrinCrossing_EventScript_Trainer_CorrinCrossing_Oskar::
# 218 "data/maps/TheRattway/scripts.pory"
	trainerbattle_single TRAINER_CORRINCROSSING_OSKAR, CorrinCrossing_Text_Trainer_CorrinCrossing_OskarIntro, CorrinCrossing_Text_Trainer_CorrinCrossing_OskarDefeat
# 219 "data/maps/TheRattway/scripts.pory"
	speakername CorrinCrossing_EventScript_Trainer_CorrinCrossing_Oskar_Text_0
# 220 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_Trainer_CorrinCrossing_Oskar_Text_1
# 221 "data/maps/TheRattway/scripts.pory"
	closemessage
# 222 "data/maps/TheRattway/scripts.pory"
	release
	end


CorrinCrossing_EventScript_DirectionSign::
# 236 "data/maps/TheRattway/scripts.pory"
	lock
# 237 "data/maps/TheRattway/scripts.pory"
	msgbox CorrinCrossing_EventScript_DirectionSign_Text_0
# 238 "data/maps/TheRattway/scripts.pory"
	closemessage
# 239 "data/maps/TheRattway/scripts.pory"
	release
	end


CorrinCrossing_EventScript_UniversityStudentRouteCheck_Text_0:
# 29 "data/maps/TheRattway/scripts.pory"
	.string "Uni. Student$"

CorrinCrossing_EventScript_UniversityStudentRouteCheck_Text_1:
# 33 "data/maps/TheRattway/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

CorrinCrossing_EventScript_UniversityStudentRouteCheck_Text_2:
# 38 "data/maps/TheRattway/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all Land\n"
	.string "Pokémon{COLOR DARK_GRAY} found in Corrin Crossing. If\l"
	.string "you've caught all the Pokémon here,\l"
	.string "please let me know.$"

CorrinCrossing_EventScript_UniversityStudentRouteCheck_Text_3:
# 46 "data/maps/TheRattway/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

CorrinCrossing_EventScript_Gentleman_Text_0:
# 66 "data/maps/TheRattway/scripts.pory"
	.string "Gentleman$"

CorrinCrossing_EventScript_Gentleman_Text_1:
# 67 "data/maps/TheRattway/scripts.pory"
	.string "Ohoho, it's nice to be back here!\p"
	.string "I was caught up in Sofos City when this\n"
	.string "path was closed down due to Team\l"
	.string "Chimera activity. I missed the soft\l"
	.string "waves and cherry trees.$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Wyatt_Text_0:
# 76 "data/maps/TheRattway/scripts.pory"
	.string "Wyatt$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Wyatt_Text_1:
# 77 "data/maps/TheRattway/scripts.pory"
	.string "I'm still on edge because of Team\n"
	.string "Chimera. I know they're mostly back in\l"
	.string "their Areios Hideout now, but I'm still\l"
	.string "jumpy.$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Junior_Text_0:
# 94 "data/maps/TheRattway/scripts.pory"
	.string "Junior$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Junior_Text_1:
# 95 "data/maps/TheRattway/scripts.pory"
	.string "I'm looking for more Bug-type Pokémon.\n"
	.string "I'm trying to be the best Trainer in\l"
	.string "Ilios using only Bug-types!$"

CorrinCrossing_EventScript_CyclingTriathleteF_Text_0:
# 113 "data/maps/TheRattway/scripts.pory"
	.string "Cyclist$"

CorrinCrossing_EventScript_CyclingTriathleteF_Text_1:
# 114 "data/maps/TheRattway/scripts.pory"
	.string "The cherry trees in this area were\n"
	.string "planted centuries ago by foreign\l"
	.string "visitors. Now they're a key part of Port\l"
	.string "Pello's culture!$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Vasia_Text_0:
# 123 "data/maps/TheRattway/scripts.pory"
	.string "Vasia$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Vasia_Text_1:
# 124 "data/maps/TheRattway/scripts.pory"
	.string "I'm training my Pokémon, just in case\n"
	.string "Team Chimera shows up again.$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Alfred_Text_0:
# 141 "data/maps/TheRattway/scripts.pory"
	.string "Alfred$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Alfred_Text_1:
# 142 "data/maps/TheRattway/scripts.pory"
	.string "Corrin Crossing used to be a major road,\n"
	.string "but as more people started to travel on\l"
	.string "ships, it's fallen into obscurity.$"

CorrinCrossing_EventScript_SuperRodFishingGuru_Text_0:
# 160 "data/maps/TheRattway/scripts.pory"
	.string "Fishing Guru$"

CorrinCrossing_EventScript_SuperRodFishingGuru_Text_1:
# 163 "data/maps/TheRattway/scripts.pory"
	.string "I was the first on this route when it\n"
	.string "reopened! I see you have a fisher's\l"
	.string "heart, like me.\p"
	.string "I'm so excited, I think I'll give you\n"
	.string "this!$"

CorrinCrossing_EventScript_SuperRodFishingGuru_Text_2:
# 168 "data/maps/TheRattway/scripts.pory"
	.string "The {COLOR GREEN}Super Rod{COLOR DARK_GRAY} can give you access to a\n"
	.string "wide array of Water-dwelling Pokémon.\l"
	.string "You're fighting Team Chimera, yes?\l"
	.string "Maybe those Pokémon can help you!$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Darcey_Text_0:
# 183 "data/maps/TheRattway/scripts.pory"
	.string "Darcey$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Darcey_Text_1:
# 184 "data/maps/TheRattway/scripts.pory"
	.string "I heard these sinkholes opened up\n"
	.string "because of Team Chimera's weather\l"
	.string "anomaly recently. They're scary!$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Maxim_Text_0:
# 201 "data/maps/TheRattway/scripts.pory"
	.string "Maxim$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Maxim_Text_1:
# 202 "data/maps/TheRattway/scripts.pory"
	.string "I try to collect every Item I see. I\n"
	.string "suppose there's no harm in sharing,\l"
	.string "though.$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Oskar_Text_0:
# 219 "data/maps/TheRattway/scripts.pory"
	.string "Oskar$"

CorrinCrossing_EventScript_Trainer_CorrinCrossing_Oskar_Text_1:
# 220 "data/maps/TheRattway/scripts.pory"
	.string "Music is my passion! I only raise\n"
	.string "music-loving Pokémon.$"

CorrinCrossing_EventScript_DirectionSign_Text_0:
# 237 "data/maps/TheRattway/scripts.pory"
	.string "Corrin Crossing\n"
	.string "Connecting All of Ilios\p"
	.string "{UP_ARROW} Asfal Hills\n"
	.string "{DOWN_ARROW} Port Pello$"

CorrinCrossing_Text_Trainer_CorrinCrossing_WyattIntro::
# 82 "data/maps/TheRattway/scripts.pory"
	.string "Hold it right there!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_WyattDefeat::
# 86 "data/maps/TheRattway/scripts.pory"
	.string "Oops, sorry 'bout that.$"

CorrinCrossing_Text_Trainer_CorrinCrossing_JuniorIntro::
# 100 "data/maps/TheRattway/scripts.pory"
	.string "A bug!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_JuniorDefeat::
# 104 "data/maps/TheRattway/scripts.pory"
	.string "Aw, that battle really got away from me!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_VasiaIntro::
# 129 "data/maps/TheRattway/scripts.pory"
	.string "Yay! We can get south to Port Pello\n"
	.string "again!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_VasiaDefeat::
# 133 "data/maps/TheRattway/scripts.pory"
	.string "I need their Pokémon Center!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_AlfredIntro::
# 147 "data/maps/TheRattway/scripts.pory"
	.string "My Pokémon are tough as nails!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_AlfredDefeat::
# 151 "data/maps/TheRattway/scripts.pory"
	.string "I guess your Pokémon are even tougher.$"

CorrinCrossing_Text_Trainer_CorrinCrossing_DarceyIntro::
# 189 "data/maps/TheRattway/scripts.pory"
	.string "Check out these sinkholes! I can jump\n"
	.string "across them!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_DarceyDefeat::
# 193 "data/maps/TheRattway/scripts.pory"
	.string "I can still jump further than you!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_MaximIntro::
# 207 "data/maps/TheRattway/scripts.pory"
	.string "All the Items have to be mine!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_MaximDefeat::
# 211 "data/maps/TheRattway/scripts.pory"
	.string "No, my Items!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_OskarIntro::
# 225 "data/maps/TheRattway/scripts.pory"
	.string "Get ready to rock!$"

CorrinCrossing_Text_Trainer_CorrinCrossing_OskarDefeat::
# 229 "data/maps/TheRattway/scripts.pory"
	.string "Wo-oah, you rocked me!$"

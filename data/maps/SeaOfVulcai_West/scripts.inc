SeaOfVulcai_West_MapScripts::
# 2 "data/maps/SeaOfVulcai_West/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SeaOfVulcai_West_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

SeaOfVulcai_West_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SeaOfVulcai_West/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, SeaOfVulcai_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

SeaOfVulcai_West_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/SeaOfVulcai_West/scripts.pory"
	setweather WEATHER_ABNORMAL
	return


SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck::
# 12 "data/maps/SeaOfVulcai_West/scripts.pory"
	lock
# 13 "data/maps/SeaOfVulcai_West/scripts.pory"
	faceplayer
# 14 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_0
# 16 "data/maps/SeaOfVulcai_West/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_SEA_OF_VULCAI, SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_2
# 23 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_2
# 24 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 25 "data/maps/SeaOfVulcai_West/scripts.pory"
	special CheckRouteCaptureProgress
# 26 "data/maps/SeaOfVulcai_West/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_5
SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_1:
# 43 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end

SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_2:
# 18 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_1
# 19 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
	goto SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_1

SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_5:
# 28 "data/maps/SeaOfVulcai_West/scripts.pory"
	delay 20
# 29 "data/maps/SeaOfVulcai_West/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 30 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_0
# 31 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_3
# 32 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 33 "data/maps/SeaOfVulcai_West/scripts.pory"
	delay 5
# 36 "data/maps/SeaOfVulcai_West/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 37 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 39 "data/maps/SeaOfVulcai_West/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_SEA_OF_VULCAI
	goto SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_1


VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy::
# 49 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_FREDDY, VulcaiSea_Text_Trainer_VulcaiSea_FreddyIntro, VulcaiSea_Text_Trainer_VulcaiSea_FreddyDefeat
# 50 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_0
# 51 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_1
# 52 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 53 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina::
# 67 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_SABRINA, VulcaiSea_Text_Trainer_VulcaiSea_SabrinaIntro, VulcaiSea_Text_Trainer_VulcaiSea_SabrinaDefeat
# 68 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_0
# 69 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_1
# 70 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 71 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Sherry::
# 85 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_SHERRY, VulcaiSea_Text_Trainer_VulcaiSea_SherryIntro, VulcaiSea_Text_Trainer_VulcaiSea_SherryDefeat
# 86 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Sherry_Text_0
# 87 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Sherry_Text_1
# 88 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 89 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Lusio::
# 103 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_LUSIO, VulcaiSea_Text_Trainer_VulcaiSea_LusioIntro, VulcaiSea_Text_Trainer_VulcaiSea_LusioDefeat
# 104 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Lusio_Text_0
# 105 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Lusio_Text_1
# 106 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 107 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Mahya::
# 121 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_MAHYA, VulcaiSea_Text_Trainer_VulcaiSea_MahyaIntro, VulcaiSea_Text_Trainer_VulcaiSea_MahyaDefeat
# 122 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Mahya_Text_0
# 123 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Mahya_Text_1
# 124 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 125 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_0:
# 14 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Uni. Student$"

SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_1:
# 18 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_2:
# 23 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all\n"
	.string "Underwater Pokémon{COLOR DARK_GRAY} found in the Sea of\l"
	.string "Vulcai. If you've caught all the Pokémon\l"
	.string "here, please let me know.$"

SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_3:
# 31 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_0:
# 50 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Freddy$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_1:
# 51 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Looks like only reeds and small plants\n"
	.string "will grow around here. No room for a good\l"
	.string "farm.$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_0:
# 68 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Sabrina$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_1:
# 69 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "My Pokémon all have super strong\n"
	.string "fighting spirits! Don't you forget that!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sherry_Text_0:
# 86 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Sherry$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sherry_Text_1:
# 87 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "My Pokémon are super cute, even as they\n"
	.string "start to grow up!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Lusio_Text_0:
# 104 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Lusio$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Lusio_Text_1:
# 105 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "The volcanic activity around here\n"
	.string "heats up the water. It feels more like a\l"
	.string "warm bathtub than an ocean!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Mahya_Text_0:
# 122 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Mahya$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Mahya_Text_1:
# 123 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Lots of Pokémon only known from\n"
	.string "fossils are becoming Lazarus Taxa,\l"
	.string "coming back from the dead. They still\l"
	.string "haven't found some in nature, though.$"

VulcaiSea_Text_Trainer_VulcaiSea_FreddyIntro::
# 56 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Hmm... nope, no farms here!$"

VulcaiSea_Text_Trainer_VulcaiSea_FreddyDefeat::
# 60 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "So why am I out here again?$"

VulcaiSea_Text_Trainer_VulcaiSea_SabrinaIntro::
# 74 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Whoo-hoo! I'm all fired up for a fight!$"

VulcaiSea_Text_Trainer_VulcaiSea_SabrinaDefeat::
# 78 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "It's over already?!$"

VulcaiSea_Text_Trainer_VulcaiSea_SherryIntro::
# 92 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Ooo-hoho, I see an item over there!$"

VulcaiSea_Text_Trainer_VulcaiSea_SherryDefeat::
# 96 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "To the victor goes the spoils...$"

VulcaiSea_Text_Trainer_VulcaiSea_LusioIntro::
# 110 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "The water here is actually warm!$"

VulcaiSea_Text_Trainer_VulcaiSea_LusioDefeat::
# 114 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Even in warm water, I can't win.$"

VulcaiSea_Text_Trainer_VulcaiSea_MahyaIntro::
# 128 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Look at this Pokémon I revived from\n"
	.string "fossils!$"

VulcaiSea_Text_Trainer_VulcaiSea_MahyaDefeat::
# 132 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "No, my special Pokémon!$"

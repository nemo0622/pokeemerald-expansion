SeaOfVulcai_West_MapScripts::
	.byte 0


SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck::
# 5 "data/maps/SeaOfVulcai_West/scripts.pory"
	lock
# 6 "data/maps/SeaOfVulcai_West/scripts.pory"
	faceplayer
# 7 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_0
# 9 "data/maps/SeaOfVulcai_West/scripts.pory"
	goto_if_set FLAG_CAUGHT_ALL_MONS_SEA_OF_VULCAI, SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_2
# 16 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_2
# 17 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 18 "data/maps/SeaOfVulcai_West/scripts.pory"
	special CheckRouteCaptureProgress
# 19 "data/maps/SeaOfVulcai_West/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_5
SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_1:
# 36 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end

SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_2:
# 11 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_1
# 12 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
	goto SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_1

SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_5:
# 21 "data/maps/SeaOfVulcai_West/scripts.pory"
	delay 20
# 22 "data/maps/SeaOfVulcai_West/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 23 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_0
# 24 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_3
# 25 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 26 "data/maps/SeaOfVulcai_West/scripts.pory"
	delay 5
# 29 "data/maps/SeaOfVulcai_West/scripts.pory"
	giveitem ITEM_ASSAULT_VEST
# 30 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 32 "data/maps/SeaOfVulcai_West/scripts.pory"
	setflag FLAG_CAUGHT_ALL_MONS_SEA_OF_VULCAI
	goto SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_1


VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy::
# 42 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_FREDDY, VulcaiSea_Text_Trainer_VulcaiSea_FreddyIntro, VulcaiSea_Text_Trainer_VulcaiSea_FreddyDefeat
# 43 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_0
# 44 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_1
# 45 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 46 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina::
# 60 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_SABRINA, VulcaiSea_Text_Trainer_VulcaiSea_SabrinaIntro, VulcaiSea_Text_Trainer_VulcaiSea_SabrinaDefeat
# 61 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_0
# 62 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_1
# 63 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 64 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Sherry::
# 78 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_SHERRY, VulcaiSea_Text_Trainer_VulcaiSea_SherryIntro, VulcaiSea_Text_Trainer_VulcaiSea_SherryDefeat
# 79 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Sherry_Text_0
# 80 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Sherry_Text_1
# 81 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 82 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Lusio::
# 96 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_LUSIO, VulcaiSea_Text_Trainer_VulcaiSea_LusioIntro, VulcaiSea_Text_Trainer_VulcaiSea_LusioDefeat
# 97 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Lusio_Text_0
# 98 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Lusio_Text_1
# 99 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 100 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


VulcaiSea_EventScript_Trainer_VulcaiSea_Mahya::
# 114 "data/maps/SeaOfVulcai_West/scripts.pory"
	trainerbattle_single TRAINER_VULCAISEA_MAHYA, VulcaiSea_Text_Trainer_VulcaiSea_MahyaIntro, VulcaiSea_Text_Trainer_VulcaiSea_MahyaDefeat
# 115 "data/maps/SeaOfVulcai_West/scripts.pory"
	speakername VulcaiSea_EventScript_Trainer_VulcaiSea_Mahya_Text_0
# 116 "data/maps/SeaOfVulcai_West/scripts.pory"
	msgbox VulcaiSea_EventScript_Trainer_VulcaiSea_Mahya_Text_1
# 117 "data/maps/SeaOfVulcai_West/scripts.pory"
	closemessage
# 118 "data/maps/SeaOfVulcai_West/scripts.pory"
	release
	end


SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_0:
# 7 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Uni. Student$"

SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_1:
# 11 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Your Pokédex data is amazing! Now we\n"
	.string "know more about the local ecosystem,\l"
	.string "thanks to you.$"

SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_2:
# 16 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Chaire! I'm a student from the Acrisia\n"
	.string "University.\p"
	.string "I'm looking for {COLOR GREEN}Pokédex data{COLOR DARK_GRAY} of {COLOR GREEN}all\n"
	.string "Underwater Pokémon{COLOR DARK_GRAY} found in the Sea of\l"
	.string "Vulcai. If you've caught all the Pokémon\l"
	.string "here, please let me know.$"

SeaOfVulcai_West_EventScript_UniversityStudentRouteCheck_Text_3:
# 24 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Incredible! You've caught all the\n"
	.string "Pokémon that I requested in the area!\p"
	.string "Here's a reward from the University.\n"
	.string "Keep up your hard work!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_0:
# 43 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Freddy$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Freddy_Text_1:
# 44 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Looks like only reeds and small plants\n"
	.string "will grow around here. No room for a good\l"
	.string "farm.$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_0:
# 61 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Sabrina$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sabrina_Text_1:
# 62 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "My Pokémon all have super strong\n"
	.string "fighting spirits! Don't you forget that!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sherry_Text_0:
# 79 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Sherry$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Sherry_Text_1:
# 80 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "My Pokémon are super cute, even as they\n"
	.string "start to grow up!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Lusio_Text_0:
# 97 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Lusio$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Lusio_Text_1:
# 98 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "The volcanic activity around here\n"
	.string "heats up the water. It feels more like a\l"
	.string "warm bathtub than an ocean!$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Mahya_Text_0:
# 115 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Mahya$"

VulcaiSea_EventScript_Trainer_VulcaiSea_Mahya_Text_1:
# 116 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Lots of Pokémon only known from\n"
	.string "fossils are becoming Lazarus Taxa,\l"
	.string "coming back from the dead. They still\l"
	.string "haven't found some in nature, though.$"

VulcaiSea_Text_Trainer_VulcaiSea_FreddyIntro::
# 49 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Hmm... nope, no farms here!$"

VulcaiSea_Text_Trainer_VulcaiSea_FreddyDefeat::
# 53 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "So why am I out here again?$"

VulcaiSea_Text_Trainer_VulcaiSea_SabrinaIntro::
# 67 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Whoo-hoo! I'm all fired up for a fight!$"

VulcaiSea_Text_Trainer_VulcaiSea_SabrinaDefeat::
# 71 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "It's over already?!$"

VulcaiSea_Text_Trainer_VulcaiSea_SherryIntro::
# 85 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Ooo-hoho, I see an item over there!$"

VulcaiSea_Text_Trainer_VulcaiSea_SherryDefeat::
# 89 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "To the victor goes the spoils...$"

VulcaiSea_Text_Trainer_VulcaiSea_LusioIntro::
# 103 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "The water here is actually warm!$"

VulcaiSea_Text_Trainer_VulcaiSea_LusioDefeat::
# 107 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Even in warm water, I can't win.$"

VulcaiSea_Text_Trainer_VulcaiSea_MahyaIntro::
# 121 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "Look at this Pokémon I revived from\n"
	.string "fossils!$"

VulcaiSea_Text_Trainer_VulcaiSea_MahyaDefeat::
# 125 "data/maps/SeaOfVulcai_West/scripts.pory"
	.string "No, my special Pokémon!$"

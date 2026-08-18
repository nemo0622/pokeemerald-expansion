IkiTown_HalaHouse_MapScripts::
	.byte 0


IkiTown_HalaHouse_Rowlet::
# 5 "data//maps/IkiTown_HalaHouse/scripts.pory"
	lock
# 6 "data//maps/IkiTown_HalaHouse/scripts.pory"
	faceplayer
# 7 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setspeaker IkiTown_HalaHouse_Rowlet_Text_0
# 8 "data//maps/IkiTown_HalaHouse/scripts.pory"
	playmoncry SPECIES_ROWLET, CRY_MODE_NORMAL
# 9 "data//maps/IkiTown_HalaHouse/scripts.pory"
	msgbox IkiTown_HalaHouse_Rowlet_Text_1
# 10 "data//maps/IkiTown_HalaHouse/scripts.pory"
	waitmoncry
# 11 "data//maps/IkiTown_HalaHouse/scripts.pory"
	closemessage
# 12 "data//maps/IkiTown_HalaHouse/scripts.pory"
	release
	end


IkiTown_HalaHouse_Litten::
# 18 "data//maps/IkiTown_HalaHouse/scripts.pory"
	lock
# 19 "data//maps/IkiTown_HalaHouse/scripts.pory"
	faceplayer
# 20 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setspeaker IkiTown_HalaHouse_Litten_Text_0
# 21 "data//maps/IkiTown_HalaHouse/scripts.pory"
	playmoncry SPECIES_LITTEN, CRY_MODE_NORMAL
# 22 "data//maps/IkiTown_HalaHouse/scripts.pory"
	msgbox IkiTown_HalaHouse_Litten_Text_1
# 23 "data//maps/IkiTown_HalaHouse/scripts.pory"
	waitmoncry
# 24 "data//maps/IkiTown_HalaHouse/scripts.pory"
	closemessage
# 25 "data//maps/IkiTown_HalaHouse/scripts.pory"
	release
	end


IkiTown_HalaHouse_Popplio::
# 31 "data//maps/IkiTown_HalaHouse/scripts.pory"
	lock
# 32 "data//maps/IkiTown_HalaHouse/scripts.pory"
	faceplayer
# 33 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setspeaker IkiTown_HalaHouse_Popplio_Text_0
# 34 "data//maps/IkiTown_HalaHouse/scripts.pory"
	playmoncry SPECIES_POPPLIO, CRY_MODE_NORMAL
# 35 "data//maps/IkiTown_HalaHouse/scripts.pory"
	msgbox IkiTown_HalaHouse_Popplio_Text_1
# 36 "data//maps/IkiTown_HalaHouse/scripts.pory"
	waitmoncry
# 37 "data//maps/IkiTown_HalaHouse/scripts.pory"
	closemessage
# 38 "data//maps/IkiTown_HalaHouse/scripts.pory"
	release
	end


IkiTown_HalaHouse_Hau::
# 44 "data//maps/IkiTown_HalaHouse/scripts.pory"
	lock
# 45 "data//maps/IkiTown_HalaHouse/scripts.pory"
	faceplayer
# 46 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setspeaker IkiTown_HalaHouse_Hau_Text_0
# 47 "data//maps/IkiTown_HalaHouse/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 48 "data//maps/IkiTown_HalaHouse/scripts.pory"
	msgbox IkiTown_HalaHouse_Hau_Text_1
# 49 "data//maps/IkiTown_HalaHouse/scripts.pory"
	closemessage
# 50 "data//maps/IkiTown_HalaHouse/scripts.pory"
	giveitem ITEM_QUICK_BALL, 5
# 51 "data//maps/IkiTown_HalaHouse/scripts.pory"
	closemessage
# 52 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setspeaker IkiTown_HalaHouse_Hau_Text_0
# 53 "data//maps/IkiTown_HalaHouse/scripts.pory"
	createfieldmugshot MUGSHOT_HAU
# 54 "data//maps/IkiTown_HalaHouse/scripts.pory"
	msgbox IkiTown_HalaHouse_Hau_Text_2
# 55 "data//maps/IkiTown_HalaHouse/scripts.pory"
	closemessage
# 57 "data//maps/IkiTown_HalaHouse/scripts.pory"
	delay 10
# 58 "data//maps/IkiTown_HalaHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data//maps/IkiTown_HalaHouse/scripts.pory"
	delay 30
# 60 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setflag FLAG_HIDE_HAU_HALAS_HOME
# 61 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setflag FLAG_HIDE_HAUS_ROWLET_HALAS_HOME
# 62 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setflag FLAG_HIDE_HAUS_LITTEN_HALAS_HOME
# 63 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setflag FLAG_HIDE_HAUS_POPPLIO_HALAS_HOME
# 64 "data//maps/IkiTown_HalaHouse/scripts.pory"
	removeobject 2
# 65 "data//maps/IkiTown_HalaHouse/scripts.pory"
	removeobject 3
# 66 "data//maps/IkiTown_HalaHouse/scripts.pory"
	removeobject 7
# 67 "data//maps/IkiTown_HalaHouse/scripts.pory"
	removeobject 8
# 68 "data//maps/IkiTown_HalaHouse/scripts.pory"
	delay 30
# 69 "data//maps/IkiTown_HalaHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 70 "data//maps/IkiTown_HalaHouse/scripts.pory"
	delay 10
# 71 "data//maps/IkiTown_HalaHouse/scripts.pory"
	release
	end


IkiTown_HalaHouse_Crabrawler::
# 77 "data//maps/IkiTown_HalaHouse/scripts.pory"
	lock
# 78 "data//maps/IkiTown_HalaHouse/scripts.pory"
	faceplayer
# 79 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setspeaker IkiTown_HalaHouse_Crabrawler_Text_0
# 80 "data//maps/IkiTown_HalaHouse/scripts.pory"
	playmoncry SPECIES_CRABRAWLER, CRY_MODE_NORMAL
# 81 "data//maps/IkiTown_HalaHouse/scripts.pory"
	msgbox IkiTown_HalaHouse_Crabrawler_Text_1
# 82 "data//maps/IkiTown_HalaHouse/scripts.pory"
	waitmoncry
# 83 "data//maps/IkiTown_HalaHouse/scripts.pory"
	closemessage
# 84 "data//maps/IkiTown_HalaHouse/scripts.pory"
	release
	end


IkiTown_HalaHouse_Crabominable::
# 90 "data//maps/IkiTown_HalaHouse/scripts.pory"
	lock
# 91 "data//maps/IkiTown_HalaHouse/scripts.pory"
	faceplayer
# 92 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setspeaker IkiTown_HalaHouse_Crabominable_Text_0
# 93 "data//maps/IkiTown_HalaHouse/scripts.pory"
	playmoncry SPECIES_CRABOMINABLE, CRY_MODE_NORMAL
# 94 "data//maps/IkiTown_HalaHouse/scripts.pory"
	msgbox IkiTown_HalaHouse_Crabominable_Text_1
# 95 "data//maps/IkiTown_HalaHouse/scripts.pory"
	waitmoncry
# 96 "data//maps/IkiTown_HalaHouse/scripts.pory"
	closemessage
# 97 "data//maps/IkiTown_HalaHouse/scripts.pory"
	release
	end


IkiTown_HalaHouse_HalaNiece::
# 103 "data//maps/IkiTown_HalaHouse/scripts.pory"
	lock
# 104 "data//maps/IkiTown_HalaHouse/scripts.pory"
	faceplayer
# 105 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setspeaker IkiTown_HalaHouse_HalaNiece_Text_0
# 106 "data//maps/IkiTown_HalaHouse/scripts.pory"
	msgbox IkiTown_HalaHouse_HalaNiece_Text_1
# 107 "data//maps/IkiTown_HalaHouse/scripts.pory"
	closemessage
# 108 "data//maps/IkiTown_HalaHouse/scripts.pory"
	release
	end


IkiTown_HalaHouse_Hala::
# 114 "data//maps/IkiTown_HalaHouse/scripts.pory"
	lock
# 115 "data//maps/IkiTown_HalaHouse/scripts.pory"
	faceplayer
# 116 "data//maps/IkiTown_HalaHouse/scripts.pory"
	setspeaker IkiTown_HalaHouse_Hala_Text_0
# 117 "data//maps/IkiTown_HalaHouse/scripts.pory"
	createfieldmugshot MUGSHOT_HALA
# 118 "data//maps/IkiTown_HalaHouse/scripts.pory"
	msgbox IkiTown_HalaHouse_Hala_Text_1
# 119 "data//maps/IkiTown_HalaHouse/scripts.pory"
	closemessage
# 120 "data//maps/IkiTown_HalaHouse/scripts.pory"
	release
	end


IkiTown_HalaHouse_Rowlet_Text_0:
# 7 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Rowlet$"

IkiTown_HalaHouse_Rowlet_Text_1:
# 9 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Koo, hoo...!$"

IkiTown_HalaHouse_Litten_Text_0:
# 20 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Litten$"

IkiTown_HalaHouse_Litten_Text_1:
# 22 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Brow?$"

IkiTown_HalaHouse_Popplio_Text_0:
# 33 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Popplio$"

IkiTown_HalaHouse_Popplio_Text_1:
# 35 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Bwark!$"

IkiTown_HalaHouse_Hau_Text_0:
# 46 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Hau$"

IkiTown_HalaHouse_Hau_Text_1:
# 48 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Alola! You came by!\p"
	.string "This is Hala's house, but I've been\n"
	.string "living with him for years.\p"
	.string "I learned so much from our battle\n"
	.string "during the Manalo Festival... I gotta\l"
	.string "give you somethin' in return!$"

IkiTown_HalaHouse_Hau_Text_2:
# 54 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Quick Balls are best at catching\n"
	.string "Pokémon when you first start a battle.\l"
	.string "Perfect for picking up new Pokémon,\l"
	.string "yeah?\p"
	.string "Awrite, I'm gonna head towards {COLOR GREEN}Hau'oli\n"
	.string "City{COLOR DARK_GRAY}! You should come by after talking\l"
	.string "with Kukui!$"

IkiTown_HalaHouse_Crabrawler_Text_0:
# 79 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Crabrawler$"

IkiTown_HalaHouse_Crabrawler_Text_1:
# 81 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Chk kch!$"

IkiTown_HalaHouse_Crabominable_Text_0:
# 92 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Crabominable$"

IkiTown_HalaHouse_Crabominable_Text_1:
# 94 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Bwaargh!$"

IkiTown_HalaHouse_HalaNiece_Text_0:
# 105 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Swimmer$"

IkiTown_HalaHouse_HalaNiece_Text_1:
# 106 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "I'm Hala's niece! We've lived on Melemele\n"
	.string "Island for generations.$"

IkiTown_HalaHouse_Hala_Text_0:
# 116 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "Hala$"

IkiTown_HalaHouse_Hala_Text_1:
# 118 "data//maps/IkiTown_HalaHouse/scripts.pory"
	.string "{PLAYER}! Welcome in!\p"
	.string "I can see why {COLOR BLUE}Tapu Koko{COLOR DARK_GRAY} revealed itself\n"
	.string "to you. With your {COLOR GREEN}Z-Power Ring{COLOR DARK_GRAY}, you\l"
	.string "should be able to progress through the\l"
	.string "Island Challenge just fine!$"

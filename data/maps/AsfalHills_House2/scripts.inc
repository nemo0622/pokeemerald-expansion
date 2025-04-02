AsfalHills_House2_MapScripts::
	.byte 0


AsfalHills_House2_BlackBelt::
# 5 "data/maps/AsfalHills_House2/scripts.pory"
	lock
# 6 "data/maps/AsfalHills_House2/scripts.pory"
	faceplayer
# 7 "data/maps/AsfalHills_House2/scripts.pory"
	speakername AsfalHills_House2_BlackBelt_Text_0
# 8 "data/maps/AsfalHills_House2/scripts.pory"
	msgbox AsfalHills_House2_BlackBelt_Text_1
# 9 "data/maps/AsfalHills_House2/scripts.pory"
	closemessage
# 10 "data/maps/AsfalHills_House2/scripts.pory"
	release
	end


AsfalHills_House2_Scientist::
# 16 "data/maps/AsfalHills_House2/scripts.pory"
	lock
# 17 "data/maps/AsfalHills_House2/scripts.pory"
	faceplayer
# 18 "data/maps/AsfalHills_House2/scripts.pory"
	speakername AsfalHills_House2_Scientist_Text_0
# 19 "data/maps/AsfalHills_House2/scripts.pory"
	msgbox AsfalHills_House2_Scientist_Text_1
# 20 "data/maps/AsfalHills_House2/scripts.pory"
	closemessage
# 21 "data/maps/AsfalHills_House2/scripts.pory"
	release
	end


AsfalHills_House2_Girl::
# 27 "data/maps/AsfalHills_House2/scripts.pory"
	lock
# 28 "data/maps/AsfalHills_House2/scripts.pory"
	faceplayer
# 29 "data/maps/AsfalHills_House2/scripts.pory"
	speakername AsfalHills_House2_Girl_Text_0
# 30 "data/maps/AsfalHills_House2/scripts.pory"
	goto_if_set FLAG_GOT_YELLOW_NECTAR_ASFAL_HOUSE, AsfalHills_House2_Girl_2
# 37 "data/maps/AsfalHills_House2/scripts.pory"
	msgbox AsfalHills_House2_Girl_Text_2
# 38 "data/maps/AsfalHills_House2/scripts.pory"
	closemessage
# 39 "data/maps/AsfalHills_House2/scripts.pory"
	giveitem ITEM_YELLOW_NECTAR
# 40 "data/maps/AsfalHills_House2/scripts.pory"
	setflag FLAG_GOT_YELLOW_NECTAR_ASFAL_HOUSE
AsfalHills_House2_Girl_1:
# 42 "data/maps/AsfalHills_House2/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 43 "data/maps/AsfalHills_House2/scripts.pory"
	waitmovement 0
# 44 "data/maps/AsfalHills_House2/scripts.pory"
	release
	end

AsfalHills_House2_Girl_2:
# 32 "data/maps/AsfalHills_House2/scripts.pory"
	msgbox AsfalHills_House2_Girl_Text_1
# 33 "data/maps/AsfalHills_House2/scripts.pory"
	closemessage
	goto AsfalHills_House2_Girl_1


AsfalHills_House2_Boy::
# 50 "data/maps/AsfalHills_House2/scripts.pory"
	lock
# 51 "data/maps/AsfalHills_House2/scripts.pory"
	faceplayer
# 52 "data/maps/AsfalHills_House2/scripts.pory"
	speakername AsfalHills_House2_Boy_Text_0
# 53 "data/maps/AsfalHills_House2/scripts.pory"
	goto_if_set FLAG_GOT_PINK_NECTAR_ASFAL_HOUSE, AsfalHills_House2_Boy_2
# 60 "data/maps/AsfalHills_House2/scripts.pory"
	msgbox AsfalHills_House2_Boy_Text_2
# 61 "data/maps/AsfalHills_House2/scripts.pory"
	closemessage
# 62 "data/maps/AsfalHills_House2/scripts.pory"
	giveitem ITEM_PINK_NECTAR
# 63 "data/maps/AsfalHills_House2/scripts.pory"
	setflag FLAG_GOT_PINK_NECTAR_ASFAL_HOUSE
AsfalHills_House2_Boy_1:
# 65 "data/maps/AsfalHills_House2/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 66 "data/maps/AsfalHills_House2/scripts.pory"
	waitmovement 0
# 67 "data/maps/AsfalHills_House2/scripts.pory"
	release
	end

AsfalHills_House2_Boy_2:
# 55 "data/maps/AsfalHills_House2/scripts.pory"
	msgbox AsfalHills_House2_Boy_Text_1
# 56 "data/maps/AsfalHills_House2/scripts.pory"
	closemessage
	goto AsfalHills_House2_Boy_1


AsfalHills_House2_BlackBelt_Text_0:
# 7 "data/maps/AsfalHills_House2/scripts.pory"
	.string "Black Belt$"

AsfalHills_House2_BlackBelt_Text_1:
# 8 "data/maps/AsfalHills_House2/scripts.pory"
	.string "I come here to read after I finish my\n"
	.string "daily training session. It helps me calm\l"
	.string "down.$"

AsfalHills_House2_Scientist_Text_0:
# 18 "data/maps/AsfalHills_House2/scripts.pory"
	.string "Scientist$"

AsfalHills_House2_Scientist_Text_1:
# 19 "data/maps/AsfalHills_House2/scripts.pory"
	.string "Books about Pokémon types, evolution\n"
	.string "methods, and movesets... but not much\l"
	.string "on their ecology. There are still so\l"
	.string "many gaps in our knowledge.$"

AsfalHills_House2_Girl_Text_0:
# 29 "data/maps/AsfalHills_House2/scripts.pory"
	.string "Girl$"

AsfalHills_House2_Girl_Text_1:
# 32 "data/maps/AsfalHills_House2/scripts.pory"
	.string "I think that Yellow Nectar is special\n"
	.string "somehow. It made my hair stand up from\l"
	.string "static electricity!$"

AsfalHills_House2_Girl_Text_2:
# 37 "data/maps/AsfalHills_House2/scripts.pory"
	.string "We just got back from a picnic date! I\n"
	.string "found this while we were out. I got a\l"
	.string "bunch of it, so here's a bit for you!$"

AsfalHills_House2_Boy_Text_0:
# 52 "data/maps/AsfalHills_House2/scripts.pory"
	.string "Boy$"

AsfalHills_House2_Boy_Text_1:
# 55 "data/maps/AsfalHills_House2/scripts.pory"
	.string "I swear, that Pink Nectar is something\n"
	.string "special! It had a weird aura around it...\l"
	.string "or maybe I just have allergies, ehehe.$"

AsfalHills_House2_Boy_Text_2:
# 60 "data/maps/AsfalHills_House2/scripts.pory"
	.string "It's so nice having a public library open\n"
	.string "for everyone like this. My girlfriend\l"
	.string "found some of this nectar while we were\l"
	.string "out, so we're reading about what it\l"
	.string "might be. Maybe you can figure it out!$"

HauoliOutskirts_PlayersRoom_MapScripts::
# 2 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, HauoliOutskirts_PlayersRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

HauoliOutskirts_PlayersRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	map_script_2 VAR_INTRO_STATE, 1, HauoliOutskirts_PlayersHouse_IntroEvent
	.2byte 0


HauoliOutskirts_PlayersHouse_IntroEvent::
# 9 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setvar VAR_INTRO_STATE, 2
# 11 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lockall
# 12 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	delay 20
# 13 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	emote LOCALID_MOM, EMOTE_EXCLAM
# 14 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_MomApproachPlayersRoom
# 15 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 17 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 18 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_IntroEvent_Text_1
# 19 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 23 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	applymovement LOCALID_MOM, HauoliOutskirts_PlayersHouse_MomReturnToChair
# 24 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmovement 0
# 26 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	releaseall
	end


# 29 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_MomApproachPlayersRoom:
# 31 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 32 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 32 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 32 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_right
# 33 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_up
# 34 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_up
# 35 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

# 37 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
HauoliOutskirts_PlayersHouse_MomReturnToChair:
# 39 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 40 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 40 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 40 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_left
# 41 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	walk_down
# 42 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	face_left
# 43 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	step_end

HauoliOutskirts_PlayersHouse_Script_Mom::
# 48 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 49 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	faceplayer
# 50 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_IntroEvent_Text_0
# 51 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Mom_Text_0
# 52 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 53 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Script_Meowth::
# 59 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 60 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	faceplayer
# 61 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Script_Meowth_Text_0
# 62 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 63 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Script_Meowth_Text_1
# 64 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	waitmoncry
# 65 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 66 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Sign_TV::
# 74 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 75 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_TV_Text_0
# 76 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 77 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end


HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl::
# 83 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 84 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_0
# 85 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 86 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	goto_if_unset FLAG_GOT_AMULET_COIN_HAUOLI, HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_2
HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_1:
# 96 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_2:
# 88 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setflag FLAG_GOT_AMULET_COIN_HAUOLI
# 89 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_1
# 90 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 91 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 92 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_2
# 94 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
	goto HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_1


HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal::
# 102 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	lock
# 103 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_0, MSGBOX_YESNO
# 104 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_2
HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_1:
# 109 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	closemessage
# 110 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	release
	end

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_2:
# 106 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	setspeaker HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_1
# 107 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	msgbox HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_2
	goto HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_1


HauoliOutskirts_PlayersHouse_IntroEvent_Text_0:
# 17 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom$"

HauoliOutskirts_PlayersHouse_IntroEvent_Text_1:
# 18 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Ehehe, sorry about Meowth, {PLAYER}!\n"
	.string "She's been bouncing around the house\l"
	.string "like a Hoppip in a hurricane.\p"
	.string "Looks like you finished your video call\n"
	.string "with Professor Burnet! You should go\l"
	.string "out and {COLOR GREEN}talk to your Grandpa Samson{COLOR DARK_GRAY}\l"
	.string "before you meet with the professors.\l"
	.string "He's just north of here in {COLOR GREEN}Iki Town{COLOR DARK_GRAY}. Try\l"
	.string "to stay out of the tall grass!$"

HauoliOutskirts_PlayersHouse_Script_Mom_Text_0:
# 51 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Alola {PLAYER}! It's nice to be back in\n"
	.string "our home region, yeah?$"

HauoliOutskirts_PlayersHouse_Script_Meowth_Text_0:
# 61 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom's Meowth$"

HauoliOutskirts_PlayersHouse_Script_Meowth_Text_1:
# 63 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Breowww!!$"

HauoliOutskirts_PlayersHouse_Sign_TV_Text_0:
# 75 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom has a sitcom on from when she was a\n"
	.string "teen. Nostalgia is a powerful thing!$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_0:
# 84 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It's Meowth's food bowl.$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_1:
# 89 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Hm? There's something in the bowl.$"

HauoliOutskirts_PlayersHouse_Sign_MeowthsFoodBowl_Text_2:
# 93 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Mom is spoiling Meowth too much!$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_0:
# 103 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "It's Grandpa Samson's field journal!\n"
	.string "Read it?$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_1:
# 106 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "Samson Oak$"

HauoliOutskirts_PlayersHouse_Sign_SamsonsJournal_Text_2:
# 107 "data//maps/HauoliOutskirts_PlayersRoom/scripts.pory"
	.string "{COLOR GREEN}Lurantis{COLOR DARK_GRAY} is a beautiful Pokémon with\n"
	.string "sickle-sharp petals able to cut\l"
	.string "straight through trees. They've\l"
	.string "evolved to blend in with the bright\l"
	.string "flowers of Alola, luring in prey with\l"
	.string "hypnotic swaying and colors before\l"
	.string "striking.\p"
	.string "There are rumors of a {COLOR RED}super-powerful\n"
	.string "Lurantis{COLOR DARK_GRAY} lurking deep in the forests of\l"
	.string "Akala Island. Is this a folktale, or\l"
	.string "could this be a real {COLOR GREEN}Totem Pokémon{COLOR DARK_GRAY}?$"

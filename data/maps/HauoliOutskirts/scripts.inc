HauoliOutskirts_MapScripts::
	.byte 0


HauoliOutskirts_Trigger_SightseerMBlocksWest::
# 8 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 9 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, Common_Movement_FaceLeft
# 10 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 11 "data//maps/HauoliOutskirts/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 12 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceRight
# 13 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 15 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_0
# 16 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 17 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0
# 18 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_1
# 19 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 20 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 22 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_1
# 23 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 24 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Trigger_SightseerMBlockSouth::
# 30 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 31 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 32 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 33 "data//maps/HauoliOutskirts/scripts.pory"
	emote 4, EMOTE_EXCLAM
# 34 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_FaceUp
# 35 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 37 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement 4, HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_0
# 38 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 39 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0
# 40 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Trigger_SightseerMBlockSouth_Text_0
# 41 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 42 "data//maps/HauoliOutskirts/scripts.pory"
	delay 10
# 44 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement LOCALID_PLAYER, HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_1
# 45 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 46 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_SamsonOak::
# 54 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 55 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 56 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_SamsonOak_Text_0
# 59 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_SamsonOak_Text_1
# 61 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 62 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_SightseerM::
# 68 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 69 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 70 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_SightseerM_Text_0
# 72 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 73 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_LassOnLedge::
# 79 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 80 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_LassOnLedge_Text_0
# 82 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_LassOnLedge_Text_1
# 83 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 84 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_YoungsterWithLechonk::
# 90 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 91 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 92 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_YoungsterWithLechonk_Text_0
# 93 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_YoungsterWithLechonk_Text_1
# 94 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 95 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceDown
# 96 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 97 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_Lechonk::
# 103 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 104 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 105 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_Lechonk_Text_0
# 106 "data//maps/HauoliOutskirts/scripts.pory"
	playmoncry SPECIES_LECHONK, CRY_MODE_NORMAL
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_Lechonk_Text_1
# 108 "data//maps/HauoliOutskirts/scripts.pory"
	waitmoncry
# 109 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 110 "data//maps/HauoliOutskirts/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceUp
# 111 "data//maps/HauoliOutskirts/scripts.pory"
	waitmovement 0
# 112 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Sign_HouseSign::
# 120 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 121 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Sign_HouseSign_Text_0
# 122 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 123 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


# 15 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_0:
# 15 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_left
# 15 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_left
# 15 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 22 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlocksWest_Movement_1:
# 22 "data//maps/HauoliOutskirts/scripts.pory"
	walk_right
# 22 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 37 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_0:
# 37 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_down
# 37 "data//maps/HauoliOutskirts/scripts.pory"
	walk_in_place_down
# 37 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

# 44 "data//maps/HauoliOutskirts/scripts.pory"
HauoliOutskirts_Trigger_SightseerMBlockSouth_Movement_1:
# 44 "data//maps/HauoliOutskirts/scripts.pory"
	walk_up
# 44 "data//maps/HauoliOutskirts/scripts.pory"
	step_end

HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_0:
# 17 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Sightseer$"

HauoliOutskirts_Trigger_SightseerMBlocksWest_Text_1:
# 18 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Hey- er, Alola! This way leads to Hau'oli\n"
	.string "City, past the Alola Leo Pokémon School.\p"
	.string "There are some wild Pokémon running\n"
	.string "loose outside the school. I wouldn't go\l"
	.string "unless I had some stronger Pokémon\l"
	.string "with me... That's why I'm waiting for my\l"
	.string "fiancée to come back!$"

HauoliOutskirts_Trigger_SightseerMBlockSouth_Text_0:
# 40 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Hey- er, Alola! That way leads to\n"
	.string "Professor Kukui's Lab and Ten Carat\l"
	.string "Hill.\p"
	.string "I saw some wild Pokémon in that grass. I\n"
	.string "wouldn't go unless I had some stronger\l"
	.string "Pokémon with me... That's why I'm waiting\l"
	.string "for my fiancée to come back!$"

HauoliOutskirts_Script_SamsonOak_Text_0:
# 56 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Grandpa Samson$"

HauoliOutskirts_Script_SamsonOak_Text_1:
# 59 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Alola, {PLAYER}! How's your Pokémon\n"
	.string "doing?\p"
	.string "I hope you're settling into the Alola\n"
	.string "Region. I know it's quite different than\l"
	.string "Kanto, but give it a chance.$"

HauoliOutskirts_Script_SightseerM_Text_0:
# 71 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I finally made it to Alola! My fiancée\n"
	.string "and I are staying in Hau'oli City.\p"
	.string "She wants to explore the tall grass, but\n"
	.string "I don't have any Pokémon... I think I'll\l"
	.string "just stay here.$"

HauoliOutskirts_Script_LassOnLedge_Text_0:
# 81 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Lass$"

HauoliOutskirts_Script_LassOnLedge_Text_1:
# 82 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Are you Samson Oak's grandkid? I heard\n"
	.string "his family just moved back here after\l"
	.string "spending years in Kanto!$"

HauoliOutskirts_Script_YoungsterWithLechonk_Text_0:
# 92 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Youngster$"

HauoliOutskirts_Script_YoungsterWithLechonk_Text_1:
# 93 "data//maps/HauoliOutskirts/scripts.pory"
	.string "I'm training my Lechonk to grow up real\n"
	.string "strong! No one messes with a big pig!$"

HauoliOutskirts_Script_Lechonk_Text_0:
# 105 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Lechonk$"

HauoliOutskirts_Script_Lechonk_Text_1:
# 107 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Snort!$"

HauoliOutskirts_Sign_HouseSign_Text_0:
# 121 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Oak Family Home$"

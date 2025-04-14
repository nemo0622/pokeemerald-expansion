KiposTown_MapScripts::
# 2 "data/maps/KiposTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, KiposTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

KiposTown_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/KiposTown/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, KiposTown_EventScript_CheckEventStatus
	.2byte 0


KiposTown_EventScript_CheckEventStatus::
# 9 "data/maps/KiposTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 11 "data/maps/KiposTown/scripts.pory"
	goto_if_unset FLAG_DID_PIRAEUS_SAIL_TO_KIPOS_TOWN_EVENT, KiposTown_EventScript_CheckEventStatus_2
KiposTown_EventScript_CheckEventStatus_1:
# 16 "data/maps/KiposTown/scripts.pory"
	releaseall
	end

KiposTown_EventScript_CheckEventStatus_2:
# 13 "data/maps/KiposTown/scripts.pory"
	goto KiposTown_EventScript_LeadPlayerToConservationCenter
	goto KiposTown_EventScript_CheckEventStatus_1


KiposTown_EventScript_LeadPlayerToConservationCenter::
# 22 "data/maps/KiposTown/scripts.pory"
	lockall
# 24 "data/maps/KiposTown/scripts.pory"
	delay 20
# 25 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 26 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselApproachPlayer
# 27 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 29 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 30 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_1
# 31 "data/maps/KiposTown/scripts.pory"
	closemessage
# 33 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselWalksToConservationCenter_1
# 34 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_Movement_PlayerFollowsToConservationCenter_1
# 35 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 36 "data/maps/KiposTown/scripts.pory"
	delay 10
# 38 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 39 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_2
# 40 "data/maps/KiposTown/scripts.pory"
	closemessage
# 42 "data/maps/KiposTown/scripts.pory"
	applymovement 3, KiposTown_Movement_RusselWalksToConservationCenter_2
# 43 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, KiposTown_Movement_PlayerFollowsToConservationCenter_2
# 44 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 45 "data/maps/KiposTown/scripts.pory"
	delay 10
# 47 "data/maps/KiposTown/scripts.pory"
	speakername KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0
# 48 "data/maps/KiposTown/scripts.pory"
	msgbox KiposTown_EventScript_LeadPlayerToConservationCenter_Text_3
# 49 "data/maps/KiposTown/scripts.pory"
	closemessage
# 51 "data/maps/KiposTown/scripts.pory"
	applymovement 3, Common_Movement_WalkUp
# 52 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 53 "data/maps/KiposTown/scripts.pory"
	hideobjectat 3, MAP_KIPOS_TOWN
# 54 "data/maps/KiposTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp2
# 55 "data/maps/KiposTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/KiposTown/scripts.pory"
	warpsilent MAP_KIPOS_TOWN_CONSERVATION_CENTER, 9, 11
# 58 "data/maps/KiposTown/scripts.pory"
	waitstate
# 59 "data/maps/KiposTown/scripts.pory"
	releaseall
	end


# 63 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselApproachPlayer:
# 65 "data/maps/KiposTown/scripts.pory"
	emote_exclamation_mark
# 66 "data/maps/KiposTown/scripts.pory"
	delay_16
# 67 "data/maps/KiposTown/scripts.pory"
	walk_right
# 67 "data/maps/KiposTown/scripts.pory"
	walk_right
# 67 "data/maps/KiposTown/scripts.pory"
	walk_right
# 67 "data/maps/KiposTown/scripts.pory"
	walk_right
# 68 "data/maps/KiposTown/scripts.pory"
	face_down
# 69 "data/maps/KiposTown/scripts.pory"
	step_end

# 71 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselWalksToConservationCenter_1:
# 73 "data/maps/KiposTown/scripts.pory"
	walk_left
# 73 "data/maps/KiposTown/scripts.pory"
	walk_left
# 73 "data/maps/KiposTown/scripts.pory"
	walk_left
# 73 "data/maps/KiposTown/scripts.pory"
	walk_left
# 73 "data/maps/KiposTown/scripts.pory"
	walk_left
# 74 "data/maps/KiposTown/scripts.pory"
	walk_up
# 74 "data/maps/KiposTown/scripts.pory"
	walk_up
# 75 "data/maps/KiposTown/scripts.pory"
	walk_left
# 75 "data/maps/KiposTown/scripts.pory"
	walk_left
# 75 "data/maps/KiposTown/scripts.pory"
	walk_left
# 75 "data/maps/KiposTown/scripts.pory"
	walk_left
# 75 "data/maps/KiposTown/scripts.pory"
	walk_left
# 75 "data/maps/KiposTown/scripts.pory"
	walk_left
# 75 "data/maps/KiposTown/scripts.pory"
	walk_left
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 76 "data/maps/KiposTown/scripts.pory"
	walk_down
# 77 "data/maps/KiposTown/scripts.pory"
	face_up
# 78 "data/maps/KiposTown/scripts.pory"
	step_end

# 80 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_PlayerFollowsToConservationCenter_1:
# 82 "data/maps/KiposTown/scripts.pory"
	walk_up
# 83 "data/maps/KiposTown/scripts.pory"
	walk_left
# 83 "data/maps/KiposTown/scripts.pory"
	walk_left
# 83 "data/maps/KiposTown/scripts.pory"
	walk_left
# 83 "data/maps/KiposTown/scripts.pory"
	walk_left
# 83 "data/maps/KiposTown/scripts.pory"
	walk_left
# 84 "data/maps/KiposTown/scripts.pory"
	walk_up
# 84 "data/maps/KiposTown/scripts.pory"
	walk_up
# 85 "data/maps/KiposTown/scripts.pory"
	walk_left
# 85 "data/maps/KiposTown/scripts.pory"
	walk_left
# 85 "data/maps/KiposTown/scripts.pory"
	walk_left
# 85 "data/maps/KiposTown/scripts.pory"
	walk_left
# 85 "data/maps/KiposTown/scripts.pory"
	walk_left
# 85 "data/maps/KiposTown/scripts.pory"
	walk_left
# 85 "data/maps/KiposTown/scripts.pory"
	walk_left
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 86 "data/maps/KiposTown/scripts.pory"
	walk_down
# 87 "data/maps/KiposTown/scripts.pory"
	face_down
# 88 "data/maps/KiposTown/scripts.pory"
	step_end

# 90 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_RusselWalksToConservationCenter_2:
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 92 "data/maps/KiposTown/scripts.pory"
	walk_right
# 93 "data/maps/KiposTown/scripts.pory"
	walk_up
# 93 "data/maps/KiposTown/scripts.pory"
	walk_up
# 93 "data/maps/KiposTown/scripts.pory"
	walk_up
# 94 "data/maps/KiposTown/scripts.pory"
	face_down
# 95 "data/maps/KiposTown/scripts.pory"
	step_end

# 97 "data/maps/KiposTown/scripts.pory"
KiposTown_Movement_PlayerFollowsToConservationCenter_2:
# 99 "data/maps/KiposTown/scripts.pory"
	walk_down
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 100 "data/maps/KiposTown/scripts.pory"
	walk_right
# 101 "data/maps/KiposTown/scripts.pory"
	walk_up
# 101 "data/maps/KiposTown/scripts.pory"
	walk_up
# 102 "data/maps/KiposTown/scripts.pory"
	face_up
# 103 "data/maps/KiposTown/scripts.pory"
	step_end

KiposTown_EventScript_LeadPlayerToConservationCenter_Text_0:
# 29 "data/maps/KiposTown/scripts.pory"
	.string "Mr. Russel$"

KiposTown_EventScript_LeadPlayerToConservationCenter_Text_1:
# 30 "data/maps/KiposTown/scripts.pory"
	.string "Ah, looks like Piraeus came through. You\n"
	.string "must be the Acrisia University\l"
	.string "researcher he knows! {PLAYER}, right?\p"
	.string "My name is Mr. Russel. I run the {COLOR GREEN}Sunset\n"
	.string "Wildlife Conservation Center{COLOR DARK_GRAY} here in\l"
	.string "Kipos Town, which provides a refuge for\l"
	.string "Pokémon from across the region. We run\l"
	.string "a conservation-focused {COLOR GREEN}Pokémon Zoo{COLOR DARK_GRAY},\l"
	.string "which helps us gather money to fund our\l"
	.string "work.\p"
	.string "We've run into trouble recently, as Team\n"
	.string "Chimera led a raid and {COLOR RED}took all our\l"
	.string "Pokémon{COLOR DARK_GRAY} from our facility to use in\l"
	.string "their schemes. Come, I'll show you the\l"
	.string "result.$"

KiposTown_EventScript_LeadPlayerToConservationCenter_Text_2:
# 39 "data/maps/KiposTown/scripts.pory"
	.string "You've never visited this part of the\n"
	.string "Ilios Region before, have you? This is\l"
	.string "{COLOR GREEN}Kipos Town{COLOR DARK_GRAY}. It's a quiet town outside\l"
	.string "the Conservation Center, but the\l"
	.string "tourism the Zoo brings helps keep the\l"
	.string "town afloat. That makes this\l"
	.string "catastrophe even more, well,\l"
	.string "catastrophic...\p"
	.string "Follow along now, we aren't far.$"

KiposTown_EventScript_LeadPlayerToConservationCenter_Text_3:
# 48 "data/maps/KiposTown/scripts.pory"
	.string "Here's our main building. Team Chimera\n"
	.string "didn't do much physical damage,\l"
	.string "managing to slip in over the border\l"
	.string "fences and stone walls during the night\l"
	.string "and capturing the Pokémon by force.\p"
	.string "I suppose I can't delay it any longer.\n"
	.string "Come, let's go inside.$"

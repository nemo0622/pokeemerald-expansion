SatyrsLair_Deep_MapScripts::
# 2 "data/maps/SatyrsLair_Deep/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SatyrsLair_Deep_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/SatyrsLair_Deep/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SatyrsLair_Deep_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SatyrsLair_Deep_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/SatyrsLair_Deep/scripts.pory"
	setflashlevel 1
	return

SatyrsLair_Deep_MapScripts_MAP_SCRIPT_ON_RESUME:
# 7 "data/maps/SatyrsLair_Deep/scripts.pory"
	goto_if_set FLAG_SYS_CTRL_OBJ_DELETE, SatyrsLair_Deep_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

SatyrsLair_Deep_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 9 "data/maps/SatyrsLair_Deep/scripts.pory"
	removeobject 1
	return


SatyrsLair_Deep_EventScript_GroudonEvent::
# 16 "data/maps/SatyrsLair_Deep/scripts.pory"
	lockall
# 17 "data/maps/SatyrsLair_Deep/scripts.pory"
	ballfollowingmon
# 18 "data/maps/SatyrsLair_Deep/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_QUESTION
# 19 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 20 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitmovement 0
# 22 "data/maps/SatyrsLair_Deep/scripts.pory"
	speakername SatyrsLair_Deep_EventScript_GroudonEvent_Text_0
# 23 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_1
# 24 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 25 "data/maps/SatyrsLair_Deep/scripts.pory"
	emote 11, EMOTE_EXCLAM
# 26 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 27 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitmovement 0
# 28 "data/maps/SatyrsLair_Deep/scripts.pory"
	speakername SatyrsLair_Deep_EventScript_GroudonEvent_Text_0
# 29 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_2
# 30 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 31 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement 11, SatyrsLair_Deep_Movement_AdminMoveToBattlePosition
# 32 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement 12, SatyrsLair_Deep_Movement_GougingFireMoveToBattlePosition
# 33 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SatyrsLair_Deep_Movement_PlayerMoveToBattlePosition
# 34 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitmovement 0
# 35 "data/maps/SatyrsLair_Deep/scripts.pory"
	speakername SatyrsLair_Deep_EventScript_GroudonEvent_Text_3
# 36 "data/maps/SatyrsLair_Deep/scripts.pory"
	playmoncry SPECIES_GOUGING_FIRE, CRY_MODE_NORMAL
# 37 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_4
# 38 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitmoncry
# 39 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 40 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 10
# 41 "data/maps/SatyrsLair_Deep/scripts.pory"
	speakername SatyrsLair_Deep_EventScript_GroudonEvent_Text_0
# 42 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_5
# 43 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 46 "data/maps/SatyrsLair_Deep/scripts.pory"
	goto_if_unset FLAG_HARD_MODE, SatyrsLair_Deep_EventScript_GroudonEvent_2
# 52 "data/maps/SatyrsLair_Deep/scripts.pory"
	trainerbattle_no_intro TRAINER_SATYRSLAIR_CHIMERA_ADMIN_HARD, SatyrsLair_Deep_Text_ChimeraAdminDefeated
SatyrsLair_Deep_EventScript_GroudonEvent_1:
# 55 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 30
# 56 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement 11, Common_Movement_JumpInPlaceRight
# 57 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitmovement 0
# 58 "data/maps/SatyrsLair_Deep/scripts.pory"
	speakername SatyrsLair_Deep_EventScript_GroudonEvent_Text_0
# 59 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_6
# 60 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 63 "data/maps/SatyrsLair_Deep/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 2
# 64 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 15
# 65 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 66 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 67 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitmovement 0
# 69 "data/maps/SatyrsLair_Deep/scripts.pory"
	setflag FLAG_HIDE_WEATHER_SOFOS_CITY
# 70 "data/maps/SatyrsLair_Deep/scripts.pory"
	resetweather
# 71 "data/maps/SatyrsLair_Deep/scripts.pory"
	doweather
# 72 "data/maps/SatyrsLair_Deep/scripts.pory"
	clearflag FLAG_HIDE_GROUDON_SATYRS_LAIR
# 73 "data/maps/SatyrsLair_Deep/scripts.pory"
	addobject 1
# 74 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 15
# 75 "data/maps/SatyrsLair_Deep/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 76 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 10
# 78 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 30
# 79 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 80 "data/maps/SatyrsLair_Deep/scripts.pory"
	emote 11, EMOTE_EXCLAM
# 81 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 10
# 82 "data/maps/SatyrsLair_Deep/scripts.pory"
	speakername SatyrsLair_Deep_EventScript_GroudonEvent_Text_0
# 83 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_7
# 84 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 85 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 86 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement 11, Common_Movement_JumpInPlaceRight
# 87 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitmovement 0
# 88 "data/maps/SatyrsLair_Deep/scripts.pory"
	speakername SatyrsLair_Deep_EventScript_GroudonEvent_Text_0
# 89 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_8
# 90 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 92 "data/maps/SatyrsLair_Deep/scripts.pory"
	fadescreen FADE_TO_BLACK
# 93 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 15
# 94 "data/maps/SatyrsLair_Deep/scripts.pory"
	setflag FLAG_HIDE_CHIMERA_AFTER_GROUDON
# 95 "data/maps/SatyrsLair_Deep/scripts.pory"
	removeobject 11
# 96 "data/maps/SatyrsLair_Deep/scripts.pory"
	removeobject 12
# 97 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 15
# 98 "data/maps/SatyrsLair_Deep/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 99 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 20
# 100 "data/maps/SatyrsLair_Deep/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SatyrsLair_Deep_Movement_PlayerApproachGroudon
# 101 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitmovement 0
# 102 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 20
# 103 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_9
# 104 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 105 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 30
# 107 "data/maps/SatyrsLair_Deep/scripts.pory"
	emote OBJ_EVENT_ID_PLAYER, EMOTE_EXCLAM
# 108 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_10
# 109 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 110 "data/maps/SatyrsLair_Deep/scripts.pory"
	special HealPlayerParty
# 111 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 5
# 112 "data/maps/SatyrsLair_Deep/scripts.pory"
	speakername SatyrsLair_Deep_EventScript_GroudonEvent_Text_11
# 113 "data/maps/SatyrsLair_Deep/scripts.pory"
	playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
# 114 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_12
# 115 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitmoncry
# 116 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 119 "data/maps/SatyrsLair_Deep/scripts.pory"
	seteventmon SPECIES_GROUDON, 45, ITEM_RED_ORB
# 120 "data/maps/SatyrsLair_Deep/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 121 "data/maps/SatyrsLair_Deep/scripts.pory"
	setflag FLAG_HIDE_GROUDON_SATYRS_LAIR
# 122 "data/maps/SatyrsLair_Deep/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 123 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitstate
# 124 "data/maps/SatyrsLair_Deep/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 125 "data/maps/SatyrsLair_Deep/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 126 "data/maps/SatyrsLair_Deep/scripts.pory"
	switch VAR_RESULT
# 128 "data/maps/SatyrsLair_Deep/scripts.pory"
	case B_OUTCOME_CAUGHT, SatyrsLair_Deep_EventScript_GroudonEvent_7
# 133 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_14
# 134 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
SatyrsLair_Deep_EventScript_GroudonEvent_5:
# 136 "data/maps/SatyrsLair_Deep/scripts.pory"
	delay 20
# 137 "data/maps/SatyrsLair_Deep/scripts.pory"
	completequest QUEST_LEGEND_OF_GROUDON
# 138 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 139 "data/maps/SatyrsLair_Deep/scripts.pory"
	call SatyrsLair_Deep_EventScript_CheckEncounteredBothWeatherMons
# 140 "data/maps/SatyrsLair_Deep/scripts.pory"
	release
	end

SatyrsLair_Deep_EventScript_GroudonEvent_2:
# 48 "data/maps/SatyrsLair_Deep/scripts.pory"
	trainerbattle_no_intro TRAINER_SATYRSLAIR_CHIMERA_ADMIN, SatyrsLair_Deep_Text_ChimeraAdminDefeated
	goto SatyrsLair_Deep_EventScript_GroudonEvent_1

SatyrsLair_Deep_EventScript_GroudonEvent_7:
# 129 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_13
# 130 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 131 "data/maps/SatyrsLair_Deep/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
	goto SatyrsLair_Deep_EventScript_GroudonEvent_5


# 144 "data/maps/SatyrsLair_Deep/scripts.pory"
SatyrsLair_Deep_Movement_PlayerMoveToBattlePosition:
# 146 "data/maps/SatyrsLair_Deep/scripts.pory"
	walk_up
# 146 "data/maps/SatyrsLair_Deep/scripts.pory"
	walk_up
# 146 "data/maps/SatyrsLair_Deep/scripts.pory"
	walk_up
# 147 "data/maps/SatyrsLair_Deep/scripts.pory"
	walk_right
# 148 "data/maps/SatyrsLair_Deep/scripts.pory"
	face_left
# 149 "data/maps/SatyrsLair_Deep/scripts.pory"
	step_end

# 152 "data/maps/SatyrsLair_Deep/scripts.pory"
SatyrsLair_Deep_Movement_AdminMoveToBattlePosition:
# 154 "data/maps/SatyrsLair_Deep/scripts.pory"
	walk_left
# 154 "data/maps/SatyrsLair_Deep/scripts.pory"
	walk_left
# 155 "data/maps/SatyrsLair_Deep/scripts.pory"
	walk_up
# 156 "data/maps/SatyrsLair_Deep/scripts.pory"
	face_right
# 157 "data/maps/SatyrsLair_Deep/scripts.pory"
	step_end

# 160 "data/maps/SatyrsLair_Deep/scripts.pory"
SatyrsLair_Deep_Movement_GougingFireMoveToBattlePosition:
# 162 "data/maps/SatyrsLair_Deep/scripts.pory"
	walk_left
# 163 "data/maps/SatyrsLair_Deep/scripts.pory"
	face_right
# 164 "data/maps/SatyrsLair_Deep/scripts.pory"
	step_end

# 172 "data/maps/SatyrsLair_Deep/scripts.pory"
SatyrsLair_Deep_Movement_PlayerApproachGroudon:
# 174 "data/maps/SatyrsLair_Deep/scripts.pory"
	walk_left
# 175 "data/maps/SatyrsLair_Deep/scripts.pory"
	walk_up
# 176 "data/maps/SatyrsLair_Deep/scripts.pory"
	face_up
# 177 "data/maps/SatyrsLair_Deep/scripts.pory"
	step_end

SatyrsLair_Deep_EventScript_InteractWithLava::
# 182 "data/maps/SatyrsLair_Deep/scripts.pory"
	lock
# 183 "data/maps/SatyrsLair_Deep/scripts.pory"
	goto_if_set FLAG_CAUGHT_GROUDON, SatyrsLair_Deep_EventScript_InteractWithLava_2
# 190 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_InteractWithLava_Text_1, MSGBOX_YESNO
# 191 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 192 "data/maps/SatyrsLair_Deep/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SatyrsLair_Deep_EventScript_InteractWithLava_5
# 199 "data/maps/SatyrsLair_Deep/scripts.pory"
	seteventmon SPECIES_GROUDON, 45, ITEM_RED_ORB
# 200 "data/maps/SatyrsLair_Deep/scripts.pory"
	special BattleSetup_StartLegendaryBattle
# 201 "data/maps/SatyrsLair_Deep/scripts.pory"
	waitstate
# 202 "data/maps/SatyrsLair_Deep/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 203 "data/maps/SatyrsLair_Deep/scripts.pory"
	switch VAR_RESULT
# 205 "data/maps/SatyrsLair_Deep/scripts.pory"
	case B_OUTCOME_CAUGHT, SatyrsLair_Deep_EventScript_InteractWithLava_9
# 210 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_GroudonEvent_Text_14
# 211 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
SatyrsLair_Deep_EventScript_InteractWithLava_1:
# 215 "data/maps/SatyrsLair_Deep/scripts.pory"
	release
	end

SatyrsLair_Deep_EventScript_InteractWithLava_2:
# 185 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_InteractWithLava_Text_0
# 186 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
	goto SatyrsLair_Deep_EventScript_InteractWithLava_1

SatyrsLair_Deep_EventScript_InteractWithLava_5:
# 194 "data/maps/SatyrsLair_Deep/scripts.pory"
	release
	end

SatyrsLair_Deep_EventScript_InteractWithLava_9:
# 206 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_InteractWithLava_Text_2
# 207 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 208 "data/maps/SatyrsLair_Deep/scripts.pory"
	setflag FLAG_CAUGHT_GROUDON
	goto SatyrsLair_Deep_EventScript_InteractWithLava_1


SatyrsLair_Deep_EventScript_CheckEncounteredBothWeatherMons::
# 221 "data/maps/SatyrsLair_Deep/scripts.pory"
	goto_if_set FLAG_HIDE_CHIMERA_AFTER_KYOGRE, SatyrsLair_Deep_EventScript_CheckEncounteredBothWeatherMons_2
	return

SatyrsLair_Deep_EventScript_CheckEncounteredBothWeatherMons_1:
# 223 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_CheckEncounteredBothWeatherMons_Text_0
# 224 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 225 "data/maps/SatyrsLair_Deep/scripts.pory"
	setflag FLAG_CAUGHT_BOTH_WEATHER_LEGENDS
	return

SatyrsLair_Deep_EventScript_CheckEncounteredBothWeatherMons_2:
# 221 "data/maps/SatyrsLair_Deep/scripts.pory"
	goto_if_set FLAG_HIDE_CHIMERA_AFTER_GROUDON, SatyrsLair_Deep_EventScript_CheckEncounteredBothWeatherMons_1
	return


SatyrsLair_Deep_EventScript_Trainer_SatyrsLair_Malu::
# 231 "data/maps/SatyrsLair_Deep/scripts.pory"
	trainerbattle_single TRAINER_SATYRSLAIR_MALU, SatyrsLair_Deep_Text_Trainer_SatyrsLair_MaluIntro, SatyrsLair_Deep_Text_Trainer_SatyrsLair_MaluDefeat
# 232 "data/maps/SatyrsLair_Deep/scripts.pory"
	speakername SatyrsLair_Deep_EventScript_Trainer_SatyrsLair_Malu_Text_0
# 233 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_Trainer_SatyrsLair_Malu_Text_1
# 234 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 235 "data/maps/SatyrsLair_Deep/scripts.pory"
	release
	end


SatyrsLair_Deep_EventScript_Trainer_SatyrsLair_Ryan::
# 249 "data/maps/SatyrsLair_Deep/scripts.pory"
	trainerbattle_single TRAINER_SATYRSLAIR_RYAN, SatyrsLair_Deep_Text_Trainer_SatyrsLair_RyanIntro, SatyrsLair_Deep_Text_Trainer_SatyrsLair_RyanDefeat
# 250 "data/maps/SatyrsLair_Deep/scripts.pory"
	speakername SatyrsLair_Deep_EventScript_Trainer_SatyrsLair_Ryan_Text_0
# 251 "data/maps/SatyrsLair_Deep/scripts.pory"
	msgbox SatyrsLair_Deep_EventScript_Trainer_SatyrsLair_Ryan_Text_1
# 252 "data/maps/SatyrsLair_Deep/scripts.pory"
	closemessage
# 253 "data/maps/SatyrsLair_Deep/scripts.pory"
	release
	end


SatyrsLair_Deep_EventScript_GroudonEvent_Text_0:
# 22 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Chimera Admin$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_1:
# 23 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Where are you, Groudon?! Come on out,\n"
	.string "you dumb lizard!\p"
	.string "Alright, it's time to use our full\n"
	.string "strength. {COLOR RED}Gouging Fire{COLOR DARK_GRAY}! We'll force\l"
	.string "Groudon out with a Lava Plume!$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_2:
# 29 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "{PLAYER}? Kalliope warned me that\n"
	.string "you'd try to stop us, but I didn't\l"
	.string "imagine you'd find me here, you\l"
	.string "persistent child. I've been tasked with\l"
	.string "either capturing or defeating {COLOR GREEN}Groudon{COLOR DARK_GRAY}\l"
	.string "for dominance over the land, but it's\l"
	.string "hiding deeper underground - trembling\l"
	.string "in fear, I'm sure!\p"
	.string "I'll crush you with {COLOR RED}Gouging Fire{COLOR DARK_GRAY}, then\n"
	.string "drag Groudon out by its stupid tail!$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_3:
# 35 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Gouging Fire$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_4:
# 37 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Bryaaahh!!!$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_5:
# 42 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Fwahaha! That roar can make your bones\n"
	.string "shake! {PLAYER}, this is where you\l"
	.string "fall!$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_6:
# 59 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "...No no no NO NO! I thought {COLOR RED}Gouging Fire{COLOR DARK_GRAY}\n"
	.string "was UNBEATABLE!\p"
	.string "Wait... {COLOR RED}Gouging Fire{COLOR DARK_GRAY}... You're still\n"
	.string "standing, we can still win! Just one\l"
	.string "good Lava Plume can {COLOR RED}bring this whole\l"
	.string "cave down{COLOR DARK_GRAY}!$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_7:
# 83 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "{COLOR GREEN}Groudon{COLOR DARK_GRAY}! It's REAL?! There's no way\n"
	.string "{COLOR RED}Gouging Fire{COLOR DARK_GRAY} has the energy to fight a\l"
	.string "full-powered Legendary Pokémon...$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_8:
# 89 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "You just got lucky today, {PLAYER}!\n"
	.string "Very, VERY lucky! Once we reunite with\l"
	.string "{COLOR RED}Kalliope and Raging Bolt{COLOR DARK_GRAY}, we'll be\l"
	.string "unstoppable!$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_9:
# 103 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Groudon bows its head, acknowledging\n"
	.string "your strength and willpower.$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_10:
# 108 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Groudon flares with a primal energy!\n"
	.string "Your team has been miraculously healed.$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_11:
# 112 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Groudon$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_12:
# 114 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Graaayyhhh!!$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_13:
# 129 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Groudon has deemed you worthy and\n"
	.string "joined your team! It will help in the\l"
	.string "battle against Team Chimera.$"

SatyrsLair_Deep_EventScript_GroudonEvent_Text_14:
# 133 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Groudon returned to the depths of\n"
	.string "Satyr's Lair, impressed with your power.\p"
	.string "Groudon can be encountered again in\n"
	.string "Satyr's Lair until it is successfully\l"
	.string "caught.$"

SatyrsLair_Deep_EventScript_InteractWithLava_Text_0:
# 185 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "It's the deepest lava pool in Satyr's\n"
	.string "Lair. People told stories about the\l"
	.string "dangers down here, so nobody has been\l"
	.string "here in centuries.$"

SatyrsLair_Deep_EventScript_InteractWithLava_Text_1:
# 190 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "It's the deepest part of Satyr's Lair,\n"
	.string "home of {COLOR GREEN}Groudon{COLOR DARK_GRAY}, Lord of the Land.\p"
	.string "A primal energy is radiating from below.\n"
	.string "Do you accept the challenge from\l"
	.string "{COLOR GREEN}Groudon{COLOR DARK_GRAY}?$"

SatyrsLair_Deep_EventScript_InteractWithLava_Text_2:
# 206 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Groudon has deemed you worthy of being\n"
	.string "its Trainer. The lava has settled.$"

SatyrsLair_Deep_EventScript_CheckEncounteredBothWeatherMons_Text_0:
# 223 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Kyogre and Groudon have both been\n"
	.string "safely kept from Team Chimera! All that\l"
	.string "remains is {COLOR GREEN}Rayquaza{COLOR DARK_GRAY}, chased down by\l"
	.string "{COLOR RED}Kalliope{COLOR DARK_GRAY}, at the {COLOR GREEN}Tower of Dioxippus{COLOR DARK_GRAY}.$"

SatyrsLair_Deep_EventScript_Trainer_SatyrsLair_Malu_Text_0:
# 232 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Malu$"

SatyrsLair_Deep_EventScript_Trainer_SatyrsLair_Malu_Text_1:
# 233 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "There's a Team Chimera Admin with a big,\n"
	.string "scary Pokémon up ahead... This is too\l"
	.string "much for me!$"

SatyrsLair_Deep_EventScript_Trainer_SatyrsLair_Ryan_Text_0:
# 250 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Ryan$"

SatyrsLair_Deep_EventScript_Trainer_SatyrsLair_Ryan_Text_1:
# 251 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "A Team Chimera Admin passed by with a\n"
	.string "monsterous Pokémon recently. I think\l"
	.string "we should get out of here!$"

SatyrsLair_Deep_Text_ChimeraAdminDefeated::
# 167 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "NO WAY!!$"

SatyrsLair_Deep_Text_Trainer_SatyrsLair_MaluIntro::
# 238 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Eek! It's scorching hot!$"

SatyrsLair_Deep_Text_Trainer_SatyrsLair_MaluDefeat::
# 242 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "I should get out of here!$"

SatyrsLair_Deep_Text_Trainer_SatyrsLair_RyanIntro::
# 256 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "Something big is happening...$"

SatyrsLair_Deep_Text_Trainer_SatyrsLair_RyanDefeat::
# 260 "data/maps/SatyrsLair_Deep/scripts.pory"
	.string "How do I get out of here again?$"

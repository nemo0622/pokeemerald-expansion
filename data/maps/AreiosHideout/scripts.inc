AreiosHideout_MapScripts::
# 2 "data/maps/AreiosHideout/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AreiosHideout_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 28 "data/maps/AreiosHideout/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, AreiosHideout_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

AreiosHideout_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/AreiosHideout/scripts.pory"
	setflag FLAG_VISITED_AREIOS_HIDEOUT
# 5 "data/maps/AreiosHideout/scripts.pory"
	goto_if_set FLAG_HIDE_RANIA_AND_LEADERS_AREIOS, AreiosHideout_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
AreiosHideout_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 10 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 11 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 12 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 13 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 14 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 15 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 16 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 17 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 18 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 19 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 20 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 21 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 22 "data/maps/AreiosHideout/scripts.pory"
	setobjectaswildencounter 8, ENCOUNTER_LAND
# 23 "data/maps/AreiosHideout/scripts.pory"
	setobjectaswildencounter 9, ENCOUNTER_LAND
# 24 "data/maps/AreiosHideout/scripts.pory"
	setobjectaswildencounter 10, ENCOUNTER_LAND
# 25 "data/maps/AreiosHideout/scripts.pory"
	setobjectaswildencounter 11, ENCOUNTER_LAND
	return

AreiosHideout_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 7 "data/maps/AreiosHideout/scripts.pory"
	setvar VAR_TEMP_1, 1
	goto AreiosHideout_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

AreiosHideout_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 29 "data/maps/AreiosHideout/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, AreiosHideout_EventScript_TryChimeraEvent
	.2byte 0


AreiosHideout_EventScript_TryChimeraEvent::
# 35 "data/maps/AreiosHideout/scripts.pory"
	setvar VAR_TEMP_1, 1
# 36 "data/maps/AreiosHideout/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, AreiosHideout_EventScript_TryChimeraEvent_3
AreiosHideout_EventScript_TryChimeraEvent_1:
# 40 "data/maps/AreiosHideout/scripts.pory"
	releaseall
	end

AreiosHideout_EventScript_TryChimeraEvent_2:
# 38 "data/maps/AreiosHideout/scripts.pory"
	goto MyrriniIsland_EventScript_ChimeraEvent
	goto AreiosHideout_EventScript_TryChimeraEvent_1

AreiosHideout_EventScript_TryChimeraEvent_3:
# 36 "data/maps/AreiosHideout/scripts.pory"
	goto_if_unset FLAG_HIDE_RANIA_AND_LEADERS_AREIOS, AreiosHideout_EventScript_TryChimeraEvent_2
	goto AreiosHideout_EventScript_TryChimeraEvent_1


AreiosHideout_EventScript_Nurse::
# 46 "data/maps/AreiosHideout/scripts.pory"
	lock
# 47 "data/maps/AreiosHideout/scripts.pory"
	faceplayer
# 48 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_Nurse_Text_0
# 49 "data/maps/AreiosHideout/scripts.pory"
	goto_if_unset FLAG_DEFEATED_TEAM_CHIMERA_IN_AREIOS, AreiosHideout_EventScript_Nurse_2
# 56 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_Nurse_Text_2
# 57 "data/maps/AreiosHideout/scripts.pory"
	closemessage
AreiosHideout_EventScript_Nurse_1:
# 59 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_Nurse_Text_0
# 60 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_Nurse_Text_3, MSGBOX_YESNO
# 61 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 62 "data/maps/AreiosHideout/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq AreiosHideout_EventScript_Nurse_6
AreiosHideout_EventScript_Nurse_5:
# 78 "data/maps/AreiosHideout/scripts.pory"
	release
	end

AreiosHideout_EventScript_Nurse_2:
# 51 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_Nurse_Text_1
# 52 "data/maps/AreiosHideout/scripts.pory"
	closemessage
	goto AreiosHideout_EventScript_Nurse_1

AreiosHideout_EventScript_Nurse_6:
# 64 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_Nurse_Text_0
# 65 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_Nurse_Text_4
# 66 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 67 "data/maps/AreiosHideout/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 68 "data/maps/AreiosHideout/scripts.pory"
	waitmovement 0
# 69 "data/maps/AreiosHideout/scripts.pory"
	special HealPlayerParty
# 70 "data/maps/AreiosHideout/scripts.pory"
	callnative UpdateFollowingPokemon
# 71 "data/maps/AreiosHideout/scripts.pory"
	delay 60
# 72 "data/maps/AreiosHideout/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 73 "data/maps/AreiosHideout/scripts.pory"
	waitmovement 0
# 74 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_Nurse_Text_0
# 75 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_Nurse_Text_5
# 76 "data/maps/AreiosHideout/scripts.pory"
	closemessage
	goto AreiosHideout_EventScript_Nurse_5


AreiosHideout_EventScript_GruntByNurse::
# 84 "data/maps/AreiosHideout/scripts.pory"
	lock
# 85 "data/maps/AreiosHideout/scripts.pory"
	faceplayer
# 86 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_GruntByNurse_Text_0
# 87 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_GruntByNurse_Text_1
# 88 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 89 "data/maps/AreiosHideout/scripts.pory"
	release
	end


AreiosHideout_EventScript_GruntByEntrance::
# 95 "data/maps/AreiosHideout/scripts.pory"
	lock
# 96 "data/maps/AreiosHideout/scripts.pory"
	faceplayer
# 97 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_GruntByNurse_Text_0
# 98 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_GruntByEntrance_Text_0
# 99 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 100 "data/maps/AreiosHideout/scripts.pory"
	release
	end


AreiosHideout_EventScript_GruntByHousesEast::
# 106 "data/maps/AreiosHideout/scripts.pory"
	lock
# 107 "data/maps/AreiosHideout/scripts.pory"
	faceplayer
# 108 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_GruntByNurse_Text_0
# 109 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_GruntByHousesEast_Text_0
# 110 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 111 "data/maps/AreiosHideout/scripts.pory"
	release
	end


AreiosHideout_EventScript_GruntByHousesWest::
# 117 "data/maps/AreiosHideout/scripts.pory"
	lock
# 118 "data/maps/AreiosHideout/scripts.pory"
	faceplayer
# 119 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_GruntByNurse_Text_0
# 120 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_GruntByHousesWest_Text_0
# 121 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 122 "data/maps/AreiosHideout/scripts.pory"
	release
	end


AreiosHideout_EventScript_GruntSeesFlooding::
# 128 "data/maps/AreiosHideout/scripts.pory"
	lock
# 129 "data/maps/AreiosHideout/scripts.pory"
	faceplayer
# 130 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_GruntByNurse_Text_0
# 131 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_GruntSeesFlooding_Text_0
# 132 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 133 "data/maps/AreiosHideout/scripts.pory"
	release
	end


AreiosHideout_EventScript_GruntByGym::
# 139 "data/maps/AreiosHideout/scripts.pory"
	lock
# 140 "data/maps/AreiosHideout/scripts.pory"
	faceplayer
# 141 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_GruntByNurse_Text_0
# 142 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_GruntByGym_Text_0
# 143 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 144 "data/maps/AreiosHideout/scripts.pory"
	release
	end


AreiosHideout_EventScript_ChimeraLossScript::
# 150 "data/maps/AreiosHideout/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 151 "data/maps/AreiosHideout/scripts.pory"
	delay 30
# 152 "data/maps/AreiosHideout/scripts.pory"
	emote 18, EMOTE_EXCLAM
# 153 "data/maps/AreiosHideout/scripts.pory"
	applymovement 18, Common_Movement_FaceLeft
# 154 "data/maps/AreiosHideout/scripts.pory"
	waitmovement 0
# 155 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_ChimeraLossScript_Text_0
# 156 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_ChimeraLossScript_Text_1
# 157 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 158 "data/maps/AreiosHideout/scripts.pory"
	applymovement 18, Common_Movement_WalkLeft
# 159 "data/maps/AreiosHideout/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkDown
# 160 "data/maps/AreiosHideout/scripts.pory"
	waitmovement 0
# 161 "data/maps/AreiosHideout/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 162 "data/maps/AreiosHideout/scripts.pory"
	waitmovement 0
# 163 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_ChimeraLossScript_Text_0
# 164 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_ChimeraLossScript_Text_2
# 165 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 167 "data/maps/AreiosHideout/scripts.pory"
	applymovement 22, Common_Movement_WalkLeft
# 168 "data/maps/AreiosHideout/scripts.pory"
	waitmovement 0
# 169 "data/maps/AreiosHideout/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
# 170 "data/maps/AreiosHideout/scripts.pory"
	applymovement 22, Common_Movement_FaceUp
# 171 "data/maps/AreiosHideout/scripts.pory"
	waitmovement 0
# 172 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_ChimeraLossScript_Text_3
# 173 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_ChimeraLossScript_Text_4
# 174 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 175 "data/maps/AreiosHideout/scripts.pory"
	delay 15
# 176 "data/maps/AreiosHideout/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 177 "data/maps/AreiosHideout/scripts.pory"
	applymovement 18, Common_Movement_JumpInPlaceLeft
# 178 "data/maps/AreiosHideout/scripts.pory"
	waitmovement 0
# 179 "data/maps/AreiosHideout/scripts.pory"
	speakername AreiosHideout_EventScript_ChimeraLossScript_Text_0
# 180 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_ChimeraLossScript_Text_5
# 181 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 183 "data/maps/AreiosHideout/scripts.pory"
	delay 20
# 184 "data/maps/AreiosHideout/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 185 "data/maps/AreiosHideout/scripts.pory"
	delay 15
# 186 "data/maps/AreiosHideout/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 187 "data/maps/AreiosHideout/scripts.pory"
	setflag FLAG_UNLOCKED_RUINS_OF_AHIYAWA
# 188 "data/maps/AreiosHideout/scripts.pory"
	setflag FLAG_HIDE_RANIA_AND_LEADERS_AREIOS
# 189 "data/maps/AreiosHideout/scripts.pory"
	removeobject 18
# 190 "data/maps/AreiosHideout/scripts.pory"
	removeobject 19
# 191 "data/maps/AreiosHideout/scripts.pory"
	removeobject 20
# 192 "data/maps/AreiosHideout/scripts.pory"
	removeobject 21
# 193 "data/maps/AreiosHideout/scripts.pory"
	removeobject 22
# 194 "data/maps/AreiosHideout/scripts.pory"
	removeobject 23
# 195 "data/maps/AreiosHideout/scripts.pory"
	removeobject 24
# 196 "data/maps/AreiosHideout/scripts.pory"
	removeobject 25
# 197 "data/maps/AreiosHideout/scripts.pory"
	delay 15
# 198 "data/maps/AreiosHideout/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 200 "data/maps/AreiosHideout/scripts.pory"
	setvar VAR_NIKO_STATE, 14
# 203 "data/maps/AreiosHideout/scripts.pory"
	delay 20
# 204 "data/maps/AreiosHideout/scripts.pory"
	startquest QUEST_CHAMPION
# 205 "data/maps/AreiosHideout/scripts.pory"
	releaseall
	end


AreiosHideout_EventScript_DirectionSign::
# 211 "data/maps/AreiosHideout/scripts.pory"
	lock
# 212 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_DirectionSign_Text_0
# 213 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 214 "data/maps/AreiosHideout/scripts.pory"
	release
	end


AreiosHideout_EventScript_GymSign::
# 220 "data/maps/AreiosHideout/scripts.pory"
	lock
# 221 "data/maps/AreiosHideout/scripts.pory"
	msgbox AreiosHideout_EventScript_GymSign_Text_0
# 222 "data/maps/AreiosHideout/scripts.pory"
	closemessage
# 223 "data/maps/AreiosHideout/scripts.pory"
	release
	end


AreiosHideout_EventScript_Nurse_Text_0:
# 48 "data/maps/AreiosHideout/scripts.pory"
	.string "Nurse$"

AreiosHideout_EventScript_Nurse_Text_1:
# 51 "data/maps/AreiosHideout/scripts.pory"
	.string "I'm being held here by Team Chimera...\n"
	.string "But you don't look like you're in-\p"
	.string "Ahem, I mean...$"

AreiosHideout_EventScript_Nurse_Text_2:
# 56 "data/maps/AreiosHideout/scripts.pory"
	.string "My savior! I'm a bit under-supplied\n"
	.string "here, but I'll always help you.$"

AreiosHideout_EventScript_Nurse_Text_3:
# 60 "data/maps/AreiosHideout/scripts.pory"
	.string "Would you like me to heal your Pokémon?$"

AreiosHideout_EventScript_Nurse_Text_4:
# 65 "data/maps/AreiosHideout/scripts.pory"
	.string "Great, just give me a moment here.$"

AreiosHideout_EventScript_Nurse_Text_5:
# 75 "data/maps/AreiosHideout/scripts.pory"
	.string "Here's your Pokémon. Stay safe out\n"
	.string "there!$"

AreiosHideout_EventScript_GruntByNurse_Text_0:
# 86 "data/maps/AreiosHideout/scripts.pory"
	.string "Grunt$"

AreiosHideout_EventScript_GruntByNurse_Text_1:
# 87 "data/maps/AreiosHideout/scripts.pory"
	.string "I'm keepin' watch on this Nurse. She'll\n"
	.string "keep our Pokémon healthy and ready for\l"
	.string "battle.\p"
	.string "Oh, you're missing your mask and hood,\n"
	.string "by the way.$"

AreiosHideout_EventScript_GruntByEntrance_Text_0:
# 98 "data/maps/AreiosHideout/scripts.pory"
	.string "Hmm... Where's your Chimera mask and\n"
	.string "cloak? Without those, it would be easy\l"
	.string "to mistake you for an intruder.$"

AreiosHideout_EventScript_GruntByHousesEast_Text_0:
# 109 "data/maps/AreiosHideout/scripts.pory"
	.string "Fwahaha, Areios Town fell in a single\n"
	.string "day when we attacked! Some Trainers\l"
	.string "fought back, but once Kalliope joined\l"
	.string "in, it was over.$"

AreiosHideout_EventScript_GruntByHousesWest_Text_0:
# 120 "data/maps/AreiosHideout/scripts.pory"
	.string "This Hideout is perfect for Team\n"
	.string "Chimera. We fished up all the Pokémon in\l"
	.string "these waters to make some cash!$"

AreiosHideout_EventScript_GruntSeesFlooding_Text_0:
# 131 "data/maps/AreiosHideout/scripts.pory"
	.string "Areios Town had some small ponds, but\n"
	.string "they were maintained by the residents.\l"
	.string "When we chased them out, the ponds\l"
	.string "flooded, and we had to build log\l"
	.string "crossings.\p"
	.string "Go put your Chimera mask on and help us\n"
	.string "fight this flood!$"

AreiosHideout_EventScript_GruntByGym_Text_0:
# 142 "data/maps/AreiosHideout/scripts.pory"
	.string "{COLOR RED}Kalliope{COLOR DARK_GRAY} and her Admins are in the Gym,\n"
	.string "working hard on their new plans. Be sure\l"
	.string "not to interrupt!$"

AreiosHideout_EventScript_ChimeraLossScript_Text_0:
# 155 "data/maps/AreiosHideout/scripts.pory"
	.string "Rania$"

AreiosHideout_EventScript_ChimeraLossScript_Text_1:
# 156 "data/maps/AreiosHideout/scripts.pory"
	.string "{PLAYER}! I knew you could do it!$"

AreiosHideout_EventScript_ChimeraLossScript_Text_2:
# 164 "data/maps/AreiosHideout/scripts.pory"
	.string "We saw {COLOR GREEN}Entei, Raikou, and Suicune{COLOR DARK_GRAY} dash\n"
	.string "out of the Gym! It seems like they've\l"
	.string "{COLOR GREEN}escaped Team Chimera's control{COLOR DARK_GRAY}. Some\l"
	.string "Chimera Grunts escaped in the chaos,\l"
	.string "and from the looks of it, {COLOR RED}Kalliope{COLOR DARK_GRAY} did\l"
	.string "too... But still, this was a resounding\l"
	.string "victory!\p"
	.string "While you battled in the Gym, I brought\n"
	.string "some Gym Leaders to help defeat the\l"
	.string "other Team Chimera members. {COLOR GREEN}Polymnia{COLOR DARK_GRAY} of\l"
	.string "Jusmail Town, {COLOR GREEN}Euterpe{COLOR DARK_GRAY} of Myrrini Island,\l"
	.string "{COLOR GREEN}Terpsikore{COLOR DARK_GRAY} of Sofos City, and {COLOR GREEN}Rhadine{COLOR DARK_GRAY}\l"
	.string "of Palati City all joined us to take\l"
	.string "down Team Chimera for good!$"

AreiosHideout_EventScript_ChimeraLossScript_Text_3:
# 172 "data/maps/AreiosHideout/scripts.pory"
	.string "Polymnia$"

AreiosHideout_EventScript_ChimeraLossScript_Text_4:
# 173 "data/maps/AreiosHideout/scripts.pory"
	.string "Chaire, {PLAYER}! Do you remember me\n"
	.string "from Jusmail Town? I was the {COLOR GREEN}first Gym\l"
	.string "Leader{COLOR DARK_GRAY} you challenged!\p"
	.string "Now that Team Chimera is being\n"
	.string "dismantled, we thought it was time to\l"
	.string "reintroduce the {COLOR GREEN}Elite Four{COLOR DARK_GRAY}, now\l"
	.string "composed of us Gym Leaders! We'll be\l"
	.string "assembling at the {COLOR GREEN}Ruins of Ahiyawa{COLOR DARK_GRAY}, the\l"
	.string "site of an ancient battle, just\l"
	.string "northeast of Péntepetal City. If you\l"
	.string "hope to become {COLOR GREEN}Champion{COLOR DARK_GRAY}, come meet us\l"
	.string "there!$"

AreiosHideout_EventScript_ChimeraLossScript_Text_5:
# 180 "data/maps/AreiosHideout/scripts.pory"
	.string "Hear that? We might become {COLOR GREEN}Champions{COLOR DARK_GRAY},\n"
	.string "{PLAYER}! All we have to do is go to\l"
	.string "the {COLOR GREEN}Ruins of Ahiyawa{COLOR DARK_GRAY} and beat some Gym\l"
	.string "Leaders we've already beaten before.\l"
	.string "We've SO got this!\p"
	.string "I'm gonna help the Muses take care of\n"
	.string "these Chimera Grunts. You should head\l"
	.string "to {COLOR GREEN}Péntepetal City{COLOR DARK_GRAY} and follow the\l"
	.string "{COLOR GREEN}Pollen Road{COLOR DARK_GRAY} towards the Ruins of\l"
	.string "Ahiyawa. I'm sure I'll catch up with you\l"
	.string "there!$"

AreiosHideout_EventScript_DirectionSign_Text_0:
# 212 "data/maps/AreiosHideout/scripts.pory"
	.string "Areios Hideout\n"
	.string "Team Chimera Members ONLY!\p"
	.string "{UP_ARROW} The Nyx Trails\p"
	.string "The word Town is scratched out beneath\n"
	.string "the word Hideout.$"

AreiosHideout_EventScript_GymSign_Text_0:
# 221 "data/maps/AreiosHideout/scripts.pory"
	.string "Gym Leader: Kalliope\n"
	.string "Muse of Legendary Tales$"

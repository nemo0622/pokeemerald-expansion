# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_WOMAN_1, 19
# 3 "data/maps/LilycoveCity/scripts.pory"
.set LOCALID_MAN_1, 20
# 4 "data/maps/LilycoveCity/scripts.pory"

# 5 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 6 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 7 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LilycoveCity_OnLoad
# 8 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 9 "data/maps/LilycoveCity/scripts.pory"

# 10 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 11 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 12 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 13 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
# 14 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 15 "data/maps/LilycoveCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 16 "data/maps/LilycoveCity/scripts.pory"
	end
# 17 "data/maps/LilycoveCity/scripts.pory"

# 18 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnLoad:
# 19 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_SetWailmerMetatiles
# 20 "data/maps/LilycoveCity/scripts.pory"
	end
# 21 "data/maps/LilycoveCity/scripts.pory"

# 22 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SetWailmerMetatiles::
# 23 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 12, METATILE_Lilycove_Wailmer0, TRUE
# 24 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 12, METATILE_Lilycove_Wailmer1, TRUE
# 25 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 13, METATILE_Lilycove_Wailmer2, TRUE
# 26 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 13, METATILE_Lilycove_Wailmer3, TRUE
# 27 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 14, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 28 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 14, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 29 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 76, 15, METATILE_Lilycove_Wailmer2, TRUE
# 30 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 15, METATILE_Lilycove_Wailmer3, TRUE
# 31 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 16, METATILE_Lilycove_Wailmer0_Alt, TRUE
# 32 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 16, METATILE_Lilycove_Wailmer1_Alt, TRUE
# 33 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 77, 17, METATILE_Lilycove_Wailmer2, TRUE
# 34 "data/maps/LilycoveCity/scripts.pory"
	setmetatile 78, 17, METATILE_Lilycove_Wailmer3, TRUE
# 35 "data/maps/LilycoveCity/scripts.pory"
	return
# 36 "data/maps/LilycoveCity/scripts.pory"

# 37 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BerryGentleman::
# 38 "data/maps/LilycoveCity/scripts.pory"
	lock
# 39 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 40 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 41 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 42 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 43 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 44 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 45 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 46 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 47 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 48 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 49 "data/maps/LilycoveCity/scripts.pory"
	release
# 50 "data/maps/LilycoveCity/scripts.pory"
	end
# 51 "data/maps/LilycoveCity/scripts.pory"

# 52 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 53 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 54 "data/maps/LilycoveCity/scripts.pory"
	release
# 55 "data/maps/LilycoveCity/scripts.pory"
	end
# 56 "data/maps/LilycoveCity/scripts.pory"

# 57 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man3::
# 58 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallInTown, MSGBOX_NPC
# 59 "data/maps/LilycoveCity/scripts.pory"
	end
# 60 "data/maps/LilycoveCity/scripts.pory"

# 61 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Girl::
# 62 "data/maps/LilycoveCity/scripts.pory"
	lock
# 63 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 64 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_GirlAquaGone
# 65 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_StrangeCaveInCove, MSGBOX_DEFAULT
# 66 "data/maps/LilycoveCity/scripts.pory"
	release
# 67 "data/maps/LilycoveCity/scripts.pory"
	end
# 68 "data/maps/LilycoveCity/scripts.pory"

# 69 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_GirlAquaGone::
# 70 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GoingToMoveDeleterForHMs, MSGBOX_DEFAULT
# 71 "data/maps/LilycoveCity/scripts.pory"
	release
# 72 "data/maps/LilycoveCity/scripts.pory"
	end
# 73 "data/maps/LilycoveCity/scripts.pory"

# 74 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RichBoy::
# 75 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImFromKanto, MSGBOX_NPC
# 76 "data/maps/LilycoveCity/scripts.pory"
	end
# 77 "data/maps/LilycoveCity/scripts.pory"

# 78 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2::
# 79 "data/maps/LilycoveCity/scripts.pory"
	lock
# 80 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 81 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Sailor2AquaGone
# 82 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaBeenTrainingWailmer, MSGBOX_DEFAULT
# 83 "data/maps/LilycoveCity/scripts.pory"
	release
# 84 "data/maps/LilycoveCity/scripts.pory"
	end
# 85 "data/maps/LilycoveCity/scripts.pory"

# 86 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor2AquaGone::
# 87 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeonePuntedTeamAquaOut, MSGBOX_DEFAULT
# 88 "data/maps/LilycoveCity/scripts.pory"
	release
# 89 "data/maps/LilycoveCity/scripts.pory"
	end
# 90 "data/maps/LilycoveCity/scripts.pory"

# 91 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2::
# 92 "data/maps/LilycoveCity/scripts.pory"
	lock
# 93 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 94 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_TEAM_AQUA_ESCAPED_IN_SUBMARINE, LilycoveCity_EventScript_Woman2AquaGone
# 95 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SomeoneStoleMyPokemon, MSGBOX_DEFAULT
# 96 "data/maps/LilycoveCity/scripts.pory"
	release
# 97 "data/maps/LilycoveCity/scripts.pory"
	end
# 98 "data/maps/LilycoveCity/scripts.pory"

# 99 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman2AquaGone::
# 100 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MissingPokemonCameBack, MSGBOX_DEFAULT
# 101 "data/maps/LilycoveCity/scripts.pory"
	release
# 102 "data/maps/LilycoveCity/scripts.pory"
	end
# 103 "data/maps/LilycoveCity/scripts.pory"

# 104 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man2::
# 105 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ImArtDealer, MSGBOX_NPC
# 106 "data/maps/LilycoveCity/scripts.pory"
	end
# 107 "data/maps/LilycoveCity/scripts.pory"

# 108 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 109 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 110 "data/maps/LilycoveCity/scripts.pory"
	end
# 111 "data/maps/LilycoveCity/scripts.pory"

# 112 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 113 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 114 "data/maps/LilycoveCity/scripts.pory"
	end
# 115 "data/maps/LilycoveCity/scripts.pory"

# 116 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2::
# 117 "data/maps/LilycoveCity/scripts.pory"
	lock
# 118 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 119 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_EventScript_ExpertM2AquaGone
# 120 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaRenovatedCavern, MSGBOX_DEFAULT
# 121 "data/maps/LilycoveCity/scripts.pory"
	release
# 122 "data/maps/LilycoveCity/scripts.pory"
	end
# 123 "data/maps/LilycoveCity/scripts.pory"

# 124 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM2AquaGone::
# 125 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TeamAquaLotGoneForGood, MSGBOX_DEFAULT
# 126 "data/maps/LilycoveCity/scripts.pory"
	release
# 127 "data/maps/LilycoveCity/scripts.pory"
	end
# 128 "data/maps/LilycoveCity/scripts.pory"

# 129 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Sailor1::
# 130 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HeardTowerCalledSkyPillar, MSGBOX_NPC
# 131 "data/maps/LilycoveCity/scripts.pory"
	end
# 132 "data/maps/LilycoveCity/scripts.pory"

# 133 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_FatMan::
# 134 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SawTallTowerOnRoute131, MSGBOX_NPC
# 135 "data/maps/LilycoveCity/scripts.pory"
	end
# 136 "data/maps/LilycoveCity/scripts.pory"

# 137 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Man1::
# 138 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 139 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_JustArrivedAndSawRarePokemon, MSGBOX_NPC
# 140 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_MAN_1, Common_Movement_FaceOriginalDirection
# 141 "data/maps/LilycoveCity/scripts.pory"
	end
# 142 "data/maps/LilycoveCity/scripts.pory"

# 143 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Woman1::
# 144 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 145 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HoneymoonVowToSeeRarePokemon, MSGBOX_NPC
# 146 "data/maps/LilycoveCity/scripts.pory"
	applymovement LOCALID_WOMAN_1, Common_Movement_FaceOriginalDirection
# 147 "data/maps/LilycoveCity/scripts.pory"
	end
# 148 "data/maps/LilycoveCity/scripts.pory"

# 149 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CitySign::
# 150 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_CitySign, MSGBOX_SIGN
# 151 "data/maps/LilycoveCity/scripts.pory"
	end
# 152 "data/maps/LilycoveCity/scripts.pory"

# 153 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ContestHallSign::
# 154 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ContestHallSign, MSGBOX_SIGN
# 155 "data/maps/LilycoveCity/scripts.pory"
	end
# 156 "data/maps/LilycoveCity/scripts.pory"

# 157 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MotelSign::
# 158 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MotelSign, MSGBOX_SIGN
# 159 "data/maps/LilycoveCity/scripts.pory"
	end
# 160 "data/maps/LilycoveCity/scripts.pory"

# 161 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSign::
# 162 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 163 "data/maps/LilycoveCity/scripts.pory"
	specialvar VAR_0x8004, CountPlayerMuseumPaintings
# 164 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_0x8004
# 165 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_MuseumSignNoPaintings
# 166 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSignPlayersExhibit, MSGBOX_DEFAULT
# 167 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 168 "data/maps/LilycoveCity/scripts.pory"
	end
# 169 "data/maps/LilycoveCity/scripts.pory"

# 170 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MuseumSignNoPaintings::
# 171 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MuseumSign, MSGBOX_DEFAULT
# 172 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 173 "data/maps/LilycoveCity/scripts.pory"
	end
# 174 "data/maps/LilycoveCity/scripts.pory"

# 175 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSign::
# 176 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 177 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_HarborSignFerryReady
# 178 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSignUnderConstruction, MSGBOX_DEFAULT
# 179 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 180 "data/maps/LilycoveCity/scripts.pory"
	end
# 181 "data/maps/LilycoveCity/scripts.pory"

# 182 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HarborSignFerryReady::
# 183 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_HarborSign, MSGBOX_DEFAULT
# 184 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 185 "data/maps/LilycoveCity/scripts.pory"
	end
# 186 "data/maps/LilycoveCity/scripts.pory"

# 187 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_TrainerFanClubSign::
# 188 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_TrainerFanClubSign, MSGBOX_SIGN
# 189 "data/maps/LilycoveCity/scripts.pory"
	end
# 190 "data/maps/LilycoveCity/scripts.pory"

# 191 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DepartmentStoreSign::
# 192 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DepartmentStoreSign, MSGBOX_SIGN
# 193 "data/maps/LilycoveCity/scripts.pory"
	end
# 194 "data/maps/LilycoveCity/scripts.pory"

# 195 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MoveDeletersHouseSign::
# 196 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MoveDeletersHouseSign, MSGBOX_SIGN
# 197 "data/maps/LilycoveCity/scripts.pory"
	end
# 198 "data/maps/LilycoveCity/scripts.pory"

# 199 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_WailmerTrainerGrunt::
# 200 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 201 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_MET_WAILMER_TRAINER, LilycoveCity_EventScript_MetWailmerTrainer
# 202 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 203 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FacePlayer
# 204 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_GetLostMessingUpTraining, MSGBOX_DEFAULT
# 206 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 207 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 208 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_WAILMER_TRAINER
# 209 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 210 "data/maps/LilycoveCity/scripts.pory"
	end
# 211 "data/maps/LilycoveCity/scripts.pory"

# 212 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MetWailmerTrainer::
# 213 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_WailmerLeapOutOfWater, MSGBOX_DEFAULT
# 214 "data/maps/LilycoveCity/scripts.pory"
	releaseall
# 215 "data/maps/LilycoveCity/scripts.pory"
	end
# 216 "data/maps/LilycoveCity/scripts.pory"

# 217 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt1::
# 218 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MovedLootIntoHideoutToday, MSGBOX_NPC
# 219 "data/maps/LilycoveCity/scripts.pory"
	end
# 220 "data/maps/LilycoveCity/scripts.pory"

# 221 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt2::
# 222 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ChanceToDoBigThings, MSGBOX_NPC
# 223 "data/maps/LilycoveCity/scripts.pory"
	end
# 224 "data/maps/LilycoveCity/scripts.pory"

# 225 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt3::
# 226 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DontGoNearCaveInCove, MSGBOX_NPC
# 227 "data/maps/LilycoveCity/scripts.pory"
	end
# 228 "data/maps/LilycoveCity/scripts.pory"

# 229 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_AquaGrunt4::
# 230 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_IfWorldBecomesOurs, MSGBOX_NPC
# 231 "data/maps/LilycoveCity/scripts.pory"
	end
# 232 "data/maps/LilycoveCity/scripts.pory"

# 233 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Rival::
# 234 "data/maps/LilycoveCity/scripts.pory"
	lock
# 235 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 236 "data/maps/LilycoveCity/scripts.pory"
	checkplayergender
# 237 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LilycoveCity_EventScript_May
# 238 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LilycoveCity_EventScript_Brendan
# 239 "data/maps/LilycoveCity/scripts.pory"
	end
# 240 "data/maps/LilycoveCity/scripts.pory"

# 241 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_May::
# 242 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 243 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattleAgain
# 244 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_MayAskToBattle
# 245 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineMayBattle
# 246 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayWontBeBeaten, MSGBOX_DEFAULT
# 247 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 248 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleMayTreecko
# 249 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleMayTorchic
# 250 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleMayMudkip
# 251 "data/maps/LilycoveCity/scripts.pory"
	end
# 252 "data/maps/LilycoveCity/scripts.pory"

# 253 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattleAgain::
# 254 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayBattleMe, MSGBOX_YESNO
# 255 "data/maps/LilycoveCity/scripts.pory"
	return
# 256 "data/maps/LilycoveCity/scripts.pory"

# 257 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayAskToBattle::
# 258 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayShoppingLetsBattle, MSGBOX_YESNO
# 259 "data/maps/LilycoveCity/scripts.pory"
	return
# 260 "data/maps/LilycoveCity/scripts.pory"

# 261 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineMayBattle::
# 262 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 263 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayNotRaisingPokemon, MSGBOX_DEFAULT
# 264 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 265 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 266 "data/maps/LilycoveCity/scripts.pory"
	release
# 267 "data/maps/LilycoveCity/scripts.pory"
	end
# 268 "data/maps/LilycoveCity/scripts.pory"

# 269 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_Brendan::
# 270 "data/maps/LilycoveCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 271 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattleAgain
# 272 "data/maps/LilycoveCity/scripts.pory"
	call_if_unset FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE, LilycoveCity_EventScript_BrendanAskToBattle
# 273 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, LilycoveCity_EventScript_DeclineBrendanBattle
# 274 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanWontBeBeaten, MSGBOX_DEFAULT
# 275 "data/maps/LilycoveCity/scripts.pory"
	switch VAR_STARTER_MON
# 276 "data/maps/LilycoveCity/scripts.pory"
	case 0, LilycoveCity_EventScript_BattleBrendanTreecko
# 277 "data/maps/LilycoveCity/scripts.pory"
	case 1, LilycoveCity_EventScript_BattleBrendanTorchic
# 278 "data/maps/LilycoveCity/scripts.pory"
	case 2, LilycoveCity_EventScript_BattleBrendanMudkip
# 279 "data/maps/LilycoveCity/scripts.pory"
	end
# 280 "data/maps/LilycoveCity/scripts.pory"

# 281 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattleAgain::
# 282 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanBattleMe, MSGBOX_YESNO
# 283 "data/maps/LilycoveCity/scripts.pory"
	return
# 284 "data/maps/LilycoveCity/scripts.pory"

# 285 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanAskToBattle::
# 286 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanShoppingLetsBattle, MSGBOX_YESNO
# 287 "data/maps/LilycoveCity/scripts.pory"
	return
# 288 "data/maps/LilycoveCity/scripts.pory"

# 289 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DeclineBrendanBattle::
# 290 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DECLINED_RIVAL_BATTLE_LILYCOVE
# 291 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanNoConfidence, MSGBOX_DEFAULT
# 292 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 293 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 294 "data/maps/LilycoveCity/scripts.pory"
	release
# 295 "data/maps/LilycoveCity/scripts.pory"
	end
# 296 "data/maps/LilycoveCity/scripts.pory"

# 297 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTreecko::
# 298 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TREECKO, LilycoveCity_Text_MayDefeat
# 299 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 300 "data/maps/LilycoveCity/scripts.pory"
	end
# 301 "data/maps/LilycoveCity/scripts.pory"

# 302 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayTorchic::
# 303 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_TORCHIC, LilycoveCity_Text_MayDefeat
# 304 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 305 "data/maps/LilycoveCity/scripts.pory"
	end
# 306 "data/maps/LilycoveCity/scripts.pory"

# 307 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleMayMudkip::
# 308 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_LILYCOVE_MUDKIP, LilycoveCity_Text_MayDefeat
# 309 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedMay
# 310 "data/maps/LilycoveCity/scripts.pory"
	end
# 311 "data/maps/LilycoveCity/scripts.pory"

# 312 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTreecko::
# 313 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TREECKO, LilycoveCity_Text_BrendanDefeat
# 314 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 315 "data/maps/LilycoveCity/scripts.pory"
	end
# 316 "data/maps/LilycoveCity/scripts.pory"

# 317 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanTorchic::
# 318 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_TORCHIC, LilycoveCity_Text_BrendanDefeat
# 319 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 320 "data/maps/LilycoveCity/scripts.pory"
	end
# 321 "data/maps/LilycoveCity/scripts.pory"

# 322 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BattleBrendanMudkip::
# 323 "data/maps/LilycoveCity/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_LILYCOVE_MUDKIP, LilycoveCity_Text_BrendanDefeat
# 324 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_DefeatedBrendan
# 325 "data/maps/LilycoveCity/scripts.pory"
	end
# 326 "data/maps/LilycoveCity/scripts.pory"

# 327 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedMay::
# 328 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayGoingBackToLittleroot, MSGBOX_DEFAULT
# 329 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 330 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 331 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_MayCollectBadges
# 332 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_MayPokemonLeague
# 333 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
# 334 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
# 335 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 336 "data/maps/LilycoveCity/scripts.pory"
	end
# 337 "data/maps/LilycoveCity/scripts.pory"

# 338 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_CheckFinalBadge::
# 339 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, LilycoveCity_EventScript_HasFinalBadge
# 340 "data/maps/LilycoveCity/scripts.pory"
	return
# 341 "data/maps/LilycoveCity/scripts.pory"

# 342 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_HasFinalBadge::
# 343 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, TRUE
# 344 "data/maps/LilycoveCity/scripts.pory"
	return
# 345 "data/maps/LilycoveCity/scripts.pory"

# 346 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayCollectBadges::
# 347 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToCollectBadges, MSGBOX_DEFAULT
# 348 "data/maps/LilycoveCity/scripts.pory"
	return
# 349 "data/maps/LilycoveCity/scripts.pory"

# 350 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayPokemonLeague::
# 351 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_MayBattleFrontier
# 352 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 353 "data/maps/LilycoveCity/scripts.pory"
	return
# 354 "data/maps/LilycoveCity/scripts.pory"

# 355 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_MayBattleFrontier::
# 356 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_MayYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 357 "data/maps/LilycoveCity/scripts.pory"
	return
# 358 "data/maps/LilycoveCity/scripts.pory"

# 359 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DefeatedBrendan::
# 360 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanGoingBackToLittleroot, MSGBOX_DEFAULT
# 361 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_RESULT, FALSE
# 362 "data/maps/LilycoveCity/scripts.pory"
	call_if_set FLAG_BADGE06_GET, LilycoveCity_EventScript_CheckFinalBadge
# 363 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, LilycoveCity_EventScript_BrendanCollectBadges
# 364 "data/maps/LilycoveCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, LilycoveCity_EventScript_BrendanPokemonLeague
# 365 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 366 "data/maps/LilycoveCity/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_SWABLU_DOLL
# 367 "data/maps/LilycoveCity/scripts.pory"
	goto LilycoveCity_EventScript_RivalFlyAway
# 368 "data/maps/LilycoveCity/scripts.pory"
	end
# 369 "data/maps/LilycoveCity/scripts.pory"

# 370 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanCollectBadges::
# 371 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToCollectBadges, MSGBOX_DEFAULT
# 372 "data/maps/LilycoveCity/scripts.pory"
	return
# 373 "data/maps/LilycoveCity/scripts.pory"

# 374 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanPokemonLeague::
# 375 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, LilycoveCity_EventScript_BrendanBattleFrontier
# 376 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToPokemonLeague, MSGBOX_DEFAULT
# 377 "data/maps/LilycoveCity/scripts.pory"
	return
# 378 "data/maps/LilycoveCity/scripts.pory"

# 379 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_BrendanBattleFrontier::
# 380 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BrendanYouGoingToBattleFrontier, MSGBOX_DEFAULT
# 381 "data/maps/LilycoveCity/scripts.pory"
	return
# 382 "data/maps/LilycoveCity/scripts.pory"

# 383 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_RivalFlyAway::
# 384 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 385 "data/maps/LilycoveCity/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_WalkInPlaceFasterDown
# 386 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 387 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 388 "data/maps/LilycoveCity/scripts.pory"
	setfieldeffectargument 0, 1
# 389 "data/maps/LilycoveCity/scripts.pory"
	dofieldeffect FLDEFF_NPCFLY_OUT
# 390 "data/maps/LilycoveCity/scripts.pory"
	delay 15
# 391 "data/maps/LilycoveCity/scripts.pory"
	removeobject VAR_LAST_TALKED
# 392 "data/maps/LilycoveCity/scripts.pory"
	waitfieldeffect FLDEFF_NPCFLY_OUT
# 393 "data/maps/LilycoveCity/scripts.pory"
	savebgm MUS_DUMMY
# 394 "data/maps/LilycoveCity/scripts.pory"
	fadedefaultbgm
# 395 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_MET_RIVAL_LILYCOVE
# 396 "data/maps/LilycoveCity/scripts.pory"
	release
# 397 "data/maps/LilycoveCity/scripts.pory"
	end
# 398 "data/maps/LilycoveCity/scripts.pory"

# 399 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_SchoolKidM::
# 400 "data/maps/LilycoveCity/scripts.pory"
	lock
# 401 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 402 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_DoYouKnowAboutBerryBlender, MSGBOX_DEFAULT
# 403 "data/maps/LilycoveCity/scripts.pory"
	release
# 404 "data/maps/LilycoveCity/scripts.pory"
	end
# 405 "data/maps/LilycoveCity/scripts.pory"

# 406 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_KnowAboutBerryBlender::
# 407 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_FasterSpinBetterPokeblocks, MSGBOX_DEFAULT
# 408 "data/maps/LilycoveCity/scripts.pory"
	return
# 409 "data/maps/LilycoveCity/scripts.pory"

# 410 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_DontKnowAboutBerryBlender::
# 411 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_ExplainBerryBlender, MSGBOX_DEFAULT
# 412 "data/maps/LilycoveCity/scripts.pory"
	return
# 413 "data/maps/LilycoveCity/scripts.pory"

# 414 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayShoppingLetsBattle:
# 415 "data/maps/LilycoveCity/scripts.pory"
	.string "LYRA: Oh, hey?\n"
# 416 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, are you shopping, too?\p"
# 417 "data/maps/LilycoveCity/scripts.pory"
	.string "I bought a whole bunch of DOLLS and\n"
# 418 "data/maps/LilycoveCity/scripts.pory"
	.string "POSTERS.\p"
# 419 "data/maps/LilycoveCity/scripts.pory"
	.string "Of course, I've also caught a lot of\n"
# 420 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON, and I'm raising them\l"
# 421 "data/maps/LilycoveCity/scripts.pory"
	.string "properly, too.\p"
# 422 "data/maps/LilycoveCity/scripts.pory"
	.string "Actually, I'm more worried if you're\n"
# 423 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON properly, {PLAYER}{KUN}.\p"
# 424 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll battle with you, so you can show\n"
# 425 "data/maps/LilycoveCity/scripts.pory"
	.string "me your POKéMON, {PLAYER}{KUN}.$"
# 426 "data/maps/LilycoveCity/scripts.pory"

# 427 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayNotRaisingPokemon:
# 428 "data/maps/LilycoveCity/scripts.pory"
	.string "LYRA: Oh, why? {PLAYER}{KUN}, haven't you\n"
# 429 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising your POKéMON?\p"
# 430 "data/maps/LilycoveCity/scripts.pory"
	.string "That's not a very good showing as a\n"
# 431 "data/maps/LilycoveCity/scripts.pory"
	.string "TRAINER…$"
# 432 "data/maps/LilycoveCity/scripts.pory"

# 433 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayBattleMe:
# 434 "data/maps/LilycoveCity/scripts.pory"
	.string "LYRA: Come on, battle with me, so I can\n"
# 435 "data/maps/LilycoveCity/scripts.pory"
	.string "check out your POKéMON!$"
# 436 "data/maps/LilycoveCity/scripts.pory"

# 437 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayWontBeBeaten:
# 438 "data/maps/LilycoveCity/scripts.pory"
	.string "LYRA: The POKéMON I raised won't be\n"
# 439 "data/maps/LilycoveCity/scripts.pory"
	.string "beaten by your POKéMON, {PLAYER}{KUN}!$"
# 440 "data/maps/LilycoveCity/scripts.pory"

# 441 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayDefeat:
# 442 "data/maps/LilycoveCity/scripts.pory"
	.string "… … … … … … … …\p"
# 443 "data/maps/LilycoveCity/scripts.pory"
	.string "I remember the battle I had with you,\n"
# 444 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, on ROUTE 103.\p"
# 445 "data/maps/LilycoveCity/scripts.pory"
	.string "That battle helped you become this\n"
# 446 "data/maps/LilycoveCity/scripts.pory"
	.string "strong, {PLAYER}{KUN}, didn't it?$"
# 447 "data/maps/LilycoveCity/scripts.pory"

# 448 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayGoingBackToLittleroot:
# 449 "data/maps/LilycoveCity/scripts.pory"
	.string "LYRA: I'm thinking of going back to\n"
# 450 "data/maps/LilycoveCity/scripts.pory"
	.string "LITTLEROOT soon.\p"
# 451 "data/maps/LilycoveCity/scripts.pory"
	.string "I've caught a decent group of POKéMON,\n"
# 452 "data/maps/LilycoveCity/scripts.pory"
	.string "and my POKéDEX is coming along, so\l"
# 453 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going home to show my dad.$"
# 454 "data/maps/LilycoveCity/scripts.pory"

# 455 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToCollectBadges:
# 456 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 457 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 458 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 459 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, while you're collecting BADGES,\n"
# 460 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, I'm going to work on my\l"
# 461 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. I'll complete it before you!\p"
# 462 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 463 "data/maps/LilycoveCity/scripts.pory"

# 464 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToPokemonLeague:
# 465 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 466 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the POKéMON LEAGUE\n"
# 467 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 468 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 469 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 470 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 471 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 472 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 473 "data/maps/LilycoveCity/scripts.pory"

# 474 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MayYouGoingToBattleFrontier:
# 475 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}{KUN}, what are you going to do?\p"
# 476 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 477 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 478 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 479 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 480 "data/maps/LilycoveCity/scripts.pory"
	.string "I might've lost to you in battling,\n"
# 481 "data/maps/LilycoveCity/scripts.pory"
	.string "but I'll finish my POKéDEX before you!\p"
# 482 "data/maps/LilycoveCity/scripts.pory"
	.string "See you!$"
# 483 "data/maps/LilycoveCity/scripts.pory"

# 484 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanShoppingLetsBattle:
# 485 "data/maps/LilycoveCity/scripts.pory"
	.string "ETHAN: Oh, hey, it's {PLAYER}.\p"
# 486 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm running an errand for my dad.\n"
# 487 "data/maps/LilycoveCity/scripts.pory"
	.string "No, I'm not buying any DOLLS.\p"
# 488 "data/maps/LilycoveCity/scripts.pory"
	.string "Anyways, it's been a while.\p"
# 489 "data/maps/LilycoveCity/scripts.pory"
	.string "Want to have a battle to see who's been\n"
# 490 "data/maps/LilycoveCity/scripts.pory"
	.string "raising POKéMON better?$"
# 491 "data/maps/LilycoveCity/scripts.pory"

# 492 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanNoConfidence:
# 493 "data/maps/LilycoveCity/scripts.pory"
	.string "ETHAN: Oh, what's the matter?\n"
# 494 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't have the confidence?$"
# 495 "data/maps/LilycoveCity/scripts.pory"

# 496 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanBattleMe:
# 497 "data/maps/LilycoveCity/scripts.pory"
	.string "ETHAN: Want to battle to see who's\n"
# 498 "data/maps/LilycoveCity/scripts.pory"
	.string "been raising POKéMON better?$"
# 499 "data/maps/LilycoveCity/scripts.pory"

# 500 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanWontBeBeaten:
# 501 "data/maps/LilycoveCity/scripts.pory"
	.string "ETHAN: Aww, but you know I'm not\n"
# 502 "data/maps/LilycoveCity/scripts.pory"
	.string "going to lose to no {PLAYER}.$"
# 503 "data/maps/LilycoveCity/scripts.pory"

# 504 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanDefeat:
# 505 "data/maps/LilycoveCity/scripts.pory"
	.string "Humph…\n"
# 506 "data/maps/LilycoveCity/scripts.pory"
	.string "You've done a lot of raising.\p"
# 507 "data/maps/LilycoveCity/scripts.pory"
	.string "That stings a bit--I had a head start\n"
# 508 "data/maps/LilycoveCity/scripts.pory"
	.string "on you as a TRAINER…$"
# 509 "data/maps/LilycoveCity/scripts.pory"

# 510 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanGoingBackToLittleroot:
# 511 "data/maps/LilycoveCity/scripts.pory"
	.string "ETHAN: I…\n"
# 512 "data/maps/LilycoveCity/scripts.pory"
	.string "I plan on going home to LITTLEROOT.\p"
# 513 "data/maps/LilycoveCity/scripts.pory"
	.string "You know I'm helping out my dad on his\n"
# 514 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX. It's coming together pretty\l"
# 515 "data/maps/LilycoveCity/scripts.pory"
	.string "decently, so I should go show him.$"
# 516 "data/maps/LilycoveCity/scripts.pory"

# 517 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToCollectBadges:
# 518 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 519 "data/maps/LilycoveCity/scripts.pory"
	.string "Collect all the GYM BADGES and take\n"
# 520 "data/maps/LilycoveCity/scripts.pory"
	.string "the POKéMON LEAGUE challenge?\p"
# 521 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I'll do that, too…\p"
# 522 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 523 "data/maps/LilycoveCity/scripts.pory"

# 524 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToPokemonLeague:
# 525 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 526 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, are you\n"
# 527 "data/maps/LilycoveCity/scripts.pory"
	.string "taking the POKéMON LEAGUE challenge?\p"
# 528 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, even me--if I trained my POKéMON\n"
# 529 "data/maps/LilycoveCity/scripts.pory"
	.string "a bit more, I should be stronger than\l"
# 530 "data/maps/LilycoveCity/scripts.pory"
	.string "you, {PLAYER}.\p"
# 531 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 532 "data/maps/LilycoveCity/scripts.pory"

# 533 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_BrendanYouGoingToBattleFrontier:
# 534 "data/maps/LilycoveCity/scripts.pory"
	.string "{PLAYER}, what are you going to do?\p"
# 535 "data/maps/LilycoveCity/scripts.pory"
	.string "Are you taking the BATTLE FRONTIER\n"
# 536 "data/maps/LilycoveCity/scripts.pory"
	.string "challenge?\p"
# 537 "data/maps/LilycoveCity/scripts.pory"
	.string "Or, are you going to complete your\n"
# 538 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéDEX?\p"
# 539 "data/maps/LilycoveCity/scripts.pory"
	.string "Since you're that strong, you should\n"
# 540 "data/maps/LilycoveCity/scripts.pory"
	.string "consider the BATTLE FRONTIER.\p"
# 541 "data/maps/LilycoveCity/scripts.pory"
	.string "Heh, if I train my POKéMON a bit more,\n"
# 542 "data/maps/LilycoveCity/scripts.pory"
	.string "I'll get stronger than you, {PLAYER}.\p"
# 543 "data/maps/LilycoveCity/scripts.pory"
	.string "Maybe I should go to the BATTLE\n"
# 544 "data/maps/LilycoveCity/scripts.pory"
	.string "FRONTIER.\p"
# 545 "data/maps/LilycoveCity/scripts.pory"
	.string "Well, anyway, hang in there!$"
# 546 "data/maps/LilycoveCity/scripts.pory"

# 547 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MovedLootIntoHideoutToday:
# 548 "data/maps/LilycoveCity/scripts.pory"
	.string "Fufufu…\p"
# 549 "data/maps/LilycoveCity/scripts.pory"
	.string "We moved more loot into our secret\n"
# 550 "data/maps/LilycoveCity/scripts.pory"
	.string "HIDEOUT today…\p"
# 551 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 552 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 553 "data/maps/LilycoveCity/scripts.pory"

# 554 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ChanceToDoBigThings:
# 555 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm just a GRUNT, so I don't know what\n"
# 556 "data/maps/LilycoveCity/scripts.pory"
	.string "the BOSS is thinking…\p"
# 557 "data/maps/LilycoveCity/scripts.pory"
	.string "But being on TEAM AQUA, I know I'll get\n"
# 558 "data/maps/LilycoveCity/scripts.pory"
	.string "the chance to do big things!\p"
# 559 "data/maps/LilycoveCity/scripts.pory"
	.string "Wh-who are you?!\n"
# 560 "data/maps/LilycoveCity/scripts.pory"
	.string "I was just talking to myself!$"
# 561 "data/maps/LilycoveCity/scripts.pory"

# 562 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DontGoNearCaveInCove:
# 563 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you!\p"
# 564 "data/maps/LilycoveCity/scripts.pory"
	.string "Don't go near the cave in the cove!\p"
# 565 "data/maps/LilycoveCity/scripts.pory"
	.string "Why? You don't need a reason why!\n"
# 566 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an adult, so you just listen to me!$"
# 567 "data/maps/LilycoveCity/scripts.pory"

# 568 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_IfWorldBecomesOurs:
# 569 "data/maps/LilycoveCity/scripts.pory"
	.string "If this whole wide world becomes ours,\n"
# 570 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's, it will be a happier\l"
# 571 "data/maps/LilycoveCity/scripts.pory"
	.string "place for POKéMON, too.$"
# 572 "data/maps/LilycoveCity/scripts.pory"

# 573 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_WailmerLeapOutOfWater:
# 574 "data/maps/LilycoveCity/scripts.pory"
	.string "There! WAILMER!\n"
# 575 "data/maps/LilycoveCity/scripts.pory"
	.string "Leap out of the water now!$"
# 576 "data/maps/LilycoveCity/scripts.pory"

# 577 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GetLostMessingUpTraining:
# 578 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? What do you want?\p"
# 579 "data/maps/LilycoveCity/scripts.pory"
	.string "You're messing up our training,\n"
# 580 "data/maps/LilycoveCity/scripts.pory"
	.string "so can you, like, get lost?$"
# 581 "data/maps/LilycoveCity/scripts.pory"

# 582 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallInTown:
# 583 "data/maps/LilycoveCity/scripts.pory"
	.string "There's a POKéMON BATTLE TENT\n"
# 584 "data/maps/LilycoveCity/scripts.pory"
	.string "right in this here town. \p"
# 585 "data/maps/LilycoveCity/scripts.pory"
	.string "It's so large, it's really more\n"
# 586 "data/maps/LilycoveCity/scripts.pory"
	.string "of a stadium. CONTESTS have moved\p"
# 587 "data/maps/LilycoveCity/scripts.pory"
	.string "to VERDANTURF TOWN!$"
# 588 "data/maps/LilycoveCity/scripts.pory"

# 589 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_StrangeCaveInCove:
# 590 "data/maps/LilycoveCity/scripts.pory"
	.string "Have you seen that strange cave in\n"
# 591 "data/maps/LilycoveCity/scripts.pory"
	.string "the cove at the edge of town?$"
# 592 "data/maps/LilycoveCity/scripts.pory"

# 593 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_GoingToMoveDeleterForHMs:
# 594 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm going to teach my POKéMON some new\n"
# 595 "data/maps/LilycoveCity/scripts.pory"
	.string "moves for entering the BATTLE TENT.\p"
# 596 "data/maps/LilycoveCity/scripts.pory"
	.string "So, I'm going to see the MOVE DELETER\n"
# 597 "data/maps/LilycoveCity/scripts.pory"
	.string "and make it forget HM moves.$"
# 598 "data/maps/LilycoveCity/scripts.pory"

# 599 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImFromKanto:
# 600 "data/maps/LilycoveCity/scripts.pory"
	.string "I came from KANTO.\p"
# 601 "data/maps/LilycoveCity/scripts.pory"
	.string "The HOENN region is beautiful with\n"
# 602 "data/maps/LilycoveCity/scripts.pory"
	.string "all its water and verdant nature.\p"
# 603 "data/maps/LilycoveCity/scripts.pory"
	.string "Hunh? Wait a second…\p"
# 604 "data/maps/LilycoveCity/scripts.pory"
	.string "Could there be rare POKéMON that live\n"
# 605 "data/maps/LilycoveCity/scripts.pory"
	.string "only in this area?$"
# 606 "data/maps/LilycoveCity/scripts.pory"

# 607 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaBeenTrainingWailmer:
# 608 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA's been training their\n"
# 609 "data/maps/LilycoveCity/scripts.pory"
	.string "WAILMER in the cove.\p"
# 610 "data/maps/LilycoveCity/scripts.pory"
	.string "We SAILORS can't get our boats out\n"
# 611 "data/maps/LilycoveCity/scripts.pory"
	.string "to sea with them in the way!$"
# 612 "data/maps/LilycoveCity/scripts.pory"

# 613 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeonePuntedTeamAquaOut:
# 614 "data/maps/LilycoveCity/scripts.pory"
	.string "Ahoy, did you know?\p"
# 615 "data/maps/LilycoveCity/scripts.pory"
	.string "Someone punted TEAM AQUA out of\n"
# 616 "data/maps/LilycoveCity/scripts.pory"
	.string "the way for us!\p"
# 617 "data/maps/LilycoveCity/scripts.pory"
	.string "That got the WAILMER out of the cove,\n"
# 618 "data/maps/LilycoveCity/scripts.pory"
	.string "so we can get our boats out again.$"
# 619 "data/maps/LilycoveCity/scripts.pory"

# 620 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SomeoneStoleMyPokemon:
# 621 "data/maps/LilycoveCity/scripts.pory"
	.string "I was taking a relaxing snooze at the\n"
# 622 "data/maps/LilycoveCity/scripts.pory"
	.string "seaside inn to the sound of waves…\p"
# 623 "data/maps/LilycoveCity/scripts.pory"
	.string "When someone stole my POKéMON!\p"
# 624 "data/maps/LilycoveCity/scripts.pory"
	.string "Who's the abductor?\n"
# 625 "data/maps/LilycoveCity/scripts.pory"
	.string "TEAM AQUA? Is it TEAM AQUA?$"
# 626 "data/maps/LilycoveCity/scripts.pory"

# 627 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MissingPokemonCameBack:
# 628 "data/maps/LilycoveCity/scripts.pory"
	.string "My missing POKéMON…\n"
# 629 "data/maps/LilycoveCity/scripts.pory"
	.string "It came back without me noticing!$"
# 630 "data/maps/LilycoveCity/scripts.pory"

# 631 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ImArtDealer:
# 632 "data/maps/LilycoveCity/scripts.pory"
	.string "I'm an ART DEALER.\p"
# 633 "data/maps/LilycoveCity/scripts.pory"
	.string "I am a buyer and seller of fine art,\n"
# 634 "data/maps/LilycoveCity/scripts.pory"
	.string "especially paintings.\p"
# 635 "data/maps/LilycoveCity/scripts.pory"
	.string "I've heard that the MUSEUM here has\n"
# 636 "data/maps/LilycoveCity/scripts.pory"
	.string "magnificent works on exhibit…$"
# 637 "data/maps/LilycoveCity/scripts.pory"

# 638 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 639 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 640 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 641 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 642 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 643 "data/maps/LilycoveCity/scripts.pory"

# 644 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 645 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 646 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 647 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 648 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"
# 649 "data/maps/LilycoveCity/scripts.pory"

# 650 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaRenovatedCavern:
# 651 "data/maps/LilycoveCity/scripts.pory"
	.string "Hm, you know of the peculiar cavern\n"
# 652 "data/maps/LilycoveCity/scripts.pory"
	.string "in this cove?\p"
# 653 "data/maps/LilycoveCity/scripts.pory"
	.string "That had been a natural formation,\n"
# 654 "data/maps/LilycoveCity/scripts.pory"
	.string "but then that TEAM AQUA lot came\l"
# 655 "data/maps/LilycoveCity/scripts.pory"
	.string "along and made their renovations.\p"
# 656 "data/maps/LilycoveCity/scripts.pory"
	.string "They call themselves\n"
# 657 "data/maps/LilycoveCity/scripts.pory"
	.string "the “nature-loving TEAM AQUA”!\p"
# 658 "data/maps/LilycoveCity/scripts.pory"
	.string "But what they do and what they say\n"
# 659 "data/maps/LilycoveCity/scripts.pory"
	.string "don't match at all!$"
# 660 "data/maps/LilycoveCity/scripts.pory"

# 661 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TeamAquaLotGoneForGood:
# 662 "data/maps/LilycoveCity/scripts.pory"
	.string "That cave in the cove…\p"
# 663 "data/maps/LilycoveCity/scripts.pory"
	.string "I didn't notice it right away,\n"
# 664 "data/maps/LilycoveCity/scripts.pory"
	.string "but it's completely empty now.\p"
# 665 "data/maps/LilycoveCity/scripts.pory"
	.string "That TEAM AQUA lot, they must\n"
# 666 "data/maps/LilycoveCity/scripts.pory"
	.string "have gone away for good.$"
# 667 "data/maps/LilycoveCity/scripts.pory"

# 668 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_CitySign:
# 669 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY\p"
# 670 "data/maps/LilycoveCity/scripts.pory"
	.string "“Where the land ends and the\n"
# 671 "data/maps/LilycoveCity/scripts.pory"
	.string "sea begins.”$"
# 672 "data/maps/LilycoveCity/scripts.pory"

# 673 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ContestHallSign:
# 674 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE BATTLE TENT\n"
# 675 "data/maps/LilycoveCity/scripts.pory"
	.string "“The biggest in HOENN!”$"
# 676 "data/maps/LilycoveCity/scripts.pory"

# 677 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MotelSign:
# 678 "data/maps/LilycoveCity/scripts.pory"
	.string "COVE LILY MOTEL\p"
# 679 "data/maps/LilycoveCity/scripts.pory"
	.string "“Remember us as COVE LILY of\n"
# 680 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE.”$"
# 681 "data/maps/LilycoveCity/scripts.pory"

# 682 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSign:
# 683 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 684 "data/maps/LilycoveCity/scripts.pory"
	.string "“POKéMON Masterpiece Collection\n"
# 685 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 686 "data/maps/LilycoveCity/scripts.pory"

# 687 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MuseumSignPlayersExhibit:
# 688 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE MUSEUM\p"
# 689 "data/maps/LilycoveCity/scripts.pory"
	.string "“{PLAYER}'s POKéMON Collection\n"
# 690 "data/maps/LilycoveCity/scripts.pory"
	.string "on exhibit!”$"
# 691 "data/maps/LilycoveCity/scripts.pory"

# 692 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSignUnderConstruction:
# 693 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 694 "data/maps/LilycoveCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 695 "data/maps/LilycoveCity/scripts.pory"
	.string "construction in SLATEPORT CITY.\p"
# 696 "data/maps/LilycoveCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 697 "data/maps/LilycoveCity/scripts.pory"
	.string "shortly.”$"
# 698 "data/maps/LilycoveCity/scripts.pory"

# 699 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HarborSign:
# 700 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE CITY HARBOR\p"
# 701 "data/maps/LilycoveCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 702 "data/maps/LilycoveCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 703 "data/maps/LilycoveCity/scripts.pory"

# 704 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_TrainerFanClubSign:
# 705 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON TRAINER FAN CLUB\p"
# 706 "data/maps/LilycoveCity/scripts.pory"
	.string "The names of TRAINERS are scribbled\n"
# 707 "data/maps/LilycoveCity/scripts.pory"
	.string "all over the sign…$"
# 708 "data/maps/LilycoveCity/scripts.pory"

# 709 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DepartmentStoreSign:
# 710 "data/maps/LilycoveCity/scripts.pory"
	.string "LILYCOVE DEPARTMENT STORE\p"
# 711 "data/maps/LilycoveCity/scripts.pory"
	.string "“Overflowing with great merchandise\n"
# 712 "data/maps/LilycoveCity/scripts.pory"
	.string "and excitement!\p"
# 713 "data/maps/LilycoveCity/scripts.pory"
	.string "“A great place to find that something\n"
# 714 "data/maps/LilycoveCity/scripts.pory"
	.string "you need!”$"
# 715 "data/maps/LilycoveCity/scripts.pory"

# 716 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_MoveDeletersHouseSign:
# 717 "data/maps/LilycoveCity/scripts.pory"
	.string "MOVE DELETER'S HOUSE\p"
# 718 "data/maps/LilycoveCity/scripts.pory"
	.string "“Unwanted POKéMON moves deleted.”$"
# 719 "data/maps/LilycoveCity/scripts.pory"

# 720 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_DoYouKnowAboutBerryBlender:
# 721 "data/maps/LilycoveCity/scripts.pory"
	.string "Did you know? POKéMON CONTESTS used\n"
# 722 "data/maps/LilycoveCity/scripts.pory"
	.string "to be held here in LILYCOVE CITY.\p"
# 723 "data/maps/LilycoveCity/scripts.pory"
	.string "Now they're popular in VERDANTURF TOWN,\n"
# 724 "data/maps/LilycoveCity/scripts.pory"
	.string "and a huge BATTLE TENT opened here!$"
# 725 "data/maps/LilycoveCity/scripts.pory"

# 726 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_FasterSpinBetterPokeblocks:
# 727 "data/maps/LilycoveCity/scripts.pory"
	.string "People have to work together to get it\n"
# 728 "data/maps/LilycoveCity/scripts.pory"
	.string "to spin faster.\p"
# 729 "data/maps/LilycoveCity/scripts.pory"
	.string "The faster you can make it spin, the\n"
# 730 "data/maps/LilycoveCity/scripts.pory"
	.string "better {POKEBLOCK}S you can get, I've heard.$"
# 731 "data/maps/LilycoveCity/scripts.pory"

# 732 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_ExplainBerryBlender:
# 733 "data/maps/LilycoveCity/scripts.pory"
	.string "It's used for making a kind of candy\n"
# 734 "data/maps/LilycoveCity/scripts.pory"
	.string "called a {POKEBLOCK}.\p"
# 735 "data/maps/LilycoveCity/scripts.pory"
	.string "If you give a good {POKEBLOCK} to a POKéMON,\n"
# 736 "data/maps/LilycoveCity/scripts.pory"
	.string "its condition will improve by a lot.$"
# 737 "data/maps/LilycoveCity/scripts.pory"

# 738 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HeardTowerCalledSkyPillar:
# 739 "data/maps/LilycoveCity/scripts.pory"
	.string "I heard there's a tower somewhere out\n"
# 740 "data/maps/LilycoveCity/scripts.pory"
	.string "on the sea routes.\p"
# 741 "data/maps/LilycoveCity/scripts.pory"
	.string "It's called the SKY PILLAR, I hear.$"
# 742 "data/maps/LilycoveCity/scripts.pory"

# 743 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SawTallTowerOnRoute131:
# 744 "data/maps/LilycoveCity/scripts.pory"
	.string "I saw this tall tower somewhere\n"
# 745 "data/maps/LilycoveCity/scripts.pory"
	.string "around ROUTE 131.\p"
# 746 "data/maps/LilycoveCity/scripts.pory"
	.string "Could that possibly be…?$"
# 747 "data/maps/LilycoveCity/scripts.pory"

# 748 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_JustArrivedAndSawRarePokemon:
# 749 "data/maps/LilycoveCity/scripts.pory"
	.string "We just arrived here on our\n"
# 750 "data/maps/LilycoveCity/scripts.pory"
	.string "honeymoon vacation.\p"
# 751 "data/maps/LilycoveCity/scripts.pory"
	.string "We happened to see a DRAGON-type\n"
# 752 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON flying way up in the sky.\p"
# 753 "data/maps/LilycoveCity/scripts.pory"
	.string "Do cool POKéMON like that live in\n"
# 754 "data/maps/LilycoveCity/scripts.pory"
	.string "the HOENN region?$"
# 755 "data/maps/LilycoveCity/scripts.pory"

# 756 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_HoneymoonVowToSeeRarePokemon:
# 757 "data/maps/LilycoveCity/scripts.pory"
	.string "On our honeymoon, we vowed to see as\n"
# 758 "data/maps/LilycoveCity/scripts.pory"
	.string "many rare POKéMON as we can.\p"
# 759 "data/maps/LilycoveCity/scripts.pory"
	.string "So we were delighted to see a rare\n"
# 760 "data/maps/LilycoveCity/scripts.pory"
	.string "POKéMON as soon as we arrived.\p"
# 761 "data/maps/LilycoveCity/scripts.pory"
	.string "I mean, we are totally happy!$"

LilycoveCity_EventScript_ScubaSafariResetSailor::
# 768 "data/maps/LilycoveCity/scripts.pory"
	lock
# 769 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_ScubaSafariResetSailor_Text_0
# 770 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 771 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 772 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_ExclamationMark
# 773 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 774 "data/maps/LilycoveCity/scripts.pory"
	delay 10
# 775 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 776 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_ScubaSafariResetSailor_Text_1
# 777 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 778 "data/maps/LilycoveCity/scripts.pory"
	delay 30
# 779 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_ScubaSafariResetSailor_Text_2
# 780 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 781 "data/maps/LilycoveCity/scripts.pory"
	showmoneybox 0, 0
# 782 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_ScubaSafariResetSailor_Text_3, MSGBOX_YESNO
# 784 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_EventScript_ScubaSafariResetSailor_2
# 796 "data/maps/LilycoveCity/scripts.pory"
	checkmoney 2000
# 797 "data/maps/LilycoveCity/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq LilycoveCity_EventScript_ScubaSafariResetSailor_6
# 808 "data/maps/LilycoveCity/scripts.pory"
	playse SE_SHOP
# 809 "data/maps/LilycoveCity/scripts.pory"
	removemoney 2000
# 810 "data/maps/LilycoveCity/scripts.pory"
	updatemoneybox
# 811 "data/maps/LilycoveCity/scripts.pory"
	delay 50
# 812 "data/maps/LilycoveCity/scripts.pory"
	hidemoneybox
# 814 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_ScubaSafariResetSailor_Text_6
# 815 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 816 "data/maps/LilycoveCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 817 "data/maps/LilycoveCity/scripts.pory"
	delay 60
# 818 "data/maps/LilycoveCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 819 "data/maps/LilycoveCity/scripts.pory"
	delay 20
# 820 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_ScubaSafariResetSailor_Text_7
# 821 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 823 "data/maps/LilycoveCity/scripts.pory"
	setvar VAR_DIVING_MINIGAME_HIGH_SCORE, 0
# 826 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_FaceOriginalDirection
# 827 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_ScubaSafariResetSailor_2:
# 786 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_ScubaSafariResetSailor_Text_4
# 787 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 788 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_FaceOriginalDirection
# 789 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 790 "data/maps/LilycoveCity/scripts.pory"
	hidemoneybox
# 791 "data/maps/LilycoveCity/scripts.pory"
	release
	end

LilycoveCity_EventScript_ScubaSafariResetSailor_6:
# 799 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_ScubaSafariResetSailor_Text_5
# 800 "data/maps/LilycoveCity/scripts.pory"
	closemessage
# 801 "data/maps/LilycoveCity/scripts.pory"
	applymovement 23, Common_Movement_FaceOriginalDirection
# 802 "data/maps/LilycoveCity/scripts.pory"
	waitmovement 0
# 803 "data/maps/LilycoveCity/scripts.pory"
	hidemoneybox
# 804 "data/maps/LilycoveCity/scripts.pory"
	release
	end


LilycoveCity_EventScript_ScubaSafariResetSailor_Text_0:
# 769 "data/maps/LilycoveCity/scripts.pory"
	.string "Ehehe... come out, little POKéMON... don't\n"
	.string "you wanna help me make money?$"

LilycoveCity_EventScript_ScubaSafariResetSailor_Text_1:
# 776 "data/maps/LilycoveCity/scripts.pory"
	.string "Hey, you! This isn't any of your\n"
	.string "busines- ahem, I mean, what do you\l"
	.string "need? How can I get you to leave?$"

LilycoveCity_EventScript_ScubaSafariResetSailor_Text_2:
# 779 "data/maps/LilycoveCity/scripts.pory"
	.string "I got it! You seem like the adventurous\n"
	.string "sort, I'm sure you've tried the SCUBA\l"
	.string "SAFARI in PACIFIDLOG TOWN. I'm the\l"
	.string "brother of the SAILOR who runs it!$"

LilycoveCity_EventScript_ScubaSafariResetSailor_Text_3:
# 782 "data/maps/LilycoveCity/scripts.pory"
	.string "How about I send him a message to reset\n"
	.string "your high score, eh? Then you can get\l"
	.string "those sweet, sweet high score rewards?\l"
	.string "I'll only charge you a bit!$"

LilycoveCity_EventScript_ScubaSafariResetSailor_Text_4:
# 786 "data/maps/LilycoveCity/scripts.pory"
	.string "Ah, don't waste my time! Get out of here\n"
	.string "then!$"

LilycoveCity_EventScript_ScubaSafariResetSailor_Text_5:
# 799 "data/maps/LilycoveCity/scripts.pory"
	.string "Mmm... no, not enough money to be worth\n"
	.string "it. Come back with ¥2000 for me!$"

LilycoveCity_EventScript_ScubaSafariResetSailor_Text_6:
# 814 "data/maps/LilycoveCity/scripts.pory"
	.string "Thanks, little buddy. I'll call my\n"
	.string "brother now.$"

LilycoveCity_EventScript_ScubaSafariResetSailor_Text_7:
# 820 "data/maps/LilycoveCity/scripts.pory"
	.string "Alright, it's done. Thanks for the cash!\n"
	.string "Now scram!$"

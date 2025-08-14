KaptaraIsland_East_MapScripts::
# 2 "data/maps/KaptaraIsland_East/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/KaptaraIsland_East/scripts.pory"
	goto_if_set FLAG_CHIMERA_WEATHER_ACTIVE, KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
# 9 "data/maps/KaptaraIsland_East/scripts.pory"
	random 2
# 10 "data/maps/KaptaraIsland_East/scripts.pory"
	switch VAR_RESULT
# 11 "data/maps/KaptaraIsland_East/scripts.pory"
	case 0, KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 12 "data/maps/KaptaraIsland_East/scripts.pory"
	case 1, KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
	return

KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/KaptaraIsland_East/scripts.pory"
	setweather WEATHER_ABNORMAL
	return

KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 11 "data/maps/KaptaraIsland_East/scripts.pory"
	setweather WEATHER_RAIN
	return

KaptaraIsland_East_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 12 "data/maps/KaptaraIsland_East/scripts.pory"
	setweather WEATHER_SUNNY
	return


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Yesui::
# 21 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_YESUI, KaptaraIsland_Text_Trainer_KaptaraIsland_YesuiIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_YesuiDefeat
# 22 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Yesui_Text_0
# 23 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Yesui_Text_1
# 24 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 25 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_RuinManiac::
# 39 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 40 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 41 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_RuinManiac_Text_0
# 42 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_RuinManiac_Text_1
# 43 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 44 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Issa::
# 50 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_ISSA, KaptaraIsland_Text_Trainer_KaptaraIsland_IssaIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_IssaDefeat
# 51 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Issa_Text_0
# 52 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Issa_Text_1
# 53 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 54 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Grigor::
# 68 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_GRIGOR, KaptaraIsland_Text_Trainer_KaptaraIsland_GrigorIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_GrigorDefeat
# 69 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Grigor_Text_0
# 70 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Grigor_Text_1
# 71 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 72 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Manto::
# 86 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_MANTO, KaptaraIsland_Text_Trainer_KaptaraIsland_MantoIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_MantoDefeat
# 87 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Manto_Text_0
# 88 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Manto_Text_1
# 89 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 90 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Stan::
# 104 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_STAN, KaptaraIsland_Text_Trainer_KaptaraIsland_StanIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_StanDefeat
# 105 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Stan_Text_0
# 106 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Stan_Text_1
# 107 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 108 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Horatio::
# 122 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_HORATIO, KaptaraIsland_Text_Trainer_KaptaraIsland_HoratioIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_HoratioDefeat
# 123 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Horatio_Text_0
# 124 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Horatio_Text_1
# 125 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 126 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_BugCatcher::
# 140 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 141 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 142 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BugCatcher_Text_0
# 143 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BugCatcher_Text_1
# 144 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 145 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Edith::
# 151 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_single TRAINER_KAPTARAISLAND_EDITH, KaptaraIsland_Text_Trainer_KaptaraIsland_EdithIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_EdithDefeat
# 152 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Edith_Text_0
# 153 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Edith_Text_1
# 154 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 155 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_YoungsterNeedsMoonStone::
# 169 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 170 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 171 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_0
# 174 "data/maps/KaptaraIsland_East/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_MOON_STONE_YOUNGSTER
# 175 "data/maps/KaptaraIsland_East/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq KaptaraIsland_EventScript_YoungsterNeedsMoonStone_2
# 184 "data/maps/KaptaraIsland_East/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_MOON_STONE_YOUNGSTER
# 185 "data/maps/KaptaraIsland_East/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq KaptaraIsland_EventScript_YoungsterNeedsMoonStone_5
# 194 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_3
# 195 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 197 "data/maps/KaptaraIsland_East/scripts.pory"
	checkitem ITEM_MOON_STONE
# 198 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 30
# 200 "data/maps/KaptaraIsland_East/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KaptaraIsland_EventScript_YoungsterNeedsMoonStone_8
# 219 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_0
# 220 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_6
# 221 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
KaptaraIsland_EventScript_YoungsterNeedsMoonStone_4:
# 224 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_2:
# 177 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_1
# 178 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 179 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_5:
# 187 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_2
# 188 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 189 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 20
# 190 "data/maps/KaptaraIsland_East/scripts.pory"
	startquest QUEST_MOON_STONE_YOUNGSTER
	goto KaptaraIsland_EventScript_YoungsterNeedsMoonStone_4

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_8:
# 202 "data/maps/KaptaraIsland_East/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 203 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_0
# 204 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_4
# 205 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 206 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 30
# 207 "data/maps/KaptaraIsland_East/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_QUESTION
# 208 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_0
# 209 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_5
# 210 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 211 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 212 "data/maps/KaptaraIsland_East/scripts.pory"
	giveitem ITEM_EXP_CANDY_L
# 213 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 214 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 20
# 215 "data/maps/KaptaraIsland_East/scripts.pory"
	completequest QUEST_MOON_STONE_YOUNGSTER
	goto KaptaraIsland_EventScript_YoungsterNeedsMoonStone_4


KaptaraIsland_EventScript_BraviaryHisui::
# 230 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 231 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 232 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BraviaryHisui_Text_0
# 233 "data/maps/KaptaraIsland_East/scripts.pory"
	playmoncry SPECIES_BRAVIARY_HISUIAN, CRY_MODE_NORMAL
# 234 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BraviaryHisui_Text_1
# 235 "data/maps/KaptaraIsland_East/scripts.pory"
	waitmoncry
# 236 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 237 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_BirdKeeperWithFly::
# 243 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 244 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 245 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BirdKeeperWithFly_Text_0
# 247 "data/maps/KaptaraIsland_East/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLY, KaptaraIsland_EventScript_BirdKeeperWithFly_2
# 256 "data/maps/KaptaraIsland_East/scripts.pory"
	emote VAR_LAST_TALKED, EMOTE_EXCLAM
# 257 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BirdKeeperWithFly_Text_2, MSGBOX_YESNO
# 258 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 259 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 260 "data/maps/KaptaraIsland_East/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq KaptaraIsland_EventScript_BirdKeeperWithFly_5
# 270 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_no_intro TRAINER_KAPTARAISLAND_FLYGUY, KaptaraIsland_Text_FlyGuyDefeat
# 272 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 273 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BirdKeeperWithFly_Text_0
# 274 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BirdKeeperWithFly_Text_4
# 275 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 276 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 277 "data/maps/KaptaraIsland_East/scripts.pory"
	giveitem ITEM_HM_FLY
# 278 "data/maps/KaptaraIsland_East/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLY
# 279 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 280 "data/maps/KaptaraIsland_East/scripts.pory"
	delay 5
# 281 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BirdKeeperWithFly_Text_0
# 282 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BirdKeeperWithFly_Text_5
# 283 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 286 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end

KaptaraIsland_EventScript_BirdKeeperWithFly_2:
# 249 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BirdKeeperWithFly_Text_1
# 250 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 251 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end

KaptaraIsland_EventScript_BirdKeeperWithFly_5:
# 262 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_BirdKeeperWithFly_Text_0
# 263 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_BirdKeeperWithFly_Text_3
# 264 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 265 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Rose::
# 297 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_double TRAINER_KAPTARAISLAND_JON_AND_ROSE, KaptaraIsland_Text_Trainer_KaptaraIsland_RoseIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_RoseDefeat, KaptaraIsland_Text_Trainer_KaptaraIsland_RoseNotEnoughMons
# 298 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Rose_Text_0
# 299 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Rose_Text_1
# 300 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 301 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Jon::
# 319 "data/maps/KaptaraIsland_East/scripts.pory"
	trainerbattle_double TRAINER_KAPTARAISLAND_JON_AND_ROSE, KaptaraIsland_Text_Trainer_KaptaraIsland_JonIntro, KaptaraIsland_Text_Trainer_KaptaraIsland_JonDefeat, KaptaraIsland_Text_Trainer_KaptaraIsland_JonNotEnoughMons
# 320 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_Trainer_KaptaraIsland_Jon_Text_0
# 321 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_Trainer_KaptaraIsland_Jon_Text_1
# 322 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 323 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_LassWanderingAround::
# 341 "data/maps/KaptaraIsland_East/scripts.pory"
	lock
# 342 "data/maps/KaptaraIsland_East/scripts.pory"
	faceplayer
# 343 "data/maps/KaptaraIsland_East/scripts.pory"
	speakername KaptaraIsland_EventScript_LassWanderingAround_Text_0
# 344 "data/maps/KaptaraIsland_East/scripts.pory"
	msgbox KaptaraIsland_EventScript_LassWanderingAround_Text_1
# 345 "data/maps/KaptaraIsland_East/scripts.pory"
	closemessage
# 346 "data/maps/KaptaraIsland_East/scripts.pory"
	release
	end


KaptaraIsland_EventScript_Trainer_KaptaraIsland_Yesui_Text_0:
# 22 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Yesui$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Yesui_Text_1:
# 23 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "There used to be wild Litleo and Pyroar\n"
	.string "all over the Ilios Region, but most were\l"
	.string "hunted down centuries ago. There are\l"
	.string "only a few pockets of them left in the\l"
	.string "wild.$"

KaptaraIsland_EventScript_RuinManiac_Text_0:
# 41 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Ruin Maniac$"

KaptaraIsland_EventScript_RuinManiac_Text_1:
# 42 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "There are broken fragments of an\n"
	.string "ancient civilization's buildings all over\l"
	.string "this side of the island. It seems like\l"
	.string "the whole island was once covered in\l"
	.string "palaces, like those remaining in Palati\l"
	.string "City. I wonder what happened to them...$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Issa_Text_0:
# 51 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Issa$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Issa_Text_1:
# 52 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Some people say that the winding trails\n"
	.string "of this forest look like the tentacles\l"
	.string "of an Octillery. I guess Octillery was\l"
	.string "painted on a lot of ancient walls here,\l"
	.string "too.$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Grigor_Text_0:
# 69 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Grigor$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Grigor_Text_1:
# 70 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Art has been practiced on this island\n"
	.string "for thousands of years. I am simply\l"
	.string "continuing this tradition!$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Manto_Text_0:
# 87 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Manto$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Manto_Text_1:
# 88 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "It's easy to lose your way in these\n"
	.string "twisting paths. Make sure to remember\l"
	.string "your way back to Palati City.$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Stan_Text_0:
# 105 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Stan$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Stan_Text_1:
# 106 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I'm growing my collection of Pokémon. I\n"
	.string "hear this island holds some secrets...$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Horatio_Text_0:
# 123 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Horatio$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Horatio_Text_1:
# 124 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I took the day off work to come out\n"
	.string "here and explore. There's value in\l"
	.string "touching grass.$"

KaptaraIsland_EventScript_BugCatcher_Text_0:
# 142 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Bug Catcher$"

KaptaraIsland_EventScript_BugCatcher_Text_1:
# 143 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "The weather is always crazy here! It's\n"
	.string "either pouring rain or bright and sunny!$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Edith_Text_0:
# 152 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Edith$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Edith_Text_1:
# 153 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "They say the person deep in the woods\n"
	.string "is looking for a challenge. Maybe you\l"
	.string "could be that challenge!$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_0:
# 171 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Youngster$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_1:
# 177 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Wigglytuff might not look that strong,\n"
	.string "but it can pack a serious punch. My\l"
	.string "friends will be so jealous!$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_2:
# 187 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I'm digging around here for a Moon\n"
	.string "Stone. My only Pokémon is a Jigglypuff,\l"
	.string "and all my friends say it looks weak... I\l"
	.string "thought its evolution might look\l"
	.string "stronger!\p"
	.string "Hey, you're a traveler, right? Could you\n"
	.string "bring me a {COLOR GREEN}Moon Stone{COLOR DARK_GRAY}?$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_3:
# 194 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "It's you! Did you find a Moon Stone?$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_4:
# 204 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Hey, that's it! Let me give it to\n"
	.string "Jigglypuff... aaaand...$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_5:
# 209 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "What? A Wigglytuff? It's just a\n"
	.string "Jigglypuff but taller!\p"
	.string "Well, maybe my friends will stop making\n"
	.string "fun of me, now that my Pokémon is taller\l"
	.string "than them. Here, take this!$"

KaptaraIsland_EventScript_YoungsterNeedsMoonStone_Text_6:
# 220 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Aw, you don't have a Moon Stone. Please,\n"
	.string "I need to evolve my Jigglypuff!\p"
	.string "Bring me a {COLOR GREEN}Moon Stone{COLOR DARK_GRAY}, and I'll give you\n"
	.string "something I found in these ruins!$"

KaptaraIsland_EventScript_BraviaryHisui_Text_0:
# 232 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Braviary$"

KaptaraIsland_EventScript_BraviaryHisui_Text_1:
# 234 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Kraww!$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_0:
# 245 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Fly Guy$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_1:
# 249 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Are you enjoying Flying around the\n"
	.string "region? Of course, you'll need the 7th\l"
	.string "Gym Badge to use it, but it's one of the\l"
	.string "most helpful tools I've got!$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_2:
# 257 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Hey, someone found me! I'm the {COLOR GREEN}Fly Guy{COLOR DARK_GRAY}\n"
	.string "of Ilios - I give people the {COLOR GREEN}Fly HM{COLOR DARK_GRAY}!\p"
	.string "Oh, but first, you'll have to earn it. Are\n"
	.string "you ready for a battle?$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_3:
# 263 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Ehehe, need some time first, hm? Come\n"
	.string "back when you're ready for a fight. I'll\l"
	.string "give you the {COLOR GREEN}Fly HM{COLOR DARK_GRAY} as a reward!$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_4:
# 274 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Ehehe, you clipped my wings and brought\n"
	.string "me down! You've earned this.$"

KaptaraIsland_EventScript_BirdKeeperWithFly_Text_5:
# 282 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "After you've earned the {COLOR GREEN}Palati City Gym\n"
	.string "Badge{COLOR DARK_GRAY}, you can use Fly to travel around\l"
	.string "the Ilios Region. Neat, huh?$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Rose_Text_0:
# 298 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Rose$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Rose_Text_1:
# 299 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I wonder what's deeper in the woods.$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Jon_Text_0:
# 320 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Jon$"

KaptaraIsland_EventScript_Trainer_KaptaraIsland_Jon_Text_1:
# 321 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I hear there's a sunken ruin deep in the\n"
	.string "woods. Is it around here?$"

KaptaraIsland_EventScript_LassWanderingAround_Text_0:
# 343 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Lass$"

KaptaraIsland_EventScript_LassWanderingAround_Text_1:
# 344 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Have you heard about the Pokémon\n"
	.string "coming back from extinction? I wonder\l"
	.string "if the ancient people of this island\l"
	.string "lived alongside them before they went\l"
	.string "extinct.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_YesuiIntro::
# 28 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Go, my shining lions!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_YesuiDefeat::
# 32 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "How could they lose?!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_IssaIntro::
# 57 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "This rough terrain is perfect for\n"
	.string "training!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_IssaDefeat::
# 61 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Aw... It was because of the terrain!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_GrigorIntro::
# 75 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I'm painting the natural beauty of this\n"
	.string "island.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_GrigorDefeat::
# 79 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I'll have to paint your Pokémon, too.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_MantoIntro::
# 93 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Uh oh, I think I'm lost!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_MantoDefeat::
# 97 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "My poor Pokémon are lost, too!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_StanIntro::
# 111 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Ooo, a fresh team of Pokémon! Let's see\n"
	.string "what you've got!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_StanDefeat::
# 115 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "What a collection!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_HoratioIntro::
# 129 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I haven't spent time in nature in years.\n"
	.string "Come, help me have fun!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_HoratioDefeat::
# 133 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Battles are quite the thrill!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_EdithIntro::
# 158 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "There's someone who stays deep in\n"
	.string "these woods for days on end. I wonder\l"
	.string "if I can find them.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_EdithDefeat::
# 162 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "I'll need to heal my Pokémon first.$"

KaptaraIsland_Text_FlyGuyDefeat::
# 290 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Woah, you blew me away!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_RoseIntro::
# 304 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "My husband says there's something past\n"
	.string "this rock, but I'm not sure I believe\l"
	.string "him.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_RoseDefeat::
# 308 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "We better heal out Pokémon before we\n"
	.string "move on.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_RoseNotEnoughMons::
# 312 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "It doesn't look like you have enough\n"
	.string "Pokémon for a double battle.$"

KaptaraIsland_Text_Trainer_KaptaraIsland_JonIntro::
# 326 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Come on honey, we need to get past this\n"
	.string "rock! Huh? A Trainer?$"

KaptaraIsland_Text_Trainer_KaptaraIsland_JonDefeat::
# 330 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "Just a little further!$"

KaptaraIsland_Text_Trainer_KaptaraIsland_JonNotEnoughMons::
# 334 "data/maps/KaptaraIsland_East/scripts.pory"
	.string "It doesn't look like you have enough\n"
	.string "Pokémon for a double battle.$"

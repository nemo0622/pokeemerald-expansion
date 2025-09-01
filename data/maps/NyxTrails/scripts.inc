NyxTrails_MapScripts::
# 2 "data/maps/NyxTrails/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NyxTrails_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

NyxTrails_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_1
# 4 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_2
# 5 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_3
# 6 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_4
# 7 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_5
# 8 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_6
# 9 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_7
# 10 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_8
# 11 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_9
# 12 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_10
# 13 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_11
# 14 "data/maps/NyxTrails/scripts.pory"
	clearflag FLAG_HIDE_OVERWORLD_ENCOUNTER_FLAG_12
# 15 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 14, ENCOUNTER_LAND
# 16 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 15, ENCOUNTER_LAND
# 17 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 16, ENCOUNTER_LAND
# 18 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 17, ENCOUNTER_LAND
# 19 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 18, ENCOUNTER_LAND
# 20 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 19, ENCOUNTER_LAND
# 21 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 20, ENCOUNTER_LAND
# 22 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 21, ENCOUNTER_LAND
# 23 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 22, ENCOUNTER_LAND
# 24 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 23, ENCOUNTER_LAND
# 25 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 24, ENCOUNTER_LAND
# 26 "data/maps/NyxTrails/scripts.pory"
	setobjectaswildencounter 25, ENCOUNTER_LAND
	return


NyxTrails_EventScript_FatMan::
# 32 "data/maps/NyxTrails/scripts.pory"
	lock
# 33 "data/maps/NyxTrails/scripts.pory"
	faceplayer
# 34 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_FatMan_Text_0
# 35 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_FatMan_Text_1
# 36 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 37 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_Trainer_NyxTrails_Harry::
# 43 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_HARRY, NyxTrails_Text_Trainer_NyxTrails_HarryIntro, NyxTrails_Text_Trainer_NyxTrails_HarryDefeat
# 44 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Harry_Text_0
# 45 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Harry_Text_1
# 46 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 47 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_Trainer_NyxTrails_Brienne::
# 61 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_BRIENNE, NyxTrails_Text_Trainer_NyxTrails_BrienneIntro, NyxTrails_Text_Trainer_NyxTrails_BrienneDefeat
# 62 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Brienne_Text_0
# 63 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Brienne_Text_1
# 64 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 65 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_Trainer_NyxTrails_Samwell::
# 79 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_SAMWELL, NyxTrails_Text_Trainer_NyxTrails_SamwellIntro, NyxTrails_Text_Trainer_NyxTrails_SamwellDefeat
# 80 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Samwell_Text_0
# 81 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Samwell_Text_1
# 82 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 83 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_Trainer_NyxTrails_Adria::
# 97 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_ADRIA, NyxTrails_Text_Trainer_NyxTrails_AdriaIntro, NyxTrails_Text_Trainer_NyxTrails_AdriaDefeat
# 98 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Adria_Text_0
# 99 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Adria_Text_1
# 100 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 101 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_Trainer_NyxTrails_Grunt1::
# 115 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_GRUNT1, NyxTrails_Text_Trainer_NyxTrails_Grunt1Intro, NyxTrails_Text_Trainer_NyxTrails_Grunt1Defeat
# 116 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Grunt1_Text_0
# 117 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Grunt1_Text_1
# 118 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 119 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_Trainer_NyxTrails_Grunt2::
# 133 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_GRUNT2, NyxTrails_Text_Trainer_NyxTrails_Grunt2Intro, NyxTrails_Text_Trainer_NyxTrails_Grunt2Defeat
# 134 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Grunt1_Text_0
# 135 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Grunt2_Text_0
# 136 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 137 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_Trainer_NyxTrails_Grunt3::
# 151 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_GRUNT3, NyxTrails_Text_Trainer_NyxTrails_Grunt3Intro, NyxTrails_Text_Trainer_NyxTrails_Grunt3Defeat
# 152 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Grunt1_Text_0
# 153 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Grunt3_Text_0
# 154 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 155 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_Trainer_NyxTrails_Grunt4::
# 169 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_GRUNT4, NyxTrails_Text_Trainer_NyxTrails_Grunt4Intro, NyxTrails_Text_Trainer_NyxTrails_Grunt4Defeat
# 170 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Grunt1_Text_0
# 171 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Grunt4_Text_0
# 172 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 173 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_OldManFung::
# 187 "data/maps/NyxTrails/scripts.pory"
	lock
# 188 "data/maps/NyxTrails/scripts.pory"
	faceplayer
# 189 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_OldManFung_Text_0
# 190 "data/maps/NyxTrails/scripts.pory"
	goto_if_set FLAG_GOT_FIRE_BLAST_FROM_FUNG, NyxTrails_EventScript_OldManFung_2
# 197 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_OldManFung_Text_2
# 198 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 199 "data/maps/NyxTrails/scripts.pory"
	delay 5
# 200 "data/maps/NyxTrails/scripts.pory"
	giveitem ITEM_TM_FIRE_BLAST
# 201 "data/maps/NyxTrails/scripts.pory"
	setflag FLAG_GOT_FIRE_BLAST_FROM_FUNG
# 202 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 203 "data/maps/NyxTrails/scripts.pory"
	delay 5
# 204 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_OldManFung_Text_0
# 205 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_OldManFung_Text_3
# 206 "data/maps/NyxTrails/scripts.pory"
	closemessage
NyxTrails_EventScript_OldManFung_1:
# 208 "data/maps/NyxTrails/scripts.pory"
	release
	end

NyxTrails_EventScript_OldManFung_2:
# 192 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_OldManFung_Text_1
# 193 "data/maps/NyxTrails/scripts.pory"
	closemessage
	goto NyxTrails_EventScript_OldManFung_1


NyxTrails_EventScript_Trainer_NyxTrails_Grunt5::
# 214 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_GRUNT5, NyxTrails_Text_Trainer_NyxTrails_Grunt5Intro, NyxTrails_Text_Trainer_NyxTrails_Grunt5Defeat
# 215 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Grunt1_Text_0
# 216 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Grunt5_Text_0
# 217 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 218 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_Trainer_NyxTrails_Grunt6::
# 232 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_GRUNT6, NyxTrails_Text_Trainer_NyxTrails_Grunt6Intro, NyxTrails_Text_Trainer_NyxTrails_Grunt6Defeat
# 233 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Grunt1_Text_0
# 234 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Grunt6_Text_0
# 235 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 236 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_Trainer_NyxTrails_Grunt7::
# 250 "data/maps/NyxTrails/scripts.pory"
	trainerbattle_single TRAINER_NYXTRAILS_GRUNT7, NyxTrails_Text_Trainer_NyxTrails_Grunt7Intro, NyxTrails_Text_Trainer_NyxTrails_Grunt7Defeat
# 251 "data/maps/NyxTrails/scripts.pory"
	speakername NyxTrails_EventScript_Trainer_NyxTrails_Grunt1_Text_0
# 252 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_Trainer_NyxTrails_Grunt7_Text_0
# 253 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 254 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_DirectionSign::
# 268 "data/maps/NyxTrails/scripts.pory"
	lock
# 269 "data/maps/NyxTrails/scripts.pory"
	msgbox NyxTrails_EventScript_DirectionSign_Text_0
# 270 "data/maps/NyxTrails/scripts.pory"
	closemessage
# 271 "data/maps/NyxTrails/scripts.pory"
	release
	end


NyxTrails_EventScript_FatMan_Text_0:
# 34 "data/maps/NyxTrails/scripts.pory"
	.string "Scared Man$"

NyxTrails_EventScript_FatMan_Text_1:
# 35 "data/maps/NyxTrails/scripts.pory"
	.string "Uhm... I think these woods are crawling\n"
	.string "with Team Chimera grunts. We should\l"
	.string "probably get out of here...$"

NyxTrails_EventScript_Trainer_NyxTrails_Harry_Text_0:
# 44 "data/maps/NyxTrails/scripts.pory"
	.string "Harry$"

NyxTrails_EventScript_Trainer_NyxTrails_Harry_Text_1:
# 45 "data/maps/NyxTrails/scripts.pory"
	.string "I'm supposed to make sure no more Team\n"
	.string "Chimera members get through to their\l"
	.string "Hideout.$"

NyxTrails_EventScript_Trainer_NyxTrails_Brienne_Text_0:
# 62 "data/maps/NyxTrails/scripts.pory"
	.string "Brienne$"

NyxTrails_EventScript_Trainer_NyxTrails_Brienne_Text_1:
# 63 "data/maps/NyxTrails/scripts.pory"
	.string "Areios Town was a tiny hamlet, but that\n"
	.string "doesn't make Team Chimera's actions any\l"
	.string "less horrible. A lot of good people lost\l"
	.string "their homes because of them...$"

NyxTrails_EventScript_Trainer_NyxTrails_Samwell_Text_0:
# 80 "data/maps/NyxTrails/scripts.pory"
	.string "Samwell$"

NyxTrails_EventScript_Trainer_NyxTrails_Samwell_Text_1:
# 81 "data/maps/NyxTrails/scripts.pory"
	.string "The Nyx Trails have always been an\n"
	.string "undeveloped, desolate place, but this\l"
	.string "is worse than I thought. I wonder how\l"
	.string "many Pokémon Team Chimera displaced as\l"
	.string "they slashed through the forest.$"

NyxTrails_EventScript_Trainer_NyxTrails_Adria_Text_0:
# 98 "data/maps/NyxTrails/scripts.pory"
	.string "Adria$"

NyxTrails_EventScript_Trainer_NyxTrails_Adria_Text_1:
# 99 "data/maps/NyxTrails/scripts.pory"
	.string "A lot of Trainers have been shying away\n"
	.string "from fighting Team Chimera. Not me,\l"
	.string "though.$"

NyxTrails_EventScript_Trainer_NyxTrails_Grunt1_Text_0:
# 116 "data/maps/NyxTrails/scripts.pory"
	.string "Chimera Grunt$"

NyxTrails_EventScript_Trainer_NyxTrails_Grunt1_Text_1:
# 117 "data/maps/NyxTrails/scripts.pory"
	.string "There's a lot of stronger Grunts\n"
	.string "further ahead. You'd better watch out!$"

NyxTrails_EventScript_Trainer_NyxTrails_Grunt2_Text_0:
# 135 "data/maps/NyxTrails/scripts.pory"
	.string "Whatever, I don't even care anymore.$"

NyxTrails_EventScript_Trainer_NyxTrails_Grunt3_Text_0:
# 153 "data/maps/NyxTrails/scripts.pory"
	.string "I'm not even embarrassed anymore...\n"
	.string "You're clearly out of our league.$"

NyxTrails_EventScript_Trainer_NyxTrails_Grunt4_Text_0:
# 171 "data/maps/NyxTrails/scripts.pory"
	.string "Wait, can we battle again? I wasn't\n"
	.string "paying attention!$"

NyxTrails_EventScript_OldManFung_Text_0:
# 189 "data/maps/NyxTrails/scripts.pory"
	.string "Old Man Fung$"

NyxTrails_EventScript_OldManFung_Text_1:
# 192 "data/maps/NyxTrails/scripts.pory"
	.string "Thanks for the help, bud. I'll use that\n"
	.string "{COLOR GREEN}Fire Blast{COLOR DARK_GRAY} move to defend myself\l"
	.string "against Team Chimera!$"

NyxTrails_EventScript_OldManFung_Text_2:
# 197 "data/maps/NyxTrails/scripts.pory"
	.string "Finally, a Trainer who isn't Team\n"
	.string "Chimera! Are you here to take them\l"
	.string "down?\p"
	.string "I've been hiding here, working on\n"
	.string "perfecting a move to protect myself.\l"
	.string "You've just inspired me to finish it!\l"
	.string "Here, take this.$"

NyxTrails_EventScript_OldManFung_Text_3:
# 205 "data/maps/NyxTrails/scripts.pory"
	.string "Only a super-powerful move like {COLOR GREEN}Fire\n"
	.string "Blast{COLOR DARK_GRAY} could deter these nasty Grunts!$"

NyxTrails_EventScript_Trainer_NyxTrails_Grunt5_Text_0:
# 216 "data/maps/NyxTrails/scripts.pory"
	.string "Grr... Once I find that old man, I'll\n"
	.string "teach him not to mess with us!$"

NyxTrails_EventScript_Trainer_NyxTrails_Grunt6_Text_0:
# 234 "data/maps/NyxTrails/scripts.pory"
	.string "Argh, at this rate, you'll reach the\n"
	.string "{COLOR RED}Hideout{COLOR DARK_GRAY}...$"

NyxTrails_EventScript_Trainer_NyxTrails_Grunt7_Text_0:
# 252 "data/maps/NyxTrails/scripts.pory"
	.string "No way... {COLOR RED}Kalliope{COLOR DARK_GRAY} will lock me up for this\n"
	.string "loss...$"

NyxTrails_EventScript_DirectionSign_Text_0:
# 269 "data/maps/NyxTrails/scripts.pory"
	.string "The Nyx Trails\n"
	.string "Weak Trainers, Beware!\p"
	.string "{UP_ARROW} Port Pello\n"
	.string "{DOWN_ARROW} Areios Hideout\p"
	.string "Where it says Areios Hideout, the word\n"
	.string "Town is visibly scratched out\l"
	.string "underneath.$"

NyxTrails_Text_Trainer_NyxTrails_HarryIntro::
# 50 "data/maps/NyxTrails/scripts.pory"
	.string "Stop right there! No Team Chimera\n"
	.string "grunts can pass me!$"

NyxTrails_Text_Trainer_NyxTrails_HarryDefeat::
# 54 "data/maps/NyxTrails/scripts.pory"
	.string "Oh, you're innocent, sorry 'bout that.$"

NyxTrails_Text_Trainer_NyxTrails_BrienneIntro::
# 68 "data/maps/NyxTrails/scripts.pory"
	.string "I'm gonna reclaim Areios Town! You'll\n"
	.string "see!$"

NyxTrails_Text_Trainer_NyxTrails_BrienneDefeat::
# 72 "data/maps/NyxTrails/scripts.pory"
	.string "I need a Pokémon Center first!$"

NyxTrails_Text_Trainer_NyxTrails_SamwellIntro::
# 86 "data/maps/NyxTrails/scripts.pory"
	.string "It looks like Team Chimera burned parts\n"
	.string "of the forest as they passed. How evil!$"

NyxTrails_Text_Trainer_NyxTrails_SamwellDefeat::
# 90 "data/maps/NyxTrails/scripts.pory"
	.string "I bet you could stop them!$"

NyxTrails_Text_Trainer_NyxTrails_AdriaIntro::
# 104 "data/maps/NyxTrails/scripts.pory"
	.string "It's {COLOR RED}Chimera Territory{COLOR DARK_GRAY} from here on out.\n"
	.string "Are you sure you're ready?$"

NyxTrails_Text_Trainer_NyxTrails_AdriaDefeat::
# 108 "data/maps/NyxTrails/scripts.pory"
	.string "Ahaha, oh yeah, you're ready!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt1Intro::
# 122 "data/maps/NyxTrails/scripts.pory"
	.string "Intruder alert! You're going down, kid!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt1Defeat::
# 126 "data/maps/NyxTrails/scripts.pory"
	.string "Uh oh, you're trouble...$"

NyxTrails_Text_Trainer_NyxTrails_Grunt2Intro::
# 140 "data/maps/NyxTrails/scripts.pory"
	.string "Woah woah woah, this area is mine!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt2Defeat::
# 144 "data/maps/NyxTrails/scripts.pory"
	.string "Urk...$"

NyxTrails_Text_Trainer_NyxTrails_Grunt3Intro::
# 158 "data/maps/NyxTrails/scripts.pory"
	.string "Hey punk!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt3Defeat::
# 162 "data/maps/NyxTrails/scripts.pory"
	.string "We lost a 2-v-1... That's embarrassing!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt4Intro::
# 176 "data/maps/NyxTrails/scripts.pory"
	.string "We're totally gonna beat you!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt4Defeat::
# 180 "data/maps/NyxTrails/scripts.pory"
	.string "Wait, can we battle again? I wasn't\n"
	.string "paying attention!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt5Intro::
# 221 "data/maps/NyxTrails/scripts.pory"
	.string "Shoot, where'd that old man go?$"

NyxTrails_Text_Trainer_NyxTrails_Grunt5Defeat::
# 225 "data/maps/NyxTrails/scripts.pory"
	.string "I totally lost him!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt6Intro::
# 239 "data/maps/NyxTrails/scripts.pory"
	.string "Hold it! You can't go any further!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt6Defeat::
# 243 "data/maps/NyxTrails/scripts.pory"
	.string "Oh no!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt7Intro::
# 257 "data/maps/NyxTrails/scripts.pory"
	.string "Nobody outside of Team Chimera is\n"
	.string "permitted into {COLOR RED}Areios Hideout{COLOR DARK_GRAY}!$"

NyxTrails_Text_Trainer_NyxTrails_Grunt7Defeat::
# 261 "data/maps/NyxTrails/scripts.pory"
	.string "Urgh, I can't hold you back...$"

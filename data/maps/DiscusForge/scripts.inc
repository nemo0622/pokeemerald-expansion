DiscusForge_MapScripts::
	.byte 0


AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Lana::
# 5 "data/maps/DiscusForge/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_F1_LANA, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_LanaIntro, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_LanaDefeat
# 6 "data/maps/DiscusForge/scripts.pory"
	speakername AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Lana_Text_0
# 7 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Lana_Text_1
# 8 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 9 "data/maps/DiscusForge/scripts.pory"
	release
	end


AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Fraia::
# 23 "data/maps/DiscusForge/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_F1_FRAIA, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_FraiaIntro, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_FraiaDefeat
# 24 "data/maps/DiscusForge/scripts.pory"
	speakername AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Fraia_Text_0
# 25 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Fraia_Text_1
# 26 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 27 "data/maps/DiscusForge/scripts.pory"
	release
	end


AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Umber::
# 41 "data/maps/DiscusForge/scripts.pory"
	trainerbattle_single TRAINER_ACRISIACAVES_F1_UMBER, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_UmberIntro, AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_UmberDefeat
# 42 "data/maps/DiscusForge/scripts.pory"
	speakername AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Umber_Text_0
# 43 "data/maps/DiscusForge/scripts.pory"
	msgbox AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Umber_Text_1
# 44 "data/maps/DiscusForge/scripts.pory"
	closemessage
# 45 "data/maps/DiscusForge/scripts.pory"
	release
	end


AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Lana_Text_0:
# 6 "data/maps/DiscusForge/scripts.pory"
	.string "Lana$"

AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Lana_Text_1:
# 7 "data/maps/DiscusForge/scripts.pory"
	.string "I guess it's not so bad in here. At least\n"
	.string "the Pokémon are cool.$"

AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Fraia_Text_0:
# 24 "data/maps/DiscusForge/scripts.pory"
	.string "Fraia$"

AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Fraia_Text_1:
# 25 "data/maps/DiscusForge/scripts.pory"
	.string "My Steel-type Pokémon should be a good\n"
	.string "counter to Mattaios' Rock-type\l"
	.string "Pokémon!$"

AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Umber_Text_0:
# 42 "data/maps/DiscusForge/scripts.pory"
	.string "Umber$"

AcrisiaCaves_F1_EventScript_Trainer_AcrisiaCaves_F1_Umber_Text_1:
# 43 "data/maps/DiscusForge/scripts.pory"
	.string "I was hoping my Pokémon was magic\n"
	.string "somehow!$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_LanaIntro::
# 12 "data/maps/DiscusForge/scripts.pory"
	.string "This cave is all dusty and icky. Get me\n"
	.string "outta here!$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_LanaDefeat::
# 16 "data/maps/DiscusForge/scripts.pory"
	.string "Argh, nothing is going right!$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_FraiaIntro::
# 30 "data/maps/DiscusForge/scripts.pory"
	.string "I'm gonna challenge Mattaios soon, just\n"
	.string "you wait!$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_FraiaDefeat::
# 34 "data/maps/DiscusForge/scripts.pory"
	.string "I guess I'm not ready yet.$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_UmberIntro::
# 48 "data/maps/DiscusForge/scripts.pory"
	.string "Don't freak out, but... I think my\n"
	.string "Pokémon is from space.$"

AcrisiaCaves_F1_Text_Trainer_AcrisiaCaves_F1_UmberDefeat::
# 52 "data/maps/DiscusForge/scripts.pory"
	.string "I couldn't even win using the powers of\n"
	.string "space?!$"

HauoliOutskirts_MapScripts::
	.byte 0


HauoliOutskirts_Script_SamsonOak::
# 7 "data//maps/HauoliOutskirts/scripts.pory"
	lock
# 8 "data//maps/HauoliOutskirts/scripts.pory"
	faceplayer
# 9 "data//maps/HauoliOutskirts/scripts.pory"
	setspeaker HauoliOutskirts_Script_SamsonOak_Text_0
# 11 "data//maps/HauoliOutskirts/scripts.pory"
	msgbox HauoliOutskirts_Script_SamsonOak_Text_1
# 13 "data//maps/HauoliOutskirts/scripts.pory"
	closemessage
# 14 "data//maps/HauoliOutskirts/scripts.pory"
	release
	end


HauoliOutskirts_Script_SamsonOak_Text_0:
# 9 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Grandpa Samson$"

HauoliOutskirts_Script_SamsonOak_Text_1:
# 11 "data//maps/HauoliOutskirts/scripts.pory"
	.string "Alola, {PLAYER}! How's your Pokémon\n"
	.string "doing?\p"
	.string "This is our 'Ohana memorial. I know you\n"
	.string "spent most of your childhood in Kanto,\l"
	.string "but now that you're home in Alola, you\l"
	.string "should get to know your culture.\p"
	.string "If you have time, you should spend a\n"
	.string "quiet moment here.$"

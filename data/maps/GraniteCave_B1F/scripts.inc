# 1 "data/maps/GraniteCave_B1F/scripts.pory"

# 2 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 3 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 7 "data/maps/GraniteCave_B1F/scripts.pory"

# 8 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 9 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 10 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 11 "data/maps/GraniteCave_B1F/scripts.pory"
	end

GraniteCave_WishingStarHiker::
# 18 "data/maps/GraniteCave_B1F/scripts.pory"
	lock
# 19 "data/maps/GraniteCave_B1F/scripts.pory"
	faceplayer
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	goto_if_unset FLAG_SPOKE_TO_WISHING_STAR_HIKER, GraniteCave_WishingStarHiker_2
# 29 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_WishingStarHiker_Text_1
# 30 "data/maps/GraniteCave_B1F/scripts.pory"
	closemessage
GraniteCave_WishingStarHiker_1:
# 32 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	end

GraniteCave_WishingStarHiker_2:
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_WishingStarHiker_Text_0
# 23 "data/maps/GraniteCave_B1F/scripts.pory"
	closemessage
# 24 "data/maps/GraniteCave_B1F/scripts.pory"
	setflag FLAG_SPOKE_TO_WISHING_STAR_HIKER
# 25 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_WISHING_STAR, 4
	goto GraniteCave_WishingStarHiker_1


GraniteCave_WishingStarHiker_Text_0:
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Oh, another explorer huh?\n"
	.string "I'm looking for rare gems, but I've only\l"
	.string "found these... maybe you can use them?$"

GraniteCave_WishingStarHiker_Text_1:
# 29 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Hope you think those rocks are cool.\n"
	.string "Wishing Stars, huh?$"

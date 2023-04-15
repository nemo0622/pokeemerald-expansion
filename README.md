# Pokémon Sunset Version

A Pokémon ROM Hack based on the [pokeemerald-expansion](https://github.com/rh-hideout/pokeemerald-expansion) project.

## What is Pokémon Sunset?

This ROM Hack takes place in a brand new region, with a whole new adventure ahead of you! By helping people and making an impact on this living, active region, you can rise through the ranks and become a great Pokémon Trainer.

Pokémon Sunset Version is a ROM Hack coming from my love for real-world animals and ecosystems. After creating Pokémon Emerald Seaglass, I really wanted to continue my ROM Hacking journey, but I wanted to get more experimental and tie in my real world interests. As a Biology student in college, I have been constantly inspired by classes and what I've learned, and now I hope to apply this passion in a Pokémon game. I hope this experience helps people to think more about the environment around them! :)

## Feature List
- Day/Night System with FakeRTC
    - Every second in real time is 20 seconds in game
- DexNav functionality, with FLAG_SYS_SHOW_ALL_DEXNAV_MONS to show all DexNav mons without needing to encounter them first
- NPC speaker name shown above text box

## Future Development Plans
STORY PLAN: Takes place on the Sunset Archipelago, a series of islands far to the west, that has recently undergone mass migration events and ecological changes. You play as a college-aged student doing field research at your school's Field Station on the archipelago. Travel around the islands in a semi-open-world setting, helping people and completing tasks to earn Prestige Badges. Filling the Pokédex is the main goal of the game, with some landmarks and Badges being locked behind Pokédex requirements. Many of the trainers you encounter on the islands are other Field Research Students - some islands are inhabited with traditional towns, while others are totally wild aside from other students.

- Feature Branches to merge early:
    - Mugshot system on page (https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Feature-Branches)
    - Consider the Crafting System? (https://github.com/redsquidz/pokeemerald/wiki/Craft-Menu)
    - Town Map port (if decide to get rid of Pokénav) (https://github.com/Voluptua/pokeemerald/tree/expansion-town-map)

- Other features to add early:
    - Cheat code functionality (https://github.com/PCG06/pokeemerald/tree/MysteryGiftCodes)
        - NOTE: Copy code from Seaglass for monotype run codes!
    - Toggle alternative encounter tables (https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Easily-Toggle-Different-Wild-Encounter-Tables)
        - Ex: Make all encounters on a map into Nincada during a cicada emergence event
    - Pokédex viewable in Party menu

- THEN, MERGE IN SEAGLASS GRAPHICS
    - Object events, followers, and Pokémon in-battle sprites!
    - Some UI elements - battle UI, text boxes, DexNav elements
        - BEFORE MERGING TEXT BOXES: make sure not to port message box directly! remember the name plates!
- ALSO MERGE SOME OTHER IMPORTANT CHANGES
    - Press L to auto-run, R to register DexNav Pokémon, and make sure creeping with DexNav overrules autorun

- THEN, IMPLEMENT PORYSCRIPT!

- Custom Mapping references to remember:
    - ENABLE TRIPLE LAYER METATILES?
    - Use "Dynamic Warps" to change warp location based on script (https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Dynamic-Warp)
    - Consider adding FRLG-style map previews (https://github.com/pret/pokeemerald/wiki/Adding-the-Map-Preview-Screens-from-FRLG)
    - Region Map editing:
        - Adding new maps: https://www.pokecommunity.com/threads/tutorial-adding-new-map-sections-for-name-popups-and-region-map.433496/
            - MAKE SURE TO READ "CAVEAT" SECTION!
        - Delete maps: https://github.com/pret/pokeemerald/wiki/How-to-delete-a-map
            - Only do this if/when necessary!
        - 2x2 cities: https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Support-2x2-Cities-on-the-Region-Map

- EVENTS AND STUFF:
    - Use in-game day count tracker to have events in different parts of the region every X number of days
    - Maybe implement seasonal effects? Every 30 in-game days, change season by changing palette values??
    - Have PokéNav call from representatives from different towns you've visited announcing festivals (Remember to use OW_FLAG_PAUSE_TIME to pause time during calls! So AFK player's dont totally miss them)

## Known Bugs & Problems
- DexNav chain count and directional arrow not shown correctly when hunting
- "speakername" command broken
    - POTENTIAL FIX: Set a STR_VAR variable to the speaker name (or make a new STR_VAR variable just for speakers!) and then make a new Field Special that calls SetSpeakerName() in field_message_box.c

## Credits
- Day/Night System created by merrp, and updated to pokeemerald-expansion by Greenphx9
- DexNav feature branch by ghoulslash
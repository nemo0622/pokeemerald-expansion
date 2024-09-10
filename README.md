# Pokémon: Ecology Version

A Pokémon ROM Hack based on the [pokeemerald-expansion](https://github.com/rh-hideout/pokeemerald-expansion) project.

## What is Pokémon: Ecology?

This ROM Hack takes place in a brand new region, with a whole new adventure ahead of you! By helping people and making an impact on this living, active region, you can rise through the ranks and become a great Pokémon Trainer.

Pokémon: Ecology Version is a ROM Hack coming from my love for real-world animals and ecosystems. After creating Pokémon Emerald Seaglass, I really wanted to continue my ROM Hacking journey, but I wanted to get more experimental and tie in my real world interests. As a Biology student in college, I have been constantly inspired by classes and what I've learned, and now I hope to apply this passion in a Pokémon game. I hope this experience helps people to think more about the environment around them! :)

## Feature List
- Day/Night System with FakeRTC
    - Every second in real time is 20 seconds in game

## Future Development Plans
- Feature Branches to merge early:
    - DexNav (https://www.pokecommunity.com/showpost.php?p=10215653&postcount=1)
        - Reference Seaglass code to disable followers while using DexNav
        - Set "OW_FLAG_PAUSE_TIME" in overworld.h config to pause time while DexNav is active, and also when Pokénav call is active 
    - Mugshot system on page (https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Feature-Branches)
    - Consider the Crafting System? (https://github.com/redsquidz/pokeemerald/wiki/Craft-Menu)

- Other features to add early:
    - Cheat code functionality (https://github.com/PCG06/pokeemerald/tree/MysteryGiftCodes)
        - NOTE: Copy code from Seaglass for monotype run codes!
    - Toggle alternative encounter tables (https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Easily-Toggle-Different-Wild-Encounter-Tables)
        - Ex: Make all encounters on a map into Nincada during a cicada emergence event
    - Pokédex viewable in Party menu

- THEN, MERGE IN SEAGLASS GRAPHICS
    - Object events, followers, and Pokémon in-battle sprites!
    - Some UI elements - battle UI, text boxes

- Custom Mapping references to remember:
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
-

## Credits
- Day/Night System created by merrp, and updated to pokeemerald-expansion by Greenphx9
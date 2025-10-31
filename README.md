# Pokémon Lazarus Version

A Pokémon ROM Hack based on the [pokeemerald-expansion](https://github.com/rh-hideout/pokeemerald-expansion) project.

## What is Pokémon Lazarus?

This ROM Hack takes place in a brand new region, with a whole new adventure ahead of you! Your goal is to complete the Pokédex and assist the Acrisia University in their quest to understand the Pokémon of the Ilios Region. On this quest, you will grow as a Pokémon Trainer, challenging Gyms and stopping the evil Team Chimera.

Pokémon Lazarus Version is a ROM Hack coming from my love for real-world animals and ecosystems. After creating Pokémon Emerald Seaglass, I really wanted to continue my ROM Hacking journey, but I wanted to get more experimental and tie in my real world interests. As a recent Biology student graduate headed for grad school, I have been constantly inspired by classes and what I've learned. I hope this shines through in the Ilios Region, as I am striving to make it feel alive!

## Feature List
- Graphics in a GBC-like style, mixing Generation II graphics with GBA capabilities to form "Generation 2.5 style"
    - See the credits list to find more information about who made the graphics for this game! :)
- A completely new region, the Ilios Region, based on the geographical region of Greece
    - Various references to Greek history and culture
    - All routes & locations have unique names, looks, and ecosystems!
- Carefully curated Pokédex of over 400 Pokémon from Generations 1-9 in a beautiful GBC style!
    - Many Pokémon have undergone rebalancing, with new moves, abilities, and slight stat changes!
        - Some also have custom Pokédex entries, try to find them all!
    - Including regional (Alolan/Galarian/Hisuian) forms, total count is around 450 unique Pokémon
    - Mega Evolutions are included, with over a dozen new Mega Evolutions added!
- Day/Night System with FakeRTC
    - Every second in real time is 30 seconds in game (2 real minutes = 1 in-game hour)
    - Comes with Day/Night Encounter Differences! All found in Documentation
    - Outdoors Battle Backgrounds change with time of day!
- Overworld Encounters with Wild Pokémon
    - Most routes have a few randomized locations for Pokémon to spawn
    - Shiny Pokémon are visible in the overworld!
- Outfit System allowing for Character Customization!
    - Multiple variants of new protagonists (Amali and Harper)
    - Options to play as protagonists from other Regions (ex: "Kalos Fashion" to play as Calem or Serena)
    - Press Select in Outfit Box to swap gender
- DexNav functionality unlocked after Gym 2, allowing for targeted Pokémon hunting
    - Including Cheat Code to show all DexNav Pokémon from the start: "JUSTSHOWME"
- Cheat Code system, with many helpful cheats and ways to shake up repeat playthroughs!
    - Codes for 999 items, such as Rare Candies and Nuggets
    - Codes for starters, a selection of random Pokémon, and even a Girlypop Pokémon code!
    - Codes for giving a random stage 1 Pokémon of any type for Monotype Challenge runs
        - Find codes in documentation!
- Difficulty Modes!
    - Normal Mode: Soft Level Caps, Standard Gym Leader teams. Can likely beat the game with most Pokémon teams, with a few battles requiring extra planning.
    - Hard Mode: Hard Level Caps, Modified Gym Leaders to be more difficult fights. Opponents gain extra levels as the game progresses, ending in a +5 level bonus to opponents. Planning before Gym battles is key, as their Pokémon have stronger moves and more coverage.
- Minigames and Side Content scattered across the Ilios Region, adding more to do:
    - Own a Cabin in a sailor's ship, which can be customized to your liking (essentially a Secret Base!)
    - Play Pinball in Sofos City, earning Pinball Points to exchange for items
    - Battle Pavilions in multiple areas, replicating Battle Tents of Pokémon Emerald with new Pokémon and balancing
    - Pokémon Contests, with slight stat bonuses given to Pokémon with Ribbons
    - Mining Expeditions on Marmaro Island, providing shards, fossils, and more!
    - Stardew Valley-like Fishing Minigame, including random Treasures and Pokémon Ability effects!
    - University Students in most Routes and Towns, seeking help filling their Pokédex
    - Dozens of optional sidequests for a variety of fun rewards and events!
    - After becoming Champion, challenge a wide range of Trainers on Wakewater Isle, who use Level Scaling to keep up with your Champion-level team!
- Various QOL Changes, such as:
    - A dedicated Quest Menu to keep track of story objectives
    - Expanded Bag space to 50 Items
    - Shiny Indicator for wild Pokémon (a Heart shown next to the gender icon)
    - Press L to toggle auto-run
    - Pokémon types shown in battle
    - Pokémon animate after KO
    - NPC speaker name shown above text box
    - Reusable TMs!
    - HM Revamp ported from Emerald Seaglass
        - Pokémon who can learn HM moves can use them in the field without them taking a move slot!
    - A variety of settings accessible in the Options menu, including:
        - Custom, detailed battle backgrounds vs GSC-style White backgrounds
        - Toggle the visibility of the Day/Night cycle, for those who dislike how dark it gets
        - Toggle shadows under Pokémon in battle
        - Toggle Unique Pokémon Tint, which adds slight color variations to individual Pokémon
    - Choose which Pokémon you want to follow you (or disable follower altogether) from party menu

## Future Development Plans

MAJOR TODOS:
- MUSIC IN ORDER:
    - Acrisia City - Tom Sanborn, Custom
    - Acrisia University - ? (Waiting for Tom's Custom track; replace BIRCH_LAB music track!)
    - Bronze Fields - Route 01 / Route 03
    - Jusmail Town - MUS_CHERRYGROVE
    - Acrisia Mountains - Route 02
    - Riverwalk Trail - Route 02 / Route 03
    - Kalami City - K.K. Gumbo
    - Wanderer's Woods - Route 05
    - Pythios Town - Mt. Moon
    - Pythios Cemetery - Ruins
    - Erinys Path - Route 04 / Route 02
    - Froslass Cavern - Cave
    - Asfal Hills - Route 03
    - Sofos City - Rockin' K.K.
    - Kipos Town - A Fond Farewell
    - Kipos Zoo - National Park
    - Sea of Asteri - Lake of Rage
    - Marmaro Island - Urban K.K.
    - Myrrini Island - Brine Cave
    - Péntepetal City - Saffron City Carribean Remix
    - Underwater - Ballad of the Windfish
    - Sea of Vulcai - Lake of Rage (North), K.K. Western (South)
    - Fresco Isles - K.K. Western
    - Palati City - MUS_GOLDENROD
    - Kaptara Island E/W - Route 02 / Cave
    - Lastlight Road - Route 05
    - Tower of Dioxippus - Burned Tower
    - Corrin Crossing - National Park
    - Port Pello - Buena's Password (Pokémon GS)
    - Nyx Trails - Cave
    - Areios Hideout - Emerald Mist
    - Pollen Road - Tower (Final Fantasy Legends)
    - Davosi Straits - Tower (Final Fantasy Legends)
    - Ruins of Ahiyawa - Don't Ever Forget (Mystery Dungeon)
    - Wakewater Isle - Coffee Shop (AC Wild World)
    - Surfing - Surf
    - The Delphis - Swamp Cruise (Majora's Mask)
    - Pokémon Center & PokéMart - Pokémon Center (GSC)
    - Trainer Encounter music - mostly GSC soundtrack
- Mods suggestions:
    - Bug fixes (in Discord server)
- BEFORE RELEASE:
    - Disable Debug features (skull emoji)
    - Upload full Dex image to Google Doc documentation alongside credits list
- Give more Pokémon unique Pokédex entries
    - Just go to random points in the dex and go!

- AFTER INITIAL RELEASE:
    - [Remove Affine Animations](https://github.com/pret/pokeemerald/wiki/Removing-the-Animation-Affines) and give all Pokémon multi-frame, Crystal-style animations!
        - Even just a few frames of blinking would be huge, I don't like the affines I don't think


GREEK PHRASES AND STUFF:
- "Chaire" - basically ancient greek "aloha" (hello/goodbye)
- "Andio" - goodbye
- "Opa!" - directly translates to "Oops", but really used to show appreciation/enthusiasm
- "Yamas" - cheers!
- "Den gnorzio" - I don't know

- EVENTS AND STUFF:
    - Use in-game day count tracker to have events in different parts of the region every X number of days
        - Receive "buzz" on Pokédex alerting to event somewhere in the region
        - "Flower Festival" in Péntepetal, "Sunlight Party" in Fresco Isles, "Walk of Spirits" in Pythios, and
        "Year's End Celebration" in Acrisia City
            - idk how any of this would work I just think it's a fun idea to kick around
    - Finish implementing Prof. Elia, Rania, and Niko's gifting / interactions based on Pokédex progress
    - MISSING IMPORTANT BUILDINGS / LOCATIONS / UNLOCKS
        - Berry plant locations

## Known Bugs & Problems
- DexNav chain count and directional arrow not shown when hunting
- When loading a save in Bronze Fields or Jusmail Town (areas with Windmill sprites), the first few frames have bugged tiles
    - This is caused by using "virtual objects" for the windmill sprites. As far as I can tell, there's not a great fix

## Credits
LISTED ON DOCUMENTATION! :)

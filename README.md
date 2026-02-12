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

LAZARUS VERSION 2.0 CHANGES
- Four NEW Mega Evolutions!
    - Mega Typhlosion: Rounding out the Johto Trio, this new Mega Evolution re-develops Cyndaquil's flaming tail while growing much larger flame bursts. Its stats increase strongly all around.
    - Mega Carracosta: Counterpart to Mega Archeops, Mega Carracosta grows algae from waiting so long for passing prey. It becomes much stronger physically.
    - Mega Tyrantrum: This form sprouts a crown of feathers and becomes an Ice/Dragon type, fitting for the cold environment it was adapted to in life. It becomes extremely physically defensive while maintaining a high Attack stat.
    - Mega Aurorus: Calling upon the power of the North Star, Mega Aurorus transforms into a stunning Fairy/Ice type. Its sparkling aura can be seen from miles away.
- From Pokémon Legends Z-A's new DLC, Mega Crabominable and Mega Golisopod make their debut in Pokémon Lazarus as well!
- Option to disable Level Caps
- Change a Pokémon's Poké ball by using another one from the Bag menu
- "BATTLEPASS" Cheat: Gives x10 Assault Vests, Eviolite, Life Orbs, and more powerful Battle items!
- Jusmail Town's Wishing Well Pokémon are now in Cherish Balls
- Re-coded DexNav shiny calculation:
    - Starts with 4 base Shiny rerolls for any DexNav Pokémon
    - Shiny Charms give +2 rerolls each
    - Chain Bonuses: 100 Chain gives +10 rerolls, 50 Chain gives +5 rerolls, and other chains above 20 give +3 rerolls
    - Pokémon Search Level now maxes out at 100, providing +2 rerolls
    - Standard Pokémon shiny calculation reroll code is used, looping through the Pokémon creation code for however many rerolls you have until they run out or a shiny Pokémon is generated!
    - Thank you all for bearing with me on this. DexNav shiny hunting should *hopefully* be all set now! (Unless I messed something up... lol)
- Balance Changes:
    - Mega Raichu X is now Electric/Fighting
        - Raichu gets Power-Up Punch, Fire Punch, and Thunder Punch as Level 1 moves (learn via Move Relearner in Pythios Town!)
    - Mega Scrafty ability -> Filter
    - Mega Greninja ability -> Protean (works only once per battle)
    - Mega Gogoat ability -> Stamina
    - Mega Heliolisk now Electric/Fire type with Drought
    - Aurorus given access to Dazzling Gleam and Moonblast to take advantage of Mega Evolution typing
    - Mega Centiskorch ability -> Tinted Lens
    - Drakloak -> Dragapult evolution level reduced to 48 (from 60)
- Minor Changes & Bug Fixes:
    - 2 special new challengers at Wakewater Isle... Try to find them both!
    - Removed low health beep effect
    - TM21 finally now Acid Spray, not Frustration
    - Raging Bolt as following Pokémon no longer freezes Pokémon Center
    - Updated Tyrantrum sprite
    - Black Augurite removed from Mining Minigame, instead being given by Girl in Fossil House on Marmaro Island
        - I swear I could not get the mining bug fixed for it lol, so this is a workaround
        - Remember, all evolution items can also be bought at the Ruins of Ahiyawa!
    - Dive collision problems fixed
    - Tons of bug fixes and little moveset / TM learn fixes
        - Remember, please DO NOT USE MyBoy OR VBA TO PLAY THIS GAME! Those emulators are horribly outdated and struggle with modern Rom Hacks. Y'all have no idea how many bug reports I get from MyBoy users lmfao

KNOWN BUGS, STILL PRESENT
- Small chance of graphical bug when picking up items (entering and exiting a menu should fix this!)
- Tiny chance of a "Bad Egg" being loaded as the Trainer's Pokémon (cannot replicate in testing)

- MUSIC IN ORDER:
    - Acrisia City - Tom Sanborn, Custom
    - Acrisia University - Oak's Lab
    - Bronze Fields - Route 01 / Route 03
    - Jusmail Town - Tom Sanborn, Custom
    - Acrisia Mountains - Route 02
    - Riverwalk Trail - Route 02 / Route 01
    - Kalami City - K.K. Gumbo
    - Wanderer's Woods - Route 05
    - Pythios Town - Tom Sanborn, Custom
    - Pythios Cemetery - Ruins
    - Erinys Path - Route 04 / Route 02
    - Froslass Cavern - Cave
    - Asfal Hills - Route 03
    - Sofos City - Rockin' K.K.
    - Kipos Town - 
    - Kipos Zoo - National Park
    - Sea of Asteri - Lake of Rage
    - Marmaro Island - K.K. Condor
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
    - Ruins of Ahiyawa - A Fond Farewell
    - Wakewater Isle - Coffee Shop (AC Wild World)
    - Surfing - Surf
    - The Delphis - Swamp Cruise (Majora's Mask)
    - Pokémon Center & PokéMart - Pokémon Center (GSC)
    - Trainer Encounter music - mostly GSC soundtrack

## Known Bugs & Problems
- Picking up item balls can glitch nearby sprites
- DexNav chain count and directional arrow not shown when hunting
- When loading a save in Bronze Fields or Jusmail Town (areas with Windmill sprites), the first few frames have bugged tiles
    - This is caused by using "virtual objects" for the windmill sprites. As far as I can tell, there's not a great fix

## Credits
LISTED ON DOCUMENTATION! :)

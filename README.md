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
- Music:
    - GET MUSIC LOOPING UGH
- Mods suggestions:
    - CUSTOM BADGE GFX
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
Many, many talented developers and artists are responsible for making this project possible. The Credits have been split into various sections below to make them easier to navigate - please support them however you can!! :)

### Feature Branches
- Day/Night System created by merrp, and updated to pokeemerald-expansion by Greenphx9
- DexNav feature branch by ghoulslash
- Name Box branch by Tustin2121
- Different Wild Encounter Tables by Bivurnum
- Outfit System, New Shop UI, and GSC White Battle Background by mudskip
- New Continue Menu UI and Party Menu by Archie
- Overworld Encounters by [HashtagMarky](https://github.com/HashtagMarky/pokeemerald/tree/ikigai/ow-encounters)
- GSC/HGSS Ruins of Alph Sliding Puzzles by [Spherical Ice](https://www.pokecommunity.com/threads/ruins-of-alph-sliding-puzzles-pokefirered.463032/)
- Mining Minigame by Vol
- Fishing Minigame by Bivurnum
- Pokémon Color Variation by Jaizu
- Quest System by [PokémonSanFran](https://github.com/PokemonSanFran/pokeemerald/wiki/Unbound-Quest-Menu)
- Set Preferred Follower from Party Menu by Kasen

### Graphics
- Tilesets:
    - Most basic overworld sprites purchased from Anima_nel, Zaebucca, and Arex on itch.io
    - Pokémon Center, Mart, and Gym Buildings by TrainerDX
    - Some GBC-style default houses by TrainerDX
    - Broken pillar tiles by Hek-el-Grande on DeviantArt
    - Coral tiles by Ekat99 on DeviantArt
- Pokémon Sprites:
    Numbers below match sprites on the official Pokémon Lazarus Ilios Pokédex Image:
    1. Sprite created/edited by Nemo622 (edits based on pokeemerald-expansion or official Pokémon GBC sprites)
    2. By Matdemo159
    3. By Supahsanti, from Substitube public resource
    4. By MonsterHam
    5. From Whack-a-Hack XY Dex
    6. By SirWhibbles
    7. By COMBOY
    8. Official Pokémon GBC Sprite
    9. By Nuukiie
    10. By Egg3ggEgg (Public works & Commissions!)
    11. By Enderific
    12. By Rojimenez
    13. By SageDeoxys
    14. From 8BIT Pokédex by sktndo, from Substitube public resource
    15. By Substitube
    16. From GBC Sprite compilation by ESY
    17. By Pia Carrot
    18. Created and/or edited by kesterhenrickpixels
    19. By EeVeeEe1999
    20. By wittycrow
    21. By Coffee in the Pokémon Emerald Seaglass Discord Server (thank you!)
    22. By lakeofdance, from Substitube public resource
    23. By Koolboyman, from Substitube public resource
    24. By N-Kin, from Substitube public resource
    25. By SuicidalSushi, recolored
    26. By Zaebucca
    27. By King-Of-The-X-Roads
    28. By HexTheSpriter
    "XX, 1". Parts of sprite by Artist "XX" (from above list), edited by Nemo622
- Trainer Sprites:
    - Amali and Harper sprited by me, based on TrainerDX GBC Trainer template sprites
    - Johto (Ethan/Lyra) outfits by Solo993
    - Kalos (Calem/Serena) outfits by com3tiin, Poketto, and Solo993 on DeviantArt
    - Alolan (Elio/Selene), Paldean (Nemona/Arven), and Hylian (Link/Zelda) outfits commissioned from [TortleDove on Twitter](https://x.com/dovetortle?lang=en)
    - Gym Leaders sprited by me, based on TrainerDX Trainer templates and parts of Substitube and Solo993 sprites
    - Many Sapphire-based GBC sprite devamps by leesongjae620 on DeviantArt
    - Some GBC style Trainer sprites from Pokémon Crystal
    - Scientist F, Punk Rocker, Hiker, and a few other sprites from Solo993's Unova sprite devamps
    - Professor, Performer F, Worker, and Scuba Diver sprites by Substitube
    - Aroma Lady, Battle Girl, Beauty, Bug Maniac, Pokémon Ranger, and Swimming Triathlete by Justin8964 on DeviantArt
- Overworld Sprites:
    - Many NPC sprites adapted from Pokémon Crystal
    - Some NPC sprites by Anima_nel on itch.io
    - Some NPC sprites by kesterhenrickpixels on DeviantArt
    - Amali and Harper (default Player) sprites by me!
    - Johto (Ethan/Lyra) outfits by Solo993
    - Kalos (Calem/Serena) outfits by com3tiin, Poketto, and Solo993 on DeviantArt
    - Alolan (Elio/Selene), Paldean (Nemona/Arven), and Hylian (Link/Zelda) outfits commissioned from [TortleDove on Twitter](https://x.com/dovetortle?lang=en)
- Overworld Pokémon Sprites:
    - Many Gen 1 and 2 overworld sprites by Anima_nel on itch.io
    - Eeveeee: Spoink, Kleavor
    - SageDeoxys: Wyrdeer
    - .kedoshim: Ursaluna
    - Mudskip: Applin
    - Jaquelion: Dipplin, Hydrapple
    - DarkusShadow: base Tinkaton line sprites (GBA style)
    - Many others from Generations 3-4 by resource from Mano_Emet on Discord (Created by Megaman-Omega)
    - Many Generation 5-7 overworlds based on icon sprites by EeVeeEe1999 on DeviantArt, made by me
- User Interface:
    - Title Screen: Pixel art done by me over original image [here](https://www.athens-private-tours.com/wp-content/uploads/2015/05/Acropolis-Sunset-15891085.jpg)
    - New Continue menu UI and Shop UI by mudskip (Continue menu code by Archie)
    - Many Pokémon Party Icons based on following sprites (credited above), others by Chamber, Solo0993, Blue Emerald, Lake, Neslug, and Pikachu25 (Most Gen 1-2 icons)
        - EeVeeEe1999: created many small sprites, especially for Gen 3, 5, 6, and 7 Pokémon
        - A few Gen 6 icon sprites by  dragonball253 (some Kalos starter icons)
        - Many later-gen icon sprites by LuigiTKO
    - Battle Backgrounds:
        - Majority created by me, based on assets from Pokémon Crystal and colors / decorative assets by Zaebucca
        - Sand and Arena backgrounds by AveonTrainer, edited by me
        - Water background by kWharever on DeviantArt, edited by me
    - Ilios Region Map by Zezitra
    - Many, many item Bag icons by glados11388

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
    - Including regional (Alolan/Galarian/Hisuian) forms, total count is around 450 unique Pokémon (Pokédex count of 420)
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
    - Pinball in Sofos City, earning Pinball Points to exchange for items
    - Battle Pavilions in multiple areas, replicating Battle Tents of Pokémon Emerald with new Pokémon and balancing
    - Pokémon Contests, with slight stat bonuses given to Pokémon with Ribbons
    - Mining Expeditions on Marmaro Island, providing shards, fossils, and more!
    - University Students in most Routes and Towns, seeking help filling their Pokédex
    - Dozens of optional sidequests for a variety of fun rewards and events!
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
- Continue Mapping and NPC development
    - FRESCO ISLES:
        - Gym: Has Sandstorm weather, with team members working in synergy with it! (Maybe Thalia's Alolan Raichu ace could be carrying Safety Goggles?)
    - Remember, add University Student scripts (& expand the Field Special!) to all new maps!

- Fix shadows for all Pokémon! Some are still wonky after removing white outlines
    - Plus new pokemon like Arctozolt are just totally messed up

- Implement Biv's Fishing Minigame
    - Also create options menu toggle for it
    - TREASURE IDEAS:
        - Pearl, Big Pearl, and Pearl String (for that one quest in Asteri Sea West!)
        - Wishing Stars of course
- Add new Emotes using Reakain's Emote spritesheet (so cute!)
    - Go through major story events and add relevant emotes
    - Also try to add them to other things (ex: crying Emote when DexNav Pokémon disappears)

- Continue Mapping and Scripting through Palati City
- After beating Palati City Gym, have Niko and Rania run up to you in a panic as a thunderstorm starts. Say thatNiko got a call from a friend in Sofos City that Team Chimera took over their Acropolis temple, and warp theretogether immediately!
    - This will be the legendary Pokémon / Team Chimera takeover arc! The boss, Kalliope, uses the reassembled Ancient Mechanism to summon Celebi and the Legendary Dogs to the temple. She bends Celebi to her will, using its power to convert the legendaries into their ancient forms - Walking Wake, Raging Bolt, and Gouging Fire. Kalliope and Team Chimera vanish, and extreme weather starts all over the region
        - Extreme weather: set a flag that is checked on every outdoors map. Like how Pythios does it, when the flag is set, set the weather of the map to a random extreme weather (WEATHER_FOG_HORIZONTAL, WEATHER_DOWNPOUR, or WEATHER_DROUGHT)
    - Niko tells player of ancient mythology of Ho-oh and Lugia, found at a Fiery Tower (Tower of Dioxippus) and a Watery Temple (the Sunken Temple in the Sea of Vulcai)
        - Recommends capturing them, as they may be the only thing strong enough to settle them
        - At each location, the Player will find a TEAM CHIMERA ADMIN (fire and water, respectively) waiting for them! Ho-oh and Lugia will bear witness to your battle, as you catch the Admins in the process of catching them
            - The admins use powerful teams, plus Walking Wake and Gouging Fire respectively! Raging Bolt will be reserved for the final battle with Kalliope, with the signature move Thunderclap being a whole other level of threatening lol
    - Rania tells player that Team Chimera grunts have been spotted in an abandoned town south of Port Pello, speculating that that's where they went
        - Also happens to be the old location for the 8th gym, hOw aBoUt tHaT! Player encouraged to head south of Port Pello and strike at the heart of Team Chimera

- Work on ideas from note on phone
    - Elite Redux inspired abilities & moves
    - New areas:
        - Lastlight Road - Route leading south of Kipos Town, going up and then down mountains, some snowy Pokémon
        - Tower of Dioxippus - small settlement south of Kipos Town, with a large tower (TrainerDX tiles) and a theme of fire. Fire-type encounters here, but it's a verdant valley, so some grass type guys too
            - Named after Dioxippus, the Olympic champion who won combat because nobody was willing to challenge them
            - Rumored to be the home of a great, godlike Pokémon with the power to restore life (Ho-oh!)
            - This will be where Ho-oh can be caught later in the game, probably after the Chimera story
            - MANY BERRY TREES HERE!
            - Use hanging light graphics from Yanako's tilesets (plus other buildings from that sheet too tbh)
        - The Pollen Road - route east of Péntepetal City, home to many Tropius, Roselia, and Lileep
        - Davosi Strait - ocean route heading north of the Pollen Road (name inspired by Ser Davos Seaworth)
            - Only place where Dhelmise can be fished up!
        - Trickster Coast - small area where ocean turns east towards land (name inspired by Trojan Horse)
            - Include rocky, sandy coastal area with broken ship tiles and ruins
        - Ruins of Ahiyawa (name based on Ahhiyawa, the term for Achean Greeks by the Hittites) - based on the ruins of Troy, covered in broken walls and stones with only a few standing buildings
            - Basically a jumping off point for the player to get to Champion's Peak
        - The Stygian Caves - moved east of Ruins of Ahiyawa, caves leading north to Champion's Peak
        - Champion's Peak - moved northeast of Ruins of Ahiyawa, location of Elite Four obviously
- Give all Pokémon unique Pokédex entries
- CUSTOM MUSIC! Just experiment at first!
    - Use [Online Signal MIDI editor](https://signal.vercel.app/?lang=en), which supports Sound Fonts! Maybe find the Emerald or Pokémon Crystal soundfont?
    - Follow existing Pokecommunity music editing tutorial
- Implement Chris Piché's Game Corner Expansion minigames
    - Blackjack, Ponyta Racing, and Voltorb Flip are the big ones I care about
    - Also, remove Pinball Points and integrate Coins into Pinball games!
        - Pinball games: Cost few coins, give smaller reward
        - "Luck-based" games: Cost slightly more coins, give larger reward


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
        - Prof. Elia gifts a few helpful items and starter Pokémon with special good stats + Oval Charm
        - Rania provides Tera Shards and other battle items (Rocky Helmet, etc) + Exp Charm
        - Niko provides unique Pokéballs + Catching Charm, also becomes the Tera Type changer
            - After unlocking Terastallization, increase Niko's State variable. When the state is greater than or equal to that value, have Niko ask if you're looking for Tera Type Change or Conversation (rewards, etc)
    - MISSING IMPORTANT BUILDINGS / LOCATIONS / UNLOCKS
        - Contest Hall (Péntepetal City!) (+ unique Contest competitors)
        - Battle Pavilions
            - 1(Sofos City) and 2 (Myrrini Island) already added
            - #3 could be in Port Pello?
        - Berry plant locations
        - Fishing Rod locations (Super rod still need place)
        - Safari Zone?
        - Dive locations
            - SIDE QUEST IDEA: Have a sidequest centered around the rediscovery of Relicanth, a new Lazarus Taxa rumored to be living deep underwater!
                - This will make Relicanth feel more special, as it's the poster child for Lazarus Taxa
        - Spiky Ear Pichu gift
        - Wishing Star mart location
            - Port Pello! Late game, encourages Mining Expeditions instead

## Known Bugs & Problems
- DexNav chain count and directional arrow not shown when hunting
- When loading a save in Bronze Fields or Jusmail Town (areas with Windmill sprites), the first few frames have bugged tiles
    - This is caused by using "virtual objects" for the windmill sprites. As far as I can tell, there's not a great fix
- FOLLOWERS: Ho-oh loads broken! At least in Zoo donation, I think
    - Something to do with 64x64 followers, of course
- CABIN DECORATION: holding the decoration sometimes breaks the graphics (ex: holding Pretty Flowers messes it up bad)
- Pretty sure Nemo622 Oricorio quest is fucked skull emoji
- Sometimes, encountered Overworld pokemon are level 2, even with a team with Pokémon up to level 100. somewhere, the calculation is getting messed up
    - Lowkey this might be save corruption maybe? test it on a fresh save to be sure

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
- Mining Minigame and Town Map feature port by Vol
- Pokémon Color Variation by Jaizu
- Quest System by [PokémonSanFran](https://github.com/PokemonSanFran/pokeemerald/wiki/Unbound-Quest-Menu)
- Set Preferred Follower from Party Menu by Kasen

### Graphics
- Tilesets:
    - Most basic overworld sprites purchased from Zaebucca and Arex on itch.io
    - Pokémon Center, Mart, and Gym Buildings by TrainerDX
    - Some GBC-style default houses by TrainerDX
    - Broken pillar tiles by Hek-el-Grande on DeviantArt
    - Coral tiles by Ekat99 on DeviantArt
- Pokémon Sprites:
    Numbers below match sprites on the official Pokémon Lazarus Ilios Pokédex Image:
    1. Sprite created/edited by Nemo622 (edits based on pokeemerald-expansion sprites)
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



# Story / Region Information for me to look at

STORY PLAN:
- TEAM CHIMERA: Plans to gather Pokémon through any means necessary to traffic for profit and use to control sections of the region, like the Areios Hideout
    - BIG BAD PLAN: Preparing to summon Ho-oh, Celebi, and the Legendary Dogs, using powers to convert the dogs to Gouging Fire, Raging Bolt, and Walking Wake
        - Use Gouging Fire to mine for coal on land, Walking Wake to drill at sea for oil, and Raging Bolt to blast open shale (fracking) and summon storms to protect Team Chimera operations
        - Basically, they only see the monetary value of nature, the past, and Pokémon, and this ultimate goal is the synthesis of all these ideas
    - They see the emergence of LAZARUS TAXA as evidence for the "return of the past", seeing an opportunity for profit

REGION PLAN:
    - Start in Acrisia City, based on Greek city of Larissa
        - Location of Agrias University
        - West: Acrisia Mountains up to Acrisia Caves
    - Head south through Bronze Fields
    - Find Jusmail Town, a small farming town based on Lamia
        - Gym 1: Deo, based on Demeter
            - Grass and Bug types, gym centered around the harvest + agriculture
            - Team: 10-12
            - Rewards: Harvest Badge, unlocks use of Cut outside battle, TM Bullet Seed
    - South path blocked by Rock Smash - told to head back North to Acrisia City
    - West of Acrisia is the Acrisia Mountains, leading up to Acrisia Caves
        - Acrisia Caves is a system of caves, leading down to a dark cavern area
        - Gym 2: Ourani, the Rock type gym leader
            - Based on Sisyphus, a hermit who is the last worker at this once prolific mine
            - Team: Level 17-19
            - Reward: Gemstone Badge, unlocks Rock Smash outside battle, TM Rock Tomb
    - Continue south with Rock Smash through Jusmail Town and through the Wanderer's Woods
        - Wanderer's Woods filled with fallen logs, mushrooms, and overgrown plants
        - Many grass, bug, and dark/ghost types (murkrow, drowzee, capsakid, etc)
    - Reach Pythios Town, based on Delphi
        - Town is very "autumn-themed", with orange-red color palette alternatives compatible with tree sprites
        - Gym 3: Kleio, the Ghost/Psychic Gym Leader
            - Based on the Oracle of Delphi, and Enoch from Over the Garden Wall (wears pumpkin mask)
            - Gym centered around mysterious spirits in fields of crops
            - Team: Misdreavus, Spoink, and Pumpkaboo (level 17-20)
            - Reward: Grave Badge, unlocks Flash outside of battle, TM Calm Mind
        - West: Pottsfield Cemetery, based on Pottsfield from Over the Garden Wall
            - Mark as FLASH AREA! Have NPCs outside talk about the "dark mists surrounding the cemetery"
            - MINIGAME AREA: Explore the area trying to find items and catch Pokémon without being spotted by patrolling Shuppet and Gastly. If spotted, run a script to end the minigame. Allows area to catch Pokémon and explore while motivating continued visits as you can get further and further
    - Travel east through Erinys Path, south through Froslass Cavern cave system, and east more through Asfal Hills
        - Note: Erinys Path East/West are reversed because i am dumb. lol
        - Froslass Cavern Floor 3: Contains Froslass overworld event on other side of water, gotta set it up
    - Reach Sofos City, based on Athens 
        - Sprawling metropolis city with "department store", a contest hall, and more
        - Gym 4: Terpsikore (proto-italic root of name Minerva), a Tactical gym leader (multi-type, all about stat boosts and baton pass)
            - Based on Athena, calm + collected, all about law and order
            - Team: Ninjask, Riolu, Mienfoo, and Whimsicott (double battle) (level 24-27)
                - Ninjask has Speed Boost + baton pass, Whimsicott sets up tailwinds, Riolu + Mienfoo are offense
            - Unlocks Surf outside of battle
    - Can Surf out from the Port of Sofos into the Sea of Ilios
        - Gyms 5-7 are on islands, game is sort of non-linear, with slight level increases further out and level scaling trainers/gym leaders
    - East of Sofos City lay the islands of Marmaro and Myrrini, based on Paros and Naxos respectively
        - MapSec: Named the Asteri Sea, the "northern" section of the Sea of Ilios
        - Marmaro is an island with Marble quarries, many rock and fairy types
        - Myrrini is an island with a large, busy port and is covered in grape vines
            - Gym 5: Euterpe, a Poison/Confusion themed gym leader
                - Based on Dionysus, always talking about festivals and parties
                - Team: Ludicolo (party!), Grafaiai, Seviper, Gligar, and Hypno (level 30-32)
                - Unlocks Dive outside of battle
    - In the middle of the Sea of Ilios lay the island of Fresco, based on Santorini
        - MapSec: Named the Vulcai Sea, the central section of the Sea of Ilios
        - Islands form a ring around Mt. Ifaisteio, an active volcano
        - Fresco Isle (based on Santorini) is long and dotted in patches of desert ("semi-arid environment!") + volcanic ash
            - Gym 6: Khalkeus, the Fire/Steel gym leader
                - Based on Hephaestus, living on a little volcanic hotspot on Fresco Isle
                - Team: Lairon, Salazzle, Doublade, Darmanitan, Tinkaton (level 32-35)
                - Unlocks Strength outside of battle
    - Furthest south in the Sea of Ilios is the island of Kaptara, based on Crete
        - MapSec: Named the Pidima Sea, the southern section of the Sea of Ilios
        - Covered in Minoan-inspired ruins
        - Split between east and west, bisected by Palati, based on Knossos
            - Gym 7: Ermo, the Flying gym leader
                - Based on Hermes, always running around and flying on his Pokémon
                - Team: Dragonite, Honchkrow, Pelipper, Noctowl, Jolteon, and Kilowattrel (level 35-37)
                - Unlocks Fly outside of battle
    - After Gyms 5-7 are defeated, player backtracks through Sofos City and further west to a crossroad in Asfal Hills
    - South from this is Port Pello, based on Megara
        - Probably story here, gearing up for final showdown with evil team
        - Pink trees and stuff, blessed by a shiny Celebi centuries ago or something
    - Head South of Port Pello through the Nyx Trail
    - South to Areios Hideout, the main base of the evil team
        - Gym 8: Mara, the Fighting gym leader
            - "Daughter of Ares" esk figure ("Mara", Mars, you get it)
            - LEADER OF EVIL TEAM!
            - Team: Medicham, Falinks, Basculegion, Sneasler, Tyrantrum, Annihilape (level 38-40)
            - Unlocks Waterfall outside of battle, disbands evil team
    - Return to Acrisia City, told to travel North for strongest trainers in Ilios
        - Motivation: prove strength, unlocks more areas (postgame lol)
    - North of Acrisia City through The Heavenpass ("victory road" type thing)
    - Reach Champion's Peak (Mt. Olympus), fight Elite Four
        - E4 Battle 1: Venezia, the Fairy-type Elite Four member
            - Based on Aphrodite
            - Team: Altaria, Clefable, Hydrapple, Shiinotic, Dachsbun, Gorebyss (level 44-46)
        - E4 Battle 2: Lyrion, the Sound Elite Four member
            - Based on Orpheus
            - Team: Chatot, Exploud, Noivern, Toxtricity, Kommo-o, Primarina (level 45-47)
        - E4 Battle 3: Arktos, the Wild Elite Four member
            - Based on Artemis
            - Team: Espathra, Ursaluna, Roserade, Lunatone, Wyrdeer, Decidueye (level 46-48)
        - E4 Battle 4: Teleia, the Queen of the Elite Four
            - Based on Hera
            - Team: Salazzle, Hisuian Lilligant, Froslass, Florges, Kangaskhan, Nidoqueen (level 47-49)
        - E4 Champion: Basil, the King of the Elite Four
            - Based on Zeus
            - Team: Skarmory, Gyarados, Gliscor, Incineroar, Ceruledge, Zapdos (level 48-50)
    - After Elite Four - cutscene where new areas open up:
        - Ferry to Battle Frontier on Rhodes arrives to Port Pello
        - Mountain pass in Froslass Cavern opens up
            - Opens hyper-difficult cave with competitive-level trainers, descending into the earth with Hades as the final game boss
        - New EV/IV editor opens shop in Sofos City
        - Areas with select Legendary Pokémon appear
            - These areas also have evolved forms of Pokémon, making Pokédex completion easier
        - Post-game "FINAL BOSS" area unlocked on Kaptara Island
            - Area resembles Minotaur Labyrinth
            - Use "Interior_A" tiles in upper-left of sheet by Zaebucca Advenyure Inside 1.1
            - Final boss using Tauros + Paldean variants

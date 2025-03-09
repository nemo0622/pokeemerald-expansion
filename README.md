# Pokémon Lazarus Version

A Pokémon ROM Hack based on the [pokeemerald-expansion](https://github.com/rh-hideout/pokeemerald-expansion) project.

## What is Pokémon Lazarus?

This ROM Hack takes place in a brand new region, with a whole new adventure ahead of you! By helping people and making an impact on this living, active region, you can rise through the ranks and become a great Pokémon Trainer.

Pokémon Lazarus Version is a ROM Hack coming from my love for real-world animals and ecosystems. After creating Pokémon Emerald Seaglass, I really wanted to continue my ROM Hacking journey, but I wanted to get more experimental and tie in my real world interests. As a Biology student in college, I have been constantly inspired by classes and what I've learned, and now I hope to apply this passion in a Pokémon game. I hope this experience helps people to think more about the environment around them! :)

## Feature List
- Graphics in a GBC-like style, mixing Generation II graphics with GBA capabilities to form "Generation 2.5 style"
    - See the credits list to find more information about who made the graphics for this game! :)
- A completely new region, the Ilios Region, based on the geographical region of Greece
    - Various references to Greek history and culture
    - All routes & locations have unique names, looks, and ecosystems!
- Carefully curated Pokédex of 400 Pokémon from Generations 1-9 in a beautiful GBC style!
    - Many Pokémon have undergone rebalancing, with new moves, abilities, and slight stat changes!
    - Including regional (Alolan/Galarian/Hisuian) forms, total count is around 430 unique Pokémon
- Day/Night System with FakeRTC
    - Every second in real time is 30 seconds in game (2 real minutes = 1 in-game hour)
    - Comes with Day/Night Encounter Differences! All found in Documentation
- Overworld Encounters with Wild Pokémon
    - Most routes have a few randomized locations for Pokémon to spawn
    - Shiny Pokémon are visible in the overworld!
- DexNav functionality, including bug fixed from Emerald Seaglass
    - Including Cheat Code to show all DexNav Pokémon from the start: "JUSTSHOWME"
- Cheat Code system, with many helpful cheats and ways to shake up repeat playthroughs!
    - Codes for 999 items, such as Rare Candies and Nuggets
    - Codes for starters, a selection of random Pokémon, and even a Girlypop Pokémon code!
    - Codes for giving a random stage 1 Pokémon of any type for Monotype Challenge runs
        - Find codes in documentation!
- Difficulty Modes!
    - Normal Mode: Soft Level Caps, Standard Gym Leader teams. Can likely beat the game with most Pokémon teams, with a few battles requiring extra planning.
    - Hard Mode: Hard Level Caps, Modified Gym Leaders to be more difficult fights. Opponents gain extra levels as the game progresses, ending in a +5 level bonus to opponents. Planning before Gym battles is key, as their Pokémon have stronger moves and more coverage.
    - Difficulty toggled at computer on far right side of Acrisia University building!
- Various QOL Changes, such as:
    - Expanded Bag space to 50 Items
    - Shiny Indicator for wild Pokémon
    - Press L to toggle auto-run
    - Pokémon types shown in battle
    - Pokémon animate after KO
    - NPC speaker name shown above text box
    - Reusable TMs!
    - HM Revamp ported from Emerald Seaglass
        - Pokémon who can learn HM moves can use them in the field without them taking a move slot!

## Future Development Plans

MAJOR TODOS:
- PRE-DEMO RELEASE PROJECTS:
    - Prepare for Demo release
        - Disable debug functions
        - Create "Demo" gfx for version # on title screen
        - Create "demo disclaimer" PDF (acknowledge possibility for bugs & changes, placeholder sprites, etc)
- Work on ideas from note on phone
    - Elite Redux inspired abilities & moves
    - New areas: 
        - 
        - Explore AC odyssey world for other location inspo lol
- Give all Pokémon unique Pokédex entries
- PROPER QUEST SYSTEM: https://github.com/PokemonSanFran/pokeemerald/wiki/Unbound-Quest-Menu
    - Should work better now that I actually understand coding lol
    - Integrate with "Main Quest" (find Pokédex shipment, get badge 1, etc)
    - Integrate with "University Quests" (do things for Rania and Niko for rewards)
    - Set up with "Side Quests" (show Togepi for Eviolite in Acrisia City, etc)
- Add Cecilily as a trainer
    - "PkMn Trainer" class, comissioned sprite or she can choose one?
    - Rewards with level 10 Johto starters
    - Can be rebattled after the Elite Four (when flag FLAG_SYS_GAME_CLEAR set) to give Johto starter cabin dolls!
- Implement Biv's Fishing Minigame
    - Maybe also that upgrade-able fishing rod thing?
    - Wait until treasure catching is implemented because that's so cool!
- Mudskip's Outfit system: https://github.com/mudskipper13/pokeemerald/tree/feature/outfits-system-rhh?tab=readme-ov-file
    - Outfits: Default (Musa & Harper), Calem & Serena (unlocked on catching/choosing a Gen 6 starter), USUM Protagonists (unlocked w/ Gen 7 starter), Arven & Nemona (unlocked w/ Gen 9 starter), Yellow (unlocked w/ catching a Pikachu). Plus a few basic variant customizations for Musa and Harper which can be earned or bought from vendors.
- Mudskip's GSC Battle Background code: https://github.com/mudskipper13/pokeemerald/commits/battle-bg-option/
    - Also implement the second options page, and move the computer options (difficulty, visible day/night) from Acrisia University to the options menu


GREEK PHRASES AND STUFF:
- "Chaire" - basically ancient greek "aloha" (hello/goodbye)
- "Andio" - goodbye
- "Opa!" - directly translates to "Oops", but really used to show appreciation/enthusiasm
- "Yamas" - cheers!
- "Den gnorzio" - I don't know

- EVENTS AND STUFF:
    - Use in-game day count tracker to have events in different parts of the region every X number of days
        - Have PokéNav call from representatives from different towns you've visited announcing festivals
    - Finish implementing Prof. Elia, Rania, and Niko's gifting / interactions based on Pokédex progress
        - Prof. Elia gifts a few helpful items and starter Pokémon with special good stats + Oval Charm
        - Rania provides Tera Shards and other battle items (Rocky Helmet, etc) + Exp Charm
        - Niko provides unique Pokéballs + Catching Charm, eventually becomes a Pokéball shop
    - MISSING IMPORTANT BUILDINGS / LOCATIONS / UNLOCKS
        - Daycare for Pokémon Breeding (Erynis Path? could be cute)
        - Contest Hall (Sofos City?)
        - Tera Orb unlock (optional quest after 3rd gym)
            - Remember to use FLAG_UNLOCKED_TERASTALLIZATION
            - If flag FLAG_UNLOCKED_TERASTALLIZATION set, allow Gym Leaders to terastallize? Seems fair
            - ALSO: change Pinball egg shop in Sofos City to a Tera Shard distributor (1 random shard per point)
        - Berry plant locations
        - Hidden & Ball items across maps
            - ex: add item ball in acrisia city rock smash area!
        - Fishing Rod locations (Good/Super rods still need places)
        - Safari Zone?
        - Dive locations
        - Espathra (bike) give location
            - Probably on one of the islands?
        - Unlock seeing wild Pokémon natures and Abilities
            - Tutorial: https://www.pokecommunity.com/threads/simple-modifications-directory.416647/post-10893555
            - Implement above feature using flag in "if" statements. Unlock flag via sidequest
            - Unlocked by Rania quest line?
        - Spiky Ear Pichu gift
        - Wishing Star mart location
        - Ogerpon gift event
            - Reward for helping Daycare / zoo area?
        - Cabin (secret base) decor shops!
            - Decor merchants in EVERY POKEMART selling some area-themed stuff (ex: decor merchant in Pythios Town selling candle decor from Zaebucca's Decoration & Furniture tileset)
            - Large shop in Sofos City or another city dedicated to decorations?
            - Replace dolls of Pokémon not in Ilios region: marked in include/constants/decorations.h with "// Needs Replacement" comment
            - Can also add more decorations: see include/constants/decorations.h for list
            - Make Silver Shield, Gold Shield, and Glass Ornament decorations into rewards fit to Ilios Region! (idea: replace Shields with Opal Fossil and Shocking Relic, based on Opalized fossils and the Antikythera Mechanism. Replace Glass Ornament with a statue sprite)

- LAZARUS PREVIEW PLANS
    - Preview 01 (12/6/24) - Pokémon Sunset Reveal - shows graphics, Day/Night cycle, etc.
    - Preview 02 (12/24/24) - Pokémon Sunset Starters Reveal - shows starters + best overworld sprites for them
    - Preview 03 (01/??/25) - Pokémon Lazarus Rename Reveal + Seaglass Feature Ports - shows Pinball, Pokémon type changes, and Wishing Well

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
- New Shop UI by mudskip
- New Continue Menu UI and Party Menu by Archie
- Overworld Encounters by [HashtagMarky](https://github.com/HashtagMarky/pokeemerald/tree/ikigai/ow-encounters)
- GSC/HGSS Ruins of Alph Sliding Puzzles by [Spherical Ice](https://www.pokecommunity.com/threads/ruins-of-alph-sliding-puzzles-pokefirered.463032/)
- Town Map feature port by Vol

### Graphics
- Tilesets:
    - Most basic overworld sprites purchased from Zaebucca and Arex on itch.io
    - Pokémon Center, Mart, and Gym Buildings by TrainerDX
    - Some GBC-style default houses by TrainerDX
    - Broken pillar tiles by Hek-el-Grande on DeviantArt
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
- Trainer Sprites:
    - Many Sapphire-based GBC sprite devamps by leesongjae620 on DeviantArt
    - Some GBC style Trainer sprites from Pokémon Crystal
    - Scientist F, Punk Rocker, Hiker, and a few other sprites from Solo993's Unova sprite devamps
    - Professor, Performer F, Worker, and Scuba Diver sprites by Substitube
- Overworld Sprites:
    - Many NPC sprites adapted from Pokémon Crystal
    - Some NPC sprites by Anima_nel on itch.io
    - Some NPC sprites by kesterhenrickpixels on DeviantArt
    - Player sprites by me!
- Overworld Pokémon Sprites:
    - Gen 1 and 2 overworld sprites by Anima_nel on itch.io!
    - Megaman-Omega on DeviantArt: Onix, Steelix, Lugia, Ho-oh, Lotad, Lombre, Ludicolo, Taillow, Swellow, Surskit, Masquerain, Shroomish, Breloom, Whismur, Loudred, Exploud, Makuhita, Hariyama, Sableye, Mawile, Aron, Lairon, Aggron, Volbeat, Illumise, Torkoal, Cacnea, Cacturne, Swablu, Altaria, Lileep, Cradily, Anorith, Armaldo, Feebas, Milotic, Shuppet, Banette, Duskull, Dusclops, Chimecho, Absol, Relicanth, Bagon, Salamence, Kyogre, Groudon, Rayquaza, Tangrowth, Electivire, Magmortar, Gliscor, Mamoswine, Gallade, Froslass, Eevee, Vaporeon, Jolteon, Flareon, Espeon, Umbreon, Leafeon, Glaceon, Sylveon
    - Eeveeee: Spoink, Kleavor
    - SageDeoxys: Wyrdeer
    - .kedoshim: Ursaluna
    - Mudskip: Applin
    - Jaquelion: Dipplin, Hydrapple
    - DarkusShadow: base Tinkaton line sprites (GBA style)
    - Many others from Generations 3-4 by resource from Mano_Emet on Discord (Created by Megaman-Omega)
    - Many Generation 5-7 overworlds based on icon sprites by Eeveee1999 on DeviantArt
- User Interface:
    - Title Screen: Pixel art done by me over original image [here](https://www.athens-private-tours.com/wp-content/uploads/2015/05/Acropolis-Sunset-15891085.jpg)
    - New Continue menu UI and Shop UI by mudskip (Continue menu code by Archie)
    - Many Pokémon Party Icons based on following sprites (credited above), others by Chamber, Solo0993, Blue Emerald, Lake, Neslug, and Pikachu25 (Most Gen 1-2 icons)
        - EeVeeEe1999: created many small sprites, especially for Gen 3, 5, 6, and 7 Pokémon
        - A few Gen 6 icon sprites by  dragonball253 (some Kalos starter icons)
    - Battle Backgrounds based on work by PurrfectDoodle, RavePossum, and Ruki; some slight edits by me
    - HGSS-style map icon kit by NikNaks93 on DeviantArt



# Story / Region Information for me to look at

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
        - Gym 2: Mattaios, the Rock type gym leader
            - Based on Sisyphus, a hermit who is the last worker at this once prolific mine
            - Team: Level 17-19
            - Reward: Gemstone Badge, unlocks Rock Smash outside battle, TM Rock Tomb
    - Continue south with Rock Smash through Jusmail Town and through the Wanderer's Woods
        - Wanderer's Woods filled with fallen logs, mushrooms, and overgrown plants
        - Many grass, bug, and dark/ghost types (murkrow, drowzee, capsakid, etc)
    - Reach Pythios Town, based on Delphi
        - Town is very "autumn-themed", with orange-red color palette alternatives compatible with tree sprites
        - Gym 3: Sabella, the Ghost/Psychic Gym Leader
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
        - Gym 4: Minerva, a Tactical gym leader (multi-type, all about stat boosts and baton pass)
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
            - Gym 5: Thyrsus, a Poison/Confusion themed gym leader
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

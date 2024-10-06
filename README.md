# Pokémon Sunset Version

A Pokémon ROM Hack based on the [pokeemerald-expansion](https://github.com/rh-hideout/pokeemerald-expansion) project.

## What is Pokémon Sunset?

This ROM Hack takes place in a brand new region, with a whole new adventure ahead of you! By helping people and making an impact on this living, active region, you can rise through the ranks and become a great Pokémon Trainer.

Pokémon Sunset Version is a ROM Hack coming from my love for real-world animals and ecosystems. After creating Pokémon Emerald Seaglass, I really wanted to continue my ROM Hacking journey, but I wanted to get more experimental and tie in my real world interests. As a Biology student in college, I have been constantly inspired by classes and what I've learned, and now I hope to apply this passion in a Pokémon game. I hope this experience helps people to think more about the environment around them! :)

## Feature List
- Day/Night System with FakeRTC
    - Every second in real time is 20 seconds in game
- DexNav functionality, including bug fixed from Emerald Seaglass
    - Including Cheat Code to show all DexNav Pokémon from the start: "JUSTSHOWME"
- NPC speaker name shown above text box ("speakername" command)
- Cheat Code system, with many helpful cheats and ways to shake up repeat playthroughs!
    - Codes for 99 items, such as Rare Candies and Nuggets
    - Codes for a random starter of a selected type (good for monotype runs or randomized starters!)
    - Can find codes in documentation
- Variable Wild Encounters, randomized between a few balanced preset options every New Game
    - Uses: https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Easily-Toggle-Different-Wild-Encounter-Tables
- Soft Level Caps to keep balance
- HM Revamp ported from Emerald Seaglass
    - Pokémon who can learn HM moves can use them in the field without them taking a move slot!
- Various QOL Changes, such as:
    - Expanded BAG space to 50 Items
    - Shiny Indicator for wild Pokémon
    - Press L to toggle auto-run
    - Pokémon types shown in battle
    - Pokémon animate after KO

## Future Development Plans

- ADD A FEW NEW POKéMON AND ABILITIES:
    - Add abilities: https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Buffing-&-Adding-abilities
        - Scurry: Signature ability of Crocky, increases Evasiveness when sent out
    - New Pokémon
        - Crocky and Kotora (commissioned sprites)
        - A few other beta Pokémon (Ice type Werewolves) (https://tcrf.net/Proto:Pok%C3%A9mon_Gold_and_Silver/Spaceworld_1997_Demo/Pok%C3%A9mon)
        - Commission Thylacine Pokémon? Ghost/Normal type or Ghost/Rock type?

- Custom Mapping references to remember:
    - Use "Dynamic Warps" to change warp location based on script (https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Dynamic-Warp)
    - Consider adding FRLG-style map previews (https://github.com/pret/pokeemerald/wiki/Adding-the-Map-Preview-Screens-from-FRLG)
    - Region Map editing:
        - TEAM AQUAS HIDEOUT VIDEOS: https://www.youtube.com/playlist?list=PLLNv9Lq6kDmT2zNM_gz3IkUUzjT4KaC-G
        - Adding new maps: https://www.pokecommunity.com/threads/tutorial-adding-new-map-sections-for-name-popups-and-region-map.433496/
            - MAKE SURE TO READ "CAVEAT" SECTION!
        - Delete maps: https://github.com/pret/pokeemerald/wiki/How-to-delete-a-map
            - Only do this if/when necessary!
        - 2x2 cities: https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Support-2x2-Cities-on-the-Region-Map
    - Consider Berry Tree works in map, including maybe implementing mulch, weeds, etc
        - Could be cool and interesting! Especially in player "home base" area
    - REMEMBER: Add WISHING WELL to area early on! Maybe it's own dedicated location in some ruins?

- Battle Gimmick: Terastalization if implemented!
    - Accessible for all Pokémon, relatively understandable, I think it's fun!

- EVENTS AND STUFF:
    - Use in-game day count tracker to have events in different parts of the region every X number of days
        - Have PokéNav call from representatives from different towns you've visited announcing festivals
    - Use "Spawn Invisible Player" tutorial for little cutscenes
        - https://github.com/pret/pokeemerald/wiki/Spawn-Invisible-Player

## Known Bugs & Problems
- DexNav chain count and directional arrow not shown correctly when hunting
- When cycling stats, the "STATS" text is whited out
- Stat coloration not shown in summary - likely related to the hacky solution to black text lol

## Credits
Many, many talented developers and artists are responsible for making this project possible. The Credits have been split into various sections below to make them easier to navigate - please support them however you can!! :)

### Feature Branches
- Day/Night System created by merrp, and updated to pokeemerald-expansion by Greenphx9
- DexNav feature branch by ghoulslash
- Name Box branch by Tustin2121
- View Pokédex from Party Menu by RavePossum
- Different Wild Encounter Tables by Bivurnum
- New Shop UI by mudskip
- New Continue Menu UI by Archie

### Graphics
- Tilesets:
    - Most basic overworld sprites purchased from Arex and Zaebucca on itch.io
    - Pokémon Center and Mart by TrainerDX
- Pokémon Sprites:
    - Most Generation 3 and 9 Pokémon sprites by [Egg](https://x.com/Egg3ggEgg) on Twitter
    - Many Generation 3 and other Pokémon sprites by [Nuukiie](https://www.deviantart.com/nuukiie) on DeviantArt
    - Many Generation 4 sprites by ESY on DeviantArt
    - Some Hisuian Pokémon sprites (Kleavor and Ursaluna) by Katten and dwg1109 on DeviantArt
    - Generation 1-2 Pokémon and many UI sprites from Spriter's Resource GSC sprite sheets
    - Spiky-ear Pichu sprite based on Pichu devamp by Matdemo159 on DeviantArt
    - A few modified Gen 1-2 Pokémon sprites (Golduck, Aipom, Politoed) by Substitube
    - Hydrapple line sprites and various other gen 2 style sprites (Charizard, Dudunsparce, Porygon line) by SageDeoxys on Twitter
    - Alolan Sandshrew/Sandslash and Alolan Vulpix/Ninetales sprites by wittycrow on DeviantArt
- Overworld Sprites:
    - Many NPC sprites adapted from Pokémon Crystal
    - Some NPC sprites by Anima_nel on itch.io
- Overworld Pokémon Sprites:
    - Gen 1 and 2 overworld sprites by Anima_nel on itch.io!
    - Megaman-Omega on DeviantArt: Onix, Steelix, Lugia, Ho-oh, Lotad, Lombre, Ludicolo, Taillow, Swellow, Surskit, Masquerain, Shroomish, Breloom, Whismur, Loudred, Exploud, Makuhita, Hariyama, Sableye, Mawile, Aron, Lairon, Aggron, Volbeat, Illumise, Torkoal, Cacnea, Cacturne, Swablu, Altaria, Lileep, Cradily, Anorith, Armaldo, Feebas, Milotic, Shuppet, Banette, Duskull, Dusclops, Chimecho, Absol, Relicanth, Bagon, Salamence, Kyogre, Groudon, Rayquaza, Tangrowth, Electivire, Magmortar, Gliscor, Mamoswine, Gallade, Froslass, Eevee, Vaporeon, Jolteon, Flareon, Espeon, Umbreon, Leafeon, Glaceon, Sylveon
    - Eeveeee: Spoink, Kleavor
    - SageDeoxys: Wyrdeer
    - .kedoshim: Ursaluna
    - Mudskip: Applin
    - Jaquelion: Dipplin, Hydrapple
    - DarkusShadow: base Tinkaton line sprites (GBA style)
    - Many others by resource from Mano_Emet on Discord (Created by Megaman-Omega)
- User Interface:
    - Title Screen: Pixel art done by me over original image [here](https://www.athens-private-tours.com/wp-content/uploads/2015/05/Acropolis-Sunset-15891085.jpg)
    - New Continue menu UI and Shop UI by mudskip (Continue menu code by Archie)



# Story / Region Information for me to look at
STORY PLAN: Game takes place in the Ilios Region (Greek for "Sun"), based on the Greek peninsula and Aegean Sea
    - Region composed of areas around Greek Peninsula, various Aegean Sea islands, and coastal Turkey
        - Major cities based on Athens, Byzantium, and Knossos
        - Post game "Battle Frontier" area (new map with Battle Frontier warps lol) takes place on island of Malta
        - Semi open-world sections: starts linear, opens up for gyms 3-6 with scaling levels based on gym badges (bouncing around Aegean islands), and playthroughs converge around gym 7 for completing story
        - Start playthrough in Acrisia, based on city of Larissa, containing Agria University
            - All other students moved into village (village is host of researchers), here for research - introduced to Professor and sent for fieldwork
            - Head south to Delphi-based town, which has wishing well-like area and 1st gym (psychic)
                - Travel through a forest on the way south, which includes a "rest camp" area (mini-town w healspot)
    - Gym Leaders based on Greek Gods
        - Poison gym leader with toxic orb Gliscor based on Dionysus, likes to confuse opponents
        - Fairy + normal gym leader based on Aphrodite, uses Attract a lot
        - Fire + steel gym leader based on Hephastus, whole gym is a forge, Tinkaton main
    - Player character is a researcher coming to the Agria University as a Graduate student researching Pokémon Ecology
        - Goal: to record and capture all Pokémon in Ilios Region!
        - Need to become a strong Trainer to handle some Pokémon - motivation to complete Gym challenge
    - Main Story: Team Kleftis (Team "Thief" in Greek. lol) is stealing important artifacts and Pokémon from the region and selling them for profit!
        - Your rival is secretly connected to the organization - seems nice at first, but is clearly keeping secrets, revealed to be connected around Gym 7

REGION PLAN:
    - Start in Acrisia City, based on Greek city of Larissa
        - Location of Agrias University
        - West: Acrisia Mountains up to Discus Mines
    - Head south through Bronze Fields
    - Find Jusmail Town, a small farming town based on Lamia
        - Gym 1: Deo, based on Demeter
            - Grass and Bug types, gym centered around the harvest + agriculture
            - Team: Ledyba, Bellsprout, and Skiddo (level 10-12)
            - Unlocks use of Cut outside battle
    - South path blocked by Rock Smash - told to head back North to Acrisia City
    - West of Acrisia is the Acrisia Mountains, leading up to Discus Mines
        - Discus Mines is not much of a town, mostly just a hermit's workshop and a little infrastructure
        - Gym 2: Mattaios, the Rock type gym leader
            - Based on Sisyphus, a hermit who is the last worker at this once prolific mine
            - Team: Aron, Phanpy, Klawf (level 13-16)
            - Unlocks Rock Smash outside battle
    - Continue south with Rock Smash through Jusmail Town and through the Wanderer's Woods
        - Wanderer's Woods filled with fallen logs, mushrooms, and overgrown plants
        - Many grass, bug, and dark/ghost types (murkrow, drowzee, capsakid, etc)
    - Reach Pythios Town, based on Delphi
        - Town is very "autumn-themed", with orange-red color palette alternatives compatible with tree sprites
        - Gym 3: Sabella, the Ghost/Psychic Gym Leader
            - Based on the Oracle of Delphi, and Enoch from Over the Garden Wall (wears pumpkin mask)
            - Gym centered around mysterious spirits in fields of crops
            - Team: Misdreavus, Spoink, and Pumpkaboo (level 17-20)
            - Unlocks Flash outside of battle
        - West: Pottsfield Cemetery, based on Pottsfield from Over the Garden Wall
            - Mark as FLASH AREA! Have NPCs talk about the "dark mists surrounding the cemetery"
    - Travel east through Snowrage Pass (a snowy area cursed by Demeter because Persephone is taken to the underworld), south a bit through Absol's Drop, and east more through Floette's Grace
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
        - Marmaro is an island with Marble quarries, many rock and fairy types
        - Myrrini is an island with a large, busy port and is covered in grape vines
            - Gym 5: Thyrsus, a Poison/Confusion themed gym leader
                - Based on Dionysus, always talking about festivals and parties
                - Team: Ludicolo (party!), Grafaiai, Seviper, Gligar, and Hypno (level 30-32)
                - Unlocks Dive outside of battle
    - In the middle of the Sea of Ilios lay the islands of Irene and Fresco, based on Santorini
        - Islands form a ring around Mt. Ifaisteio, an active volcano
        - Irene Isle (based on Therasia, the west island) has ancient Minoan-inspired ruins
        - Fresco Isle (based on Santorini) is long and dotted in patches of desert ("semi-arid environment!") + volcanic ash
            - Gym 6: Khalkeus, the Fire/Steel gym leader
                - Based on Hephaestus, living on a little volcanic hotspot on Fresco Isle
                - Team: Lairon, Salazzle, Doublade, Darmanitan, Tinkaton (level 32-35)
                - Unlocks Strength outside of battle
    - Furthest south in the Sea of Ilios is the island of Kaptara, based on Crete
        - Covered in Minoan-inspired ruins, like Irene Isle
        - Split between east and west, bisected by Palati, based on Knossos
            - Gym 7: Ermo, the Flying gym leader
                - Based on Hermes, always running around and flying on his Pokémon
                - Team: Dragonite, Honchkrow, Pelipper, Noctowl, Jolteon, and Kilowattrel (level 35-37)
                - Unlocks Fly outside of battle
    - After Gyms 5-7 are defeated, player backtracks through Sofos City and further east to a crossroad in Absol's Drop
    - South from this is Port Pello, based on Megara
        - Probably story here, gearing up for final showdown with evil team
    - Head West of Port Pello, through Polemos Pass, then South through the Nyx Trail
    - South to Areios Hideout, the main base of the evil team
        - Gym 8: Alcippe, the Fighting gym leader
            - Named after daughter of Ares
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
        - Mountain pass on Absol's Drop opens up
            - Opens hyper-difficult cave with competitive-level trainers, descending into the earth with Hades as the final game boss
        - New EV/IV editor opens shop in Sofos City
        - Areas with select Legendary Pokémon appear
            - These areas also have evolved forms of Pokémon, making Pokédex completion easier
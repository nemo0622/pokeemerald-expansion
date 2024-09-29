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
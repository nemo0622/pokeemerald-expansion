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
- Various QOL Changes, such as:
    - Expanded BAG space to 50 Items
    - Shiny Indicator for wild Pokémon

## Future Development Plans
STORY PLAN: Takes place on the Sunset Archipelago, a series of islands far to the west, that has recently undergone mass migration events and ecological changes. You play as a college-aged student doing field research at your school's Field Station on the archipelago. Travel around the islands in a semi-open-world setting, helping people and completing tasks to earn Prestige Badges. Filling the Pokédex is the main goal of the game, with some landmarks and Badges being locked behind Pokédex requirements. Many of the trainers you encounter on the islands are other Field Research Students - some islands are inhabited with traditional towns, while others are totally wild aside from other students.

- THEN, MERGE IN SEAGLASS GRAPHICS
    - Some UI elements - battle UI, text boxes, DexNav elements
        - Update text colors! Party menu, summary screen, etc
- ALSO MERGE SOME OTHER IMPORTANT CHANGES
    - Press L to auto-run, R to register DexNav Pokémon, and make sure creeping with DexNav overrules autorun

- ADD A FEW NEW POKéMON AND ABILITIES:
    - Add abilities: https://github.com/Pawkkie/Team-Aquas-Asset-Repo/wiki/Buffing-&-Adding-abilities
        - Scurry: Signature ability of Crocky, increases Evasiveness when sent out
    - New Pokémon
        - Crocky and Kotora (commissioned sprites)
        - A few other beta Pokémon (Ice type Werewolves) (https://tcrf.net/Proto:Pok%C3%A9mon_Gold_and_Silver/Spaceworld_1997_Demo/Pok%C3%A9mon)
        - Commission Thylacine Pokémon? Ghost/Normal type or Ghost/Rock type?

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

## Credits
Many, many talented developers and artists are responsible for making this project possible. The Credits have been split into various sections below to make them easier to navigate - please support them however you can!! :)

### Feature Branches
- Day/Night System created by merrp, and updated to pokeemerald-expansion by Greenphx9
- DexNav feature branch by ghoulslash
- Name Box branch by Tustin2121
- View Pokédex from Party Menu by RavePossum
- Different Wild Encounter Tables by Bivurnum

### Graphics
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
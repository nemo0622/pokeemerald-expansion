# Pokémon Emerald Seaglass

Rom Hack based on Pokémon Emerald Expansion.

Documentation on Encounters and Pokémon Typing can be found (here)[https://docs.google.com/document/d/1OszN1OpqSaCd1Xh4AFgchgvVfCOX5l2OIztPUgnbisU/edit?usp=sharing]

## What is special about this Rom Hack?

Pokémon Emerald Seaglass is a complete visual overhaul of Pokémon Emerald, converting the style of the overworld and Pokémon to a more retro, Gameboy-like style. In addition, all Pokémon from Generations 1-3 are catchable, evolutions from later generations were added, and various other changes have been made to make this a unique Emerald experience.

## FEATURES

- Complete visual overhaul, thanks to [Zaebucca](https://zaebucca.itch.io/)'s tiles!
    - Style resembles old 90's RPGs, like an upgraded Pokémon GSC style
    - Pokémon use GBC-style sprites, from Generation 2 and talented artists like [Egg](https://x.com/Egg3ggEgg)
    - Overworld NPCs have more retro artstyle, with a white outline to make them pop!
    - Upgraded Pokédex with many helpful new features, inspired by HGSS dex but in GBC style
- New additions to some maps to increase interesting events
    - Ex: Wishing Well in Rustboro City, Birdhouses in Fortree City, etc.
- All Pokémon from Generations 1-3 are available, spread out enough to keep it from feeling bloated!
    - Cross-gen evolutions have also been added, up to Gen 9!
    - Pokémon use modified USUM movesets when applicable
    - Almost all Pokémon have recieved some changes! From slight stat changes to new types, each Pokémon should feel more unique to use
    - Additional available Pokémon: Spiky-Ear Pichu and the Tinkaton line (details on obtaining in documentation)
- Party-wide EXP Share, with soft level caps to balance this change
    - This is *NOT* a "difficulty hack"! These changes just cut down on some grind while still keeping a good balance
    - Soft level cap allows for you to reach the gym leader's max, then halves exp gain for the next few levels, then cuts it more
- Battle Gimmick: Z-Power Ring and Z-Crystals can be obtained from the DEVON Corporation after delivering Steven's letter
    - Completely optional and out of the way - if you don't like Z-Moves, don't even bother getting the Z-Ring!
    - EXP. Share is given by Scott in Petalburg, just after Wally's catching tutorial
- Various QoL Changes, including:
    - Type Effectiveness shown in battle
    - HM System revamp: if HM is in bag and the right badge is owned, Pokémon that can learn the HMs can naturally use them
    - Shiny odds 1/4096 by default, but Shiny Charm is in Player PC to increase odds (gives 5 extra rerolls!)
        - Second Shiny Charm, giving even more rerolls, available in Fortree City! Interact with all shrines from east to west in order, and the second Shiny Charm will be in the final shrine (left of the Pokémon Center)
    - Press R to toggle auto-run
    - Press A in Summary Screen to view IVs and EVs; All Pokémon have at least 2 perfect IV's
    - Legendaries can all be encountered, many before Elite Four - details in documentation
    - Pokémon Box Link, allowing access to PC from anywhere (obtained from Scientist NPC in Slateport City Pokémon Center)

## FUTURE PLANS

High Priority (Before Release 1.0):
- DexNav!
- Go through trainer teams and integrate all Gen 1-3 Pokémon!
    - Change level cap levels in level_caps.c to adjust to modified level curve
    - Wait for Expansion 1.9.0 - i think a big refactoring of trainers is coming
- Convert scripts to PoryScript and code extra events
    - Create quest NPCs to give some helpful optional items (Oval Charm, etc)
        - DEWFORD TOWN: add rare berry dealer, giving rare berry for showing random Pokédex entry daily?
    - Change Team Aqua/Magma dialogue to be less bad lol
- Bring back Contest Halls, replacing battle tents!
    - Also make Contest stats influence battle performance (higher Sheen or something giving a boost??)
- Add changes inspired by Saffron City TV's Hoenn Repair video
    - PACIFIDLOG FIX: Diving minigame in Pacifidlog, catch Pokémon like safari zone
        - To make this minigame important, maybe make a prize the HM for WATERFALL?? To make player engage with Pacifidlog
        - REFERENCE "LoadWallyZigzagoon" function in field_specials.c to see CreateMon function! For NPCs competing!
        - ALSO! Make Pacifidlog accessible from Slateport with a Pelipper Carrier NPC or something! This will allow the Player to see the area more than once, and it will also allow them to buy the Applin evolutionary items here!
    - Move Name Rater to Oldale Town
    - Respawn Kecleon in Fortree and surrounding areas every so often

Later Additions (After Release 1.0):
- Make Pokenews thing happen more often (Lilycove Dept. Store rooftop sales, Berry Blend master, etc)
- After Expansion 1.9.0 adds follower system, maybe revamp follower sprites to be in retro style to fit game?
- Day/Night system? Maybe with FakeRTC system using internal clock system?
- Look into music modding! Convert sound font to be more like gen 2?

## KNOWN BUGS & PROBLEMS

- Battle Frontier largely uses vanilla Emerald tiles, so it doesn't really match the rest of the game
- Some tiles may misalign - a few cave tiles and Fallarbor trees, but nothing major
- Many special NPCs (Elite Four members, Wallace, etc.) are kind of just slightly modified NPC sprites for now, need fully custom sprites in the future

## CREDITS

Please support everyone who made this possible!
- Tiles:
    - Most tiles by [Zaebucca](https://zaebucca.itch.io/) on itch.io and Twitter
    - Some buildings and other bits by [Arex](https://arex-v.itch.io/fantasy) on itch.io
- Pokémon Sprites:
    - Most Generation 3 and 9 Pokémon sprites by [Egg](https://x.com/Egg3ggEgg) on Twitter
    - Many Generation 3 and other Pokémon sprites by [Nuukiie](https://www.deviantart.com/nuukiie) on DeviantArt
    - Many Generation 4 sprites by ESY on DeviantArt
    - Some Hisuian Pokémon sprites (Kleavor and Ursaluna) by Katten and dwg1109 on DeviantArt
    - Generation 1-2 Pokémon and many UI sprites from Spriter's Resource GSC sprite sheets
    - Spiky-ear Pichu sprite based on Pichu devamp by Matdemo159 on DeviantArt
    - A few modified Gen 1-2 Pokémon sprites (Golduck, Aipom, Politoed) by Substitube
    - Hydrapple line sprites and various other gen 2 style sprites (Charizard, Dudunsparce, Porygon line) by SageDeoxys on Twitter
- Overworld Sprites:
    - New player sprites by [Solo993 and GOLDHIBIKI](https://www.deviantart.com/solo993/art/Pokemon-Special-HgSs-saga-gbc-sprites-454150898) on DeviantArt
    - Some trainer sprites by leeseongjae620 on DeviantArt
- User Interface:
    - Party menu Pokémon icons by EeVeeEe1999 on DeviantArt (Gen 3 icons) and Chamber, Solo0993, Blue Emerald, Lake, Neslug, and Pikachu25 (Most Gen 1-2 icons)
    - New battle backgrounds by Princess-Phoenix and Carchagui on DeviantArt
    - Option to disable battle backgrounds by Mudskip (thank you!)
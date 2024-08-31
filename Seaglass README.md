# Pokémon Emerald Seaglass

Rom Hack based on Pokémon Emerald Expansion.

Documentation on Encounters and Pokémon Typing can be found (here)[https://docs.google.com/document/d/1OszN1OpqSaCd1Xh4AFgchgvVfCOX5l2OIztPUgnbisU/edit?usp=sharing]
My [Ko-Fi Website](https://ko-fi.com/nemo622) also has more information (and I accept donations!)

## What is special about this Rom Hack?

Pokémon Emerald Seaglass is a complete visual overhaul of Pokémon Emerald, converting the style of the overworld and Pokémon to a more retro, Gameboy-like style. In addition, all Pokémon from Generations 1-3 are catchable, evolutions from later generations were added, and various other changes have been made to make this a unique Emerald experience.

## FEATURES

- Complete visual overhaul, thanks to [Zaebucca](https://zaebucca.itch.io/)'s tiles!
    - Style resembles old 90's RPGs, like an upgraded Pokémon GSC style
    - Pokémon use GBC-style sprites, from Generation 2 and talented artists like [Egg](https://x.com/Egg3ggEgg)
    - Overworld NPCs have more retro artstyle, with a white outline to make them pop!
    - Upgraded Pokédex with many helpful new features, inspired by HGSS dex but in GBC style
- New additions to some maps to increase interesting events
    - Minigames in more towns with fun rewards (more details below)
    - Helpful item merchants in a few towns, with stat-changing and evolution items
- All Pokémon from Generations 1-3 are available, spread out enough to keep it from feeling bloated!
    - Cross-gen evolutions have also been added, up to Gen 9!
    - Pokémon use modified USUM movesets when applicable (many Pokémon also have more coverage moves and more interesting sets in general)
    - Almost all Pokémon have recieved some changes! From slight stat changes to new types, each Pokémon should feel more unique to use
    - Trainers use wider variety of Pokémon (Team Aqua and Magma fights are finally interesting!)
    - Additional available Pokémon: Spiky-Ear Pichu, Tinkaton line, and Applin line (details on obtaining in documentation)
- Overworld Following Pokémon!
- Numerous upgrades to the battle system:
    - Changes from pokeemerald-expansion to update battle engine, such as Fairy type, Physical/Special split, etc.
    - Party-wide EXP Share, with soft level caps to balance this change
        - This is *NOT* a "difficulty hack"! These changes just cut down on some grind while still keeping a good balance
        - Soft level cap allows for you to reach the gym leader's max, then halves exp gain for the next few levels, then cuts it more
        - EXP. Share is given by Scott in Petalburg, just after Wally's catching tutorial
    - Battle Gimmick: Z-Power Ring and Z-Crystals can be obtained from the DEVON Corporation after delivering Steven's letter
        - Completely optional and out of the way - if you don't like Z-Moves, don't even bother getting the Z-Ring!
- More minigames to break up Pokémon battles!
    - SCUBA SAFARI, Pacifidlog Town: A combination of the Safari Zone and Bug Catching Contest from Johto, with 200 steps or 5 encounters in a dedicated underwater area to find a high-scoring Pokémon. Various helpful rewards are provided, including the HM Waterfall. Pacifidlog Town is also accessible from Slateport through an NPC with a Kirlia by the Pokémon Center after beating Team Aqua in the Museum.
    - PINBALL, Mauville Game Corner and Mossdeep Game Corner: Four unique pinball games (SEEL, GENGAR, MEOWTH, and DIGLETT) are in both Game Corners. Beating the games award PINBALL POINTs, which can be used to get rare Pokéballs, items, and even some Alolan forms!
    - CONTESTS: The Contest Hall has been moved to Verdanturf Town, and the Verdanturf Battle Tent has been moved to Lilycove! This will let the player enter contests much earlier, hopefully engaging with them much more
        - An NPC in the Verdanturf Contest Hall can reset a Pokémon's SHEEN!
    - RUSTBORO WISHING WELL: On the east side of Rustboro City sits an old Wishing Well. Using a Wishing Star item at the well summons a random Pokémon, similar to Wonder Trade or a Gacha system!
- Various QoL Changes, including:
    - Type Effectiveness shown in battle
    - HM System revamp: if HM is in bag and the right badge is owned, Pokémon that can learn the HMs can naturally use them
    - Shiny odds 1/4096 by default, but Shiny Charm is in Player PC to increase odds (gives 5 extra rerolls!)
        - Second Shiny Charm, giving even more rerolls, available in Fortree City! Interact with all shrines from east to west in order, and the second Shiny Charm will be in the final shrine (left of the Pokémon Center)
    - Press R to toggle auto-run
    - Press A in Summary Screen to view IVs and EVs; All Pokémon have at least 2 perfect IV's
    - Legendaries can all be encountered, mostly before Elite Four - details in documentation
    - Pokémon Box Link, allowing access to PC from anywhere (obtained from Scientist NPC in Slateport City Pokémon Center)
    - Cheat Codes / Mystery Gift function! Interact with GameCube in Player's room
        - Codes can provide Rare Candies, Master Balls, and a few cool Pokémon (Codes listed in documentation!)
    - Pokémon types shown in battle, and press L button to show more move information!
    - EV/IV Stat Editor in Party Menu after accessing Battle Frontier

## FUTURE PLANS

Patch 2.0 Plans:
- Hard mode harder?
- PacoSaro's new battle backgrounds
- Look at DNS branch in merrp's DNS discord thread in RHH discord?
    - MAKE COMMIT BEFORE MERGE! If it causes bugs just revert!

Later Additions (After Release 1.0):
- Proper Steven NPC sprite
- Music modding with MIDI files:
    - MIDI files of GBC songs: https://github.com/Pawkkie/Team-Aquas-Asset-Repo/tree/main/Audio/nehochupechatat
    - Pokécommunity tutorial: https://www.pokecommunity.com/threads/how-to-add-edit-and-understand-music-in-pokeemerald.444317/
- Day/Night system? In conjunction with enabling FAKE RTC in config/overworld.h
- Random nicknames option?

## KNOWN BUGS & PROBLEMS

- MAJOR ISSUES:
    - Battle Tent is currently disabled - Rent Pokémon become BAD EGG and other stuff is busted
        - For now, the building is just blocked off by an NPC
- Visuals Issues:
    - Battle Frontier buildings mostly use vanilla Emerald tiles, which don't match the aesthetic of the rest of the game
    - Graphics flicker after every turn in battle
        - This is semi-intentional! Resetting the graphics prevents many freezes and move animation problems.
        - Move animations rarely, but occasionally, bug out for a turn. Should be rare and hard to replicate, but still possible
    - PP number text is yellow when learning new move
- Other issues:
    - Pinball physics are far from perfect, but tbh I think that adds to the charm lol

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
    - Alolan Sandshrew/Sandslash and Alolan Vulpix/Ninetales sprites by wittycrow on DeviantArt
- Overworld Sprites:
    - New player sprites by [Solo993 and GOLDHIBIKI](https://www.deviantart.com/solo993/art/Pokemon-Special-HgSs-saga-gbc-sprites-454150898) on DeviantArt
    - Some trainer sprites by leeseongjae620 on DeviantArt
- Overworld Pokémon Sprites:
    - Gen 1 and 2 overworld sprites by Anima_nel on itch.io!
    - Megaman-Omega on DeviantArt: Onix, Steelix, Lugia, Ho-oh, Lotad, Lombre, Ludicolo, Taillow, Swellow, Surskit, Masquerain, Shroomish, Breloom, Whismur, Loudred, Exploud, Makuhita, Hariyama, Sableye, Mawile, Aron, Lairon, Aggron, Volbeat, Illumise, Torkoal, Cacnea, Cacturne, Swablu, Altaria, Lileep, Cradily, Anorith, Armaldo, Feebas, Milotic, Shuppet, Banette, Duskull, Dusclops, Chimecho, Absol, Relicanth, Bagon, Salamence, Kyogre, Groudon, Rayquaza, Tangrowth, Electivire, Magmortar, Gliscor, Mamoswine, Gallade, Froslass, Eevee, Vaporeon, Jolteon, Flareon, Espeon, Umbreon, Leafeon, Glaceon, Sylveon
    - Eeveeee: Spoink, Kleavor
    - SageDeoxys: Wyrdeer
    - .kedoshim: Ursaluna
    - Mudskip: Applin
    - Many others by resource from Mano_Emet on Discord (could not find origin, need to find + credit artists)
- User Interface:
    - Party menu Pokémon icons by EeVeeEe1999 on DeviantArt (Gen 3 icons) and Chamber, Solo0993, Blue Emerald, Lake, Neslug, and Pikachu25 (Most Gen 1-2 icons)
    - New battle backgrounds by Princess-Phoenix, Carchagui, and Aveontrainer on DeviantArt
    - Option to disable battle backgrounds by Mudskip (thank you!)
- Feature Branches and Other Ideas:
    - Huge thanks to the Rom Hacking Hideout and Team Aqua's Hideout communities
    - Credit to Saffron City TV (on YouTube) for her Hoenn Review videos! They inspired a lot of changes, most strongly the diving minigame idea!
    - ShantyTown and Mudskip for the Pinball minigame!
    - DexNav feature branch by ghoulslash
    - Type Icons in battle from psf and RavePossum
    - Start Menu Clock by Pawkkie
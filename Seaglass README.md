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
- Party-wide EXP Share, with soft level caps to balance this change
    - This is *NOT* a "difficulty hack"! These changes just cut down on some grind while still keeping a good balance
    - Soft level cap allows for you to reach 1 level above the gym leader's max, then halves exp gain for the next few levels, then cuts it more
- Various QoL Changes, including:
    - Type Effectiveness shown in battle
    - HM System revamp: if HM is in bag and the right badge is owned, Pokémon that can learn the HMs can naturally use them
    - Shiny odds 1/4096 by default, but Shiny Charm is in Player PC to increase odds (gives 5 extra rerolls!)

## FUTURE PLANS

- AFTER EXPANSION 1.9.0: Go through trainer teams and integrate all Gen 1-3 Pokémon!
    - Change level cap levels in level_caps.c to adjust to modified level curve
    - Wait for Expansion 1.9.0 - i think a big refactoring of trainers is coming
- Make TMs 51-100 modern moves, or at least up to TM 60 or 70
- Implement Pichu Spiky-Eared and Tinkatink NPC gift eggs  (in "gen_1_families.h", edit base stats and give new moveset)
- Convert scripts to PoryScript and code extra events
    - Events: Rustboro City Wishing Well, Fortree City Birdhouses, etc. (plus add a few more easter eggs!)
    - Add some more NPCs across the overworld, with gift eggs and fun tidbits
    - Create quest NPCs to give some helpful optional items (Oval Charm, etc)
    - Also add events to allow access to Navel Rock, Faraway Island, etc. (plus new events for Jirachi and others)
    - NPC TO ENABLE OR DISABLE LEVEL CAPS (or maybe edit book on player desk to be a settings menu!!)
    - Edit existing events to fit with new events: don't give national dex after E4, give something other than shiny charm for collecting all Pokémon
- Purchase [Arex's Tiles](https://arex-v.itch.io/fantasy), using new tiles to increase map variety
    - Correct issues with collision while editing maps
- Add more general QOL features where necessary
- After Expansion 1.9.0 adds follower system, maybe revamp follower sprites to be in retro style to fit game?
- DexNav!
- Day/Night system? Maybe with FakeRTC system using internal clock system?
- Look into music modding! Convert sound font to be more like gen 2?
- BASED ON VOTE: white outline on battle sprites!

## KNOWN BUGS & PROBLEMS

- Battle Frontier largely uses vanilla Emerald tiles, so it doesn't really match the rest of the game
- Some tiles may misalign - a few cave tiles and Fallarbor trees, but nothing major
- Many special NPCs (Elite Four members, Wallace, etc.) are kind of just slightly modified NPC sprites for now, need fully custom sprites in the future

## CREDITS

Please support everyone who made this possible!
- Tiles by [Zaebucca](https://zaebucca.itch.io/) on itch.io and Twitter and [Arex](https://arex-v.itch.io/fantasy) on itch.io
- Most Generation 3 and 9 Pokémon sprites by [Egg](https://x.com/Egg3ggEgg) on Twitter
- Many Generation 3 and other Pokémon sprites by Nuukiie on DeviantArt
- Many Generation 4 sprites by ESY on DeviantArt
- Some Hisuian Pokémon sprites (Kleavor and Ursaluna) by Katten and dwg1109 on DeviantArt
- New player sprites by Solo993 and GOLDHIBIKI on DeviantArt
- Some trainer sprites by leeseongjae620 on DeviantArt
- Generation 1-2 and many UI sprites from Spriter's Resource GSC sprite sheets
- Party menu Pokémon icons by EeVeeEe1999 on DeviantArt (Gen 3 icons) and Chamber, Solo0993, Blue Emerald, Lake, Neslug, and Pikachu25 (Most Gen 1-2 icons)
- New battle backgrounds by Princess-Phoenix and Carchagui on DeviantArt
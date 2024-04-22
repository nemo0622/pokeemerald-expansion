# nemo0622's pokeemerald-expansion branch
Based off RHH's pokeemerald-expansion v1.8.0 https://github.com/rh-hideout/pokeemerald-expansion/

## Features

### Gameplay
- All code for features of [RHH's pokeemerald-expansion](https://github.com/rh-hideout/pokeemerald-expansion), currently up to version 1.8.0
    - Physical/Special split, Pokémon data up to Generation 9, updated battle engine, EXP. All, etc.
    - Soft level caps, meant to balance gameplay around EXP. All
    - This does NOT mean every feature is implemented! I don't want feature bloat like that
- [aarant's](https://github.com/aarant/pokeemerald) DNS, Key Item Wheel, and Decapitalization branches
    - Key Item Wheel - Register up to 4 key items
    - Parts of Day/Night system (mostly disabled for now, see Bugs section lol)
        - Also implemented [FakeRTC](https://www.pokecommunity.com/threads/simple-modifications-directory.416647/page-24#post-10678054), making day cycles pass every 48 minutes
    - Decapitalization via aarant's Guillotine branch!
- [DexNav](https://github.com/ghoulslash/pokeemerald/tree/dexnav) by GhoulSlash
    - Unlocked along with Pokédex, works similar to ORAS DexNav
    - Tip: Hold "A" button while moving towards shaking grass to "creep"!
- Fun HM Workaround!
    - Meet people and Pokémon willing to help you on your journey!
    - Timburr's Timber (Cut) in Rustboro, TinkaTough (Rock Smash) in Mauville, etc.
- Various Quality of Life Features, including:
    - Friendship stat boost! High friendship = about 10% boost to encourage forming a bond with Pokémon more
    - Easier Fishing and Faster Berry Growth
    - Nickname from party screen

### Graphics
- New ORAS-style sprites for Brendan and May
    - Credit to Poffin_Case for Brendan's overworld sprite and Pawkkie for May's overworld sprite
    - Credit to Hyo-Oppa for new battle trainer sprites and Solo993 for new back sprites
- New NPC overworlds, many from from [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo)
    - Credit to RavePossum for FRLG-style versions of most vanilla RSE NPCs
    - New, custom NPC sprites from [FRLG-style NPC Megapack](https://reliccastle.com/resources/823/) and [Aveontrainer](https://www.deviantart.com/aveontrainer/gallery/67900303/overworld) on DeviantArt
    - Paldean Pokémon overworlds by DarkusShadow on DeviantArt
- [NPC Mugshots](https://www.pokecommunity.com/showpost.php?p=10345947&postcount=252) when speaking to most NPCs
    - Credit to Zenionith and Zermonius on DeviantArt for ORAS style PSS icons
    - Credit to Wergan on DeviantArt and Omega and Frozen-Echo on WhackaHack for various other PSS-style icons
- New Gen 5 inspired map popups, ported from BSBob by [RavePossum](https://github.com/ravepossum/pokeemerald)
- Improved Battle Backgrounds by RavePossum and Ruki

## Bugs Future Plans, and Credits

### Known Bugs:
- Mugshots occasionally cut a little portion out of the textbox
    - Most noticable during cutscenes, some problem with ClearMugshot most likely
- Day/Night system DISABLED - new NPC GFX palettes don't tint at night :(
    - Change made in "u8 UpdateTimeOfDay(void)" function of "overworld.c" file - commented out a shit ton of real code lol sorry

### Future Plans:
- HM System workaround - meet NPC's and Pokémon throughout your journey that you can call upon to help!
    - Ex: "Timburr's Timber" in Rustboro City will send helpful Timburr's to cut down trees for you
    - Code works, but need to add actual map locations!
    - WHEN GET SURF: Fill up Briney's house with Pokémon Rangers, which offer rare Pokémon and Items to the player!
        - Say Briney "sold the cottage" or something, and say he's going to Slateport idk
- Slight tileset modifications (FRLG style trees, nicer grass?, etc.)
    - Also add some more "solarpunk" elements, such as solar panels and more environmental integration
    - Include hints towards old Greater Mauville Holdings company and its collapse
- Pokémon availability revamp - ~400 available species from generation 1-9
    - Also revamp and improve old, weak Pokémon (Ledian and Doduo my beloveds)
    - Some changes to make old Pokémon more interesting (ex: different Sawsbuck being different types - Spring = Fairy/Grass, Fall = Fire/Grass, etc)
- NPC quests and more NPC "events" around Hoenn (ex: west of Petalburg, help out a stressed fisherman for a Rod)
    - Also include more fun NPC dialogue, such as some trainers giving you items if you talk to them after battle!
    - Add all those overworld Pokémon sprites to the map too!
    - "NPC Events" could include something like a festival celebrating a legendary Pokémon in a certain town, with exclusive items and maybe a Pokémon egg distributor!
- Story enhancements - make Aqua vs Magma conflict clearer + more interesting, bring elements of story improvements and Delta Episode from ORAS, etc.
    - Include involving Wallace and Steven more in the story (maybe replace Scott with Wallace, witnessing your journey?)
- Hoopa Rings - mysterious rings found around Hoenn which transport one random Pokémon from another region
- Maybe add a way to play Dodrio Berry Picking for rewards? maybe? idk

### Credits
Go support everyone in this list!! They're all insanely talented for this stuff :)
- All people listed above: aarant/merrp, ghoulslash, RavePossum, and all the other linked resources!
    - Huge thank you to the pret disassembly team and the RHH Emerald Expansion team
    - Credit to aarant for the Lighting system, Key Item Wheel, and Decapitalization branches
    - Thanks to ghoulslash for the amazing DexNav feature
- Shoutout to [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo), an amazing collection of resources for rom hacking
    - Credit to Pawkkie, Poffin_Case, Hyo-Oppa, and RavePossum for many graphical upgrades
- PurrfectDoodle / Eva for the Psyduck confusion sprite

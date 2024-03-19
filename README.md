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
- New NPC overworlds, many from from [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo)
    - Credit goes to Pawkkie for May's sprite and RavePossum for the rest!
    - Others from [FRLG-style NPC Megapack](https://reliccastle.com/resources/823/) and [Aveontrainer](https://www.deviantart.com/aveontrainer/gallery/67900303/overworld) on DeviantArt
- [NPC Mugshots](https://www.pokecommunity.com/showpost.php?p=10345947&postcount=252) when speaking to most NPCs
    - Credit to Zenionith and Zermonius on DeviantArt for ORAS style PSS icons
    - Credit to Wergan on DeviantArt and Omega and Frozen-Echo on WhackaHack for various other PSS-style icons
- New Gen 5 inspired map popups, ported from BSBob by [RavePossum](https://github.com/ravepossum/pokeemerald)
- Improved Battle Backgrounds by RavePossum and Ruki
- New Archie battle sprite based on ORAS design by Muzyun and SlayerOne998

## Bugs Future Plans, and Credits

### Known Bugs:
- Mugshots occasionally cut a little portion out of the textbox
    - Most noticable during cutscenes, some problem with ClearMugshot most likely
- Day/Night system DISABLED - new NPC GFX palettes don't tint at night :(
    - Change made in "u8 UpdateTimeOfDay(void)" function of "overworld.c" file - commented out a shit ton of real code lol sorry

### Future Plans:
- More FRLG-style NPCs to add some variation to the overworld
    - Also includes more matching portraits to show when talking
- [EV/IV Editor](https://github.com/pret/pokeemerald/wiki/Add-a-EV---IV-Stat-Editor-UI), maybe unlocked by giving Professor Cozmo the meteorite in Fallarbor
- HM System workaround - meet NPC's and Pokémon throughout your journey that you can call upon to help!
    - Ex: "Timburr's Timber" in Rustboro City will send helpful Timburr's to cut down trees for you
    - Code works, but need to add actual map locations!
- Slight tileset modifications (FRLG style trees, nicer grass?, etc.)
- Pokémon availability revamp - ~400 available species from generation 1-9
    - Also revamp and improve old, weak Pokémon (Ledian and Doduo my beloveds)
- NPC quests and more NPC "events" around Hoenn (ex: west of Petalburg, help out a stressed fisherman for a Rod)
    - Also include more fun NPC dialogue, such as some trainers giving you items if you talk to them after battle!
    - "NPC Events" could include something like a festival celebrating a legendary Pokémon in a certain town, with exclusive items and maybe a Pokémon egg distributor!
- Story enhancements - make Aqua vs Magma conflict clearer + more interesting, bring elements of story improvements and Delta Episode from ORAS, etc.
    - Include involving Wallace and Steven more in the story (maybe replace Scott with Wallace, witnessing your journey?)
- Hoopa Rings - mysterious rings found around Hoenn which transport one random Pokémon from another region
- Maybe add a way to play Dodrio Berry Picking for rewards? maybe? idk

### Credits
Go support everyone in this list!! They're all insanely talented for this stuff :)
- All people listed above: aarant/merrp, ghoulslash, RavePossum, and all the other linked resources!
- PurrfectDoodle / Eva for the Psyduck confusion sprite
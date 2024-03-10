# nemo0622's pokeemerald-expansion branch

## Features

### Gameplay
- All features of [RHH's pokeemerald-expansion](https://github.com/rh-hideout/pokeemerald-expansion), currently up to version 1.7.3
    - Physical/Special split, Pokémon data up to Generation 9, updated battle engine, EXP. All, etc.
- [aarant's](https://github.com/aarant/pokeemerald) DNS, Key Item Wheel, and Decapitalization branches
    - Key Item Wheel - Register up to 4 key items
    - DNS - Day/Night System, along with shadows under people
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
- New overworlds from [Team Aqua's Asset Repo](https://github.com/Pawkkie/Team-Aquas-Asset-Repo)
    - Credit goes to Pawkkie for May's sprite and RavePossum for the rest!
- [NPC Mugshots](https://www.pokecommunity.com/showpost.php?p=10345947&postcount=252) when speaking to many characters
    - Credit to Zenionith and Zermonius on DeviantArt for ORAS style PSS icons
    - Credit to Wergan on DeviantArt and Omega on WhackaHack for various other PSS-style icons
- New Gen 5 inspired map popups, ported from BSBob by [RavePossum](https://github.com/ravepossum/pokeemerald)
- Improved Battle Backgrounds by RavePossum and Ruki
- New Archie sprite based on ORAS design by Muzyun and SlayerOne998

## Bugs and Future Plans

### Known Bugs:
- Mugshots occasionally cut a little portion out of the textbox
    - Most noticable during cutscenes, some problem with ClearMugshot most likely

### Future Plans:
- Expanded implementation of NPC Mugshot system
    - Most NPCs will show a mugshot when speaking!
- Level caps - code already in pokeemerald-expansion!
    - Just need to set values. Not meant to be for difficulty, just to balance game around EXP all without overpowering team
    - Also use opportunity to make Mr. Stone give you something other than the EXP share lol oopsies. in data/maps/RustboroCity_DevonCorp_3F/scripts.pory
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
# Pokémon Alolan Seaglass

## General Information
This project is essentially my tribute to the Alola Region, my favorite childhood region to explore, recreated in a style reminiscent of classic GBC games with plenty of new content and QOL changes added in.

## Roadmap
- Pokémon GBC Graphics Implementation
    - Front, Back, & Follow Sprites
    - Multi-frame Animations
- Map Preparation
    - Mass-delete Hoenn maps
    - Rename MAPSEC's to Alolan equivalents
    - Create Hau'oli Outskirts Mapsec with Player Home and Professor's Beach

# CREDITS

The biggest props go to the Pokémon Emerald Expansion Team, who continue to develop the incredible engine this project runs on. Without all their help, this project would not be possible.

Feature Branches:
- RavePossum: BW-style Summary Screen
- Montblanc: SWSH-style Party Menu
- Wiz1989: Emulator Accuracy Check
- Nico: Battle UI Components & code reference
- PCG06: Scalemons Ruleset
- Bivurnum: Overworld Encounters (in collaboration with HashtagMarky and rest of Expansion Team), Fishing Minigame
- PSF: Quest Menu (in collaboration with Skeli and GhoulSlash)
- Archie & Mudskip: Full Screen Start Menu, Field Mugshot System

Tiles:
- Zaebucca
- Anima Nel
- Arex

Sprites:
- LuigiTKO: Party Menu sprites!
- BronzeSwagger: Professor Burnet


# Known Bugs
### UI & Graphics
- After opening the Info window in the Region Map like 4 times, it returns you to field. This is a chopped solution to the UI running out of memory lol, but most people probably won't run into this


# Code Stuff lol

script MapName_NPC_NPCName
{
    lock
    faceplayer
    setspeaker("NPC Name")
    
    // before anything else, if the quest is completed, just do a little dialogue line and end early
    questmenu(QUEST_MENU_CHECK_COMPLETE, <QUEST_DEFINE>)
    if(var(VAR_RESULT) == 1) // quest is complete already
    {
        msgbox(format("Quest is complete."))
        closemessage
        release
        end
    }

    // by getting here, we know the quest isn't complete. Do different things based on the active status of the quest!
    questmenu(QUEST_MENU_CHECK_ACTIVE, <QUEST_DEFINE>)
    if(var(VAR_RESULT) == 0) // quest not active yet! Activate it!
    {
        msgbox(format("I need something!"))
        closemessage

        delay(20)
        startquest(<QUEST_DEFINE>)
    }
    else
    {
        msgbox(format("Checking Quest completion."))
        closemessage

        // Check Quest completion
        checkitem(ITEM_QUEST_ITEM)
        delay(30)

        if(var(VAR_RESULT) == FALSE)
        {
            setspeaker("NPC Name")
            msgbox(format("Nope, I still need help."))
            closemessage
            release
            end
        }
        else
        {
            setspeaker("NPC Name")
            msgbox(format("Quest will now be completed. Remove item, give item, etc."))
            closemessage
            
            delay(5)
            giveitem(ITEM_QUEST_REWARD)
            closemessage

            delay(20)
            completequest(<QUEST_DEFINE>)
        }
    }
    release
    end
}
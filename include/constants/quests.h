#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1


// --------------------------------------- MAIN QUESTS ---------------------------------------


// quest number defines
// SECTION 1: MAIN QUESTS (e.g., Island Challenge or )
#define QUEST_WELCOME_TO_ALOLA         0 // "Welcome to Alola!"
#define QUEST_ISLAND_CHALLENGE         1 // "Island Challenge"
#define QUEST_DEX_COMPLETION           2 // "The Pokémon of Alola"
#define QUEST_TOTEM_STICKERS           3 // "Sticker Collection"
#define QUEST_FINDING_ZYGARDE          4 // "Finding Zygarde"
#define QUEST_EDUCATIONAL_SIGNS        5 // "School's In Session"
#define QUEST_SAMSONS_GARDEN           6 // "Samson's Garden"
#define QUEST_ULTRA_DEX_COMPLETION     7 // "The Pokémon of the Universe"
#define QUEST_09         8 // NOTE: If I ever use these two, make sure to add them to the list in `CountActiveQuests` in quests.c
#define QUEST_10         9

#define MAJOR_QUEST_COUNT QUEST_ULTRA_DEX_COMPLETION + 1

// SECTION 2: TRIAL QUESTS
#define QUEST_TRIAL_ILIMA            10 // "Ilima's Trial"
#define QUEST_TRIAL_HALA             11
#define QUEST_TRIAL_LANA             12
#define QUEST_TRIAL_KIAWE            13
#define QUEST_TRIAL_MALLOW           14
#define QUEST_TRIAL_OLIVIA           15
#define QUEST_TRIAL_SOPHOCLES        16
#define QUEST_TRIAL_ACEROLA          17
#define QUEST_TRIAL_NANU             18
#define QUEST_TRIAL_RYUKI            19
#define QUEST_TRIAL_MINA             20
#define QUEST_TRIAL_HAPU             21

// SECTION 3: SIDE QUESTS (e.g., smaller Quests given by NPCs)
#define QUEST_BIG_POPPAS_FISH        22 // Show Pokédex page of Wishiwashi to Big Poppa (Big Poppa's Surf Shop)
#define QUEST_TOURIST_DIFFICULTIES   23 // Give a Collector in the Hau'oli Beachfront Tourist Bureau a Premier Ball
#define QUEST_25        24
#define QUEST_26        25
#define QUEST_27        26
#define QUEST_28        27
#define QUEST_29        28
#define QUEST_30        29
#define QUEST_COUNT     (QUEST_30 + 1)


// --------------------------------------- SUB QUESTS BELOW ---------------------------------------


// "Welcome to Alola" (QUEST_WELCOME_TO_ALOLA) Subquests - basically tutorial stages guiding player through early game
#define QUEST_WELCOME_TO_ALOLA_SUBQUEST_1          0 // Find Samson Oak in Iki Town
#define QUEST_WELCOME_TO_ALOLA_SUBQUEST_2          1 // Meet Professor Kukui's friend in Iki Town
#define QUEST_WELCOME_TO_ALOLA_SUBQUEST_3          2 // Find Hau on Mahalo Trail
#define QUEST_WELCOME_TO_ALOLA_SUBQUEST_4          3 // Begin the Manalo Festival
#define QUEST_WELCOME_TO_ALOLA_SUBQUEST_5          4 // Go to Kukui's Lab
#define QUEST_WELCOME_TO_ALOLA_SUBQUEST_6          5 // Complete Alola Leo School's curriculum

// "Island Challenge" (QUEST_ISLAND_CHALLENGE) Subquests
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_1          6 // Complete Ilima's Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_2          7 // Complete Kahuna Hala's Grand Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_3          8 // Complete Lana's Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_4          9 // Complete Kiawe's Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_5         10 // Complete Mallow's Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_6         11 // Complete Kahuna Olivia's Grand Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_7         12 // Complete Sophocles' Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_8         13 // Complete Acerola's Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_9         14 // Complete Kahuna Nanu's Grand Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_10        15 // Complete Ryuki's Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_11        16 // Complete Mina's Trial
#define QUEST_ISLAND_CHALLENGE_SUBQUEST_12        17 // Complete Kahuna Hapu's Grand Trial

// "The Pokémon of Alola" (QUEST_DEX_COMPLETION) Subquests
#define QUEST_DEX_COMPLETION_SUBQUEST_1        18 // Melemele Island Pokédex
#define QUEST_DEX_COMPLETION_SUBQUEST_2        19 // Akala Island Pokédex
#define QUEST_DEX_COMPLETION_SUBQUEST_3        20 // Ula'ula Island Pokédex
#define QUEST_DEX_COMPLETION_SUBQUEST_4        21 // Poni Island Pokédex

// "Ilima's Trial" (QUEST_TRIAL_ILIMA) Subquests
#define QUEST_TRIAL_ILIMA_SUBQUEST_1        22 // Find Captain Ilima
#define QUEST_TRIAL_ILIMA_SUBQUEST_2        23 // Help Ilima fight off Team Skull
#define QUEST_TRIAL_ILIMA_SUBQUEST_3        24 // Complete Ilima's Trial!


// Subquest count defines
#define QUEST_WELCOME_TO_ALOLA_SUB_COUNT        6   // QUEST_WELCOME_TO_ALOLA
#define QUEST_ISLAND_CHALLENGE_SUB_COUNT        12  // QUEST_ISLAND_CHALLENGE
#define QUEST_DEX_COMPLETION_SUB_COUNT          4   // QUEST_DEX_COMPLETION
#define QUEST_TRIAL_ILIMA_SUB_COUNT             3   // QUEST_TRIAL_ILIMA

#define SUB_QUEST_COUNT 25

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H

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

// quest number defines
#define QUEST_FIND_POKEDEX          0 // find Pokédex shipment at start of game
#define QUEST_GYM_1                 1 // beat gym 1
#define QUEST_CHECK_AFTER_GYM_1     2 // meet w prof. elia after gym 1
#define QUEST_GYM_2                 3 // beat gym 2
#define QUEST_CHECK_AFTER_GYM_2     4 // meet w prof. elia after gym 2
#define QUEST_GYM_3                 5 // gyms below
#define QUEST_GYM_4                 6
#define QUEST_GYM_5                 7
#define QUEST_GYM_6                 8
#define QUEST_GYM_7                 9
#define QUEST_GYM_8                 10
#define QUEST_CHAMPION              11 // become champion
#define QUEST_COMPLETE_DEX          12 // complete dex. obviously lol
#define QUEST_TOGEPI_EVIOLITE       13 // show Pokéfan lady a Togepi in Acrisia City for an Eviolite
#define QUEST_BALTOY_DUSK_STONE     14 // show Lass a Baltoy in Acrisia Mountains for a Dusk Stone
#define QUEST_PLANT_20_BERRIES      15 // plant 20 berry trees for the Jusmail Town Berry Club
#define QUEST_PLANT_50_BERRIES      16 // plant 50 berry trees for the Jusmail Town Berry Club
#define QUEST_PLANT_100_BERRIES     17 // plant 100 berry trees for the Jusmail Town Berry Club
#define QUEST_PLANT_200_BERRIES     18 // plant 200 berry trees for the Jusmail Town Berry Club
#define QUEST_HELP_PIRAEUS          19 // defeat team chimera admin east of Pythios Town for Piraeus
#define QUEST_21        20
#define QUEST_22        21
#define QUEST_23        22
#define QUEST_24        23
#define QUEST_25        24
#define QUEST_26        25
#define QUEST_27        26
#define QUEST_28        27
#define QUEST_29        28
#define QUEST_30        29
#define QUEST_COUNT     (QUEST_30 + 1)

#define SUB_QUEST_1          0
#define SUB_QUEST_2          1
#define SUB_QUEST_3          2
#define SUB_QUEST_4          3
#define SUB_QUEST_5          4
#define SUB_QUEST_6          5
#define SUB_QUEST_7          6
#define SUB_QUEST_8          7
#define SUB_QUEST_9          8
#define SUB_QUEST_10         9
#define SUB_QUEST_11        10
#define SUB_QUEST_12        11
#define SUB_QUEST_13        12
#define SUB_QUEST_14        13
#define SUB_QUEST_15        14
#define SUB_QUEST_16        15
#define SUB_QUEST_17        16
#define SUB_QUEST_18        17
#define SUB_QUEST_19        18
#define SUB_QUEST_20        19
#define SUB_QUEST_21        20
#define SUB_QUEST_22        21
#define SUB_QUEST_23        22
#define SUB_QUEST_24        23
#define SUB_QUEST_25        24
#define SUB_QUEST_26        25
#define SUB_QUEST_27        26
#define SUB_QUEST_28        27
#define SUB_QUEST_29        28
#define SUB_QUEST_30        29

#define QUEST_1_SUB_COUNT 11
#define QUEST_2_SUB_COUNT 20
#define SUB_QUEST_COUNT (QUEST_1_SUB_COUNT + QUEST_2_SUB_COUNT)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H

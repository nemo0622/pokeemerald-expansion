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
#define QUEST_SNOM_ICE_STONE        20 // showed Old Lady a Snom in Pythios Cemetery for an Ice Stone
#define QUEST_YACHE_BERRY_FROST_BREATH          21 // show Yache Berry to Fat Man in Erinys Path to earn TM52 Frost Breath
#define QUEST_BEAT_FROSLASS                     22 // beat Froslass in Froslass Cavern and tell little girl
#define QUEST_CATCH_BLITZLE                     23 // catch a blitzle and show it to a punk rocker in acrisia city house 5
#define QUEST_LOVESTRUCK_BIKER                  24 // give Cycling Man a Heart Scale in Jusmail Town
#define QUEST_KALAMI_HEART_SCALE                25 // give Artist a Heart Scale in Kalami City
#define QUEST_KALAMI_EEVEE_POKEDEX              26 // show Eevee dex entry to Scientist in Kalami city house 1
#define QUEST_PYTHIOS_REQUEST_QUICK_BALL        27 // bring a quick ball to an athlete in pythios town
#define QUEST_BEAT_CHIMERA_SOFOS_CITY           28 // quest to beat Team Chimera in Sofos City and bring Niko the Tera Orb in Asfal Hills
#define QUEST_SHOW_BOY_GIRAFARIG                29 // show little boy in Asfal Hills House 1 a Girafarig dex entry
#define QUEST_SHOW_CAMPER_ALOLAN_RAICHU         30 // show camper in Sofos City Alolan Raichu dex entry for Terrain Extender
#define QUEST_TRY_SOFOS_BATTLE_PAVILION         31 // participate in Sofos City Battle Pavilion
#define QUEST_BRING_GRANDMA_AWAKENING           32 // bring grandma an awakening in sofos city house 2
#define QUEST_5_PINBALL_POINTS                  33 // bring computer guy 5 pinball points in sofos city house 4
#define QUEST_XATU_AND_NOCTOWL                  34 // Show Xatu and Noctowl dex pages to lady in sofos city house 5
#define QUEST_NEMOS_QUEST                       35 // bring Nemo all 4 Oricorio forms
#define QUEST_ZOOKEEPER                         36 // fill out the Kipos Town zoo
#define QUEST_FILL_SUBURBS_ZOO                  37 // fill out the hands on / suburbs area of the zoo
#define QUEST_FILL_LAZARUS_ZOO                  38 // fill out the lazarus taxa area of the zoo
#define QUEST_SHOW_BRAVIARY_AT_ZOO              39 // show scientist braviary dex entry at conservation center
#define QUEST_SHOW_TYRUNT_KIPOS_TOWN            40 // show scientist a tyrunt from party in kipos town at tyrantrum statue
#define QUEST_ASTERI_SEA_PEARL_STRING           41 // bring pearl string item to old man in Asteri Sea west
#define QUEST_MARMARO_TIMER_BALL                42 // give timer ball to pokéfan on marmaro island
#define QUEST_MARMARO_EGG_QUEST                 43 // show an Egg to a beauty on marmaro island
#define QUEST_MYRRINI_ALLERGIES                 44 // give a Full Heal to a camper on myrrini island
#define QUEST_TRY_MYRRINI_BATTLE_PAVILION       45 // participate in Myrrini Island Battle Pavilion
#define QUEST_MYRRINI_HEART_SCALE               46 // bring punk rocker a heart scale in myrrini island house 3
#define QUEST_FREE_MARMARO_MINES                47 // chase Team Chimera out of Marmaro Island Mine
#define QUEST_VISIT_RANIA_PENTEPETAL            48 // talk to Rania in Péntepetal City
#define QUEST_GIVE_REVIVE_UNDERWATER            49 // bring diver a Revive in Sea of Asteri underwater east
#define QUEST_SHOW_RIBBON_TO_ARTIST             50 // win contest ribbon and show Artist in Péntepetal City
#define QUEST_BRING_ARCANINE_DOLL_TO_WOMAN      51 // buy Hisuian Arcanine decoration and give to woman in Péntepetal city
#define QUEST_ETERNAL_FLOETTE_PLOT              52 // bring 10 Wishing Stars to a family in Péntepetal City to wish for a lost Floette to return
#define QUEST_SHARDS_FOR_ARTIST                 53 // bring 1 of each colored shard to an artist
#define QUEST_CALM_TWIN_MUSES                   54 // bring Box of Chocolate item to Twin Muses of Fresco Isles to calm them down
#define QUEST_FIND_RELICANTH                    55 // Catch a Relicanth and show Pokédex entry to Battle Girl in Fresco Isles
#define QUEST_BRING_BERRIES_TO_TYPE_NULL        56 // Bring 12 Sitrus Berries to Ex-Scientist in Fresco Isles to get Type: Null
#define QUEST_COUNT     (QUEST_BRING_BERRIES_TO_TYPE_NULL + 1)

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

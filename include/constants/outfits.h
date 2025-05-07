#ifndef GUARD_CONSTANTS_OUTFITS_H
#define GUARD_CONSTANTS_OUTFITS_H

//! macro modes
 
// ScrCmd_getoutfitstatus
#define OUTFIT_CHECK_FLAG 0
#define OUTFIT_CHECK_USED 1
// ScrCmd_toggleoutfit
#define OUTFIT_TOGGLE_UNLOCK 0
#define OUTFIT_TOGGLE_LOCK 1
// BufferOutfitStrings
#define OUTFIT_BUFFER_NAME  0
#define OUTFIT_BUFFER_DESC  1

//! outfits
#define OUTFIT_NONE 0
#define OUTFIT_UNIVERSITY_GREEN 1 // default outfits
#define OUTFIT_CORAL 2 // pink (coral. yay) outfits
#define OUTFIT_EAST_BLUE 3 // turquoise-blue outfits
#define OUTFIT_TROPICS 4 // yellow, tank top outfits
#define OUTFIT_TRADITIONAL 5 // traditional greek outfits
#define OUTFIT_OLD_SOFOS 6 // blue (male) / green (female) togas with gold trim
#define OUTFIT_ZOOKEEPER 7 // outfits unlocked at Sunset Wildlife Conservation Center
#define OUTFIT_PETAL 8 // Purple outfits with green (m)/gold (f) accessories
#define OUTFIT_PALATI 9 // blue-white outfits with red accents. Minoan inspired outfits
#define OUTFIT_ANCIENT 10 // blue-white outfits with red accents. Minoan inspired outfits
#define OUTFIT_JOHTO_FASHION 11 // Ethan (male) and Lyra (female)
#define OUTFIT_KALOS_FASHION 12 // Calem (male) and Serena (female)
#define OUTFIT_ALOLA_FASHION 13 // Elio (male) and Selene (female)
#define OUTFIT_PALDEA_FASHION 14 // Arven (male) and Nemona (female)
#define OUTFIT_HYLIAN_FASHION 15 // Link (male) and Zelda (female)
#define OUTFIT_COUNT 16

// inclusive
#define OUTFIT_BEGIN OUTFIT_UNIVERSITY_GREEN
#define OUTFIT_END   OUTFIT_HYLIAN_FASHION

#define DEFAULT_OUTFIT OUTFIT_UNIVERSITY_GREEN

#endif //! GUARD_CONSTANTS_OUTFITS_H

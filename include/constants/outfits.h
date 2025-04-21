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
#define OUTFIT_ZOOKEEPER 2 // outfits unlocked at Sunset Wildlife Conservation Center
#define OUTFIT_KALOS_FASHION 3 // Calem (male) and Serena (female)
#define OUTFIT_COUNT 4

// inclusive
#define OUTFIT_BEGIN OUTFIT_UNIVERSITY_GREEN
#define OUTFIT_END   OUTFIT_KALOS_FASHION

#define DEFAULT_OUTFIT OUTFIT_UNIVERSITY_GREEN

#endif //! GUARD_CONSTANTS_OUTFITS_H

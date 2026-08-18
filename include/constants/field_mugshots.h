#ifndef GUARD_CONSTANTS_FIELD_MUGSHOTS_H
#define GUARD_CONSTANTS_FIELD_MUGSHOTS_H

enum Mugshots {
    MUGSHOT_NONE = 0,

    // Add mugshot ID's here!
    MUGSHOT_ELIO,
    MUGSHOT_SELENE,
    MUGSHOT_MOM,
    MUGSHOT_SAMSON_OAK,
    MUGSHOT_PROF_KUKUI,
    MUGSHOT_LILLIE_HAT,
    MUGSHOT_HAU,
    MUGSHOT_HALA,

    MUGSHOT_COUNT,
};

enum MugshotEmotes {
    EMOTION_NORMAL = 0,

    // Add additional Mugshot Emote's here!
    EMOTION_LAUGH,
    EMOTION_INTENSE,
    EMOTION_SAD,
    EMOTION_OTHER, // Just an extra slot here for characters with unique emotion or alt (e.g., Gladion with his hand on his face, maybe some character holding an item, etc.)

    EMOTE_COUNT,
};

#endif // GUARD_CONSTANTS_FIELD_MUGSHOTS_H

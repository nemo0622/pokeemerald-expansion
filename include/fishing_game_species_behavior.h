#ifndef GUARD_FISHING_GAME_SPECIES_BEHAVIOR_H
#define GUARD_FISHING_GAME_SPECIES_BEHAVIOR_H

// Behavior data for individual species.
// If a species is not present in this table it will use the default behavior for the current rod type.
static const struct FishBehaviorData sFishBehavior[] =
{
    { // Old Rod default behavior.
        .species = 0,
        .speed = { .min = 2, .max = 2 },
        .distance = { .min = 5, .max = 15 },
        .delay = { .min = 40, .max = 160 },
        .idleMovement = 6
    },
    { // Good Rod default behavior.
        .species = 0,
        .speed = { .min = 3, .max = 5 },
        .distance = { .min = 15, .max = 55 },
        .delay = { .min = 80, .max = 120 },
        .idleMovement = 6
    },
    { // Super Rod default behavior.
        .species = 0,
        .speed = { .min = 8, .max = 16 },
        .distance = { .min = 10, .max = 70 },
        .delay = { .min = 15, .max = 35 },
        .idleMovement = 12
    },
// Don't add new entries above this line.

    /* EMPTY TEMPLATE
    {
        .species = ,
        .speed = { .min = , .max =  },
        .distance = { .min = , .max =  },
        .delay = { .min = , .max =  },
        .idleMovement = 
    },
    */
    {
        .species = SPECIES_TENTACOOL,
        .speed = { .min = 3, .max = 5 },
        .distance = { .min = 25, .max = 55 },
        .delay = { .min = 80, .max = 120 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_TENTACRUEL,
        .speed = { .min = 8, .max = 10 },
        .distance = { .min = 25, .max = 75 },
        .delay = { .min = 80, .max = 120 },
        .idleMovement = 8
    },
    {
        .species = SPECIES_MAGIKARP,
        .speed = { .min = 2, .max = 2 },
        .distance = { .min = 5, .max = 15 },
        .delay = { .min = 40, .max = 160 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_GYARADOS,
        .speed = { .min = 8, .max = 16 },
        .distance = { .min = 30, .max = 70 },
        .delay = { .min = 15, .max = 35 },
        .idleMovement = 12
    },
    {
        .species = SPECIES_CORSOLA,
        .speed = { .min = 4, .max = 8 },
        .distance = { .min = 10, .max = 70 },
        .delay = { .min = 55, .max = 95 },
        .idleMovement = 1
    },
    {
        .species = SPECIES_WAILMER,
        .speed = { .min = 6, .max = 8 },
        .distance = { .min = 60, .max = 140 },
        .delay = { .min = 10, .max = 20 },
        .idleMovement = 2
    },
    {
        .species = SPECIES_BARBOACH,
        .speed = { .min = 4, .max = 8 },
        .distance = { .min = 10, .max = 40 },
        .delay = { .min = 45, .max = 75 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_WHISCASH,
        .speed = { .min = 8, .max = 12 },
        .distance = { .min = 25, .max = 55 },
        .delay = { .min = 30, .max = 60 },
        .idleMovement = 5
    },
    {
        .species = SPECIES_CORPHISH,
        .speed = { .min = 7, .max = 13 },
        .distance = { .min = 4, .max = 10 },
        .delay = { .min = 30, .max = 70 },
        .idleMovement = 8
    },
    {
        .species = SPECIES_WIMPOD,
        .speed = { .min = 2, .max = 6 },
        .distance = { .min = 8, .max = 22 },
        .delay = { .min = 40, .max = 140 },
        .idleMovement = 8
    },
    {
        .species = SPECIES_POLIWAG,
        .speed = { .min = 3, .max = 6 },
        .distance = { .min = 12, .max = 24 },
        .delay = { .min = 50, .max = 150 },
        .idleMovement = 2
    },
    {
        .species = SPECIES_WOOPER,
        .speed = { .min = 1, .max = 4 },
        .distance = { .min = 30, .max = 60 },
        .delay = { .min = 80, .max = 180 },
        .idleMovement = 1
    },
    {
        .species = SPECIES_FINNEON,
        .speed = { .min = 3, .max = 7 },
        .distance = { .min = 35, .max = 65 },
        .delay = { .min = 10, .max = 60 },
        .idleMovement = 3
    },
    {
        .species = SPECIES_REMORAID,
        .speed = { .min = 2, .max = 8 },
        .distance = { .min = 20, .max = 60 },
        .delay = { .min = 40, .max = 100 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_BASCULIN_WHITE_STRIPED,
        .speed = { .min = 8, .max = 16 },
        .distance = { .min = 30, .max = 70 },
        .delay = { .min = 25, .max = 45 },
        .idleMovement = 8
    },
    {
        .species = SPECIES_CLAUNCHER,
        .speed = { .min = 2, .max = 6 },
        .distance = { .min = 50, .max = 150 },
        .delay = { .min = 40, .max = 80 },
        .idleMovement = 3
    },
    {
        .species = SPECIES_BUIZEL,
        .speed = { .min = 8, .max = 12 },
        .distance = { .min = 20, .max = 45 },
        .delay = { .min = 10, .max = 40 },
        .idleMovement = 5
    },
    {
        .species = SPECIES_SKRELP,
        .speed = { .min = 4, .max = 8 },
        .distance = { .min = 65, .max = 135 },
        .delay = { .min = 70, .max = 160 },
        .idleMovement = 2
    },
    {
        .species = SPECIES_SPHEAL,
        .speed = { .min = 3, .max = 7 },
        .distance = { .min = 45, .max = 120 },
        .delay = { .min = 50, .max = 160 },
        .idleMovement = 1
    },
    {
        .species = SPECIES_FINIZEN,
        .speed = { .min = 6, .max = 12 },
        .distance = { .min = 30, .max = 80 },
        .delay = { .min = 30, .max = 70 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_CLAMPERL,
        .speed = { .min = 2, .max = 4 },
        .distance = { .min = 10, .max = 30 },
        .delay = { .min = 80, .max = 200 },
        .idleMovement = 1
    },
    {
        .species = SPECIES_DRATINI,
        .speed = { .min = 6, .max = 16 },
        .distance = { .min = 10, .max = 80 },
        .delay = { .min = 10, .max = 40 },
        .idleMovement = 6
    },
    {
        .species = SPECIES_DRAGONAIR,
        .speed = { .min = 8, .max = 16 },
        .distance = { .min = 30, .max = 140 },
        .delay = { .min = 5, .max = 40 },
        .idleMovement = 8
    },
    {
        .species = SPECIES_SHELLDER,
        .speed = { .min = 3, .max = 5 },
        .distance = { .min = 25, .max = 65 },
        .delay = { .min = 90, .max = 160 },
        .idleMovement = 2
    },
    {
        .species = SPECIES_PSYDUCK,
        .speed = { .min = 3, .max = 6 },
        .distance = { .min = 30, .max = 80 },
        .delay = { .min = 60, .max = 120 },
        .idleMovement = 4
    },
    {
        .species = SPECIES_SEEL,
        .speed = { .min = 4, .max = 10 },
        .distance = { .min = 25, .max = 75 },
        .delay = { .min = 40, .max = 90 },
        .idleMovement = 3
    },
    {
        .species = SPECIES_CORSOLA_GALARIAN,
        .speed = { .min = 4, .max = 8 },
        .distance = { .min = 10, .max = 70 },
        .delay = { .min = 55, .max = 95 },
        .idleMovement = 8
    },
    {
        .species = SPECIES_CHINCHOU,
        .speed = { .min = 2, .max = 6 },
        .distance = { .min = 15, .max = 50 },
        .delay = { .min = 50, .max = 150 },
        .idleMovement = 5
    },
    {
        .species = SPECIES_LANTURN,
        .speed = { .min = 3, .max = 8 },
        .distance = { .min = 25, .max = 75 },
        .delay = { .min = 50, .max = 180 },
        .idleMovement = 7
    },
    {
        .species = SPECIES_TIRTOUGA,
        .speed = { .min = 4, .max = 10 },
        .distance = { .min = 50, .max = 150 },
        .delay = { .min = 30, .max = 120 },
        .idleMovement = 4
    },
    {
        .species = SPECIES_DHELMISE,
        .speed = { .min = 10, .max = 20 },
        .distance = { .min = 40, .max = 140 },
        .delay = { .min = 10, .max = 70 },
        .idleMovement = 18
    },
    {
        .species = SPECIES_LUVDISC,
        .speed = { .min = 6, .max = 8 },
        .distance = { .min = 35, .max = 65 },
        .delay = { .min = 10, .max = 40 },
        .idleMovement = 3
    }
};

#endif // GUARD_FISHING_GAME_SPECIES_BEHAVIOR_H

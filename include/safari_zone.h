#ifndef GUARD_SAFARI_ZONE_H
#define GUARD_SAFARI_ZONE_H

extern u8 gNumSafariBalls;

bool32 GetSafariZoneFlag(void);
void SetSafariZoneFlag(void);
void ResetSafariZoneFlag(void);

void EnterSafariMode(void);
void ExitSafariMode(void);

bool8 SafariZoneTakeStep(void);
void SafariZoneRetirePrompt(void);

void CB2_EndSafariBattle(void);

struct Pokeblock *SafariZoneGetActivePokeblock(void);
void SafariZoneActivatePokeblockFeeder(u8 pokeblock_index);

bool8 DivingMinigameTakeStep(void);
void EnterDivingMinigame(void);
void ExitDivingMinigame(void);
void CB2_EndDivingMinigameBattle(void);
u16 PokemonRarityScore(u16 species);
void ScubaSafari_GenerateCompetitorPokemon(void);
u16 CreateRandomScubaSafariSpecies(void);
void RandomizeScubaSafariTreasureFlags(void);
void ResetScubaSafariTreasureFlags(void);

#endif // GUARD_SAFARI_ZONE_H

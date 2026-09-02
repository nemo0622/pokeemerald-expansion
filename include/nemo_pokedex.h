#ifndef NEMO_POKEDEX__H
#define NEMO_POKEDEX__H

// CREDIT:
// Lots of this is snagged from Pokabbie's rogue_pokedex code!

// Pokédex Variants (adapted from rogue constants)
// Note that Rogue used variants for different game's dexes, but this will use it for Island dexes
#define POKEDEX_VARIANT_ALOLA           0
#define POKEDEX_VARIANT_MELEMELE        1
#define POKEDEX_VARIANT_AKALA           2
#define POKEDEX_VARIANT_ULA_ULA         3
#define POKEDEX_VARIANT_PONI            4
#define POKEDEX_VARIANT_ULTRA           5

#define POKEDEX_VARIANT_START           POKEDEX_VARIANT_ALOLA
#define POKEDEX_VARIANT_END             POKEDEX_VARIANT_ULTRA
#define POKEDEX_VARIANT_DEFAULT         POKEDEX_VARIANT_ALOLA
#define POKEDEX_INVALID_VARIANT         POKEDEX_VARIANT_END + 1
#define POKEDEX_VARIANT_COUNT           POKEDEX_VARIANT_END + 1

struct PokedexVariant
{
    const u8* displayName;
    const u16* speciesList;
    u16 speciesCount;
};
extern const struct PokedexVariant gPokedexVariants[POKEDEX_VARIANT_COUNT];

// Functions related to opening dex
void Nemo_ShowPokedexFromMenu(void);
void Nemo_ShowPokedexFromScript(void);
void Nemo_ShowPokedexForPartySlot(u8 slot);
void Nemo_SelectPokemonInPokedexFromDex(bool8 requireSeen, bool8 requireCaught);
void Nemo_SelectPokemonInPokedexFromDexVariant(u8 variant, bool8 requireSeen, bool8 requireCaught);
bool8 Nemo_IsViewingPokedex();

// Dex completion functions
u8 NemoPokedex_GetDexVariant();
void NemoPokedex_SetDexVariant(u8 variant);
u16 NemoPokedex_CountCaughtMonsForVariant(u16 variant, u8 caseID);
u16 NemoPokedex_CountCurrentCaughtMons(u8 caseID);
u16 NemoPokedex_GetCurrentDexLimit();

// Other functions
u16 NemoPokedex_GetSpeciesBST(u16 species);
u8 NemoPokedex_GetSpeciesBestStat(u16 species);
u8 NemoPokedex_GetSpeciesWorstStat(u16 species);
void NemoPokedex_GetSpeciesStatArray(u16 species, u8* stats, u8 bufferSize);
u16 NemoPokedex_GetSpeciesCurrentNum(u16 species);

#endif
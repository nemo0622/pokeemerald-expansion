#ifndef GUARD_POKEDEX_PLUS_HGSS_H
#define GUARD_POKEDEX_PLUS_HGSS_H

void CB2_OpenPokedexPlusHGSS(void);
void Task_DisplayCaughtMonDexPageHGSS(u8);

// the species to force to load if we open from the party menu
extern EWRAM_DATA u16 gSpeciesToLoad;

#endif // GUARD_POKEDEX_PLUS_HGSS_H

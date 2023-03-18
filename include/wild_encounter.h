#ifndef GUARD_WILD_ENCOUNTER_H
#define GUARD_WILD_ENCOUNTER_H

#include "global.h"

#define LAND_WILD_COUNT     20
#define WATER_WILD_COUNT    5
#define ROCK_WILD_COUNT     5
#define FISH_WILD_COUNT     10

#define NUM_ALTERING_CAVE_TABLES    9

#define WILD_ENCOUNTER_UPDATE_DELAY 60
#define WILD_ENCOUNTER_MIN 3
#define WILD_ENCOUNTER_MAX 7
#define WILD_ENCOUNTER_SPAWN_CHANCE 30
#define WILD_ENCOUNTER_DESPAWN_CHANCE 15

#define WILD_ENCOUNTER_SEARCH_X 6
#define WILD_ENCOUNTER_SEARCH_Y 8
#define WILD_ENCOUNTER_SEARCH_WIDTH  (WILD_ENCOUNTER_SEARCH_X * 2 + 1)
#define WILD_ENCOUNTER_SEARCH_HEIGHT (WILD_ENCOUNTER_SEARCH_Y * 2 + 1)
#define WILD_ENCOUNTER_SEARCH_AREA (WILD_ENCOUNTER_SEARCH_WIDTH * WILD_ENCOUNTER_SEARCH_HEIGHT)
#define WILD_ENCOUNTER_SPAWN_ATTEMPTS 15

struct WildPokemon
{
    u8 minLevel;
    u8 maxLevel;
    u16 species;
};

struct WildPokemonInfo
{
    u8 encounterRate;
    const struct WildPokemon *wildPokemon;
};

struct WildPokemonHeader
{
    u8 mapGroup;
    u8 mapNum;
    const struct WildPokemonInfo *landMonsInfo;
    const struct WildPokemonInfo *waterMonsInfo;
    const struct WildPokemonInfo *rockSmashMonsInfo;
    const struct WildPokemonInfo *fishingMonsInfo;
};

extern const struct WildPokemonHeader gWildMonHeaders[];
extern u16 gWildEncounterUpdateDelay;

void DisableWildEncounters(bool8 disabled);
bool8 StandardWildEncounter(u32 currMetatileAttrs, u16 previousMetaTileBehavior);
bool8 SweetScentWildEncounter(void);
bool8 DoesCurrentMapHaveFishingMons(void);
void FishingWildEncounter(u8 rod);
u16 GetLocalWildMon(bool8 *isWaterMon);
u16 GetLocalWaterMon(void);
bool8 UpdateRepelCounter(void);
void DisableWildEncounters(bool8 state);
u8 GetUnownLetterByPersonalityLoByte(u32 personality);
bool8 SweetScentWildEncounter(void);
void SeedWildEncounterRng(u16 randVal);
void ResetEncounterRateModifiers(void);
bool8 TryStandardWildEncounter(u32 currMetatileAttrs);

void UpdateWildEncounters(void);
u8 CountExistingWildEncounters(void);
void TrySpawnWildEncounter(void);
void TryDespawnWildEncounter(void);
void FindAvailableSpawnPosition(s16 *x, s16 *y);
u8 FindAvailableLocalId(void);

#endif // GUARD_WILD_ENCOUNTER_H

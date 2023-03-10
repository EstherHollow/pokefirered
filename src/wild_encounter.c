#include "global.h"

#include "battle_setup.h"
#include "event_data.h"
#include "event_object_movement.h"
#include "event_scripts.h"
#include "field_player_avatar.h"
#include "fieldmap.h"
#include "link.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "quest_log.h"
#include "random.h"
#include "roamer.h"
#include "script.h"
#include "wild_encounter.h"
#include "constants/abilities.h"
#include "constants/event_object_movement.h"
#include "constants/event_objects.h"
#include "constants/items.h"
#include "constants/maps.h"
#include "constants/trainer_types.h"

struct WildEncounterData
{
    u32 rngState;
    u16 prevMetatileBehavior;
    u16 encounterRateBuff;
    u8 stepsSinceLastEncounter;
    u8 abilityEffect;
    u16 leadMonHeldItem;
};

static EWRAM_DATA struct WildEncounterData sWildEncounterData = {};
static EWRAM_DATA bool8 sWildEncountersDisabled = FALSE;

EWRAM_DATA u16 gWanderingEncounterState = 0;

static bool8 UnlockedTanobyOrAreNotInTanoby(void);
static u32 GenerateUnownPersonalityByLetter(u8 letter);
static bool8 IsWildLevelAllowedByRepel(u8 level);
static void ApplyFluteEncounterRateMod(u32 *rate);
static u8 GetFluteEncounterRateModType(void);
static void ApplyCleanseTagEncounterRateMod(u32 *rate);
static bool8 IsLeadMonHoldingCleanseTag(void);
static u16 WildEncounterRandom(void);
static void AddToWildEncounterRateBuff(u8 encouterRate);

#include "data/wild_encounters.h"

static const u8 sUnownLetterSlots[][12] = {
  //  A   A   A   A   A   A   A   A   A   A   A   ?
    { 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 27},
  //  C   C   C   D   D   D   H   H   H   U   U   O
    { 2,  2,  2,  3,  3,  3,  7,  7,  7, 20, 20, 14},
  //  N   N   N   N   S   S   S   S   I   I   E   E
    {13, 13, 13, 13, 18, 18, 18, 18,  8,  8,  4,  4},
  //  P   P   L   L   J   J   R   R   R   Q   Q   Q
    {15, 15, 11, 11,  9,  9, 17, 17, 17, 16, 16, 16},
  //  Y   Y   T   T   G   G   G   F   F   F   K   K
    {24, 24, 19, 19,  6,  6,  6,  5,  5,  5, 10, 10},
  //  V   V   V   W   W   W   X   X   M   M   B   B
    {21, 21, 21, 22, 22, 22, 23, 23, 12, 12,  1,  1},
  //  Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   !
    {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 26},
};

void DisableWildEncounters(bool8 state)
{
    sWildEncountersDisabled = state;
}

static u8 ChooseWildMonIndex_Land(void)
{
    u8 rand = Random() % ENCOUNTER_CHANCE_LAND_MONS_TOTAL;

    if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_0) return 0;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_1) return 1;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_2) return 2;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_3) return 3;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_4) return 4;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_5) return 5;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_6) return 6;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_7) return 7;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_8) return 8;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_9) return 9;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_10) return 10;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_11) return 11;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_12) return 12;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_13) return 13;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_14) return 14;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_15) return 15;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_16) return 16;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_17) return 17;
    else if (rand < ENCOUNTER_CHANCE_LAND_MONS_SLOT_18) return 18;
    else return 19;
}

static u8 ChooseWildMonIndex_WaterRock(void)
{
    u8 rand = Random() % ENCOUNTER_CHANCE_WATER_MONS_TOTAL;

    if (rand < ENCOUNTER_CHANCE_WATER_MONS_SLOT_0)
        return 0;
    else if (rand >= ENCOUNTER_CHANCE_WATER_MONS_SLOT_0 && rand < ENCOUNTER_CHANCE_WATER_MONS_SLOT_1)
        return 1;
    else if (rand >= ENCOUNTER_CHANCE_WATER_MONS_SLOT_1 && rand < ENCOUNTER_CHANCE_WATER_MONS_SLOT_2)
        return 2;
    else if (rand >= ENCOUNTER_CHANCE_WATER_MONS_SLOT_2 && rand < ENCOUNTER_CHANCE_WATER_MONS_SLOT_3)
        return 3;
    else
        return 4;
}

static u8 ChooseWildMonIndex_Fishing(u8 rod)
{
    u8 wildMonIndex = 0;
    u8 rand = Random() % max(max(ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_TOTAL, ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_TOTAL),
                             ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_TOTAL);

    switch (rod)
    {
    case OLD_ROD:
        if (rand < ENCOUNTER_CHANCE_FISHING_MONS_OLD_ROD_SLOT_0)
            wildMonIndex = 0;
        else
            wildMonIndex = 1;
        break;
    case GOOD_ROD:
        if (rand < ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2)
            wildMonIndex = 2;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_2 && rand < ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3)
            wildMonIndex = 3;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_3 && rand < ENCOUNTER_CHANCE_FISHING_MONS_GOOD_ROD_SLOT_4)
            wildMonIndex = 4;
        break;
    case SUPER_ROD:
        if (rand < ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5)
            wildMonIndex = 5;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_5 && rand < ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6)
            wildMonIndex = 6;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_6 && rand < ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7)
            wildMonIndex = 7;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_7 && rand < ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8)
            wildMonIndex = 8;
        if (rand >= ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_8 && rand < ENCOUNTER_CHANCE_FISHING_MONS_SUPER_ROD_SLOT_9)
            wildMonIndex = 9;
        break;
    }
    return wildMonIndex;
}

static u8 ChooseWildMonLevel(const struct WildPokemon * info)
{
    u8 lo;
    u8 hi;
    u8 mod;
    u8 res;
    if (info->maxLevel >= info->minLevel)
    {
        lo = info->minLevel;
        hi = info->maxLevel;
    }
    else
    {
        lo = info->maxLevel;
        hi = info->minLevel;
    }
    mod = hi - lo + 1;
    res = Random() % mod;
    return lo + res;
}

static u16 GetCurrentMapWildMonHeaderId(void)
{
    u16 i;

    for (i = 0; ; i++)
    {
        const struct WildPokemonHeader * wildHeader = &gWildMonHeaders[i];
        if (wildHeader->mapGroup == MAP_GROUP(UNDEFINED))
            break;

        if (gWildMonHeaders[i].mapGroup == gSaveBlock1Ptr->location.mapGroup &&
            gWildMonHeaders[i].mapNum == gSaveBlock1Ptr->location.mapNum)
        {
            if (gSaveBlock1Ptr->location.mapGroup == MAP_GROUP(SIX_ISLAND_ALTERING_CAVE) &&
                gSaveBlock1Ptr->location.mapNum == MAP_NUM(SIX_ISLAND_ALTERING_CAVE))
            {
                u16 alteringCaveId = VarGet(VAR_ALTERING_CAVE_WILD_SET);
                if (alteringCaveId >= NUM_ALTERING_CAVE_TABLES)
                    alteringCaveId = 0;

                i += alteringCaveId;
            }

            if (!UnlockedTanobyOrAreNotInTanoby())
                break;
            return i;
        }
    }

    return -1;
}

static bool8 UnlockedTanobyOrAreNotInTanoby(void)
{
    if (FlagGet(FLAG_SYS_UNLOCKED_TANOBY_RUINS))
        return TRUE;
    if (gSaveBlock1Ptr->location.mapGroup != MAP_GROUP(SEVEN_ISLAND_TANOBY_RUINS_DILFORD_CHAMBER))
        return TRUE;
    if (!(gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_LIPTOO_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_WEEPTH_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_DILFORD_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_SCUFIB_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_RIXY_CHAMBER)
    ||  gSaveBlock1Ptr->location.mapNum == MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_VIAPOIS_CHAMBER)
    ))
        return TRUE;
    return FALSE;
}

static void GenerateWildMon(u16 species, u8 level, u8 slot)
{
    u32 personality;
    s8 chamber;
    ZeroEnemyPartyMons();
    if (species != SPECIES_UNOWN)
    {
        CreateMonWithNature(&gEnemyParty[0], species, level, 32, Random() % 25);
    }
    else
    {
        chamber = gSaveBlock1Ptr->location.mapNum - MAP_NUM(SEVEN_ISLAND_TANOBY_RUINS_MONEAN_CHAMBER);
        personality = GenerateUnownPersonalityByLetter(sUnownLetterSlots[chamber][slot]);
        CreatePlayerMon(&gEnemyParty[0], species, level, 32, TRUE, personality);
    }
}

static u32 GenerateUnownPersonalityByLetter(u8 letter)
{
    u32 personality;
    do
    {
        personality = (Random() << 16) | Random();
    } while (GetUnownLetterByPersonalityLoByte(personality) != letter);
    return personality;
}

u8 GetUnownLetterByPersonalityLoByte(u32 personality)
{
    return (((personality & 0x3000000) >> 18) | ((personality & 0x30000) >> 12) | ((personality & 0x300) >> 6) | (personality & 0x3)) % 0x1C;
}

enum
{
    WILD_AREA_LAND,
    WILD_AREA_WATER,
    WILD_AREA_ROCKS,
    WILD_AREA_FISHING,
};

#define WILD_CHECK_REPEL    0x1
#define WILD_CHECK_KEEN_EYE 0x2

static bool8 TryGenerateWildMon(const struct WildPokemonInfo * info, u8 area, u8 flags)
{
    u8 slot = 0;
    u8 level;
    switch (area)
    {
    case WILD_AREA_LAND:
        slot = ChooseWildMonIndex_Land();
        break;
    case WILD_AREA_WATER:
        slot = ChooseWildMonIndex_WaterRock();
        break;
    case WILD_AREA_ROCKS:
        slot = ChooseWildMonIndex_WaterRock();
        break;
    }
    level = ChooseWildMonLevel(&info->wildPokemon[slot]);
    if (flags == WILD_CHECK_REPEL && !IsWildLevelAllowedByRepel(level))
    {
        return FALSE;
    }
    GenerateWildMon(info->wildPokemon[slot].species, level, slot);
    return TRUE;
}

static u16 GenerateFishingEncounter(const struct WildPokemonInfo * info, u8 rod)
{
    u8 slot = ChooseWildMonIndex_Fishing(rod);
    u8 level = ChooseWildMonLevel(&info->wildPokemon[slot]);
    GenerateWildMon(info->wildPokemon[slot].species, level, slot);
    return info->wildPokemon[slot].species;
}

static bool8 DoWildEncounterRateDiceRoll(u16 a0)
{
    if (WildEncounterRandom() % 1600 < a0)
        return TRUE;
    return FALSE;
}

static bool8 DoWildEncounterRateTest(u32 encounterRate, bool8 ignoreAbility)
{
    encounterRate *= 16;
    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_MACH_BIKE | PLAYER_AVATAR_FLAG_ACRO_BIKE))
        encounterRate = encounterRate * 80 / 100;
    encounterRate += sWildEncounterData.encounterRateBuff * 16 / 200;
    ApplyFluteEncounterRateMod(&encounterRate);
    ApplyCleanseTagEncounterRateMod(&encounterRate);
    if (!ignoreAbility)
    {
        switch (sWildEncounterData.abilityEffect)
        {
        case 1:
            encounterRate /= 2;
            break;
        case 2:
            encounterRate *= 2;
            break;
        }
    }
    if (encounterRate > 1600)
        encounterRate = 1600;
    return DoWildEncounterRateDiceRoll(encounterRate);
}

static u8 GetAbilityEncounterRateModType(void)
{
    sWildEncounterData.abilityEffect = 0;
    if (!GetMonData(&gPlayerParty[0], MON_DATA_SANITY_IS_EGG))
    {
        u8 ability = GetMonAbility(&gPlayerParty[0]);
        if (ability == ABILITY_STENCH)
            sWildEncounterData.abilityEffect = 1;
        else if (ability == ABILITY_ILLUMINATE)
            sWildEncounterData.abilityEffect = 2;
    }
    return sWildEncounterData.abilityEffect;
}

static bool8 DoGlobalWildEncounterDiceRoll(void)
{
    if ((Random() % 100) >= 60)
        return FALSE;
    return TRUE;
}

bool8 StandardWildEncounter(u32 currMetatileAttrs, u16 previousMetatileBehavior)
{
    u16 headerId;
    struct Roamer * roamer;

    if (sWildEncountersDisabled == TRUE)
        return FALSE;

    headerId = GetCurrentMapWildMonHeaderId();
    if (headerId != 0xFFFF)
    {
        if (ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_ENCOUNTER_TYPE) == TILE_ENCOUNTER_LAND)
        {
            if (gWildMonHeaders[headerId].landMonsInfo == NULL)
                return FALSE;

            if (TryStartRoamerEncounter() == TRUE)
            {
                roamer = &gSaveBlock1Ptr->roamer;
                if (!IsWildLevelAllowedByRepel(roamer->level))
                {
                    return FALSE;
                }

                StartRoamerBattle();
                return TRUE;
            }
            else
            {
                // try a regular wild land encounter
                if (TryGenerateWildMon(gWildMonHeaders[headerId].landMonsInfo, WILD_AREA_LAND, WILD_CHECK_REPEL) == TRUE)
                {
                    StartWildBattle();
                    return TRUE;
                }
                else
                {
                    AddToWildEncounterRateBuff(gWildMonHeaders[headerId].landMonsInfo->encounterRate);
                }
            }
        }
        else if (ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_ENCOUNTER_TYPE) == TILE_ENCOUNTER_WATER
                 || (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING) && MetatileBehavior_IsBridge(ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_BEHAVIOR)) == TRUE))
        {
            if (gWildMonHeaders[headerId].waterMonsInfo == NULL)
                return FALSE;

            if (TryStartRoamerEncounter() == TRUE)
            {
                roamer = &gSaveBlock1Ptr->roamer;
                if (!IsWildLevelAllowedByRepel(roamer->level))
                {
                    return FALSE;
                }

                StartRoamerBattle();
                return TRUE;
            }
            else // try a regular surfing encounter
            {
                if (TryGenerateWildMon(gWildMonHeaders[headerId].waterMonsInfo, WILD_AREA_WATER, WILD_CHECK_REPEL) == TRUE)
                {
                    StartWildBattle();
                    return TRUE;
                }
                else
                {
                    AddToWildEncounterRateBuff(gWildMonHeaders[headerId].waterMonsInfo->encounterRate);
                }
            }
        }
    }

    return FALSE;
}

void RockSmashWildEncounter(void)
{
    u16 headerIdx = GetCurrentMapWildMonHeaderId();
    if (headerIdx == 0xFFFF)
        gSpecialVar_Result = FALSE;
    else if (gWildMonHeaders[headerIdx].rockSmashMonsInfo == NULL)
        gSpecialVar_Result = FALSE;
    else if (DoWildEncounterRateTest(gWildMonHeaders[headerIdx].rockSmashMonsInfo->encounterRate, TRUE) != TRUE)
        gSpecialVar_Result = FALSE;
    else if (TryGenerateWildMon(gWildMonHeaders[headerIdx].rockSmashMonsInfo, WILD_AREA_ROCKS, WILD_CHECK_REPEL) == TRUE)
    {
        StartWildBattle();
        gSpecialVar_Result = TRUE;
    }
    else
        gSpecialVar_Result = FALSE;
}

bool8 SweetScentWildEncounter(void)
{
    s16 x, y;
    u16 headerId;

    PlayerGetDestCoords(&x, &y);
    headerId = GetCurrentMapWildMonHeaderId();
    if (headerId != 0xFFFF)
    {
        if (MapGridGetMetatileAttributeAt(x, y, METATILE_ATTRIBUTE_ENCOUNTER_TYPE) == TILE_ENCOUNTER_LAND)
        {
            if (TryStartRoamerEncounter() == TRUE)
            {
                StartRoamerBattle();
                return TRUE;
            }

            if (gWildMonHeaders[headerId].landMonsInfo == NULL)
                return FALSE;

            TryGenerateWildMon(gWildMonHeaders[headerId].landMonsInfo, WILD_AREA_LAND, 0);

            StartWildBattle();
            return TRUE;
        }
        else if (MapGridGetMetatileAttributeAt(x, y, METATILE_ATTRIBUTE_ENCOUNTER_TYPE) == TILE_ENCOUNTER_WATER)
        {
            if (TryStartRoamerEncounter() == TRUE)
            {
                StartRoamerBattle();
                return TRUE;
            }

            if (gWildMonHeaders[headerId].waterMonsInfo == NULL)
                return FALSE;

            TryGenerateWildMon(gWildMonHeaders[headerId].waterMonsInfo, WILD_AREA_WATER, 0);
            StartWildBattle();
            return TRUE;
        }
    }

    return FALSE;
}

bool8 DoesCurrentMapHaveFishingMons(void)
{
    u16 headerIdx = GetCurrentMapWildMonHeaderId();
    if (headerIdx == 0xFFFF)
        return FALSE;
    if (gWildMonHeaders[headerIdx].fishingMonsInfo == NULL)
        return FALSE;
    return TRUE;
}

void FishingWildEncounter(u8 rod)
{
    GenerateFishingEncounter(gWildMonHeaders[GetCurrentMapWildMonHeaderId()].fishingMonsInfo, rod);
    IncrementGameStat(GAME_STAT_FISHING_CAPTURES);
    StartWildBattle();
}

u16 GetLocalWildMon(bool8 *isWaterMon)
{
    u16 headerId;
    const struct WildPokemonInfo * landMonsInfo;
    const struct WildPokemonInfo * waterMonsInfo;

    *isWaterMon = FALSE;
    headerId = GetCurrentMapWildMonHeaderId();
    if (headerId == 0xFFFF)
        return SPECIES_NONE;
    landMonsInfo = gWildMonHeaders[headerId].landMonsInfo;
    waterMonsInfo = gWildMonHeaders[headerId].waterMonsInfo;
    // Neither
    if (landMonsInfo == NULL && waterMonsInfo == NULL)
        return SPECIES_NONE;
        // Land Pokemon
    else if (landMonsInfo != NULL && waterMonsInfo == NULL)
        return landMonsInfo->wildPokemon[ChooseWildMonIndex_Land()].species;
        // Water Pokemon
    else if (landMonsInfo == NULL && waterMonsInfo != NULL)
    {
        *isWaterMon = TRUE;
        return waterMonsInfo->wildPokemon[ChooseWildMonIndex_WaterRock()].species;
    }
    // Either land or water Pokemon
    if ((Random() % 100) < 80)
    {
        return landMonsInfo->wildPokemon[ChooseWildMonIndex_Land()].species;
    }
    else
    {
        *isWaterMon = TRUE;
        return waterMonsInfo->wildPokemon[ChooseWildMonIndex_WaterRock()].species;
    }
}

u16 GetLocalWaterMon(void)
{
    u16 headerId = GetCurrentMapWildMonHeaderId();

    if (headerId != 0xFFFF)
    {
        const struct WildPokemonInfo * waterMonsInfo = gWildMonHeaders[headerId].waterMonsInfo;

        if (waterMonsInfo)
            return waterMonsInfo->wildPokemon[ChooseWildMonIndex_WaterRock()].species;
    }
    return SPECIES_NONE;
}

bool8 UpdateRepelCounter(void)
{
    u16 steps;

    if (InUnionRoom() == TRUE)
        return FALSE;

    if (gQuestLogState == QL_STATE_PLAYBACK)
        return FALSE;

    steps = VarGet(VAR_REPEL_STEP_COUNT);

    if (steps != 0)
    {
        steps--;
        VarSet(VAR_REPEL_STEP_COUNT, steps);
        if (steps == 0)
        {
            ScriptContext_SetupScript(EventScript_RepelWoreOff);
            return TRUE;
        }
    }
    return FALSE;
}

static bool8 IsWildLevelAllowedByRepel(u8 wildLevel)
{
    u8 i;

    if (!VarGet(VAR_REPEL_STEP_COUNT))
        return TRUE;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i], MON_DATA_HP) && !GetMonData(&gPlayerParty[i], MON_DATA_IS_EGG))
        {
            u8 ourLevel = GetMonData(&gPlayerParty[i], MON_DATA_LEVEL);

            if (wildLevel < ourLevel)
                return FALSE;
            else
                return TRUE;
        }
    }

    return FALSE;
}

static void ApplyFluteEncounterRateMod(u32 *encounterRate)
{
    switch (GetFluteEncounterRateModType())
    {
    case 1:
        *encounterRate += *encounterRate / 2;
        break;
    case 2:
        *encounterRate = *encounterRate / 2;
        break;
    }
}

static u8 GetFluteEncounterRateModType(void)
{
    if (FlagGet(FLAG_SYS_WHITE_FLUTE_ACTIVE) == TRUE)
        return 1;
    else if (FlagGet(FLAG_SYS_BLACK_FLUTE_ACTIVE) == TRUE)
        return 2;
    else
        return 0;
}

static void ApplyCleanseTagEncounterRateMod(u32 *encounterRate)
{
    if (IsLeadMonHoldingCleanseTag())
        *encounterRate = *encounterRate * 2 / 3;
}

static bool8 IsLeadMonHoldingCleanseTag(void)
{
    if (sWildEncounterData.leadMonHeldItem == ITEM_CLEANSE_TAG)
        return TRUE;
    else
        return FALSE;
}

void SeedWildEncounterRng(u16 seed)
{
    sWildEncounterData.rngState = seed;
    ResetEncounterRateModifiers();
}

static u16 WildEncounterRandom(void)
{
    sWildEncounterData.rngState = ISO_RANDOMIZE2(sWildEncounterData.rngState);
    return sWildEncounterData.rngState >> 16;
}

void ResetEncounterRateModifiers(void)
{
    sWildEncounterData.encounterRateBuff = 0;
    sWildEncounterData.stepsSinceLastEncounter = 0;
}

bool8 TryStandardWildEncounter(u32 currMetatileAttrs)
{
    if (StandardWildEncounter(currMetatileAttrs, sWildEncounterData.prevMetatileBehavior) == TRUE)
    {
        sWildEncounterData.encounterRateBuff = 0;
        sWildEncounterData.stepsSinceLastEncounter = 0;
        sWildEncounterData.prevMetatileBehavior = ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_BEHAVIOR);
        return TRUE;
    }
    else
    {
        sWildEncounterData.prevMetatileBehavior = ExtractMetatileAttribute(currMetatileAttrs, METATILE_ATTRIBUTE_BEHAVIOR);
        return FALSE;
    }
}

static void AddToWildEncounterRateBuff(u8 encounterRate)
{
    if (VarGet(VAR_REPEL_STEP_COUNT) == 0)
        sWildEncounterData.encounterRateBuff += encounterRate;
    else
        sWildEncounterData.encounterRateBuff = 0;
}

void UpdateWildEncounters(void) {
    struct ObjectEventTemplate template;
    s16 cameraX, cameraY;

    if (!QL_IS_PLAYBACK_STATE && gWanderingEncounterState >= WILD_ENCOUNTER_UPDATE_DELAY) {
        gWanderingEncounterState = 0;

        if (CountExistingWildEncounters() < MAX_WILD_ENCOUNTERS) {
            FindAvailableSpawnPosition(&template.x, &template.y);
            if (template.x != 0 && template.y != 0) {
                template.localId = FindAvailableLocalId();
                if (template.localId != OBJ_EVENT_ID_NULL_ENCOUNTER) {
                    template.graphicsId = OBJ_EVENT_GFX_WILD_ENCOUNTER;
                    template.kind = OBJ_KIND_NORMAL;
                    template.objUnion.normal.elevation = 3;
                    template.objUnion.normal.movementType = MOVEMENT_TYPE_WANDER_AROUND;
                    template.objUnion.normal.movementRangeX = 4;
                    template.objUnion.normal.movementRangeY = 4;
                    template.objUnion.normal.trainerType = TRAINER_TYPE_NONE;
                    template.objUnion.normal.trainerRange_berryTreeId = 0;
                    template.script = 0;
                    template.flagId = 0;

                    GetObjectEventMovingCameraOffset(&cameraX, &cameraY);
                    TrySpawnObjectEventTemplate(&template, gSaveBlock1Ptr->location.mapNum, gSaveBlock1Ptr->location.mapGroup, cameraX, cameraY);
                }
            }
        }
    }
    else {
        gWanderingEncounterState++;
    }
}

u8 CountExistingWildEncounters(void) {
    u8 count = 0;
    s32 i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++) {
        struct ObjectEvent *objectEvent = &gObjectEvents[i];
        if (objectEvent->active && IsWanderingEncounterLocalId(objectEvent->localId)) {
            count++;
        }
    }

    return count;
}

void FindAvailableSpawnPosition(s16 *x, s16 *y) {
    u32 area = (WILD_ENCOUNTER_RANGE_X * 2 + 1) * (WILD_ENCOUNTER_RANGE_Y * 2 + 1);
    u32 index = Random() % area;

    u16 seed = 19;

    s16 playerX, playerY;
    s16 indexX, indexY;
    u32 attribute;
    s32 i;

    PlayerGetDestCoords(&playerX, &playerY);

    for (i = 0; i < FIND_SPAWN_ATTEMPTS; i++) {
        indexX = (index / (WILD_ENCOUNTER_RANGE_X * 2 + 1)) + playerX - WILD_ENCOUNTER_RANGE_X;
        indexY = (index % (WILD_ENCOUNTER_RANGE_X * 2 + 1)) + playerY - WILD_ENCOUNTER_RANGE_Y;
        attribute = MapGridGetMetatileAttributeAt(indexX, indexY, METATILE_ATTRIBUTE_ENCOUNTER_TYPE);
        if (attribute != TILE_ENCOUNTER_NONE) {
            if (MapGridGetCollisionAt(indexX, indexY) == COLLISION_NONE) {
                if (indexX != playerX && indexY != playerY) {
                    *x = indexX - MAP_OFFSET;
                    *y = indexY - MAP_OFFSET;
                    return;
                }
            }
        }
        index = (index + seed) % area;
    }

    *x = 0;
    *y = 0;
}

u8 FindAvailableLocalId(void) {
    bool8 localIds[MAX_WILD_ENCOUNTERS] = {0};
    struct ObjectEvent *object;
    u8 i;

    for (i = 0; i < OBJECT_EVENTS_COUNT; i++) {
        object = &gObjectEvents[i];
        if (object->active && IsWanderingEncounterLocalId(object->localId)) {
            localIds[object->localId - OBJ_EVENT_ID_WILD_ENCOUNTER] = 1;
        }
    }

    for (i = 0; i < MAX_WILD_ENCOUNTERS; i++) {
        if (localIds[i] == 0) {
            return OBJ_EVENT_ID_WILD_ENCOUNTER + i;
        }
    }

    return OBJ_EVENT_ID_NULL_ENCOUNTER;
}

bool8 IsWanderingEncounterLocalId(u8 localId) {
    return (localId >= OBJ_EVENT_ID_WILD_ENCOUNTER) &&
           (localId < (OBJ_EVENT_ID_WILD_ENCOUNTER + MAX_WILD_ENCOUNTERS));
}

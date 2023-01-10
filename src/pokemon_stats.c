#include "global.h"
#include "pokemon_stats.h"

u8 GetBaseHP(u16 species, u16 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0) {
        return gBaseStats[species].baseHP + gVariantStats[species][variant].hp;
    }
    else {
        return gBaseStats[species].baseHP;
    }
}

u8 GetBaseAttack(u16 species, u16 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0) {
        return gBaseStats[species].baseAttack + gVariantStats[species][variant].attack;
    }
    else {
        return gBaseStats[species].baseAttack;
    }
}

u8 GetBaseDefense(u16 species, u16 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0) {
        return gBaseStats[species].baseDefense + gVariantStats[species][variant].defense;
    }
    else {
        return gBaseStats[species].baseDefense;
    }
}

u8 GetBaseSpeed(u16 species, u16 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0) {
        return gBaseStats[species].baseSpeed + gVariantStats[species][variant].speed;
    }
    else {
        return gBaseStats[species].baseSpeed;
    }
}

u8 GetBaseSpAttack(u16 species, u16 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0) {
        return gBaseStats[species].baseSpAttack + gVariantStats[species][variant].spAttack;
    }
    else {
        return gBaseStats[species].baseSpAttack;
    }
}

u8 GetBaseSpDefense(u16 species, u16 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0) {
        return gBaseStats[species].baseSpDefense + gVariantStats[species][variant].spDefense;
    }
    else {
        return gBaseStats[species].baseSpDefense;
    }
}

u8 GetType1(u16 species, u16 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_TYPE) > 0) {
        return gVariantStats[species][variant].type1;
    }
    else {
        return gBaseStats[species].type1;
    }
}

u8 GetType2(u16 species, u16 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_TYPE) > 0) {
        return gVariantStats[species][variant].type2;
    }
    else {
        return gBaseStats[species].type2;
    }
}

u8 GetLevelUpLearnset(u16 species, u16 variant, u16 *learnset) {
    u8 count = 0;
    u8 baseIndex = 0;
    u16 variantIndex = 0;
    u16 baseLevel;
    u16 variantLevel;
    int i;

    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_LEARNSET) > 0) {
        for (i = 0; i < 24; i++) {
            if (gLevelUpLearnsets[species][baseIndex] == 0xFFFF && gVariantStats[species][variant].learnset[variantIndex] == 0xFFFF) {
                break;
            }
            baseLevel = gLevelUpLearnsets[species][baseIndex] & 0xFE00;
            variantLevel = gVariantStats[species][variant].learnset[variantIndex] & 0xFE00;

            if (baseLevel < variantLevel) {
                learnset[count++] = gLevelUpLearnsets[species][baseIndex++];
            }
            else {
                learnset[count++] = gVariantStats[species][variant].learnset[variantIndex++];
            }
        }
    }
    else {
        for (i = 0; i < 20; i++) {
            if (gLevelUpLearnsets[species][i] == 0xFFFF) {
                break;
            }
            learnset[count++] = gLevelUpLearnsets[species][i];
        }
    }

    learnset[count++] = 0xFFFF;

    return count;
}

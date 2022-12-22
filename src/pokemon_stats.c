#include "global.h"
#include "pokemon_stats.h"

u8 GetType1(u16 species, u8 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_TYPE) > 0) {
        return gVariantStats[species][variant].type1;
    }
    else {
        return gBaseStats[species].type1;
    }
}

u8 GetType2(u16 species, u8 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_TYPE) > 0) {
        return gVariantStats[species][variant].type2;
    }
    else {
        return gBaseStats[species].type2;
    }
}

u8 GetLevelUpLearnset(u16 species, u8 variant, u16 *learnset) {
    u8 count = 0;
    int i;
    u8 baseIndex = 0;
    u8 variantIndex = 0;
    u16 baseLevel;
    u16 variantLevel;

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

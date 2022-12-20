#include "global.h"
#include "pokemon_stats.h"

u8 GetType1(u16 species, u32 personality) {
    u8 variant = 0;
    switch (species) {
    case SPECIES_BULBASAUR:
        variant = personality % 4 + 2;
        break;
    }

    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_TYPE) > 0) {
        return gVariantStats[species][variant].type1;
    }
    else {
        return gBaseStats[species].type1;
    }
}

u8 GetType2(u16 species, u32 personality) {
    u8 variant = 0;
    switch (species) {
    case SPECIES_BULBASAUR:
        variant = personality % 4 + 2;
        break;
    }

    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_TYPE) > 0) {
        return gVariantStats[species][variant].type2;
    }
    else {
        return gBaseStats[species].type2;
    }
}

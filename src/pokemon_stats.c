#include "global.h"
#include "pokemon_stats.h"

const u8 GetBaseHP(u16 species) {
    return gBaseStats[species].baseHP;
}

const u8 GetBaseAttack(u16 species) {
    return gBaseStats[species].baseAttack;
}

const u8 GetBaseDefense(u16 species) {
    return gBaseStats[species].baseDefense;
}

const u8 GetBaseSpeed(u16 species) {
    return gBaseStats[species].baseSpeed;
}

const u8 GetBaseSpAttack(u16 species) {
    return gBaseStats[species].baseSpAttack;
}

const u8 GetBaseSpDefense(u16 species) {
    return gBaseStats[species].baseSpDefense;
}


const u8 GetVariantHP(u16 species, u16 variant) {
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][variant].hpMod > 0) {
        if (gVariantStats[species][variant].hpMod == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][variant].attackMod != MAINTAIN_BST) {
                baseTotal += GetBaseAttack(species);
                variantTotal += GetVariantAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].defenseMod != MAINTAIN_BST) {
                baseTotal += GetBaseDefense(species);
                variantTotal += GetVariantDefense(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].speedMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpeed(species);
                variantTotal += GetVariantSpeed(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].spAttackMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpAttack(species);
                variantTotal += GetVariantSpAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].spDefenseMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpDefense(species);
                variantTotal += GetVariantSpDefense(species, variant);
                numStats++;
            }

            if (baseTotal > variantTotal) {
                return GetBaseHP(species) + ((baseTotal - variantTotal) / (6 - numStats));
            }
            else {
                return GetBaseHP(species) - ((variantTotal - baseTotal) / (6 - numStats));
            }
        }
        else {
            return (GetBaseHP(species) * gVariantStats[species][variant].hpMod) / 100;
        }
    }
    else {
        return GetBaseHP(species);
    }
}

const u8 GetVariantAttack(u16 species, u16 variant) {
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][variant].attackMod > 0) {
        if (gVariantStats[species][variant].attackMod == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][variant].hpMod != MAINTAIN_BST) {
                baseTotal += GetBaseHP(species);
                variantTotal += GetVariantHP(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].defenseMod != MAINTAIN_BST) {
                baseTotal += GetBaseDefense(species);
                variantTotal += GetVariantDefense(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].speedMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpeed(species);
                variantTotal += GetVariantSpeed(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].spAttackMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpAttack(species);
                variantTotal += GetVariantSpAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].spDefenseMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpDefense(species);
                variantTotal += GetVariantSpDefense(species, variant);
                numStats++;
            }

            if (baseTotal > variantTotal) {
                return GetBaseAttack(species) + ((baseTotal - variantTotal) / (6 - numStats));
            }
            else {
                return GetBaseAttack(species) - ((variantTotal - baseTotal) / (6 - numStats));
            }
        }
        else {
            return (GetBaseAttack(species) * gVariantStats[species][variant].attackMod) / 100;
        }
    }
    else {
        return GetBaseAttack(species);
    }
}

const u8 GetVariantDefense(u16 species, u16 variant) {
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][variant].defenseMod > 0) {
        if (gVariantStats[species][variant].defenseMod == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][variant].hpMod != MAINTAIN_BST) {
                baseTotal += GetBaseHP(species);
                variantTotal += GetVariantHP(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].attackMod != MAINTAIN_BST) {
                baseTotal += GetBaseAttack(species);
                variantTotal += GetVariantAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].speedMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpeed(species);
                variantTotal += GetVariantSpeed(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].spAttackMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpAttack(species);
                variantTotal += GetVariantSpAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].spDefenseMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpDefense(species);
                variantTotal += GetVariantSpDefense(species, variant);
                numStats++;
            }

            if (baseTotal > variantTotal) {
                return GetBaseDefense(species) + ((baseTotal - variantTotal) / (6 - numStats));
            }
            else {
                return GetBaseDefense(species) - ((variantTotal - baseTotal) / (6 - numStats));
            }
        }
        else {
            return (GetBaseDefense(species) * gVariantStats[species][variant].defenseMod) / 100;
        }
    }
    else {
        return GetBaseDefense(species);
    }
}

const u8 GetVariantSpeed(u16 species, u16 variant) {
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][variant].speedMod > 0) {
        if (gVariantStats[species][variant].speedMod == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][variant].hpMod != MAINTAIN_BST) {
                baseTotal += GetBaseHP(species);
                variantTotal += GetVariantHP(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].attackMod != MAINTAIN_BST) {
                baseTotal += GetBaseAttack(species);
                variantTotal += GetVariantAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].defenseMod != MAINTAIN_BST) {
                baseTotal += GetBaseDefense(species);
                variantTotal += GetVariantDefense(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].spAttackMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpAttack(species);
                variantTotal += GetVariantSpAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].spDefenseMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpDefense(species);
                variantTotal += GetVariantSpDefense(species, variant);
                numStats++;
            }

            if (baseTotal > variantTotal) {
                return GetBaseSpeed(species) + ((baseTotal - variantTotal) / (6 - numStats));
            }
            else {
                return GetBaseSpeed(species) - ((variantTotal - baseTotal) / (6 - numStats));
            }
        }
        else {
            return (GetBaseSpeed(species) * gVariantStats[species][variant].speedMod) / 100;
        }
    }
    else {
        return GetBaseSpeed(species);
    }
}

const u8 GetVariantSpAttack(u16 species, u16 variant) {
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][variant].spAttackMod > 0) {
        if (gVariantStats[species][variant].spAttackMod == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][variant].hpMod != MAINTAIN_BST) {
                baseTotal += GetBaseHP(species);
                variantTotal += GetVariantHP(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].attackMod != MAINTAIN_BST) {
                baseTotal += GetBaseAttack(species);
                variantTotal += GetVariantAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].defenseMod != MAINTAIN_BST) {
                baseTotal += GetBaseDefense(species);
                variantTotal += GetVariantDefense(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].speedMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpeed(species);
                variantTotal += GetVariantSpeed(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].spDefenseMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpDefense(species);
                variantTotal += GetVariantSpDefense(species, variant);
                numStats++;
            }

            if (baseTotal > variantTotal) {
                return GetBaseSpAttack(species) + ((baseTotal - variantTotal) / (6 - numStats));
            }
            else {
                return GetBaseSpAttack(species) - ((variantTotal - baseTotal) / (6 - numStats));
            }
        }
        else {
            return (GetBaseSpAttack(species) * gVariantStats[species][variant].spAttackMod) / 100;
        }
    }
    else {
        return GetBaseSpAttack(species);
    }
}

const u8 GetVariantSpDefense(u16 species, u16 variant) {
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][variant].spDefenseMod > 0) {
        if (gVariantStats[species][variant].spDefenseMod == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][variant].hpMod != MAINTAIN_BST) {
                baseTotal += GetBaseHP(species);
                variantTotal += GetVariantHP(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].attackMod != MAINTAIN_BST) {
                baseTotal += GetBaseAttack(species);
                variantTotal += GetVariantAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].defenseMod != MAINTAIN_BST) {
                baseTotal += GetBaseDefense(species);
                variantTotal += GetVariantDefense(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].speedMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpeed(species);
                variantTotal += GetVariantSpeed(species, variant);
                numStats++;
            }
            if (gVariantStats[species][variant].spAttackMod != MAINTAIN_BST) {
                baseTotal += GetBaseSpAttack(species);
                variantTotal += GetVariantSpAttack(species, variant);
                numStats++;
            }

            if (baseTotal > variantTotal) {
                return GetBaseSpDefense(species) + ((baseTotal - variantTotal) / (6 - numStats));
            }
            else {
                return GetBaseSpDefense(species) - ((variantTotal - baseTotal) / (6 - numStats));
            }
        }
        else {
            return (GetBaseSpDefense(species) * gVariantStats[species][variant].spDefenseMod) / 100;
        }
    }
    else {
        return GetBaseSpDefense(species);
    }
}

const u8 GetVariantType1(u16 species, u16 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_TYPE) > 0) {
        return gVariantStats[species][variant].type1;
    }
    else {
        return gBaseStats[species].type1;
    }
}

const u8 GetVariantType2(u16 species, u16 variant) {
    if ((gVariantStats[species][variant].variantFlags & VARIANT_FLAG_TYPE) > 0) {
        return gVariantStats[species][variant].type2;
    }
    else {
        return gBaseStats[species].type2;
    }
}

const u8 GetVariantLearnset(u16 species, u16 variant, u16 *learnset) {
    u8 count = 0;
    u16 baseIndex = 0;
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

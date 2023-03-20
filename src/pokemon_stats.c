#include "global.h"
#include "pokemon_stats.h"

const u8 GetPrimaryPalette(u16 species, u16 variant) {
    u8 index = 0;
    switch (species) {
    case SPECIES_CATERPIE: index = 0; break;
    case SPECIES_METAPOD: index = 1; break;
    case SPECIES_BUTTERFREE: index = 2; break;
    case SPECIES_WEEDLE: index = 0; break;
    case SPECIES_KAKUNA: index = 1; break;
    case SPECIES_BEEDRILL: index = 2; break;
    }
    switch (index) {
    case 0: return (variant & 0x0007);
    case 1: return (variant & 0x0038) >> 3;
    case 2: return (variant & 0x01C0) >> 6;
    case 3: return (variant & 0x0E00) >> 9;
    }
    return 0;
}

const u8 GetBaseHP(u16 species) {
    return gSpeciesInfo[species].baseHP;
}

const u8 GetBaseAttack(u16 species) {
    return gSpeciesInfo[species].baseAttack;
}

const u8 GetBaseDefense(u16 species) {
    return gSpeciesInfo[species].baseDefense;
}

const u8 GetBaseSpeed(u16 species) {
    return gSpeciesInfo[species].baseSpeed;
}

const u8 GetBaseSpAttack(u16 species) {
    return gSpeciesInfo[species].baseSpAttack;
}

const u8 GetBaseSpDefense(u16 species) {
    return gSpeciesInfo[species].baseSpDefense;
}


const u8 GetVariantHP(u16 species, u16 variant) {
    u16 palette = GetPrimaryPalette(species, variant);
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][palette].flags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][palette].hp > 0) {
        if (gVariantStats[species][palette].hp == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][palette].attack != MAINTAIN_BST) {
                baseTotal += GetBaseAttack(species);
                variantTotal += GetVariantAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].defense != MAINTAIN_BST) {
                baseTotal += GetBaseDefense(species);
                variantTotal += GetVariantDefense(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].speed != MAINTAIN_BST) {
                baseTotal += GetBaseSpeed(species);
                variantTotal += GetVariantSpeed(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].spAttack != MAINTAIN_BST) {
                baseTotal += GetBaseSpAttack(species);
                variantTotal += GetVariantSpAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].spDefense != MAINTAIN_BST) {
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
            return gVariantStats[species][palette].hp;
        }
    }
    else {
        return GetBaseHP(species);
    }
}

const u8 GetVariantAttack(u16 species, u16 variant) {
    u16 palette = GetPrimaryPalette(species, variant);
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][palette].flags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][palette].attack > 0) {
        if (gVariantStats[species][palette].attack == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][palette].hp != MAINTAIN_BST) {
                baseTotal += GetBaseHP(species);
                variantTotal += GetVariantHP(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].defense != MAINTAIN_BST) {
                baseTotal += GetBaseDefense(species);
                variantTotal += GetVariantDefense(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].speed != MAINTAIN_BST) {
                baseTotal += GetBaseSpeed(species);
                variantTotal += GetVariantSpeed(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].spAttack != MAINTAIN_BST) {
                baseTotal += GetBaseSpAttack(species);
                variantTotal += GetVariantSpAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].spDefense != MAINTAIN_BST) {
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
            return gVariantStats[species][palette].attack;
        }
    }
    else {
        return GetBaseAttack(species);
    }
}

const u8 GetVariantDefense(u16 species, u16 variant) {
    u16 palette = GetPrimaryPalette(species, variant);
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][palette].flags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][palette].defense > 0) {
        if (gVariantStats[species][palette].defense == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][palette].hp != MAINTAIN_BST) {
                baseTotal += GetBaseHP(species);
                variantTotal += GetVariantHP(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].attack != MAINTAIN_BST) {
                baseTotal += GetBaseAttack(species);
                variantTotal += GetVariantAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].speed != MAINTAIN_BST) {
                baseTotal += GetBaseSpeed(species);
                variantTotal += GetVariantSpeed(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].spAttack != MAINTAIN_BST) {
                baseTotal += GetBaseSpAttack(species);
                variantTotal += GetVariantSpAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].spDefense != MAINTAIN_BST) {
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
            return gVariantStats[species][palette].defense;
        }
    }
    else {
        return GetBaseDefense(species);
    }
}

const u8 GetVariantSpeed(u16 species, u16 variant) {
    u16 palette = GetPrimaryPalette(species, variant);
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][palette].flags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][palette].speed > 0) {
        if (gVariantStats[species][palette].speed == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][palette].hp != MAINTAIN_BST) {
                baseTotal += GetBaseHP(species);
                variantTotal += GetVariantHP(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].attack != MAINTAIN_BST) {
                baseTotal += GetBaseAttack(species);
                variantTotal += GetVariantAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].defense != MAINTAIN_BST) {
                baseTotal += GetBaseDefense(species);
                variantTotal += GetVariantDefense(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].spAttack != MAINTAIN_BST) {
                baseTotal += GetBaseSpAttack(species);
                variantTotal += GetVariantSpAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].spDefense != MAINTAIN_BST) {
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
            return gVariantStats[species][palette].speed;
        }
    }
    else {
        return GetBaseSpeed(species);
    }
}

const u8 GetVariantSpAttack(u16 species, u16 variant) {
    u16 palette = GetPrimaryPalette(species, variant);
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][palette].flags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][palette].spAttack > 0) {
        if (gVariantStats[species][palette].spAttack == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][palette].hp != MAINTAIN_BST) {
                baseTotal += GetBaseHP(species);
                variantTotal += GetVariantHP(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].attack != MAINTAIN_BST) {
                baseTotal += GetBaseAttack(species);
                variantTotal += GetVariantAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].defense != MAINTAIN_BST) {
                baseTotal += GetBaseDefense(species);
                variantTotal += GetVariantDefense(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].speed != MAINTAIN_BST) {
                baseTotal += GetBaseSpeed(species);
                variantTotal += GetVariantSpeed(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].spDefense != MAINTAIN_BST) {
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
            return gVariantStats[species][palette].spAttack;
        }
    }
    else {
        return GetBaseSpAttack(species);
    }
}

const u8 GetVariantSpDefense(u16 species, u16 variant) {
    u16 palette = GetPrimaryPalette(species, variant);
    u32 baseTotal;
    u32 variantTotal;
    u8 numStats;

    if ((gVariantStats[species][palette].flags & VARIANT_FLAG_STATS) > 0 && gVariantStats[species][palette].spDefense > 0) {
        if (gVariantStats[species][palette].spDefense == MAINTAIN_BST) {
            baseTotal = 0;
            variantTotal = 0;
            numStats = 0;

            if (gVariantStats[species][palette].hp != MAINTAIN_BST) {
                baseTotal += GetBaseHP(species);
                variantTotal += GetVariantHP(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].attack != MAINTAIN_BST) {
                baseTotal += GetBaseAttack(species);
                variantTotal += GetVariantAttack(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].defense != MAINTAIN_BST) {
                baseTotal += GetBaseDefense(species);
                variantTotal += GetVariantDefense(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].speed != MAINTAIN_BST) {
                baseTotal += GetBaseSpeed(species);
                variantTotal += GetVariantSpeed(species, variant);
                numStats++;
            }
            if (gVariantStats[species][palette].spAttack != MAINTAIN_BST) {
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
            return gVariantStats[species][palette].spDefense;
        }
    }
    else {
        return GetBaseSpDefense(species);
    }
}

const u8 GetVariantType1(u16 species, u16 variant) {
    u16 palette = GetPrimaryPalette(species, variant);
    if ((gVariantStats[species][palette].flags & VARIANT_FLAG_TYPE) > 0) {
        return gVariantStats[species][palette].type1;
    }
    else {
        return gSpeciesInfo[species].types[0];
    }
}

const u8 GetVariantType2(u16 species, u16 variant) {
    u16 palette = GetPrimaryPalette(species, variant);
    if ((gVariantStats[species][palette].flags & VARIANT_FLAG_TYPE) > 0) {
        return gVariantStats[species][palette].type2;
    }
    else {
        return gSpeciesInfo[species].types[1];
    }
}

const u8 GetVariantLearnset(u16 species, u16 variant, u16 *learnset) {
    u16 palette = GetPrimaryPalette(species, variant);
    u8 count = 0;
    u16 baseMove = 0;
    u16 baseIndex = 0;
    u16 variantIndex = 0;
    u16 baseLevel;
    u16 variantLevel;
    int i, j;

    if ((gVariantStats[species][palette].flags & VARIANT_FLAG_LEARNSET) > 0) {
        for (i = 0; i < 28; i++) {
            if (gLevelUpLearnsets[species][baseIndex] == 0xFFFF && gVariantStats[species][palette].learnset[variantIndex] == 0xFFFF) {
                break;
            }

            baseMove = gLevelUpLearnsets[species][baseIndex] & 0x01FF;
            for (j = 0; j < 4; j++) {
                if (gVariantStats[species][palette].unlearnset[j] == 0xFFFF) {
                    break;
                }
                if (baseMove == gVariantStats[species][palette].unlearnset[j]) {
                    baseMove = 0;
                    break;
                }
            }
            if (baseMove == 0) {
                baseIndex++;
                continue;
            }

            baseLevel = gLevelUpLearnsets[species][baseIndex] & 0xFE00;
            variantLevel = gVariantStats[species][palette].learnset[variantIndex] & 0xFE00;

            if (baseLevel < variantLevel) {
                learnset[count++] = gLevelUpLearnsets[species][baseIndex++];
            }
            else {
                learnset[count++] = gVariantStats[species][palette].learnset[variantIndex++];
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

extern const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1];
extern const struct Evolution gEvolutionTable[][EVOS_PER_MON];
const struct Evolution *GetVariantEvolutions(u16 species, u16 variant) {
    u16 palette = GetPrimaryPalette(species, variant);
    if ((gVariantStats[species][palette].flags & VARIANT_FLAG_EVOLUTION) > 0) {
        return gVariantStats[species][palette].evolutions;
    }
    else {
        return gEvolutionTable[species];
    }
}

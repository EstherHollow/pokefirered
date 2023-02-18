#ifndef GUARD_POKEMON_STATS_H
#define GUARD_POKEMON_STATS_H

#include "global.h"

#define VARIANT_FLAG_NONE       0
#define VARIANT_FLAG_STATS      1
#define VARIANT_FLAG_TYPE       2
#define VARIANT_FLAG_ABILITY    4
#define VARIANT_FLAG_LEARNSET   8

#define MAINTAIN_BST            0xFF

struct VariantStats
{
    u8 variantFlags;
    u8 hpMod;
    u8 attackMod;
    u8 defenseMod;
    u8 speedMod;
    u8 spAttackMod;
    u8 spDefenseMod;
    u8 type1;
    u8 type2;
    u8 ability;
    u16 learnset[4];
};

extern const struct VariantStats gVariantStats[][8];

const u8 GetBaseHP(u16 species);
const u8 GetBaseAttack(u16 species);
const u8 GetBaseDefense(u16 species);
const u8 GetBaseSpeed(u16 species);
const u8 GetBaseSpAttack(u16 species);
const u8 GetBaseSpDefense(u16 species);

const u8 GetVariantHP(u16 species, u16 variant);
const u8 GetVariantAttack(u16 species, u16 variant);
const u8 GetVariantDefense(u16 species, u16 variant);
const u8 GetVariantSpeed(u16 species, u16 variant);
const u8 GetVariantSpAttack(u16 species, u16 variant);
const u8 GetVariantSpDefense(u16 species, u16 variant);
const u8 GetVariantType1(u16 species, u16 variant);
const u8 GetVariantType2(u16 species, u16 variant);
const u8 GetVariantLearnset(u16 species, u16 variant, u16 *moves);

#endif // GUARD_POKEMON_STATS_H

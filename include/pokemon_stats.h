#ifndef GUARD_POKEMON_STATS_H
#define GUARD_POKEMON_STATS_H

#include "global.h"

#define VARIANT_FLAG_STATS      1
#define VARIANT_FLAG_TYPE       2
#define VARIANT_FLAG_ABILITY    4
#define VARIANT_FLAG_LEARNSET   8

struct VariantStats
{
    u16 variantFlags;
    u8 hp;
    u8 attack;
    u8 defense;
    u8 speed;
    u8 spAttack;
    u8 spDefense;
    u8 type1;
    u8 type2;
    u8 ability;
    u16 learnset[4];
};

extern const struct VariantStats gVariantStats[][MAX_VARIANTS_PER_SPECIES];

u8 GetBaseHP(u16 species, u16 variant);
u8 GetBaseAttack(u16 species, u16 variant);
u8 GetBaseDefense(u16 species, u16 variant);
u8 GetBaseSpeed(u16 species, u16 variant);
u8 GetBaseSpAttack(u16 species, u16 variant);
u8 GetBaseSpDefense(u16 species, u16 variant);
u8 GetType1(u16 species, u16 variant);
u8 GetType2(u16 species, u16 variant);
//u8 GetAbility1(u16 species);
//u8 GetAbility2(u16 species);
u8 GetLevelUpLearnset(u16 species, u16 variant, u16 *moves);

#endif // GUARD_POKEMON_STATS_H

#ifndef GUARD_POKEMON_STATS_H
#define GUARD_POKEMON_STATS_H

#include "global.h"

#define VARIANT_FLAG_STATS      1
#define VARIANT_FLAG_TYPE       2
#define VARIANT_FLAG_ABILITY    4
#define VARIANT_FLAG_LEARNSET   8

struct VariantStats
{
    u8 variantFlags;
    u8 baseHP;
    u8 baseAttack;
    u8 baseDefense;
    u8 baseSpeed;
    u8 baseSpAttack;
    u8 baseSpDefense;
    u8 type1;
    u8 type2;
    u8 ability;
    u16 learnset[3];
};

extern const struct VariantStats gVariantStats[][MAX_VARIANTS_PER_SPECIES];

//u8 GetBaseHP(u16 species);
//u8 GetBaseAttack(u16 species);
//u8 GetBaseDefense(u16 species);
//u8 GetBaseSpeed(u16 species);
//u8 GetBaseSpAttack(u16 species);
//u8 GetBaseSpDefense(u16 species);
u8 GetType1(u16 species, u32 personality);
u8 GetType2(u16 species, u32 personality);
//u8 GetAbility1(u16 species);
//u8 GetAbility2(u16 species);

#endif // GUARD_POKEMON_STATS_H

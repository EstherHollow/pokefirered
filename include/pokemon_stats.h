#ifndef GUARD_POKEMON_STATS_H
#define GUARD_POKEMON_STATS_H

#include "global.h"

#define VARIANT_FLAG_NONE       0
#define VARIANT_FLAG_STATS      (1 << 0)
#define VARIANT_FLAG_TYPE       (1 << 1)
#define VARIANT_FLAG_ABILITY    (1 << 2)
#define VARIANT_FLAG_LEARNSET   (1 << 3)
#define VARIANT_FLAG_EVOLUTION  (1 << 4)

#define UNCHANGED       0
#define MAINTAIN_BST    0xFF

struct VariantStats
{
    u8 flags;
    u8 hp;
    u8 attack;
    u8 defense;
    u8 speed;
    u8 spAttack;
    u8 spDefense;
    u8 type1;
    u8 type2;
    u8 ability;
    u16 learnset[8];
    u16 unlearnset[4];
    struct Evolution evolutions[EVOS_PER_MON];
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
const struct Evolution *GetVariantEvolutions(u16 species, u16 variants);

#endif // GUARD_POKEMON_STATS_H

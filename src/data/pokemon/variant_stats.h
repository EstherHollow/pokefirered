#define LEVEL_UP_MOVE(lvl, move) ((lvl << 9) | move)
#define LEVEL_UP_END 0xFFFF

#define VARIANT_ALTER_STATS(h, a, d, s, sa, sd) {   \
        .variantFlags = VARIANT_FLAG_STATS,         \
        .hpMod = h,                                 \
        .attackMod = a,                             \
        .defenseMod = d,                            \
        .speedMod = s,                              \
        .spAttackMod = sa,                          \
        .spDefenseMod = sd,                         \
}

#define VARIANT_ALTER_TYPE(t1, t2) {                \
        .variantFlags = VARIANT_FLAG_TYPE,          \
        .type1 = t1,                                \
        .type2 = t2,                                \
}

#define VARIANT_ALTER_LEARNSET(lvl, move) {         \
        .variantFlags = VARIANT_FLAG_LEARNSET,      \
        .learnset = {                               \
                LEVEL_UP_MOVE(lvl, move),           \
                LEVEL_UP_END,                       \
        },                                          \
}

const struct VariantStats gVariantStats[][8] =
{
        [SPECIES_NONE] = {0},
        [SPECIES_BULBASAUR] = {
                [VARIANT_BULBASAUR_RED] = {
                        .variantFlags = VARIANT_FLAG_STATS | VARIANT_FLAG_TYPE,
                        .hpMod = 0,
                        .attackMod = MAINTAIN_BST,
                        .defenseMod = MAINTAIN_BST,
                        .speedMod = 0,
                        .spAttackMod = 200,
                        .spDefenseMod = 0,
                        .type1 = TYPE_GRASS,
                        .type2 = TYPE_FIRE,
                },
                [VARIANT_BULBASAUR_GREEN] = {
                        .variantFlags = VARIANT_FLAG_STATS | VARIANT_FLAG_TYPE,
                        .hpMod = 0,
                        .attackMod = MAINTAIN_BST,
                        .defenseMod = 0,
                        .speedMod = MAINTAIN_BST,
                        .spAttackMod = 150,
                        .spDefenseMod = 150,
                        .type1 = TYPE_GRASS,
                        .type2 = TYPE_GRASS,
                },
                [VARIANT_BULBASAUR_BLUE] = {
                        .variantFlags = VARIANT_FLAG_STATS | VARIANT_FLAG_TYPE,
                        .hpMod = 150,
                        .attackMod = 0,
                        .defenseMod = 150,
                        .speedMod = 0,
                        .spAttackMod = 0,
                        .spDefenseMod = MAINTAIN_BST,
                        .type1 = TYPE_GRASS,
                        .type2 = TYPE_WATER,
                },
                [VARIANT_BULBASAUR_PINK] = {
                        .variantFlags = VARIANT_FLAG_NONE,
                },
        },
};

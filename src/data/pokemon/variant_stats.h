#define LEVEL_UP_MOVE(lvl, move) ((lvl << 9) | move)
#define LEVEL_UP_END 0xFFFF

#define VARIANT_ALTER_STATS(h, a, d, s, sa, sd) {   \
        .variantFlags = VARIANT_FLAG_STATS,         \
        .hp = h,                                    \
        .attack = a,                                \
        .defense = d,                               \
        .speed = s,                                 \
        .spAttack = sa,                             \
        .spDefense = sd,                            \
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
                [1] = VARIANT_ALTER_TYPE(TYPE_GRASS, TYPE_FIRE),
                [2] = VARIANT_ALTER_TYPE(TYPE_GRASS, TYPE_GRASS),
                [3] = VARIANT_ALTER_TYPE(TYPE_GRASS, TYPE_POISON),
                [4] = VARIANT_ALTER_TYPE(TYPE_GRASS, TYPE_WATER),
        },
        [SPECIES_RATTATA] = {
                [0] = VARIANT_ALTER_LEARNSET(1, MOVE_CONFUSION),
                [1] = VARIANT_ALTER_LEARNSET(1, MOVE_EMBER),
                [2] = VARIANT_ALTER_LEARNSET(1, MOVE_BUBBLE),
        },
};

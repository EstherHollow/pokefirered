#define VARIANT_ALTER_TYPE(t1, t2) {    \
    .variantFlags = VARIANT_FLAG_TYPE,  \
    .type1 = t1,                        \
    .type2 = t2,                        \
}

const struct VariantStats gVariantStats[][8] =
{
    [SPECIES_NONE] = {0},
    [SPECIES_BULBASAUR] = {
        [2] = VARIANT_ALTER_TYPE(TYPE_GRASS, TYPE_FIRE),
        [3] = VARIANT_ALTER_TYPE(TYPE_GRASS, TYPE_GRASS),
        [4] = VARIANT_ALTER_TYPE(TYPE_GRASS, TYPE_POISON),
        [5] = VARIANT_ALTER_TYPE(TYPE_GRASS, TYPE_WATER),
    },
};

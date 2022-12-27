// For potential future use

#define NUM_VARIANT_INDEX(species) [SPECIES_##species] = NUM_VARIANT_##species

static const u16 sPokemonNumVariants[NUM_SPECIES] = {
        NUM_VARIANT_INDEX(BULBASAUR),
        NUM_VARIANT_INDEX(IVYSAUR),
        NUM_VARIANT_INDEX(VENUSAUR),
};

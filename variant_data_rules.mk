# Variant JSON Data

PYTHON := python3
VARIANTGEN_SOURCE := tools/variantgen/variantgen.py
VARIANTGEN := $(PYTHON) $(VARIANTGEN_SOURCE)

VARIANT_FILES := include/constants/variants.h src/data/pokemon/variant_tables.h src/data/graphics/pokemon.h
VARIANT_DATA := data/variants.json

$(VARIANT_FILES): $(VARIANTGEN_SOURCE) $(VARIANT_DATA) variantgen ;

variantgen:
	$(VARIANTGEN)

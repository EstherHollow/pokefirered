from json import load
from pathlib import Path

warning_lines = [
    "////////////////////////////////////////////////////////////////////////",
    "// DO NOT MODIFY! This file is auto-generated from data/variants.json //",
    "////////////////////////////////////////////////////////////////////////",
]
tab = 4 * " "

def main():
    project_name = "pokefirered"
    project_directory = Path(__file__).resolve()
    while (project_directory.name != project_name):
        project_directory = project_directory.parent
    
    json_path = project_directory.joinpath("data", "variants.json")
    with open(json_path, "r") as json_file:
        json_data = load(json_file)
    
    constants_path = project_directory.joinpath("include", "constants", "variants.h")
    with open(constants_path, "w") as constants_file:
        write_variant_constants(constants_file, json_data)
    
    tables_path = project_directory.joinpath("src", "data", "pokemon", "variant_tables.h")
    with open(tables_path, "w") as tables_file:
        write_variant_tables(tables_file, json_data)

def write_variant_constants(constants_file, json_data):
    def write(line):
        constants_file.write(f"{line}\n")
    
    write("#ifndef GUARD_CONSTANTS_VARIANTS_H")
    write("#define GUARD_CONSTANTS_VARIANTS_H")
    write("")
    for warning_line in warning_lines:
        write(warning_line)
    write("")
    write("#define VARIANT_DEFAULT 0")
    write("#define VARIANT_RANDOM  8")
    write("")
    write("#define SUBPALETTE_ANY 0")
    write("")
    for species in json_data["variant_data"]:
        species_name = species["species"]
        palettes = species["palettes"]
        for i, palette_name in enumerate(palettes):
            write(f"#define PALETTE_{species_name.upper()}_{palette_name.upper()} {i}")
        write(f"#define NUM_PALETTES_{species_name.upper()} {len(palettes)}")
        write("")
        subpalettes = species["subpalettes"]
        for i, subpalette in enumerate(subpalettes):
            subpalette_name = subpalette["name"]
            write(f"#define SUBPALETTE_{species_name.upper()}_{subpalette_name.upper()} {i}")
        write("")
    write("#endif // GUARD_CONSTANTS_VARIANTS_H")

def write_variant_tables(tables_file, json_data):
    def write(line):
        tables_file.write(f"{line}\n")
    
    for warning_line in warning_lines:
        write(warning_line)
    write("")
    variant_counts_label = json_data["variant_counts_label"]
    write(f"static const u16 {variant_counts_label}[NUM_SPECIES] = {{")
    for species in json_data["variant_data"]:
        species_name = species["species"]
        write(f"{tab}[SPECIES_{species_name.upper()}] = NUM_PALETTES_{species_name.upper()},")
    write("};")
    write("")
    variant_parts_label = json_data["variant_parts_label"]
    write(f"static const u8 {variant_parts_label}[NUM_SPECIES][16] = {{")
    for species in json_data["variant_data"]:
        species_name = species["species"]
        write(f"{tab}[SPECIES_{species_name.upper()}] = {{")
        subpalettes = species["subpalettes"]
        for i in range(16):
            subpalette_label = "ANY"
            for subpalette in subpalettes:
                for index in subpalette["indexes"]:
                    if i == index:
                        subpalette_label = f"{species_name.upper()}_{subpalette['name']}"
            write(f"{tab}{tab}[{i}] = SUBPALETTE_{subpalette_label.upper()},")
        write(f"{tab}}},")
    write("};")

if __name__ == "__main__":
    main()
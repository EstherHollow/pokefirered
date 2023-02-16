from json import load
from pathlib import Path
from string import ascii_lowercase

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
    
    header_path = project_directory.joinpath("src", "data", "graphics", "pokemon.h")
    with open(header_path, "w") as header_file:
        write_pokemon_graphics_header(header_file, json_data)

def write_variant_constants(file, json_data):
    def write(line):
        file.write(f"{line}\n")
    
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

def write_variant_tables(file, json_data):
    def write(line):
        file.write(f"{line}\n")
    
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

def write_pokemon_graphics_header(file, json_data):
    def write(line):
        file.write(f"{line}\n")
    
    for warning_line in warning_lines:
        write(warning_line)
    write("")
    variant_data = json_data["variant_data"]
    for species_index, species_name in get_species_list():
        if species_name == "Deoxys": continue
        
        species_label = to_label(species_name)
        species_variable = to_variable(species_name)
        species_constant = to_constant(species_name)
        species_directory = to_directory(species_index, species_name)
        
        species_data = next((_ for _ in variant_data if _["species"] == species_label), {})
        
        try:
            sprites = species_data["sprites"]
            for i, sprite_name in enumerate(sprites):
                write(f"const u32 gMonFrontPic_{species_variable}_{i}[] = INCBIN_U32(\"graphics/pokemon/{species_directory}/front_{sprite_name}.4bpp.lz\");")
            for i in range(len(sprites), 4):
                write(f"const u32 gMonFrontPic_{species_variable}_{i}[] = {{0}};")
            for i, sprite_name in enumerate(sprites):
                write(f"const u32 gMonBackPic_{species_variable}_{i}[] = INCBIN_U32(\"graphics/pokemon/{species_directory}/back_{sprite_name}.4bpp.lz\");")
            for i in range(len(sprites), 4):
                write(f"const u32 gMonBackPic_{species_variable}_{i}[] = {{0}};")
        except KeyError:
            write(f"const u32 gMonFrontPic_{species_variable}_0[] = INCBIN_U32(\"graphics/pokemon/{species_directory}/front.4bpp.lz\");")
            write(f"const u32 gMonFrontPic_{species_variable}_1[] = {{0}};")
            write(f"const u32 gMonFrontPic_{species_variable}_2[] = {{0}};")
            write(f"const u32 gMonFrontPic_{species_variable}_3[] = {{0}};")
            write(f"const u32 gMonBackPic_{species_variable}_0[] = INCBIN_U32(\"graphics/pokemon/{species_directory}/back.4bpp.lz\");")
            write(f"const u32 gMonBackPic_{species_variable}_1[] = {{0}};")
            write(f"const u32 gMonBackPic_{species_variable}_2[] = {{0}};")
            write(f"const u32 gMonBackPic_{species_variable}_3[] = {{0}};")
        
        write(f"const u8 gMonIcon_{species_variable}[] = INCBIN_U8(\"graphics/pokemon/{species_directory}/icon.4bpp\");")
        write(f"const u8 gMonFootprint_{species_variable}[] = INCBIN_U8(\"graphics/pokemon/{species_directory}/footprint.1bpp\");")
        write(f"const u16 gMonPalettes_{species_variable}[8][{64 if species_name == 'Castform' else 16}] = {{")
        
        try:
            palettes = species_data["palettes"]
            for palette_name in palettes:
                write(f"{tab}INCBIN_U16(\"graphics/pokemon/{species_directory}/{palette_name}.gbapal\"),")
        except KeyError:
            write(f"{tab}INCBIN_U16(\"graphics/pokemon/{species_directory}/normal.gbapal\"),")
        
        write(f"}};")
        write("")
    
    write("#ifdef FIRERED")
    write("const u32 gMonFrontPic_Deoxys_0[] = INCBIN_U32(\"graphics/pokemon/386_deoxys/front.4bpp.lz\");")
    write("const u32 gMonFrontPic_Deoxys_1[] = {0};")
    write("const u32 gMonFrontPic_Deoxys_2[] = {0};")
    write("const u32 gMonFrontPic_Deoxys_3[] = {0};")
    write("const u32 gMonBackPic_Deoxys_0[] = INCBIN_U32(\"graphics/pokemon/386_deoxys/back.4bpp.lz\");")
    write("const u32 gMonBackPic_Deoxys_1[] = {0};")
    write("const u32 gMonBackPic_Deoxys_2[] = {0};")
    write("const u32 gMonBackPic_Deoxys_3[] = {0};")
    write("const u8 gMonIcon_Deoxys[] = INCBIN_U8(\"graphics/pokemon/386_deoxys/icon.4bpp\", \"graphics/pokemon/386_deoxys/icon_attack.4bpp\");")
    write("const u8 gMonFootprint_Deoxys[] = INCBIN_U8(\"graphics/pokemon/386_deoxys/footprint.1bpp\");")
    write("const u16 gMonPalettes_Deoxys[8][16] = {")
    write(f"{tab}INCBIN_U16(\"graphics/pokemon/386_deoxys/normal.gbapal\"),")
    write("};")
    write("#endif")
    write("")
    write("#ifdef LEAFGREEN")
    write("const u32 gMonFrontPic_Deoxys_0[] = INCBIN_U32(\"graphics/pokemon/386_deoxys/front_def.4bpp.lz\");")
    write("const u32 gMonFrontPic_Deoxys_1[] = {0};")
    write("const u32 gMonFrontPic_Deoxys_2[] = {0};")
    write("const u32 gMonFrontPic_Deoxys_3[] = {0};")
    write("const u32 gMonBackPic_Deoxys_0[] = INCBIN_U32(\"graphics/pokemon/386_deoxys/back_def.4bpp.lz\");")
    write("const u32 gMonBackPic_Deoxys_1[] = {0};")
    write("const u32 gMonBackPic_Deoxys_2[] = {0};")
    write("const u32 gMonBackPic_Deoxys_3[] = {0};")
    write("const u8 gMonIcon_Deoxys[] = INCBIN_U8(\"graphics/pokemon/386_deoxys/icon.4bpp\", \"graphics/pokemon/386_deoxys/icon_defense.4bpp\");")
    write("const u8 gMonFootprint_Deoxys[] = INCBIN_U8(\"graphics/pokemon/386_deoxys/footprint.1bpp\");")
    write("const u16 gMonPalettes_Deoxys[8][16] = {")
    write(f"{tab}INCBIN_U16(\"graphics/pokemon/386_deoxys/normal.gbapal\"),")
    write("};")
    write("#endif")
    write("")
    write("const u32 gMonFrontPic_Egg[] = INCBIN_U32(\"graphics/pokemon/egg/front.4bpp.lz\");")
    write("const u32 gMonPalette_Egg[] = INCBIN_U16(\"graphics/pokemon/egg/normal.gbapal\");")
    write("")
    write("const u32 gMonFrontPic_CircledQuestionMark[] = INCBIN_U32(\"graphics/pokemon/question_mark/circled/front.4bpp.lz\");")
    write("const u32 gMonBackPic_CircledQuestionMark[] = INCBIN_U32(\"graphics/pokemon/question_mark/circled/back.4bpp.lz\");")
    write("const u32 gMonPalette_CircledQuestionMark[] = INCBIN_U32(\"graphics/pokemon/question_mark/circled/normal.gbapal.lz\");")
    write("const u32 gMonShinyPalette_CircledQuestionMark[] = INCBIN_U32(\"graphics/pokemon/question_mark/circled/shiny.gbapal.lz\");")
    write("")
    write("const u32 gMonFrontPic_DoubleQuestionMark[] = INCBIN_U32(\"graphics/pokemon/question_mark/double/front.4bpp.lz\");")
    write("const u32 gMonPalette_DoubleQuestionMark[] = INCBIN_U16(\"graphics/pokemon/question_mark/double/normal.gbapal\");")
    write("const u32 gMonBackPic_DoubleQuestionMark[] = INCBIN_U32(\"graphics/pokemon/question_mark/double/back.4bpp.lz\");")
    write("const u32 gMonShinyPalette_DoubleQuestionMark[] = INCBIN_U16(\"graphics/pokemon/question_mark/double/shiny.gbapal\");")
    write("")
    
    for lower in ascii_lowercase:
        if lower != 'a':
            upper = str(lower).upper()
            write(f"const u32 gMonFrontPic_Unown{upper}_0[] = INCBIN_U32(\"graphics/pokemon/201_unown/{lower}/front.4bpp.lz\");")
            write(f"const u32 gMonFrontPic_Unown{upper}_1[] = {{0}};")
            write(f"const u32 gMonFrontPic_Unown{upper}_2[] = {{0}};")
            write(f"const u32 gMonFrontPic_Unown{upper}_3[] = {{0}};")
            write(f"const u32 gMonBackPic_Unown{upper}_0[] = INCBIN_U32(\"graphics/pokemon/201_unown/{lower}/back.4bpp.lz\");")
            write(f"const u32 gMonBackPic_Unown{upper}_1[] = {{0}};")
            write(f"const u32 gMonBackPic_Unown{upper}_2[] = {{0}};")
            write(f"const u32 gMonBackPic_Unown{upper}_3[] = {{0}};")
            write(f"const u8 gMonIcon_Unown{upper}[] = INCBIN_U8(\"graphics/pokemon/201_unown/{lower}/icon.4bpp\");")
            write("")
    
    write("const u32 gMonFrontPic_UnownExclamationMark_0[] = INCBIN_U32(\"graphics/pokemon/201_unown/exclamation_mark/front.4bpp.lz\");")
    write("const u32 gMonFrontPic_UnownExclamationMark_1[] = {0};")
    write("const u32 gMonFrontPic_UnownExclamationMark_2[] = {0};")
    write("const u32 gMonFrontPic_UnownExclamationMark_3[] = {0};")
    write("const u32 gMonBackPic_UnownExclamationMark_0[] = INCBIN_U32(\"graphics/pokemon/201_unown/exclamation_mark/back.4bpp.lz\");")
    write("const u32 gMonBackPic_UnownExclamationMark_1[] = {0};")
    write("const u32 gMonBackPic_UnownExclamationMark_2[] = {0};")
    write("const u32 gMonBackPic_UnownExclamationMark_3[] = {0};")
    write("const u8 gMonIcon_UnownExclamationMark[] = INCBIN_U8(\"graphics/pokemon/201_unown/exclamation_mark/icon.4bpp\");")
    write("")
    write("const u32 gMonFrontPic_UnownQuestionMark_0[] = INCBIN_U32(\"graphics/pokemon/201_unown/question_mark/front.4bpp.lz\");")
    write("const u32 gMonFrontPic_UnownQuestionMark_1[] = {0};")
    write("const u32 gMonFrontPic_UnownQuestionMark_2[] = {0};")
    write("const u32 gMonFrontPic_UnownQuestionMark_3[] = {0};")
    write("const u32 gMonBackPic_UnownQuestionMark_0[] = INCBIN_U32(\"graphics/pokemon/201_unown/question_mark/back.4bpp.lz\");")
    write("const u32 gMonBackPic_UnownQuestionMark_1[] = {0};")
    write("const u32 gMonBackPic_UnownQuestionMark_2[] = {0};")
    write("const u32 gMonBackPic_UnownQuestionMark_3[] = {0};")
    write("const u8 gMonIcon_UnownQuestionMark[] = INCBIN_U8(\"graphics/pokemon/201_unown/question_mark/icon.4bpp\");")

def get_species_list():
    pokemon_path = Path(__file__).resolve().parent.joinpath("pokemon.txt")
    with open(pokemon_path, "r") as pokemon_file:
        index = 1
        for line in pokemon_file:
            yield index, line.strip()
            index = index + 1

def to_label(species_name):
    return species_name.lower()

def to_variable(species_name):
    if species_name == "Nidoran F": return "NidoranF"
    if species_name == "Nidoran M": return "NidoranM"
    if species_name == "Farfetch'd": return "Farfetchd"
    if species_name == "Mr. Mime": return "Mrmime"
    if species_name == "Unown": return "UnownA"
    if species_name == "Ho-Oh": return "HoOh"
    return species_name

def to_constant(species_name):
    if species_name == "Nidoran F": return "NIDORAN_F"
    if species_name == "Nidoran M": return "NIDORAN_M"
    if species_name == "Farfetch'd": return "FARFETCHD"
    if species_name == "Mr. Mime": return "MR_MIME"
    if species_name == "Unown": return "UNOWN"
    if species_name == "Ho-Oh": return "HO_OH"
    return species_name.upper()

def to_directory(species_index, species_name):
    species_directory_part = species_name.lower()
    if species_name == "Nidoran F": species_directory_part = "nidoran_f"
    if species_name == "Nidoran M": species_directory_part = "nidoran_m"
    if species_name == "Farfetch'd": species_directory_part = "farfetchd"
    if species_name == "Mr. Mime": species_directory_part = "mr_mime"
    if species_name == "Unown": species_directory_part = "unown/a"
    if species_name == "Ho-Oh": species_directory_part = "ho_oh"
    return f"{str(species_index).zfill(3)}_{species_directory_part}"

if __name__ == "__main__":
    main()
#ifndef GUARD_COLOR_H
#define GUARD_COLOR_H

#define GET_RED(color) (color & 0x001F)
#define GET_GREEN(color) ((color & 0x03E0) >> 5)
#define GET_BLUE(color) ((color & 0x7C00) >> 10)

#define TO_COLOR(red, green, blue) (red | (green << 5) | (blue << 10))

#define RGB_MAX 31
#define OKLAB_MAX 1000

#define FULL_ROTATION 1000
#define HALF_ROTATION (FULL_ROTATION / 2)
#define QUARTER_ROTATION (FULL_ROTATION / 4)
#define EIGTH_ROTATION (FULL_ROTATION / 8)

const void RGBToOklab(u16 color, s16* lightness, s16* a, s16* b);
const u16 OklabToRGB(s16 lightness, s16 a, s16 b);

const void CartesianToPolar(s16 x, s16 y, u16* radius, u16* theta);
const void PolarToCartesian(u16 radius, u16 theta, s16* x, s16* y);

const u16 RotateColor(u16 color, u16 rotation);

#endif //GUARD_COLOR_H

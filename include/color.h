#ifndef GUARD_COLOR_H
#define GUARD_COLOR_H

#define HUE_MAX 240
#define HUE_SLICE 40
#define RGB_MAX 0x1F
#define SIGN_MASK 0x80
#define MAGNITUDE_MASK 0x7F

void RgbToHsv(u8 red, u8 green, u8 blue, u8 *hue, u8 *sat, u8 *val);
void HsvToRgb(u8 hue, u8 sat, u8 val, u8 *red, u8 *green, u8 *blue);
const u16 ModifyHsv(const u16 color, u8 hueShift, u8 satShift, u8 valShift);

#endif //GUARD_COLOR_H

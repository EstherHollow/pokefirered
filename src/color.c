#include "global.h"
#include "color.h"

// https://www.rapidtables.com/convert/color/rgb-to-hsv.html
void RgbToHsv(u8 red, u8 green, u8 blue, u8 *hue, u8 *sat, u8 *val) {
    if (red > green) {
        if (red > blue) {
            if (green > blue) { // Red > Green > Blue
                *hue = (green - blue) * HUE_SLICE / (red - blue);
                *sat = (red - blue) * RGB_MAX / red;
            }
            else { // Red > Blue > Green
                *hue = (HUE_MAX - 1) - ((blue - green) * HUE_SLICE / (red - green));
                *sat = (red - green) * RGB_MAX / red;
            }
            *val = red; // Red is highest
        }
        else { // Blue > Red > Green
            *hue = (red - green) * HUE_SLICE / (blue - green) + (HUE_SLICE * 4);
            *sat = (blue - green) * RGB_MAX / blue;
            *val = blue;
        }
    }
    else {
        if (green > blue) {
            if (red > blue) { // Green > Red > Blue
                *hue = (HUE_SLICE * 2) - ((red - blue) * HUE_SLICE / (green - blue));
                *sat = (green - blue) * RGB_MAX / green;
            }
            else { // Blue > Green > Red
                *hue = (blue - red) * HUE_SLICE / (green - red) + (HUE_SLICE * 2);
                *sat = (green - red) * RGB_MAX / green;
            }
            *val = green; // Green is highest
        }
        else { // Blue > Green > Red
            *hue = (HUE_SLICE * 4) - ((green - red) * HUE_SLICE / (blue - red));
            *sat = (blue - red) * RGB_MAX / blue;
            *val = blue;
        }
    }
}

void HsvToRgb(u8 hue, u8 sat, u8 val, u8 *red, u8 *green, u8 *blue) {
    u8 c = (sat * val) / RGB_MAX;
    u8 x = ((hue / HUE_SLICE) % 2 == 0) ? 0 : c;
    u8 m;

    switch (hue / HUE_SLICE) {
    case 0:
        *red = c;
        *green = x;
        *blue = 0;
        break;
    case 1:
        *red = x;
        *green = c;
        *blue = 0;
        break;
    case 2:
        *red = 0;
        *green = c;
        *blue = x;
        break;
    case 3:
        *red = 0;
        *green = x;
        *blue = c;
        break;
    case 4:
        *red = x;
        *green = 0;
        *blue = c;
        break;
    case 5:
        *red = c;
        *green = 0;
        *blue = x;
        break;
    }

    if (val > sat) {
        m = val - sat;

        if (*red + m < RGB_MAX) *red += m;
        else *red = RGB_MAX;

        if (*green + m < RGB_MAX) *green += m;
        else *green = RGB_MAX;

        if (*blue + m < RGB_MAX) *blue += m;
        else *blue = RGB_MAX;
    }
    else {
        m = sat - val;

        if (*red > m) *red -= m;
        else *red = 0;

        if (*green > m) *green -= m;
        else *green = 0;

        if (*blue > m) *blue -= m;
        else *blue = 0;
    }
}

const u16 ModifyHsv(const u16 color, u8 hueShift, u8 satShift, u8 valShift) {
    u8 red = (color & 0x001F);
    u8 green = (color & 0x03E0) >> 5;
    u8 blue = (color & 0x7C00) >> 10;

    u8 hue, sat, val;
    RgbToHsv(red, green, blue, &hue, &sat, &val);

    hue = (hue + hueShift) % HUE_MAX;

    if ((satShift & SIGN_MASK) > 0) {
        satShift = satShift & MAGNITUDE_MASK;
        if (sat > satShift) sat -= satShift;
        else sat = 0;
    }
    else {
        if (sat + satShift < RGB_MAX) sat += satShift;
        else sat = RGB_MAX;
    }

    if ((valShift & SIGN_MASK) > 0) {
        valShift = valShift & MAGNITUDE_MASK;
        if (val > valShift) val -= valShift;
        else val = 0;
    }
    else {
        if (val + valShift < RGB_MAX) val += valShift;
        else val = RGB_MAX;
    }

    HsvToRgb(hue, sat, val, &red, &green, &blue);

    return red | (green << 5) | (blue << 10);
}

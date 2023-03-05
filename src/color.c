#include "global.h"

#define HUE_MAX 90
#define HUE_SLICE 15

// https://www.rapidtables.com/convert/color/rgb-to-hsv.html
void RgbToHsv(u8 r, u8 g, u8 b, u8 *h, u8 *s, u8 *v) {
    u8 rgbMax = max(max(r, g), b);
    u8 rgbMin = min(min(r, g), b);
    u8 rgbDiff = rgbMax - rgbMin;

    if (r > g) {
        if (r > b) {
            if (g > b) { // R > G > B
                *h = (g - b) * HUE_SLICE / (r - b);
                *s = (r - b) * 0x20 / r;
            }
            else { // R > B > G
                *h = HUE_MAX - ((b - g) * HUE_SLICE / (r - g));
                *s = (r - g) * 0x20 / r;
            }
            *v = r; // R is highest
        }
        else { // B > R > G
            *h = (r - g) * HUE_SLICE / (b - g) + (HUE_SLICE * 4);
            *s = (b - g) * 0x20 / b;
            *v = b;
        }
    }
    else {
        if (g > b) {
            if (r > b) { // G > R > B
                *h = (HUE_SLICE * 2) - ((r - b) * HUE_SLICE / (g - b));
                *s = (g - b) * 0x20 / g;
            }
            else { // B > G > R
                *h = (b - r) * HUE_SLICE / (g - r) + (HUE_SLICE * 2);
                *s = (g - r) * 0x20 / g;
            }
            *v = g; // G is highest
        }
        else { // B > G > R
            *h = (HUE_SLICE * 4) - ((g - r) * HUE_SLICE / (b - r));
            *s = (b - r) * 0x20 / b;
            *v = b;
        }
    }
}

#include "global.h"
#include "oklab.h"
#include "data/graphics/math.h"
#include "data/graphics/oklab.h"

#define CLAMP(num, min, max) (num < min ? min : num > max ? max : num)
#define BLEND(min, max, factor) (((max - min + 1) * factor / 100) + min)
#define ATAN2(x, y) (x <= y ? gAtanLookup[x * OKLAB_MAX / y] : QUARTER_ROTATION - gAtanLookup[y * OKLAB_MAX / x])

const void RGBToOklab(u16 color, s16* lightness, s16* a, s16* b) {
    s16 red, green, blue, l, m, s;

    red   = GET_RED(color)   * OKLAB_MAX / RGB_MAX;
    green = GET_GREEN(color) * OKLAB_MAX / RGB_MAX;
    blue  = GET_BLUE(color)  * OKLAB_MAX / RGB_MAX;

    red   = gLinearLookup[red];
    green = gLinearLookup[green];
    blue  = gLinearLookup[blue];

    l = ((red * gRGBToLMS[0]) + (green * gRGBToLMS[1]) + (blue * gRGBToLMS[2])) / 1000;
    m = ((red * gRGBToLMS[3]) + (green * gRGBToLMS[4]) + (blue * gRGBToLMS[5])) / 1000;
    s = ((red * gRGBToLMS[6]) + (green * gRGBToLMS[7]) + (blue * gRGBToLMS[8])) / 1000;

    l = CLAMP(l, 0, OKLAB_MAX);
    m = CLAMP(m, 0, OKLAB_MAX);
    s = CLAMP(s, 0, OKLAB_MAX);

    l = gCbrtLookup[l];
    m = gCbrtLookup[m];
    s = gCbrtLookup[s];

    *lightness = ((l * gLMSToOklab[0]) + (m * gLMSToOklab[1]) + (s * gLMSToOklab[2])) / 1000;
    *a         = ((l * gLMSToOklab[3]) + (m * gLMSToOklab[4]) + (s * gLMSToOklab[5])) / 1000;
    *b         = ((l * gLMSToOklab[6]) + (m * gLMSToOklab[7]) + (s * gLMSToOklab[8])) / 1000;

    *lightness = CLAMP(*lightness,          0, OKLAB_MAX);
    *a         = CLAMP(*a        , -OKLAB_MAX, OKLAB_MAX);
    *b         = CLAMP(*b        , -OKLAB_MAX, OKLAB_MAX);
}

const u16 OklabToRGB(s16 lightness, s16 a, s16 b) {
    s16 l, m, s, red, green, blue;

    l = ((lightness * gOklabToLMS[0]) + (a * gOklabToLMS[1]) + (b * gOklabToLMS[2])) / 1000;
    m = ((lightness * gOklabToLMS[3]) + (a * gOklabToLMS[4]) + (b * gOklabToLMS[5])) / 1000;
    s = ((lightness * gOklabToLMS[6]) + (a * gOklabToLMS[7]) + (b * gOklabToLMS[8])) / 1000;

    l = CLAMP(l, 0, OKLAB_MAX);
    m = CLAMP(m, 0, OKLAB_MAX);
    s = CLAMP(s, 0, OKLAB_MAX);

    l = gCubeLookup[l];
    m = gCubeLookup[m];
    s = gCubeLookup[s];

    red   = ((l * gLMSToRGB[0]) + (m * gLMSToRGB[1]) + (s * gLMSToRGB[2])) / 1000;
    green = ((l * gLMSToRGB[3]) + (m * gLMSToRGB[4]) + (s * gLMSToRGB[5])) / 1000;
    blue  = ((l * gLMSToRGB[6]) + (m * gLMSToRGB[7]) + (s * gLMSToRGB[8])) / 1000;

    red   = CLAMP(red  , 0, OKLAB_MAX);
    green = CLAMP(green, 0, OKLAB_MAX);
    blue  = CLAMP(blue , 0, OKLAB_MAX);

    red   = gLinearInverseLookup[red]   * RGB_MAX / OKLAB_MAX;
    green = gLinearInverseLookup[green] * RGB_MAX / OKLAB_MAX;
    blue  = gLinearInverseLookup[blue]  * RGB_MAX / OKLAB_MAX;

    return TO_COLOR(red, green, blue);
}

const u16 ApplyNormal(u16 input, u8 iterations) {
    while (iterations > 0) {
        input = gNormalLookup[input];
        iterations--;
    }

    return input;
}

const void CartesianToPolar(s16 x, s16 y, u16* radius, u16* theta) {
    u16 temp;

    *radius = gSqrtLookup[gSquareLookup[x >= 0 ? x : -x] + gSquareLookup[y >= 0 ? y : -y]];

    if (x > 0) {
        if (y > 0) {
            *theta = ATAN2(x, y);
        }
        else if (y < 0) {
            temp = x;
            x = -y;
            y = temp;
            *theta = ATAN2(x, y) + QUARTER_ROTATION;
        }
        else /*y == 0*/ {
            *theta = QUARTER_ROTATION;
        }
    }
    else if (x < 0) {
        if (y > 0) {
            temp = x;
            x = y;
            y = -temp;
            *theta = ATAN2(x, y) + (QUARTER_ROTATION * 3);
        }
        else if (y < 0) {
            x = -x;
            y = -y;
            *theta = ATAN2(x, y) + HALF_ROTATION;
        }
        else /*y == 0*/ {
            *theta = QUARTER_ROTATION * 3;
        }
    }
    else /*x == 0*/ {
        *theta = y >= 0 ? 0 : HALF_ROTATION;
    }
}

const void PolarToCartesian(u16 radius, u16 theta, s16* x, s16* y) {
    if (theta <= QUARTER_ROTATION) {
        *x = gSinLookup[theta] * radius / OKLAB_MAX;
        *y = gCosLookup[theta] * radius / OKLAB_MAX;
    }
    else if (theta <= HALF_ROTATION) {
        theta -= QUARTER_ROTATION;
        *x =  gCosLookup[theta] * radius / OKLAB_MAX;
        *y = -gSinLookup[theta] * radius / OKLAB_MAX;
    }
    else if (theta <= QUARTER_ROTATION * 3) {
        theta -= HALF_ROTATION;
        *x = -gSinLookup[theta] * radius / OKLAB_MAX;
        *y = -gCosLookup[theta] * radius / OKLAB_MAX;
    }
    else {
        theta -= QUARTER_ROTATION * 3;
        *x = -gCosLookup[theta] * radius / OKLAB_MAX;
        *y =  gSinLookup[theta] * radius / OKLAB_MAX;
    }
}

const u16 RotateColor(u16 color, u16 rotation) {
    s16 lightness, a, b;
    u16 radius, theta;

    RGBToOklab(color, &lightness, &a, &b);
    CartesianToPolar(a, b, &radius, &theta);

    radius += 15; // More saturation.

    theta = ToBalancedSpectrum(theta);
    theta = (theta + rotation) % FULL_ROTATION;
    theta = ToLinearSpectrum(theta);

    PolarToCartesian(radius, theta, &a, &b);
    return OklabToRGB(lightness, a, b);
}

const u16 ToBalancedSpectrum(u16 theta) {
    u16 index = theta / SPECTRUM_SEGMENT_LENGTH;
    u16 factor = (theta % SPECTRUM_SEGMENT_LENGTH) * 100 / SPECTRUM_SEGMENT_LENGTH;

    if (index < SPECTRUM_SEGMENTS) {
        return BLEND(gSpectrumKeys[index], gSpectrumKeys[index + 1], factor);
    }
    else {
        return gSpectrumKeys[SPECTRUM_SEGMENTS];
    }
}

const u16 ToLinearSpectrum(u16 theta) {
    u8 i;
    u16 factor;
    u16 result = gSpectrumKeys[SPECTRUM_SEGMENTS]; // Default

    for (i = 0; i < SPECTRUM_SEGMENTS; i++) {
        if (theta >= gSpectrumKeys[i] && theta < gSpectrumKeys[i + 1]) {
            factor = (theta - gSpectrumKeys[i]) * SPECTRUM_SEGMENT_LENGTH / (gSpectrumKeys[i + 1] - gSpectrumKeys[i]);
            result = (i * SPECTRUM_SEGMENT_LENGTH) + factor;
            break;
        }
    }

    return result;
}

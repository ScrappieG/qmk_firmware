#pragma once
#include "quantum.h"

/*
 * LAYOUT signature lists keys in visual order, then expands to the 12x7 matrix:
 * Rows 0..5  → left half
 * Rows 6..11 → right half
 * Use KC_NO where a physical key doesn't exist.
 */

#define LAYOUT( \
    /* Row 0 (top) */ \
    L00, L01, L02, L03, L04, L05, L06,    R06, R05, R04, R03, R02, R01, R00, \
    /* Row 1 */ \
    L10, L11, L12, L13, L14, L15, L16,    R16, R15, R14, R13, R12, R11, R10, \
    /* Row 2 */ \
    L20, L21, L22, L23, L24, L25, L26,    R26, R25, R24, R23, R22, R21, R20, \
    /* Row 3 */ \
    L30, L31, L32, L33, L34, L35, L36,    R36, R35, R34, R33, R32, R31, R30, \
    /* Row 4 (thumb/outer) */ \
    L40, L41, L42, L43, L44, L45,               R45, R44, R43, R42, R41, R40, \
    /* Row 5 (thumb/outer) */ \
               L52, L53,              L56, R56,              R53, R52 \
) \
{ \
    /* Left rows 0..5 */ \
    { L00, L01, L02, L03, L04, L05, L06 }, \
    { L10, L11, L12, L13, L14, L15, L16 }, \
    { L20, L21, L22, L23, L24, L25, L26 }, \
    { L30, L31, L32, L33, L34, L35, L36 }, \
    { L40, L41, L42, L43, L44, L45, KC_NO }, \
    { KC_NO, KC_NO, L52, L53, KC_NO, KC_NO, L56 }, \
    /* Right rows 6..11 */ \
    { R00, R01, R02, R03, R04, R05, R06 }, \
    { R10, R11, R12, R13, R14, R15, R16 }, \
    { R20, R21, R22, R23, R24, R25, R26 }, \
    { R30, R31, R32, R33, R34, R35, R36 }, \
    { R40, R41, R42, R43, R44, R45, KC_NO }, \
    { KC_NO, KC_NO, R52, R53, KC_NO, KC_NO, R56 }, \
}

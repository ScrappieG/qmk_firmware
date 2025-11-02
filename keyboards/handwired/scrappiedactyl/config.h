#pragma once

/* Total matrix across both halves: 6 rows/half × 2 = 12 */
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

/* Rows (same on both halves):
   A0, 15, 14, 16, 10, 9  →  F7, B1, B3, B2, B6, B5 */
#define MATRIX_ROW_PINS { F7, B1, B3, B2, B6, B5 }

/* Columns differ by side:
   LEFT  (L→R): A2, A1, 4, 5, 6, 7, 8 → F5, F6, D4, C6, D7, E6, B4
   RIGHT (L→R): A2, 4, A1, 5, 6, 7, 8 → F5, D4, F6, C6, D7, E6, B4 */
#define MATRIX_COL_PINS       { F5, F6, D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS_RIGHT { F5, D4, F6, C6, D7, E6, B4 }

/* Diodes direction (as you’ve been using) */
#define DIODE_DIRECTION COL2ROW

/* Split transport over soft serial on Arduino pin 3 → D0 */
#define SPLIT_KEYBOARD
#define USE_SERIAL
#define SOFT_SERIAL_PIN D0
#define EE_HANDS              /* either half can be master */

/* Optional QoL */
#define DEBOUNCE 5
#define TAPPING_TERM 200
/* If you sometimes plug both halves into USB: */
// #define SPLIT_USB_DETECT

/* (Only relevant if building in the Vial fork) */
#define VIAL_KEYBOARD_UID {0xB2, 0x91, 0x89, 0xF8, 0x02, 0xB0, 0x3B, 0x49}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

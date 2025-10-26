#pragma once

#define MATRIX_ROWS 12
#define MATRIX_COLS 7

#define MATRIX_ROW_PINS { F7, B1, B5, B3, B2, B6 }
#define MATRIX_COL_PINS { B4, E6, D7, C6, D0, D4, D1 }
#define DIODE_DIRECTION COL2ROW

/* Split transport over soft serial */
#define SPLIT_KEYBOARD
#define USE_SERIAL
#define SOFT_SERIAL_PIN D1
#define EE_HANDS              // either half can be master

#define DEBOUNCE 5
#define TAPPING_TERM 200

#define VIAL_KEYBOARD_UID {0xB2, 0x91, 0x89, 0xF8, 0x02, 0xB0, 0x3B, 0x49}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }

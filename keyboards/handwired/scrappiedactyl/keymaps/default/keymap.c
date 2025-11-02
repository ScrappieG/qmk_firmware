#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* ───── Layer 0: BASE (test everything) ─────
 * Row 0: 14 keys (L00..L06, R06..R00)
 * Row 1: 14 keys
 * Row 2: 14 keys
 * Row 3: 14 keys
 * Row 4: 12 keys (L40..L45, R45..R40)    → thumbs/outer
 * Row 5:  6 keys (L52,L53, L56, R56, R53, R52)
 */
[_BASE] = LAYOUT(
    // Row 0
    KC_ESC,  KC_1,   KC_2,   KC_3,  KC_4,   KC_5,   KC_6,      KC_7,   KC_8,   KC_9,    KC_0,   KC_MINS, KC_EQL,  KC_BSPC,
    // Row 1
    KC_TAB,  KC_Q,   KC_W,   KC_E,  KC_R,   KC_T,   KC_Y,      KC_U,   KC_I,   KC_O,    KC_P,   KC_LBRC, KC_RBRC, KC_BSLS,
    // Row 2
    KC_CAPS, KC_A,   KC_S,   KC_D,  KC_F,   KC_G,   KC_H,      KC_J,   KC_K,   KC_L,    KC_SCLN,KC_QUOT, KC_ENT,  KC_NO,
    // Row 3
    KC_LSFT, KC_Z,   KC_X,   KC_C,  KC_V,   KC_B,   KC_N,      KC_M,   KC_COMM,KC_DOT,  KC_SLSH,KC_RSFT, MO(_FN), KC_NO,
    // Row 4 (thumb/outer cluster)
    KC_LCTL, KC_LGUI,KC_LALT, KC_SPC, KC_NO, KC_NO,                KC_NO, KC_NO, KC_SPC, KC_RALT, KC_RGUI, KC_RCTL,
    // Row 5 (bottom/thumbs)
             KC_NO,  KC_NO,  KC_SPC,                               KC_SPC, KC_NO, KC_NO
),

/* ───── Layer 1: FN (hold MO(_FN) from base) ─────
 * Function keys, and a bootloader key (far right of row 0).
 */
[_FN] = LAYOUT(
    KC_GRV,  KC_F1,  KC_F2,  KC_F3, KC_F4,  KC_F5,  KC_F6,     KC_F7,  KC_F8,  KC_F9,   KC_F10, KC_F11,  KC_F12,  QK_BOOT,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                _______, _______, _______, _______, _______, _______,
             _______, _______, _______,                                   _______, _______, _______
),

};

#include QMK_KEYBOARD_H

enum layers {
    _BASE,
    _LOWER,
    _RAISE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT(
    // Row 0 (12 keys: 6 left + 6 right)
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,

    // Row 1 (12 keys: 6 left + 6 right)
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,

    // Row 2 (12 keys: 6 left + 6 right)
    KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,

    // Row 3 (12 keys: 6 left + 6 right)
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,

    // Row 4 (12 keys: 6 left + 6 right)
    KC_LCTL, KC_LGUI, KC_LALT, MO(_LOWER), KC_SPC, KC_ENT,   KC_BSPC, KC_SPC,  MO(_RAISE), KC_RALT, KC_RGUI, KC_RCTL,

    // Row 5 (8 keys: 4 left + 4 right)
    KC_GRV,  KC_MINS, KC_EQL,  KC_LBRC,                      KC_RBRC, KC_LEFT, KC_DOWN, KC_UP,

    // Row 6 (6 keys: 3 left + 3 right)
    KC_DEL,  KC_HOME, KC_END,                                KC_PGUP, KC_PGDN, KC_RGHT
),

[_LOWER] = LAYOUT(
    // Row 0
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,

    // Row 1
    _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,    KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_F12,

    // Row 2
    _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,

    // Row 3
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,

    // Row 4
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,

    // Row 5
    _______, _______, _______, _______,                      _______, KC_HOME, KC_PGDN, KC_PGUP,

    // Row 6
    _______, _______, _______,                               _______, _______, KC_END
),

[_RAISE] = LAYOUT(
    // Row 0
    KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,      KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,

    // Row 1
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, KC_F12,

    // Row 2
    _______, _______, _______, _______, _______, _______,    KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,

    // Row 3
    _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, _______, _______,

    // Row 4
    _______, _______, _______, _______, _______, _______,    KC_DEL,  _______, _______, _______, _______, QK_BOOT,

    // Row 5
    _______, _______, _______, _______,                      _______, _______, _______, _______,

    // Row 6
    _______, _______, _______,                               _______, _______, _______
),

};

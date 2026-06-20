// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Layers
enum layers {
    _BASE
};

// Keymap (2 rows × 3 cols = 6 keys)
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = {
    { KC_1, KC_2, KC_3 },
    { KC_4, KC_5, KC_6 }
}

};

// -----------------------------
// Encoder rotation logic
// -----------------------------
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);   // turn right
    } else {
        tap_code(KC_VOLD);   // turn left
    }
    return false;
}
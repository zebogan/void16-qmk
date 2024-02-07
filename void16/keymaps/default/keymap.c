// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_ortho_4x4(
        KC_MUTE,   KC_MPRV,   KC_MPLY,   KC_MNXT,
        HYPR(KC_F18),   HYPR(KC_F19), HYPR(KC_F20),   HYPR(KC_F21), 
        HYPR(KC_F22), HYPR(KC_F23), MEH(KC_F18),   MEH(KC_F19),
        MEH(KC_F20),   MEH(KC_F21), MEH(KC_F22), MEH(KC_F23)
    )
};
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
#endif 
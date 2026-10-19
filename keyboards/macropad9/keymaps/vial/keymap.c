// Copyright 2026 Ryan Le
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Layer 0 — what each switch sends.
//
//  S1 F13  (AHK: whoop -> excel sync .bat)
//  S2 F14  (AHK: plan_run.bat)
//  S3 F15  (AHK: open Claude)
//  S4 Win+Shift+S   snip            (native)
//  S5 PrintScreen   full screenshot (native)
//  S6 Ctrl+Shift+Esc Task Manager   (native)
//  S7 F16  (AHK: YouTube)
//  S8 F17  (AHK: LUCIAN excel file)
//  S9 F18  (AHK: sleep PC)
//  ENC press = mute, turn = volume

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_F13,         KC_F14,  KC_F15,
        LSG(KC_S),      KC_PSCR, LCTL(LSFT(KC_ESC)),
        KC_F16,         KC_F17,  KC_F18,   KC_MUTE
    ),

    // Spare layers, remap them in Vial however you like.
    [1] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [3] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif

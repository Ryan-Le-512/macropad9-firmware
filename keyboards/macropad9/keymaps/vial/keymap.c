#include QMK_KEYBOARD_H

// S1 F13  whoop -> excel sync .bat     S2 F14  plan_run.bat
// S3 F15  Claude                       S4 Win+Shift+S  snip
// S5 PrtSc screenshot                  S6 Ctrl+Shift+Esc  task manager
// S7 F16  YouTube                      S8 F17  LUCIAN excel
// S9 F18  sleep PC                     ENC press = mute, turn = volume

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_F13,    KC_F14,  KC_F15,
        LSG(KC_S), KC_PSCR, LCTL(LSFT(KC_ESC)),
        KC_F16,    KC_F17,  KC_F18,   KC_MUTE
    ),

    [1] = LAYOUT(
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS) }
};
#endif

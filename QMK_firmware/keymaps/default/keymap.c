#include QMK_KEYBOARD_H

enum layers {
    BASE,
    FN,
    MED,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ / │
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ * │
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │ - │
     * ├───┼───┼───┼───┤
     * │ 0 │ . │Ent│ + │
     * └───┴───┴───┴───┘
     * KC_BSLS
     */
    [BASE] = LAYOUT_essence(
        KC_ESC,    KC_1,   KC_2,   KC_3,    KC_4,    KC_5,   KC_GRAVE, KC_EQUAL, KC_6,    KC_7,    KC_8,    KC_9,   KC_0,    KC_MINUS,
        KC_TAB,    KC_Q,   KC_W,   KC_E,    KC_R,    KC_T,   KC_LBRC,  KC_RBRC,  KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,    KC_BSPC,
        KC_CAPS,   KC_A,   KC_S,   KC_D,    KC_F,    KC_G,   KC_BSLS,  KC_QUOT,  KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN, KC_ENT,
        KC_LSFT,   KC_Z,   KC_X,   KC_C,    KC_V,    KC_B,             KC_MPLY,  KC_N,    KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_LCTL,                   MO(FN),  KC_LALT, KC_SPC, KC_F13,   KC_F14,   KC_RSFT, KC_RWIN, TG(MED),                  KC_RCTL
    ),

    [FN] = LAYOUT_essence(
        _______,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_SLEP,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
        _______,                   _______, _______, _______, _______, _______, _______, _______,   KC_NO,                   _______
        ),

    [MED] = LAYOUT_essence(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  KC_UP,  _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_MPRV, KC_MNXT, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
        _______,                   _______, _______, _______, _______, _______, _______, _______, _______,                   _______
        )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [BASE] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [FN] =  { ENCODER_CCW_CW(_______, _______)  },
    [MED] =  { ENCODER_CCW_CW(_______, _______)  },
};
#endif

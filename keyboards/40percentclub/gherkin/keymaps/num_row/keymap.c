#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_ortho_3x10(
     KC_RSFT, KC_LGUI,   KC_F1,   KC_F2,   KC_F5,   KC_F7,   KC_F9,  KC_F11, KC_LBRC, KC_RBRC,
     KC_SLSH, KC_BSLS,   KC_F2,   KC_F4,   KC_F6,   KC_F8,  KC_F10,  KC_F12, KC_MINS,  KC_EQL,
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0
  ),
};
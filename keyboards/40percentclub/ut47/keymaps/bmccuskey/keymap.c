/* Copyright 2018 Carlos Filoteo
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#ifdef LED_ENABLE
  #include "protocol/serial.h"
#endif

#define LT3_TAB LT(3, KC_TAB)
#define MT_RSFT_SLASH MT(MOD_RSFT, KC_SLASH)

enum custom_keycodes {
    LED_TOG = SAFE_RANGE,
    LED_CHG
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* Layer 0
   * ,-------------------------------------------------------------------------.
   * | Esc |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |Bspace |
   * |-------------------------------------------------------------------------+
   * |Tab/L3|  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  | Enter|
   * |-------------------------------------------------------------------------+
   * | Shift |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  |  Up |  /  |
   * |-------------------------------------------------------------------------+
   * | Ctrl | Win | Alt | ` |(L1/Spc)|   Space  |(L2/Ent)| ' | Left| Down|Right|
   * `-------------------------------------------------------------------------'
   */

LAYOUT( /* LAYER 0 */
  KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  LT3_TAB, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
  KC_LSHIFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP, MT_RSFT_SLASH,
  KC_LCTL, KC_LGUI, KC_LALT, KC_GRV,  LT(1,KC_SPC),      KC_SPC,        LT(2,KC_ENT),  KC_QUOTE, KC_LEFT, KC_DOWN,   KC_RGHT
),

  /* Layer 1
   * ,-------------------------------------------------------------------------.
   * | ` ~ |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  | Delete|
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |     |     |     |     |      |
   * |-------------------------------------------------------------------------+
   * |       |     |     |     |     |     |     |     |  [  |  ]  | PGUP|  \  |
   * |-------------------------------------------------------------------------+
   * |     |     |     |     | *L1* |          |       |     | HOME| PGDN| END |
   * `-------------------------------------------------------------------------'
   */

LAYOUT( /* LAYER 1 */
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DELETE,
  _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC,  KC_PGUP,  KC_BSLASH,
  _______, _______, _______, _______, _______,     _______,      _______, _______, KC_HOME, KC_PGDN, KC_END
),

  /* Layer 2
   * ,-------------------------------------------------------------------------.
   * |  F1 |  F2  | F3  | F4  | F5  | F6  | F7  | F8  | F9  | F10 | F11 | F12  |
   * |-------------------------------------------------------------------------+
   * |      |     |     |     |     |     |     |     |     |    |     | Insert|
   * |-------------------------------------------------------------------------+
   * |       |    |     |     |      |     |     |     |  {  |  }  |     |  |  |
   * |-------------------------------------------------------------------------+
   * |     |     |     |     |      |          | *L2* |     |     |     |      |
   * `-------------------------------------------------------------------------'
   */

LAYOUT( /* LAYER 2 */
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INSERT,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT_CURLY_BRACE, KC_RIGHT_CURLY_BRACE, _______, KC_PIPE,
  _______, _______, _______, _______, _______,     _______,      _______, _______, _______, _______, _______
),

  /* LAYER 3
   * ,-------------------------------------------------------------------------.
   * |  ~  |  !  |  @  |  #  |  $  |  %  |  ^  |  &  |  *  |  (  |  )  | Delete|
   * |-------------------------------------------------------------------------+
   * | *L3* |     |     |     |     |     |     |     |     |     |     |      |
   * |-------------------------------------------------------------------------+
   * |  Caps |LEDtg|LEDch|    |PrtScn|     |     |     |     | Stop| Vup | Play|
   * |-------------------------------------------------------------------------+
   * |     |     |     |     |      |          |       |     |TrkBk| Vdn |TrkFw|
   * `-------------------------------------------------------------------------'
   */

LAYOUT( /* Layer 3 */
  KC_TILDE,  KC_EXCLAIM,  KC_AT,  KC_HASH,  KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_DELETE,
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
  KC_CAPS, LED_TOG, LED_CHG, _______, KC_PSCR, _______, _______, _______, _______, KC_MSTP, KC_VOLU, KC_MPLY,
  _______, _______, _______, _______, _______,     _______,      _______, _______, KC_MPRV, KC_VOLD, KC_MNXT
),
};

//LED keymap functions
 #ifdef LED_ENABLE
void led_chmode(void) {
  serial_send(101);
}

void led_toggle(void) {
  serial_send(100);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      case LED_TOG:
        #ifdef LED_ENABLE
        led_toggle();
        #endif
        return false;
      case LED_CHG:
        #ifdef LED_ENABLE
        led_chmode();
        #endif
        return false;
    }
  }
  return true;
};
#endif

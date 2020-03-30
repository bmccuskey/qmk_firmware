/* Copyright 2019 bmccuskey
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    
   /* Layer 0
    * ,-----------------------------------------------------------.
    * |ESC | Q  | W  | E  | R  | T  | Y  | U  | I  | O  | P  | BS |
    * |-----------------------------------------------------------+
    * |L3Tab| A  | S  | D  | F  | G  | H  | J  | K  | L  | Enter  |
    * |-----------------------------------------------------------+
    * |  Shift  | Z  | X  | C  | V  | B  | N  | M  | ,  |  ↑ | .  |
    * |-----------------------------------------------------------+
    * |Ctrl |Gui |Alt |  (L1/Spc)  | (L2/Spc) | Fn |  ← |  ↓ | →  |
    * `-----------------------------------------------------------'
    */
    [0] = LAYOUT(
        KC_ESC,  KC_Q,  KC_W,  KC_E,  KC_R,  KC_T,  KC_Y,  KC_U,  KC_I, KC_O,  KC_P, KC_BSPC,
        LT(3,KC_TAB),  KC_A,  KC_S,  KC_D,  KC_F,  KC_G,  KC_H,   KC_J,  KC_K, KC_L, KC_ENT,
        KC_LSFT,       KC_Z,  KC_X,  KC_C,  KC_V,  KC_B,  KC_N,  KC_M, KC_COMM, KC_UP,KC_DOT,
        KC_LCTL, KC_LGUI, KC_LALT,  LT(1,KC_SPC), LT(2,KC_SPC), LT(4,KC_QUES), KC_LEFT, KC_DOWN, KC_RGHT
    ),
   /* Layer 1
    * ,-----------------------------------------------------------.
    * | ` | 1  | 2  | 3  | 4  | 5  | 6  | 7  | 8  | 9  | 0  | DEL |
    * |-----------------------------------------------------------+
    * |     |    |    |    |    |    |    |    |    |    |    \   |
    * |-----------------------------------------------------------+
    * |         |    |    |    |    |    |    |    |  [ |PGUP| ]  |
    * |-----------------------------------------------------------+
    * |     |    |    |    *L1*    |          |   |HOME |PGDN| END|
    * `-----------------------------------------------------------'
    */
    [1] = LAYOUT(
        KC_GRV,  KC_1,  KC_2,  KC_3,  KC_4,  KC_5,  KC_6,  KC_7,  KC_8,  KC_9,  KC_0, KC_DELETE,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_BSLS,
        _______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_PGUP, KC_RBRC,
        _______, _______, _______,          _______,          _______, _______, KC_HOME, KC_PGDN, KC_END
    ),
   /* Layer 2
    * ,-----------------------------------------------------------.
    * | F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 |F10 |F11 |F12 |
    * |-----------------------------------------------------------+
    * |     |    |    |    |    |    |    |    |    |    | Insert |
    * |-----------------------------------------------------------+
    * |         |    |    |    |    |    |    |    |  { |    | }  |
    * |-----------------------------------------------------------+
    * |     |    |    |            |   *L2*   |   |     |    |    |
    * `-----------------------------------------------------------'
    */
    [2] = LAYOUT(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        _______,   _______, _______,  _______, _______, _______, _______, _______, _______, _______, KC_INSERT,
        _______,    _______, _______, _______, _______, _______, _______, _______, KC_LCBR, _______, KC_RCBR,
        _______, _______, _______, _______,              _______,         _______, _______, _______, _______
    ),
   /* Layer 3
    * ,-----------------------------------------------------------.
    * | ~ | !  | @  | #  | $  | %  | ^  | &  | *  | (  |  ) | DEL |
    * |-----------------------------------------------------------+
    * | *L3* |    |    |    |    |    |    |    |    |    |       |
    * |-----------------------------------------------------------+
    * |   Caps   |    |    |   |PrtScn|   |    |    |Stop|Vup|Play|
    * |-----------------------------------------------------------+
    * |     |    |    |            |          |   |TrkBk|Vdn|TrkFw|
    * `-----------------------------------------------------------'
    */
    [3] = LAYOUT(
        KC_TILDE,  KC_EXCLAIM,  KC_AT,  KC_HASH,  KC_DOLLAR, KC_PERCENT, KC_CIRCUMFLEX, KC_AMPERSAND, KC_ASTERISK, KC_LEFT_PAREN, KC_RIGHT_PAREN, KC_DELETE,
        _______,   _______, _______,  _______,  _______, _______, _______, _______, _______, _______, _______,
        KC_CAPS,     _______, _______, _______, KC_PSCR, _______, _______, _______, KC_MSTP, KC_VOLU, KC_MPLY,
        _______, _______, _______, _______,            _______,            _______, KC_MPRV, KC_VOLD, KC_MNXT
    ),
   /* Layer 4
    * ,-----------------------------------------------------------.
    * |RGBtg|RGBmo|RGBhI|RGBhD|RGBsI|RGBsD|RGBvI|RGBvD|  |  | |DEL|
    * |-----------------------------------------------------------+
    * |      |BLTOG|BLDN|BLUP|BLSTP|    |    |    |    |    |     |
    * |-----------------------------------------------------------+
    * |   Caps  |    |    |    |    |    |    |    |  \ | || | /  |
    * |-----------------------------------------------------------+
    * |     |    |    |           |           |*L4*|    |    |    |
    * `-----------------------------------------------------------'
    */
    [4] = LAYOUT(
        RGB_TOG,  RGB_MOD,  RGB_HUI,  RGB_HUD,  RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______, KC_DELETE,
        _______,       BL_TOGG, BL_DEC,  BL_INC,  BL_STEP, _______, _______, _______, _______, _______, _______,
        KC_CAPS,     _______, _______, _______, _______, _______, _______, _______, KC_BSLS, KC_PIPE, KC_SLSH,
        _______, _______, _______, _______,                _______,        _______, _______, _______, _______
    ),
};
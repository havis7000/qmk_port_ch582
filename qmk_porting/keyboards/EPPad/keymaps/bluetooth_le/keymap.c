/*
Copyright 2023 SharpSnail01 <https://github.com/SharpSnail01>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_all(/* 0: qwerty */
                                KC_U, KC_I, KC_O, KC_P,    KC_ESC, 
                                KC_H, KC_J, KC_K, KC_L,    KC_F5, 
    KC_LEFT, KC_DWON, KC_RIGHT, KC_B, KC_N, KC_M, KC_BSPC, KC_A, 
                      KC_UP,   MO(1), KC_SPC    
    ),
    [1] = LAYOUT_all(/* 1: Fn */
                                    _______, _______, _______, _______, _______, 
                                    _______, _______, _______, _______, _______, 
    BLE_SLOT0, BLE_SLOT1, USB_MODE, _______, _______, _______, _______, _______,  
                 BATTERY_INDICATOR, _______, _______    
    ),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
};
#endif

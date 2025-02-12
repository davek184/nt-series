/* Copyright 2020 Evy Dekkers
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1,
    _FN2,
    _FN3,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_all(
  KC_ESC, KC_TAB,   KC_EQL,  KC_BSPC,
  KC_NLCK, KC_PSLS,  KC_PAST, KC_PMNS,
  KC_P7,  KC_P8,    KC_P9,   KC_PPLS,
  KC_P4,  KC_P5,    KC_P6,   KC_NO,
  KC_P1,  KC_P2,    KC_P3,   KC_PENT,
  KC_P0,  KC_NO,    KC_PDOT, KC_NO),

[_FN1] = LAYOUT_all(
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______),

[_FN2] = LAYOUT_all(
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______),

[_FN3] = LAYOUT_all(
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______,
  _______, _______, _______, _______),

};
#include QMK_KEYBOARD_H

#define __ _______

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_5x6_5(
       KC_B,        KC_2,    QK_BOOT,   KC_4,  KC_B,     KC_B,     KC_7,  QK_BOOT,    KC_9,   KC_B,
       KC_Q,        KC_W,    KC_E,      KC_R,  KC_T,     KC_Y,  	KC_U,  KC_I,    KC_O,   KC_P,
       KC_A,        KC_S,    KC_D,      KC_F,  KC_G,     KC_H,  	KC_J,  KC_K,    KC_L,   KC_SCLN,
       KC_Z,        KC_X,    KC_C,      KC_V,  KC_B,     KC_N,  	KC_M,  KC_COMM, KC_DOT, KC_SLSH,
					    KC_D,   KC_F,  KC_G,     KC_H,  	KC_J,  KC_K,
								     KC_Z,  KC_X,     KC_C,  	KC_V
  ),


  [1] = LAYOUT_5x6_5(
       KC_1,    KC_2,    KC_3,   KC_4,  KC_B,     KC_B,     KC_7,  KC_8,    KC_9,   KC_0,
       KC_Q,    KC_W,    KC_E,   KC_R,  KC_T,     KC_Y,  	KC_U,  KC_I,    KC_O,   KC_P,
       KC_A,    KC_S,    KC_D,   KC_F,  KC_G,     KC_H,  	KC_J,  KC_K,    KC_L,   KC_SCLN,
       KC_Z,    KC_X,    KC_C,   KC_V,  KC_B,     KC_N,  	KC_M,  KC_COMM, KC_DOT, KC_SLSH,
						 KC_D,   KC_F,  KC_G,     KC_H,  	KC_J,  KC_K,
								 KC_Z,  KC_X,     KC_C,  	KC_V
  ),
 };

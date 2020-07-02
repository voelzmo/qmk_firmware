/*
Copyright 2020 Ryan Castillo <castillo.ryanmiguel@gmail.com>

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


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_default(
    KC_ESC,  	KC_TILD, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,  KC_BSPC,
    KC_PGUP, 	KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,             KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
    KC_PGDN, 	KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
				KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,             KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_RGUI,
				KC_LCTL,          KC_LALT, KC_SPC,  MO(1),                          KC_SPC,           KC_RALT,          KC_RCTL
  ),
  [1] = LAYOUT_default(
    KC_TRNS,  	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,  	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
				KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
				KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,          KC_TRNS,          KC_TRNS
  ),
  [2] = LAYOUT_default(
    KC_TRNS,  	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,  	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
				KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
				KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,          KC_TRNS,          KC_TRNS
  ),
  [3] = LAYOUT_default(
    KC_TRNS,  	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS,  	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, 	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
				KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
				KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,          KC_TRNS,          KC_TRNS
  )

};



#ifdef STOPLIGHT_LED
bool is_led_stoplight_active = false;
uint8_t led_stoplight_index = 0;
uint16_t led_stoplight_timer = 0;
void matrix_scan_led_stoplight(void);

void led_stoplight_start(void) {
    writePinHigh(INDICATOR_PIN_0);
    writePinHigh(INDICATOR_PIN_1);
    writePinHigh(INDICATOR_PIN_2);

    is_led_stoplight_active = true;
    led_stoplight_timer = timer_read();
};

void led_stoplight_set(pin_t pin) {
    writePinLow(pin);
};

void led_stoplight_end(void) {
    // Reset timer and status variables
    led_stoplight_index = 0;
    is_led_stoplight_active = false;
    led_stoplight_timer = 0;
    led_update_kb(host_keyboard_led_state());
};

void matrix_scan_led_stoplight(void) {
    if (is_led_stoplight_active) {
        if (timer_elapsed(led_stoplight_timer) > (1000 * (led_stoplight_index + 1))) {
            switch (led_stoplight_index){
                case 0:
                    led_stoplight_set(INDICATOR_PIN_0);
                    led_stoplight_index++;
                    break;
                case 1:
                    led_stoplight_set(INDICATOR_PIN_1);
                    led_stoplight_index++;
                    break;
                case 2:
                    led_stoplight_set(INDICATOR_PIN_2);
                    led_stoplight_index++;
                    break;
                default:
                    led_stoplight_index = 0;
                    is_led_stoplight_active = false;
                    led_stoplight_timer = 0;
                    led_update_kb(host_keyboard_led_state());
                    break;
            }
        }
    }
};
#endif

void keyboard_post_init_keymap(void) {
#ifdef STOPLIGHT_LED
    led_stoplight_start();
#endif
};

void matrix_scan_keymap(void) {
#ifdef STOPLIGHT_LED
    matrix_scan_led_stoplight();
#endif
};


#ifdef USE_LEDS_FOR_LAYERS
// example of how to use LEDs as layer indicators
static uint8_t top = 0;
static uint8_t middle = 0;
static uint8_t bottom = 0;

layer_state_t layer_state_set_user(layer_state_t state) {
    top = middle = bottom = 0;
    switch (get_highest_layer(state)) {
    case 1:
        top = 1;
        break;
    case 2:
        middle = 1;
        break;
    default: //  for any other layers, or the default layer
        break;
    }
  return state;
}

// override kb level function
bool led_update_user(led_t usb_led) {
    if (!is_led_stoplight_active) {
      writePin(INDICATOR_PIN_0, !top);
      writePin(INDICATOR_PIN_1, !middle);
      writePin(INDICATOR_PIN_2, !usb_led.caps_lock);
    };
    return false; // we are using LEDs for something else override kb
}
#endif

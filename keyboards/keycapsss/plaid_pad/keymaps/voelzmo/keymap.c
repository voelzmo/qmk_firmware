#include QMK_KEYBOARD_H

enum custom_keycodes {
    LEFT_SIDE = SAFE_RANGE,
    RIGHT_SIDE,
    UP_SIDE,
    DOWN_SIDE,
    UPPER_LEFT,
    UPPER_RIGHT,
    LOWER_RIGHT,
    LOWER_LEFT,
    MAXIMIZE,
    SHRUG,
    TFLIP,
    DISFACE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case SHRUG: // ¯\_(ツ)_/¯
        if (record->event.pressed) {
            register_code(KC_LCTL);
            register_code(KC_SPACE);
            unregister_code(KC_SPACE);
            unregister_code(KC_LCTL);
            send_unicode_hex_string("00AF 005C 005F 0028 30C4 0029 005F 002F 00AF");
            register_code(KC_LCTL);
            register_code(KC_SPACE);
            unregister_code(KC_SPACE);
            unregister_code(KC_LCTL);
        }
        return false;
        break;
    case TFLIP: // (╯°□°)╯ ︵ ┻━┻
        if (record->event.pressed){
            register_code(KC_LCTL);
            register_code(KC_SPACE);
            unregister_code(KC_SPACE);
            unregister_code(KC_LCTL);
            send_unicode_hex_string("0028 256F 00B0 25A1 00B0 0029 256F 0020 FE35 0020 253B 2501 253B");
            register_code(KC_LCTL);
            register_code(KC_SPACE);
            unregister_code(KC_SPACE);
            unregister_code(KC_LCTL);
        }
        return false;
        break;

    case DISFACE: // ಠ_ಠ
        if (record->event.pressed){
            register_code(KC_LCTL);
            register_code(KC_SPACE);
            unregister_code(KC_SPACE);
            unregister_code(KC_LCTL);
            send_unicode_hex_string("0CA0 005F 0CA0");
            register_code(KC_LCTL);
            register_code(KC_SPACE);
            unregister_code(KC_SPACE);
            unregister_code(KC_LCTL);
        }
        return false;
        break;

    case LEFT_SIDE:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(KC_LOPT);
            register_code(KC_LCMD);
            register_code(KC_LEFT);
        } else {
            unregister_code(KC_LCTRL);
            unregister_code(KC_LOPT);
            unregister_code(KC_LCMD);
            unregister_code(KC_LEFT);
        }
        break;

    case RIGHT_SIDE:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(KC_LOPT);
            register_code(KC_LCMD);
            register_code(KC_RIGHT);
        } else {
            unregister_code(KC_LCTRL);
            unregister_code(KC_LOPT);
            unregister_code(KC_LCMD);
            unregister_code(KC_RIGHT);
        }
        break;

    case UP_SIDE:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(KC_LOPT);
            register_code(KC_LCMD);
            register_code(KC_UP);
        } else {
            unregister_code(KC_LCTRL);
            unregister_code(KC_LOPT);
            unregister_code(KC_LCMD);
            unregister_code(KC_UP);
        }
        break;

    case DOWN_SIDE:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(KC_LOPT);
            register_code(KC_LCMD);
            register_code(KC_DOWN);
        } else {
            unregister_code(KC_LCTRL);
            unregister_code(KC_LOPT);
            unregister_code(KC_LCMD);
            unregister_code(KC_DOWN);
        }
        break;

    case UPPER_LEFT:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(KC_LOPT);
            register_code(KC_LCMD);
            register_code(KC_1);
        } else {
            unregister_code(KC_LCTRL);
            unregister_code(KC_LOPT);
            unregister_code(KC_LCMD);
            unregister_code(KC_1);
        }
        break;

    case UPPER_RIGHT:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(KC_LOPT);
            register_code(KC_LCMD);
            register_code(KC_2);
        } else {
            unregister_code(KC_LCTRL);
            unregister_code(KC_LOPT);
            unregister_code(KC_LCMD);
            unregister_code(KC_2);
        }
        break;

    case LOWER_RIGHT:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(KC_LOPT);
            register_code(KC_LCMD);
            register_code(KC_4);
        } else {
            unregister_code(KC_LCTRL);
            unregister_code(KC_LOPT);
            unregister_code(KC_LCMD);
            unregister_code(KC_4);
        }
        break;

    case LOWER_LEFT:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(KC_LOPT);
            register_code(KC_LCMD);
            register_code(KC_3);
        } else {
            unregister_code(KC_LCTRL);
            unregister_code(KC_LOPT);
            unregister_code(KC_LCMD);
            unregister_code(KC_3);
        }
        break;
    case MAXIMIZE:
        if (record->event.pressed) {
            register_code(KC_LCTRL);
            register_code(KC_LOPT);
            register_code(KC_LCMD);
            register_code(KC_M);
        } else {
            unregister_code(KC_LCTRL);
            unregister_code(KC_LOPT);
            unregister_code(KC_LCMD);
            unregister_code(KC_M);
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * ,-----------------------,
 * |  7  |  8  |  9  |  /  |
 * |-----+-----+-----+-----|
 * |  4  |  5  |  6  |  *  |
 * |-----+-----+-----+-----|
 * |  1  |  2  |  3  |  -  |
 * |-----+-----+-----+-----|
 * |  0  |  .  |  =  |  +  |
 * `-----------------------'
 */
LAYOUT_ortho_4x4(
		KC_MUTE, KC_MPRV,   KC_MNXT,      KC_MPLY,
		UPPER_LEFT, UP_SIDE,  UPPER_RIGHT, SHRUG,
		LEFT_SIDE, MAXIMIZE , RIGHT_SIDE,  DISFACE,
		LOWER_LEFT, DOWN_SIDE,    LOWER_RIGHT, TFLIP
)

};


void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {         // First encoder - top left
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  } else if (index == 1) {  // Second encoder - top right
    if (clockwise) {
      tap_code(KC_UP);
    } else {
      tap_code(KC_DOWN);
    }
  }
}

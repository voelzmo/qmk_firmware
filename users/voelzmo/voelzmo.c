#include "voelzmo.h"

__attribute__((weak))
void matrix_init_keymap(void){ }

void matrix_init_user(void) {
    matrix_init_keymap();
}

__attribute__((weak))
void keyboard_post_init_keymap(void){ }

__attribute__((weak))
void keyboard_post_init_user(void){
    keyboard_post_init_keymap();
}

__attribute__ ((weak))
void matrix_scan_keymap(void) {}

void matrix_scan_user(void) {
    matrix_scan_keymap();
}

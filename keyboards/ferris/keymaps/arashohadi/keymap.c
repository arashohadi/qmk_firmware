#include QMK_KEYBOARD_H

#include "keymap_swedish.h"

// LAYERS
enum layers {
    CLM,
    NAV,
    SYM,
    NUM,
};

#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)
#define HOME_G HYPR_T(KC_G)
#define HOME_M HYPR_T(KC_M)
#define HOME_N LSFT_T(KC_N)
#define HOME_E LCTL_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O LGUI_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Base layer
    [CLM] = LAYOUT_split_3x5_2(
      KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,           KC_J,    KC_L,    KC_U,    KC_Y,    SE_SCLN,
      HOME_A,  HOME_R,  HOME_S,  HOME_T,  HOME_G,         HOME_M,  HOME_N,  HOME_E,  HOME_I,  HOME_O,
      KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,           KC_K,    KC_H,    SE_COMM, SE_DOT,  SE_SLSH,
                                 KC_TAB,  LT(NAV, KC_SPC),         KC_ENT,  KC_BSPC
    ),

    // Navigation layer
    // Hold KC_SPC
    [NAV] = LAYOUT_split_3x5_2(
      _______, _______, _______, _______, _______,        _______, SE_LCBR, SE_RCBR, SE_LPRN, SE_RPRN,
      _______, _______, _______, _______, _______,        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
      _______, _______, _______, _______, _______,        _______, SE_LBRC, SE_RBRC, SE_RABK, SE_LABK,
                                 _______,  KC_SPC,        _______, _______
    ),

    // Numeric layer
    // Hold KC_TAB
    // [NUM] = LAYOUT(),

    // Symbol layer
    // Hold KC_ENT
    // [SYM] = LAYOUT(),
	//
	// [0] = LAYOUT_split_3x5_2(KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, LSFT_T(KC_A), LT(5,KC_S), LT(1,KC_D), LT(3,KC_F), KC_G, KC_H, LT(4,KC_J), LT(2,KC_K), LT(6,KC_L), LSFT_T(KC_SCLN), KC_Z, LCTL_T(KC_X), LALT_T(KC_C), KC_V, KC_B, KC_N, KC_M, LALT_T(KC_COMM), LCTL_T(KC_DOT), KC_SLSH, KC_P0, KC_BSPC, LT(7,KC_SPC), KC_P1),
	// [1] = LAYOUT_split_3x5_2(_______, _______, _______, _______, _______, _______, KC_BTN1, KC_WH_U, KC_BTN2, _______, _______, KC_BTN2, KC_NO, KC_BTN1, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, _______, _______, _______, _______, _______, _______, KC_WH_L, KC_WH_D, KC_WH_R, _______, _______, _______, _______, _______),
	// [2] = LAYOUT_split_3x5_2(_______, _______, KC_PGUP, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_UP, KC_DOWN, KC_RGHT, _______, _______, KC_LGUI, KC_NO, LCTL(KC_LALT), LCA(KC_LSFT), _______, KC_HOME, KC_PGDN, KC_END, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______),
	// [3] = LAYOUT_split_3x5_2(_______, _______, _______, _______, _______, _______, KC_UNDS, KC_PIPE, KC_QUOT, _______, KC_CIRC, KC_ASTR, KC_AMPR, KC_NO, _______, KC_HASH, KC_TILD, KC_SLSH, KC_DQUO, KC_DLR, _______, _______, _______, _______, _______, _______, KC_MINS, KC_BSLS, KC_GRV, _______, RGB_RMOD, _______, _______, RGB_MOD),
	// [4] = LAYOUT_split_3x5_2(_______, KC_COLN, KC_LT, KC_GT, KC_SCLN, _______, _______, _______, _______, _______, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN, KC_AT, _______, KC_NO, KC_EQL, KC_PLUS, KC_PERC, _______, KC_EXLM, KC_LBRC, KC_RBRC, _______, _______, _______, _______, _______, _______, KC_VOLD, _______, _______, KC_VOLU),
	// [5] = LAYOUT_split_3x5_2(_______, _______, _______, _______, _______, _______, KC_F7, KC_F8, KC_F9, KC_F10, _______, KC_NO, LCTL(KC_LALT), _______, _______, _______, KC_F4, KC_F5, KC_F6, KC_F11, _______, _______, _______, _______, _______, _______, KC_F1, KC_F2, KC_F3, KC_F12, _______, _______, _______, _______),
	// [6] = LAYOUT_split_3x5_2(KC_PSLS, KC_7, KC_8, KC_9, KC_PPLS, _______, _______, _______, _______, _______, KC_0, KC_1, KC_2, KC_3, KC_PMNS, _______, _______, _______, KC_NO, _______, KC_PAST, KC_4, KC_5, KC_6, KC_PEQL, _______, _______, _______, _______, _______, _______, _______, _______, _______),
	// [7] = LAYOUT_split_3x5_2(_______, _______, KC_COLN, KC_ESC, _______, _______, _______, _______, _______, KC_DEL, _______, KC_PERC, KC_SLSH, KC_ENT, _______, DF(1), KC_LGUI, _______, _______, _______, _______, _______, _______, KC_EXLM, _______, DF(0), _______, RALT_T(KC_COMM), RCTL_T(KC_DOT), QK_BOOT, _______, KC_TAB, KC_NO, _______)
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

};
#endif // defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)





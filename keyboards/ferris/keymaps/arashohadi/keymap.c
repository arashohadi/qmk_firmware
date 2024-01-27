#include QMK_KEYBOARD_H

#include "keymap_swedish.h"

// LAYERS
enum layers {
    CLM,
    NAV,
    SYM,
    NUM,
};

// HOME ROW MODS
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

// LAYER TAP KEYS
#define NAV_SPC LT(NAV,KC_SPC)
#define NUM_TAB LT(NUM,KC_TAB)
#define SYM_ENT LT(SYM,KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Base layer
    [CLM] = LAYOUT_split_3x5_2(
      KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,           KC_J,    KC_L,    KC_U,    KC_Y,    SE_SCLN,
      HOME_A,  HOME_R,  HOME_S,  HOME_T,  HOME_G,         HOME_M,  HOME_N,  HOME_E,  HOME_I,  HOME_O,
      KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,           KC_K,    KC_H,    SE_COMM, SE_DOT,  SE_SLSH,
                                 NUM_TAB,  NAV_SPC,       SYM_ENT, KC_BSPC
    ),

    // Navigation layer - Hold KC_SPC
    [NAV] = LAYOUT_split_3x5_2(
      _______, _______, _______, _______, _______,        _______, SE_LCBR, SE_RCBR, SE_LPRN, SE_RPRN,
      _______, _______, _______, _______, _______,        KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
      _______, _______, _______, _______, _______,        _______, SE_LBRC, SE_RBRC, SE_RABK, SE_LABK,
                                 _______, _______,        _______, _______
    ),

    // Symbol layer - Hold KC_ENT
    [SYM] = LAYOUT_split_3x5_2(
      _______, _______, SE_ASTR, SE_AMPR, _______,        _______, _______, _______, _______, _______,
      SE_DQUO, SE_CIRC, SE_PERC, SE_DLR,  SE_PLUS,        _______, _______, _______, _______, _______,
      SE_TILD, SE_HASH, SE_AT,   SE_EXLM, SE_PIPE,        _______, _______, _______, _______, _______,
                                 _______, _______,        _______, _______
    ),

    // Numeric layer - Hold KC_TAB
    [NUM] = LAYOUT_split_3x5_2(
      _______, _______, _______, _______, _______,        _______, KC_7,    KC_8,    KC_9,    _______,
      _______, _______, _______, _______, _______,        _______, KC_4,    KC_5,    KC_6,    _______,
      _______, _______, _______, _______, _______,        KC_0,    KC_1,    KC_2,    KC_3,    _______,
                                 _______, _______,        _______, _______
    ),
};

enum combos {
  WF_ESC,
  PL_MINS,
  DH_UNDS,
  ZS_CAPS,
};

const uint16_t PROGMEM wf_combo[] = {KC_W, KC_F, COMBO_END};
const uint16_t PROGMEM pl_combo[] = {KC_P, KC_L, COMBO_END};
const uint16_t PROGMEM dh_combo[] = {KC_D, KC_H, COMBO_END};
const uint16_t PROGMEM zs_combo[] = {KC_Z, SE_SLSH, COMBO_END};

combo_t key_combos[] = {
    [WF_ESC]  = COMBO(wf_combo, KC_ESC),
    [PL_MINS] = COMBO(pl_combo, SE_MINS),
    [DH_UNDS] = COMBO(dh_combo, SE_UNDS),
    [ZS_CAPS] = COMBO(zs_combo, CW_TOGG),
};


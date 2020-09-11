#pragma once

#include QMK_KEYBOARD_H

#define KC_NP KC_NO // key is not present
#define KC_NA KC_NO // present but not available for use
#define KC_NU KC_NO // available but not used

// non-KC_ keycodes
#define KC_RST RESET
#define KC_TOG RGB_TOG
#define KC_MOD RGB_MOD
#define KC_HUI RGB_HUI
#define KC_SAI RGB_SAI
#define KC_VAI RGB_VAI

enum userspace_layers {
     // Alphas
     DVORAK,
     QWERTY_FULL,

     // Half-keyboard
     TARK,

     // Non-alphas
     MBO,
     MEDR,
     NAVR,
     MOUR,
     NSSL,
     NSL,
     FUNL
};

// Inspired by drashna's wrappers.h

#define ________DVORAK_L1________        KC_QUOT, KC_COMM, KC_DOT,  KC_P,     KC_Y
#define ________DVORAK_L2________        KC_A,    KC_O,    KC_E,    KC_U,     KC_I
#define ________DVORAK_L3________        KC_SCLN, KC_Q,    KC_J,    KC_K,     KC_X

#define ________DVORAK_R1________        KC_F,    KC_G,    KC_C,    KC_R,     KC_L
#define ________DVORAK_R2________        KC_D,    KC_H,    KC_T,    KC_N,     KC_S
#define ________DVORAK_R3________        KC_B,    KC_M,    KC_W,    KC_V,     KC_Z

#define ________NUM_1________            KC_DOT,  KC_7,    KC_8,    KC_9,     KC_EQL
#define ________NUM_2________            KC_SCLN, KC_4,    KC_5,    KC_6,     KC_MINS
#define ________NUM_3________            KC_GRV,  KC_1,    KC_2,    KC_3,     KC_BSLS
#define   ______NUM_4______              KC_NU,   KC_LBRC, KC_0,    KC_RBRC

#define ________FUNC_1________           KC_F12,  KC_F7,   KC_F8,   KC_F9,    KC_PSCR
#define ________FUNC_2________           KC_F11,  KC_F4,   KC_F5,   KC_F6,    KC_SLCK
#define ________FUNC_3________           KC_F10,  KC_F1,   KC_F2,   KC_F3,    KC_PAUS

#define ________SYM_1________            KC_LCBR, KC_AMPR, KC_SLSH, KC_UNDS,  KC_PLUS
#define ________SYM_2________            KC_COLN, KC_DLR,  KC_PERC, KC_AT,    KC_UNDS
#define ________SYM_3________            KC_TILD, KC_EXLM, KC_ASTR, KC_HASH,  KC_PIPE
#define   ______SYM_4______              KC_NU,   KC_LCBR, KC_CIRC, KC_RCBR

#define ________NAV_1________            KC_ESC,  KC_TAB,  KC_PGUP, KC_PGDN,  KC_AGIN
#define ________NAV_2________            KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,  KC_COPY
#define ________NAV_3________            KC_CUT,  KC_BSPC, KC_DEL,  KC_PSTE,  KC_UNDO
#define   ______NAV_4______              KC_NU,   KC_NU,   KC_HOME, KC_END

#define ________MED_1________            KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,   KC_VAI
#define ________MED_2________            KC_NU,   KC_MPRV, KC_VOLD, KC_VOLU,  KC_MNXT
#define ________MED_3________            KC_NU,   KC_DV,   KC_QW,   KC_TARK,  KC_CAPS
#define   ______MED_4______              KC_RST,   KC_NU,   KC_MUTE, KC_NU

#define ________MOUR_1________           KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,  KC_NU
#define ________MOUR_2________           KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,  KC_NU
#define   ______MOUR_3______             KC_BTN3, KC_NU,   KC_NU,   KC_NU

#define ________MODS_L1________          KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,  KC_NU
#define ________MODS_R1________          KC_NU,   KC_LSFT, KC_LCTL, KC_LALT,  KC_LGUI

#define ________TARK_1________           KC_1,    KC_2,    KC_3,    KC_4,     KC_5
#define ________TARK_2________           KC_G,    KC_Q,    KC_W,    KC_E,     KC_T
#define ________TARK_3________           KC_R,    KC_A,    KC_S,    KC_D,     KC_F
#define ________TARK_4________           KC_O,    KC_B,    KC_X,    KC_C,     KC_Y
#define   ______TARK_5______             LT(MEDR, KC_O), KC_TAB,    KC_SPC,   KC_DEL

#define ________BLANK________            KC_NU,   KC_NU,   KC_NU,   KC_NU,    KC_NU
#define   ______BLANK______              KC_NU,   KC_NU,   KC_NU,   KC_NU

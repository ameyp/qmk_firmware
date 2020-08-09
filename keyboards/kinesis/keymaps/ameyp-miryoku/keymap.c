#include "keymap.h"

enum kinesis_layers {
     // Alphas
     DVORAK,
     DVORAK_FULL,
     QWERTY_FULL,
     BASE,
     // Non-alphas
     MBO,
     MEDR,
     NAVR,
     MOUR,
     NSSL,
     NSL,
     FUNL
};

enum kinesis_keycodes {
     KC_DVORAK = SAFE_RANGE,
     KC_DVORAK_FULL,
     KC_QWERTY_FULL,
     KC_BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [DVORAK] = LAYOUT_miryoku(
          KC_QUOT,           KC_COMM,           KC_DOT,            KC_P,              KC_Y,              KC_F,              KC_G,              KC_C,              KC_R,              KC_L,
          LGUI_T(KC_A),      LALT_T(KC_O),      LCTL_T(KC_E),      LSFT_T(KC_U),      KC_I,              KC_D,              LSFT_T(KC_H),      LCTL_T(KC_T),      LALT_T(KC_N),      LGUI_T(KC_S),
          KC_SLSH,           ALGR_T(KC_Q),      KC_J,              KC_K,              KC_X,              KC_B,              KC_M,              KC_W,              ALGR_T(KC_V),      KC_Z,
          KC_NP,             KC_NP,             LT(MEDR, KC_ESC),  LT(NAVR, KC_BSPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_SPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_NP
          ),

     [BASE] = LAYOUT_miryoku(
          KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_QUOT,
          LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),
          KC_Z,              ALGR_T(KC_X),      KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           ALGR_T(KC_DOT),    KC_SLSH,
          KC_NP,             KC_NP,             LT(MEDR, KC_ESC),  LT(NAVR, KC_BSPC),  LT(MOUR, KC_TAB),  LT(NSSL, KC_ENT),  LT(NSL, KC_SPC),  LT(FUNL, KC_DEL),  KC_NP,             KC_NP
          ),

     [NAVR] = LAYOUT_miryoku(
          KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE,
          KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
          KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,
          KC_NP,   KC_NP,   KC_NA,   KC_BSPC,   KC_NA,   KC_ENT,  KC_NA, KC_DEL,  KC_NP,   KC_NP
          ),

     [MOUR] = LAYOUT_miryoku(
          KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,
          KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_NU,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,
          KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_NU,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R,
          KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_BTN1, KC_BTN3, KC_BTN2, KC_NP,   KC_NP
          ),

     [MEDR] = LAYOUT_miryoku(
          KC_RST,  KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_TOG,  KC_MOD,  KC_HUI,  KC_SAI,    KC_VAI,
          KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_NA,   KC_NU,   KC_MPRV, KC_VOLD, KC_VOLU,   KC_MNXT,
          KC_NA,   KC_ALGR, KC_NA,   KC_NA,   KC_NA,   KC_DVORAK_FULL,   KC_DVORAK,   KC_QWERTY_FULL,   KC_BASE,     KC_NU,
          KC_NP,   KC_NP,   KC_NA,   KC_NA,   KC_NA,   KC_MSTP, KC_MPLY, KC_MUTE, KC_NP,     KC_NP
          ),

     [MBO] = LAYOUT_miryoku(
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
          KC_NP,   KC_NP,   KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1, KC_BTN3, KC_BTN2, KC_NP,   KC_NP
          ),

     [FUNL] = LAYOUT_miryoku(
          KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,
          KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SLCK, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
          KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
          KC_NP,   KC_NP,   KC_APP,  KC_NA,  KC_TAB,  KC_NA,   KC_SPC,   KC_NA,   KC_NP,   KC_NP
          ),

     [NSL] = LAYOUT_miryoku(
          KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,
          KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
          KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
          KC_NP,   KC_NP,   KC_DOT,  KC_0,    KC_MINS, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
          ),

     [NSSL] = LAYOUT_miryoku(
          KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, KC_NA,   KC_NA,   KC_NA,   KC_NA,   KC_RST,
          KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, KC_NA,   KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
          KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, KC_NA,   KC_NA,   KC_NA,   KC_ALGR, KC_NA,
          KC_NP,   KC_NP,   KC_LPRN, KC_RPRN, KC_UNDS, KC_NA,   KC_NA,   KC_NA,   KC_NP,   KC_NP
          ),

     // Full Dvorak layout
     [DVORAK_FULL] = LAYOUT(
          KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,
          KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5,
          KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,
          KC_CAPS, KC_A, KC_O, KC_E, KC_U, KC_I,
          KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X,
          KC_GRV, KC_NO, KC_LEFT, LT(MEDR, KC_RIGHT),
          KC_LCTL, KC_LALT, KC_HOME, KC_BSPC, KC_DEL, KC_END,

          KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, KC_NO, KC_NO,
          KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS,
          KC_F, KC_G, KC_C, KC_R, KC_L, KC_SLSH,
          KC_D, KC_H, KC_T, KC_N, KC_S, KC_MINS,
          KC_B, KC_M, KC_W, KC_V, KC_Z, KC_RSFT,
          KC_UP, KC_DOWN, KC_LBRC, KC_RBRC,
          KC_RGUI, KC_RCTL, KC_PGUP, KC_PGDN, KC_ENT, KC_SPC
          ),

     // Full Qwerty layout */
     [QWERTY_FULL] = LAYOUT(
          KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,
          KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5,
          KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
          KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G,
          KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,
          KC_GRV, KC_INS, KC_LEFT, LT(MEDR, KC_RIGHT),
          KC_LCTL, KC_LALT, KC_HOME, KC_BSPC, KC_DEL, KC_END,

          KC_F9, KC_F10, KC_F11, KC_F12, KC_PSCR, KC_SLCK, KC_PAUS, KC_NO, KC_NO,
          KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
          KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS,
          KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
          KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
          KC_UP, KC_DOWN, KC_LBRC, KC_RBRC,
          KC_RGUI, KC_RCTL, KC_PGUP, KC_PGDN, KC_ENT, KC_SPC
          ),
};


     bool process_record_user(uint16_t keycode, keyrecord_t *record) {
          switch (keycode) {
          case KC_DVORAK:
          if (record->event.pressed) {
               set_single_persistent_default_layer(DVORAK);
          }
          return false;

          case KC_DVORAK_FULL:
          if (record->event.pressed) {
               set_single_persistent_default_layer(DVORAK_FULL);
          }
          return false;

          case KC_QWERTY_FULL:
          if (record->event.pressed) {
               set_single_persistent_default_layer(QWERTY_FULL);
          }
          return false;

          case KC_BASE:
          if (record->event.pressed) {
               set_single_persistent_default_layer(BASE);
          }
          return false;
          }

          return true;
     }

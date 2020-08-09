#include QMK_KEYBOARD_H

#define LAYOUT_reduced(\
     M00, K00, K01, K02, K03, K04,                        K05, K06, K07, K08, K09, M09, \
     M10, K10, K11, K12, K13, K14,                        K15, K16, K17, K18, K19, M19, \
     M20, K20, K21, K22, K23, K24,                        K25, K26, K27, K28, K29, M29, \
     M30, K30, K31, K32, K33, K34,                        K35, K36, K37, K38, K39, M39, \
          K40, K41, K42, K43,                                  K44, K45, K46, K47,      \
                                   K48, K49,    K50, K51,                               \
                                        K52,    K53,                                    \
                              K54, K55, K56,    K57, K58, K59                           \
)\
LAYOUT(\
___, ___, ___, ___, ___, ___, ___, ___, ___,\
M00, K00, K01, K02, K03, K04,         \
M10, K10, K11, K12, K13, K14,         \
M20, K20, K21, K22, K23, K24,         \
M30, K30, K31, K32, K33, K34,         \
     K40, K41, K42, K43,              \
                         K48, K49,    \
                              K52,    \
                    K54, K55, K56,    \
\
        ___, ___, ___, ___, ___, ___, ___, ___, ___,  \
        K05, K06, K07, K08, K09, M09,                 \
        K15, K16, K17, K18, K19, M19,                 \
        K25, K26, K27, K28, K29, M29,                 \
        K35, K36, K37, K38, K39, M39,                 \
             K44, K45, K46, K47,                      \
   K50, K51,                                          \
   K53,                                               \
   K57, K58, K59                                      \
)

#define LAYOUT_numless(\
     M10, K10, K11, K12, K13, K14,                        K15, K16, K17, K18, K19, M19, \
     M20, K20, K21, K22, K23, K24,                        K25, K26, K27, K28, K29, M29, \
     M30, K30, K31, K32, K33, K34,                        K35, K36, K37, K38, K39, M39, \
          K40, K41, K42, K43,                                  K48, K49, K50, K51,      \
                                   K44, K45,    K46, K47,                               \
                                        K52,    K53,                                    \
                              K54, K55, K56,    K57, K58, K59                           \
)\
LAYOUT_reduced(\
     ___, ___, ___, ___, ___, ___,                        ___, ___, ___, ___, ___, ___, \
     M10, K10, K11, K12, K13, K14,                        K15, K16, K17, K18, K19, M19, \
     M20, K20, K21, K22, K23, K24,                        K25, K26, K27, K28, K29, M29, \
     M30, K30, K31, K32, K33, K34,                        K35, K36, K37, K38, K39, M39, \
          K40, K41, K42, K43,                                  K48, K49, K50, K51,      \
                                   K44, K45,    K46, K47,                               \
                                        K52,    K53,                                    \
                              K54, K55, K56,    K57, K58, K59                           \
)\


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
     KC_DV = SAFE_RANGE,
     KC_DVF,
     KC_QW,
     KC_BASE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [DVORAK] = LAYOUT_numless(
___,     KC_QUOT, KC_COMM, KC_DOT,            KC_P,                KC_Y,                    KC_F,     KC_G,             KC_C,              KC_R, KC_L, ___,
KC_CAPS, KC_A,    KC_O,    KC_E,              KC_U,                KC_I,                    KC_D,     KC_H,             KC_T,              KC_N, KC_S, ___,
___,     KC_SCLN, KC_Q,    KC_J,              KC_K,                KC_X,                    KC_B,     KC_M,             KC_W,              KC_V, KC_Z, ___,
         ___,     ___,     MO(MOUR),          KC_LSPO,                                      KC_RSPC,  MO(FUNL),         ___,  ___,
                                                              KC_LGUI, ___,              ___, KC_RGUI,
                                                              LT(MEDR, KC_TAB),       LT(NSSL, KC_TAB),
                                     LCTL_T(KC_BSPC), LALT_T(KC_DEL), MO(NAVR),       MO(NSL), RALT_T(KC_ENT), RCTL_T(KC_SPC)
),

     [NAVR] = LAYOUT_numless(
          ___, KC_RST,  ___,     ___,     ___,     ___,        KC_ESC,  KC_TAB,  KC_UP,   KC_PGUP, KC_PGDN, ___,
          ___, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, ___,        KC_AGIN, KC_LEFT, KC_DOWN, KC_RGHT, KC_UNDO, ___,
          ___, ___,     KC_ALGR, ___,     ___,     ___,        KC_CUT,  KC_COPY, KC_PSTE, KC_BSPC, KC_DEL,  ___,
               ___,     ___,     ___,     ___,                          KC_HOME, KC_END,  ___,     ___,
                                          KC_TRNS, ___,        ___, KC_TRNS,
                                                   ___,        ___,
                                  KC_BSPC, KC_DEL, ___,        ___, KC_ENT, KC_SPC
          ),

     [MEDR] = LAYOUT_numless(
          ___, KC_RST,  ___,     ___,     ___,     ___,        KC_TOG, KC_MOD,  KC_HUI,  KC_SAI,  KC_VAI,  ___,
          ___, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, ___,        KC_NU,  KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, ___,
          ___, ___,     KC_ALGR, ___,     ___,     ___,        KC_DVF, KC_DV,   KC_QW,   ___,     ___,     ___,
               ___,     ___,     ___,     ___,                         KC_MUTE, ___,     ___,     ___,
                                          KC_TRNS, ___,        ___, KC_TRNS,
                                                   ___,        ___,
                                         ___, ___, ___,        ___, KC_MSTP, KC_MPLY
          ),

     [MOUR] = LAYOUT_numless(
          ___, KC_RST,  ___,     ___,     ___,     ___,        KC_NU,   KC_NU,   KC_NU,   KC_NU,   KC_NU,   ___,
          ___, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, ___,        KC_NU,   KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, ___,
          ___, ___,     KC_ALGR, ___,     ___,     ___,        KC_NU,   KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, ___,
               ___,     ___,     ___,     ___,                          KC_BTN2, ___,     ___,     ___,
                                          KC_TRNS, ___,        ___, KC_TRNS,
                                                   ___,        ___,
                                         ___, ___, ___,        ___, KC_BTN1, KC_BTN3
          ),

     [MBO] = LAYOUT_numless(
          ___, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ___,
          ___, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ___,
          ___, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, ___,
               ___,     ___,     ___,     ___,                          KC_BTN2, ___,     ___,     ___,
                                          KC_TRNS, ___,        ___, KC_TRNS,
                                                   ___,        ___,
                                         ___, ___, ___,        ___, KC_BTN1, KC_BTN3
          ),

     [FUNL] = LAYOUT_numless(
          ___, KC_F12, KC_F7,  KC_F8,  KC_F9, KC_PSCR,     ___, ___,     ___,     ___,     KC_RST,  ___,
          ___, KC_F11, KC_F4,  KC_F5,  KC_F6, KC_SLCK,     ___, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, ___,
          ___, KC_F10, KC_F1,  KC_F2,  KC_F3, KC_PAUS,     ___, ___,     ___,     KC_ALGR, ___,     ___,
               ___,    ___,    ___,    ___,                     ___, ___,     ___,     ___,
                                         KC_TRNS, ___,     ___, KC_TRNS,
                                                  ___,     ___,
                                     KC_APP, ___, ___,     ___, ___, ___
          ),

     [NSL] = LAYOUT_numless(
          ___, KC_LBRC, KC_7,   KC_8,  KC_9,    KC_RBRC,     ___, ___,     ___,     ___,     KC_RST,  ___,
          ___, KC_SCLN, KC_4,   KC_5,  KC_6,    KC_EQL,      ___, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, ___,
          ___, KC_GRV,  KC_1,   KC_2,  KC_3,    KC_BSLS,     ___, ___,     ___,     KC_ALGR, ___,     ___,
               ___,     KC_DOT, KC_0,  KC_MINS,                   ___,     ___,     ___,     ___,
                                           KC_TRNS, ___,     ___, KC_TRNS,
                                                    ___,     ___,
                                   KC_BSPC, KC_DEL, ___,     ___, KC_ENT, KC_SPC
          ),

     [NSSL] = LAYOUT_numless(
          ___, KC_LCBR, KC_AMPR, KC_ASTR, KC_UNDS, KC_RCBR,     ___, ___,     ___,     ___,     KC_RST,  ___,
          ___, KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS,     ___, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, ___,
          ___, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE,     ___, ___,     ___,     KC_ALGR, ___,     ___,
               ___,     KC_LPRN, KC_SLSH, KC_UNDS,                   ___,     ___,     ___,     ___,
                                          KC_TRNS, ___,         ___, KC_TRNS,
                                                   ___,         ___,
                                  KC_BSPC, KC_DEL, ___,         ___, KC_ENT, KC_SPC
          ),

     // Full Dvorak layout
     [DVORAK_FULL] = LAYOUT(
          KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,
          KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5,
          KC_TAB, KC_QUOT, KC_COMM, KC_DOT, KC_P, KC_Y,
          LT(MEDR, KC_CAPS), KC_A, KC_O, KC_E, KC_U, KC_I,
          KC_LSFT, KC_SCLN, KC_Q, KC_J, KC_K, KC_X,
          KC_GRV, KC_NO, KC_LEFT, KC_RIGHT,
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
          LT(MEDR, KC_CAPS), KC_A, KC_S, KC_D, KC_F, KC_G,
          KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,
          KC_GRV, KC_INS, KC_LEFT, KC_RIGHT,
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
     case KC_DV:
     if (record->event.pressed) {
          set_single_persistent_default_layer(DVORAK);
     }
     return false;

     case KC_DVF:
     if (record->event.pressed) {
          set_single_persistent_default_layer(DVORAK_FULL);
     }
     return false;

     case KC_QW:
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

#define IS_COMMAND (keyboard_report->mods == (MOD_BIT(KC_LGUI) | MOD_BIT(KC_RGUI)))

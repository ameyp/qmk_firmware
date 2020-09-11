#include "ameyp.h"

enum kinesis_keycodes {
     KC_DV = SAFE_RANGE,
     KC_DVF,
     KC_QW,
     KC_BASE,
     KC_TARK
};

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

#define LAYOUT_ameyp(\
     K10, K11, K12, K13, K14,                        K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                        K25, K26, K27, K28, K29, \
     K30, K31, K32, K33, K34,                        K35, K36, K37, K38, K39, \
                    K41, K42, K43, K44,    K45, K46, K47, K48                 \
)\
LAYOUT_reduced(\
     ___, ___, ___, ___, ___, ___,                            ___, ___, ___, ___, ___, ___,     \
     KC_LALT, K10, K11, K12, K13, K14,                        K15, K16, K17, K18, K19, KC_RALT, \
     KC_LCTL, K20, K21, K22, K23, K24,                        K25, K26, K27, K28, K29, KC_RCTL, \
     KC_LSFT, K30, K31, K32, K33, K34,                        K35, K36, K37, K38, K39, KC_RSFT, \
              ___, ___, K41, K42,                                  K47, K48, ___, ___,          \
                                       ___, ___,    ___, ___,                                   \
                                            ___,    ___,                                        \
                                  K43, K44, ___,    ___, K45, K46                               \
)\

#define LAYOUT_ameyp_gaming(\
     K00, K01, K02, K03, K04,                        K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                        K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                        K25, K26, K27, K28, K29, \
     K30, K31, K32, K33, K34,                        K35, K36, K37, K38, K39, \
                    K41, K42, K43, K44,    K45, K46, K47, K48                 \
)\
LAYOUT_reduced(\
     KC_ESC,  K00, K01, K02, K03, K04,                        K05, K06, K07, K08, K09, KC_NU,   \
     KC_LALT, K10, K11, K12, K13, K14,                        K15, K16, K17, K18, K19, KC_RALT, \
     KC_LCTL, K20, K21, K22, K23, K24,                        K25, K26, K27, K28, K29, KC_RCTL, \
     KC_LSFT, K30, K31, K32, K33, K34,                        K35, K36, K37, K38, K39, KC_RSFT, \
              ___, ___, K41, K42,                                  K47, K48, ___, ___,          \
                                       ___, ___,    ___, ___,                                   \
                                            ___,    ___,                                        \
                                  K43, K44, ___,    ___, K45, K46                               \
)\

#define LAYOUT_ameyp_gaming_wrapper(...) LAYOUT_ameyp_gaming(__VA_ARGS__)
#define LAYOUT_ameyp_wrapper(...) LAYOUT_ameyp(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     [DVORAK] = LAYOUT_ameyp_wrapper(
     ________DVORAK_L1________,                                  ________DVORAK_R1________,
     ________DVORAK_L2________,                                  ________DVORAK_R2________,
     ________DVORAK_L3________,                                  ________DVORAK_R3________,
     MO(MEDR), KC_LGUI, MO(NAVR), MO(MOUR),       LT(NSSL, KC_ENT), LT(NSL, KC_SPC), KC_RGUI, MO(FUNL)
),

     [NAVR] = LAYOUT_ameyp_wrapper(
     ________BLANK________,                           ________NAV_1________,
     ________MODS_L1________,                         ________NAV_2________,
     ________BLANK________,                           ________NAV_3________,
       ______BLANK______,                               ______NAV_4______
),

     [MEDR] = LAYOUT_ameyp_wrapper(
     ________BLANK________,                           ________MED_1________,
     ________MODS_L1________,                         ________MED_2________,
     ________BLANK________,                           ________MED_3________,
       ______BLANK______,                               ______MED_4______
),

     [MOUR] = LAYOUT_ameyp_wrapper(
     ________BLANK________,                           ________BLANK________,
     ________MODS_L1________,                         ________MOUR_1________,
     ________BLANK________,                           ________MOUR_2________,
       ______BLANK______,                               ______MOUR_3______
),

     [FUNL] = LAYOUT_ameyp_wrapper(
     ________FUNC_1________,                          ________BLANK________,
     ________FUNC_2________,                          ________MODS_R1________,
     ________FUNC_3________,                          ________BLANK________,
       ______BLANK______,                               ______BLANK______
),

     [NSL] = LAYOUT_ameyp_wrapper(
     ________NUM_1________,                           ________BLANK________,
     ________NUM_2________,                           ________MODS_R1________,
     ________NUM_3________,                           ________BLANK________,
       ______BLANK______,                               ______BLANK______
),

     [NSSL] = LAYOUT_ameyp_wrapper(
     ________SYM_1________,                           ________BLANK________,
     ________SYM_2________,                           ________MODS_R1________,
     ________SYM_3________,                           ________BLANK________,
       ______BLANK______,                               ______BLANK______
),

     [TARK] = LAYOUT_ameyp_gaming_wrapper(
     ________TARK_1________,                           ________BLANK________,
     ________TARK_2________,                           ________BLANK________,
     ________TARK_3________,                           ________MODS_R1________,
     ________TARK_4________,                           ________BLANK________,
       ______TARK_5______,                               ______BLANK______

),

     // Full Qwerty layout */
     [QWERTY_FULL] = LAYOUT(
          KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8,
          KC_EQL, KC_1, KC_2, KC_3, KC_4, KC_5,
          KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,
          KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G,
          KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B,
          KC_GRV, KC_INS, LT(MEDR, KC_LEFT), KC_RIGHT,
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

     case KC_QW:
     if (record->event.pressed) {
          set_single_persistent_default_layer(QWERTY_FULL);
     }
     return false;

     case KC_TARK:
     if (record->event.pressed) {
          set_single_persistent_default_layer(TARK);
     }
     return false;
     }

     return true;
}

#define IS_COMMAND (get_mods() == (MOD_BIT(KC_LGUI) | MOD_BIT(KC_RGUI)))

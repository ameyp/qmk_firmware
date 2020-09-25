#include "ameyp.h"

#ifdef PROTOCOL_LUFA
  #include "lufa.h"
  #include "split_util.h"
#endif

#define LAYOUT_ameyp(\
     K10, K11, K12, K13, K14,                        K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                        K25, K26, K27, K28, K29, \
     K30, K31, K32, K33, K34,                        K35, K36, K37, K38, K39, \
                    K41, K42, K43, K44,    K45, K46, K47, K48                 \
)\
LAYOUT( \
  ___,     ___, ___, ___, ___, ___,             ___, ___, ___, ___, ___, ___, \
  KC_LALT, K10, K11, K12, K13, K14,             K15, K16, K17, K18, K19, KC_RALT, \
  KC_LCTL, K20, K21, K22, K23, K24,             K25, K26, K27, K28, K29, KC_RCTL, \
  KC_LSFT, K30, K31, K32, K33, K34, ___,   ___, K35, K36, K37, K38, K39, KC_RSFT, \
                     K41, K42, K43, K44,   K45, K46, K47, K48            \
)

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
       ______NUM_4______,                               ______BLANK______
),

     [NSSL] = LAYOUT_ameyp_wrapper(
     ________SYM_1________,                           ________BLANK________,
     ________SYM_2________,                           ________MODS_R1________,
     ________SYM_3________,                           ________BLANK________,
       ______SYM_4______,                               ______BLANK______
),
};

#include QMK_KEYBOARD_H

#define LAYOUT_kinesis_reduced(\
     M00, K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, M09, \
     M10, K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, M19, \
     M20, K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, M29, \
     M30, K30, K31, K32, K33, K34,      K35, K36, K37, K38, K39, M39, \
               N40, N41, K42,                K43, N44, N45,           \
                         K46, K47,      K48, K49                      \
)\
LAYOUT(\
___, ___, ___, ___, ___, ___, ___, ___, ___,\
M00, K00, K01, K02, K03, K04,         \
M10, K10, K11, K12, K13, K14,         \
M20, K20, K21, K22, K23, K24,         \
M30, K30, K31, K32, K33, K34,         \
     ___, N40, N41, K42,              \
                         ___, ___,    \
                              ___,    \
                    K46, K47, ___,    \
\
        ___, ___, ___, ___, ___, ___, ___, ___, ___,  \
        K05, K06, K07, K08, K09, M09,         \
        K15, K16, K17, K18, K19, M19,         \
        K25, K26, K27, K28, K29, M29,         \
        K35, K36, K37, K38, K39, M39,         \
             K43, N44, N45, ___,              \
   ___, ___,                                  \
   ___,                                       \
   ___, K48, K49                                \
)

#define LAYOUT_miryoku(\
     K00, K01, K02, K03, K04,                K05, K06, K07, K08, K09,\
     K10, K11, K12, K13, K14,                K15, K16, K17, K18, K19,\
     K20, K21, K22, K23, K24,                K25, K26, K27, K28, K29,\
     N30, N31, K32, K33, K34,                K35, K36, K37, N38, N39 \
)\
LAYOUT_kinesis_reduced(\
___, ___, ___, ___, ___, ___,      ___, ___, ___, ___, ___, ___,   \
___, K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, ___,   \
___, K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, ___,   \
___, K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, ___,   \
          ___, ___, K32,                K37, ___, ___,             \
                    K33, K34,      K35, K36                        \
)

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

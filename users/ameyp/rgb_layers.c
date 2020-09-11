#include "rgb_layers.h"
#include "ameyp.h"

const rgblight_segment_t PROGMEM rgb_default[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HS_AZURE, 0x40});
const rgblight_segment_t PROGMEM rgb_qwerty[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HS_RED, 0x40});
const rgblight_segment_t PROGMEM rgb_tarkov[] = RGBLIGHT_LAYER_SEGMENTS({0, 1, HS_GOLD, 0x40});

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_default,
    rgb_qwerty,
    rgb_tarkov
);

void keyboard_pre_init_user(void) {
    rgblight_disable();
}

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom(); // Enables RGB, without saving settings
    rgblight_sethsv_noeeprom(HS_CYAN, 0x0);
    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);

    // Enable LED layers
    rgblight_layers = my_rgb_layers;
    rgblight_set_layer_state(0, true);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state|default_layer_state, DVORAK));
    rgblight_set_layer_state(1, layer_state_cmp(state|default_layer_state, QWERTY_FULL));
    rgblight_set_layer_state(2, layer_state_cmp(state|default_layer_state, TARK));
    return state;
}

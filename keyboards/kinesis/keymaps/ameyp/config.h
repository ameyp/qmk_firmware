#pragma once

// place overrides here

// default but used in macros
#define TAPPING_TERM 200

// Recommended for heavy chording.
#define QMK_KEYS_PER_SCAN 4

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          50
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       15
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      5
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    10

// Mouse wheel settings
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSE_WHEEL_INTERVAL
#define MOUSE_WHEEL_INTERVAL    15
#undef MOUSE_WHEEL_MAX_SPEED
#define MOUSE_WHEEL_MAX_SPEED   100
#undef MOUSE_WHEEL_TIME_TO_MAX
#define MOUSE_WHEEL_TIME_TO_MAX 0

#define STM32_SYSCLK KINETIS_SYSCLK_FREQUENCY
#define NOP_FUDGE 0.4
#define RGB_DI_PIN LINE_PIN28
#define RGBLED_NUM 11
#define RGBLIGHT_LAYERS

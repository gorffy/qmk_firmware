#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6464
#define DEVICE_VER      0x0001

//  Modified by Xydane
#define MANUFACTURER "QMK"
#define PRODUCT "Will's Macro Board"
#define DESCRIPTION "QMK keyboard firmware with ChibiOS"

/* key matrix size */
//  Modified by Xydane
#define MATRIX_ROWS 2
#define MATRIX_COLS 4
#define DIODE_DIRECTION COL2ROW
#define DEBOUNCE 5
#define NO_ACTION_LAYER

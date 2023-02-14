// Copyright 2022 Aiden (@Hyper-works)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/*key matrix*/
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

#define MATRIX_COL_PINS { D1, D0, D4, C6, D7, E6, B4, B2, B3, B1, F7, F6, F5, F4 }
#define MATRIX_ROW_PINS { B5, B7, D5, C7, F1 }
#define DIODE_DIRECTION COL2ROW

/*encoder*/
#define ENCODERS_PAD_A { F0 }
#define ENCODERS_PAD_B { B6 }
#define ENCODER_RESOLUTION 2

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

// Copyright 2026 Ryan Le
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* Key matrix: 3 rows x 4 cols (col 3 only used by the encoder switch) */
#define MATRIX_ROW_PINS { C6, D7, E6 }
#define MATRIX_COL_PINS { B5, B6, D4, B4 }

/* Diode cathodes go to the rows */
#define DIODE_DIRECTION COL2ROW

/* EC11 rotary encoder */
#define ENCODERS_PAD_A { F6 }
#define ENCODERS_PAD_B { F7 }
#define ENCODER_RESOLUTION 4

#define DEBOUNCE 5

/* Vial */
#define VIAL_KEYBOARD_UID {0x8E, 0x2C, 0x41, 0xD7, 0x5B, 0x93, 0xA0, 0x16}

/* Unlock combo = hold S1 (0,0) + S3 (0,2) */
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 2 }

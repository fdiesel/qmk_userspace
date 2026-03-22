// Copyright 2024 splitkb.com (support@splitkb.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// -- Tap-hold settings --
#define TAPPING_TERM 200
#define CHORDAL_HOLD
#define PERMISSIVE_HOLD
#define FLOW_TAP_TERM 150

// -- RGB Matrix defaults: sky blue breathing --
// Hue 145 ≈ 205° (electric azure-blue), Sat 210, Val 160, slow breath
#define RGB_MATRIX_DEFAULT_ON      true
#define RGB_MATRIX_DEFAULT_MODE    RGB_MATRIX_SOLID_COLOR
#define RGB_MATRIX_DEFAULT_HUE     145
#define RGB_MATRIX_DEFAULT_SAT     210
#define RGB_MATRIX_DEFAULT_VAL     160

#define RGB_MATRIX_SLEEP               // turn off when PC suspends

// Fine-tuning step sizes (used by RM_* keycodes in ADJUST layer)
#define RGB_MATRIX_HUE_STEP  8
#define RGB_MATRIX_SAT_STEP  16
#define RGB_MATRIX_VAL_STEP  16
#define RGB_MATRIX_SPD_STEP  10

// Effects (keep selection small to save flash space)
#define ENABLE_RGB_MATRIX_BREATHING
#define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT
#define ENABLE_RGB_MATRIX_BAND_VAL
#define ENABLE_RGB_MATRIX_CYCLE_SPIRAL
#define ENABLE_RGB_MATRIX_STARLIGHT

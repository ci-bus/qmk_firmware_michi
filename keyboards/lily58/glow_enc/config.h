/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert
Copyright 2017 F_YUUCHI
Copyright 2020 Ben Roesner (keycapsss.com)
Copyright 2022 Miguelio (miguelio.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* key matrix size */
#define MATRIX_ROWS 10
#define MATRIX_COLS 6
#define DIODE_DIRECTION COL2ROW

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define SOFT_SERIAL_PIN D2

/* ws2812 RGB LED */
#define RGB_DI_PIN D3
#define RGBLED_NUM 72
#define RGBLED_SPLIT { 36, 36 }
#define RGBLIGHT_SPLIT
#define WS2812_TRST_US 80

/* Encoders */
#define ENCODERS_PAD_A { D4 }
#define ENCODERS_PAD_B { F5 }
#define ENCODERS_PAD_A_RIGHT { F5 }
#define ENCODERS_PAD_B_RIGHT { D4 }
#define ENCODER_RESOLUTION 4
#define TAP_CODE_DELAY 5

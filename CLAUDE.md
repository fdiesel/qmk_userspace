# QMK Userspace — Halcyon Kyria Rev4

## Project Overview

This is a QMK userspace for the **Splitkb Halcyon Kyria Rev4** split keyboard. The active keymap lives at:

```
keyboards/splitkb/halcyon/kyria/keymaps/fdiesel_hlc/
```

## Build

```bash
qmk userspace-compile
```

Build target (defined in `qmk.json`):
- Board: `splitkb/halcyon/kyria/rev4`
- Keymap: `fdiesel_hlc`
- Flags: `HLC_TFT_DISPLAY=1`
- Output: `kyria_fdiesel_tft`

## Keymap Structure

**File:** `keymap.c`

### Layers (0–6)

| # | Name | Purpose |
|---|------|---------|
| 0 | `_QWERTY` | Base layer |
| 1 | `_NUMBERS` | Numpad |
| 2 | `_SYM` | Symbols |
| 3 | `_NAV` | Navigation & media |
| 4 | `_FUNCTION` | Function keys |
| 5 | `_CMD` | Command shortcuts |
| 6 | `_ADJUST` | RGB matrix controls |

### Key Features

- **Homerow mods**: `HR_A`–`HR_SCLN` (hold for Ctrl/Alt/Shift/GUI)
- **German umlauts**: `CU_AE`, `CU_OE`, `CU_UE`, `CU_SU`, `CU_EU` via AltGr combos
- **Custom punctuation**: `CU_QUOT`, `CU_DQUO`, `CU_GRV` with spacing logic
- **Encoder map**: 2 active encoders across all 7 layers — left half (encoder 0, volume) and right half (encoder 2, page up/down); indices 1 and 3 are unused (module slot, `NO_PIN`)

## RGB Configuration

Defined in `config.h`. Default: solid sky-blue (`HUE=145`, `SAT=210`, `VAL=160`).

Enabled effects: `CYCLE_LEFT_RIGHT`, `GRADIENT_LEFT_RIGHT`, `BAND_VAL`, `CYCLE_SPIRAL`, `STARLIGHT`.

RGB sleep enabled (`RGB_MATRIX_SLEEP`).

## Hardware Modules

Provided via `users/halcyon_modules/` and selected in `rules.mk` with `USER_NAME := halcyon_modules`.

| Module | Flag | Used |
|--------|------|------|
| TFT display | `HLC_TFT_DISPLAY=1` | Yes — both halves |
| Cirque trackpad | `HLC_CIRQUE_TRACKPAD=1` | No |
| Encoder module | `HLC_ENCODER=1` | No — conflicts with TFT (shared pins GP16/GP26/GP27) |

**Encoders**: Two rotary encoders are soldered directly to the PCB (not via modules) — one on each half. Left encoder sits left of the Windows key; right encoder sits right of the Windows key. They use the built-in PCB pins (`GP23`/`GP22`) and are handled by `ENCODER_MAP_ENABLE` in `rules.mk`.

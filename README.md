# Macropad9 — Vial firmware

3×3 MX matrix + EC11 encoder on a Pro Micro (ATmega32U4), designed in KiCad.

## Hardware map

| Net | Pro Micro pin |
|---|---|
| Column 0–3 | B5, B6, D4, B4 |
| Row 0–2 | C6, D7, E6 |
| Encoder A / B | F6 / F7 |
| Encoder switch | matrix (2,3) via D10 |

Diode direction: **COL2ROW** (cathodes to the rows).

## Default keymap

| Key | Sends | Action |
|---|---|---|
| S1 | F13 | Whoop → Excel sync .bat (AHK) |
| S2 | F14 | plan_run.bat (AHK) |
| S3 | F15 | Open Claude (AHK) |
| S4 | Win+Shift+S | Snip — native |
| S5 | PrtSc | Screenshot — native |
| S6 | Ctrl+Shift+Esc | Task Manager — native |
| S7 | F16 | YouTube (AHK) |
| S8 | F17 | LUCIAN Excel file (AHK) |
| S9 | F18 | Sleep PC (AHK) |
| Encoder turn | Vol −/+ | native |
| Encoder press | Mute | native |

Vial unlock combo: hold **S1 + S3**.

## Build

1. Push this repo to GitHub.
2. Actions → "Build Macropad9 firmware" → run it (it also runs on every push).
3. Download the `macropad9_vial_hex` artifact when it finishes (~3–5 min).

## Flash

1. Install [QMK Toolbox](https://github.com/qmk/qmk_toolbox/releases).
2. Open the `.hex`, set MCU to **atmega32u4**.
3. Plug the macropad in, tick Auto-Flash, then reset the Pro Micro: short
   **RST to GND twice quickly**. Caterina's bootloader window is ~8 seconds.

## Windows side

1. Install [AutoHotkey v2](https://www.autohotkey.com/).
2. Edit the paths at the top of `ahk/macropad.ahk`.
3. Run it, then test each key.
4. To start it with Windows: press `Win+R`, type `shell:startup`, and put a
   shortcut to the script in that folder.

## Remapping later

Install the [Vial app](https://get.vial.today/). It detects the board, and you
can change any key, the encoder and the layers live — no reflashing. The AHK
script is what decides *what* F13–F18 do, so app changes happen there.

# Keypad-Interfacing
A 4x4 Membrane Keypad is mapped with STM32F407 board. Key detection is recognized by board LEDs as programmed.

### Objective:
If pressed
- 1 - Blink LD3 (Orange) 1x
- 2 - Blink LD4 (Green) 1x
- 3 - Blink LD5 (Red) 1x
- A - Blink LD6 (Blue) 1x
- 4 - Blink LD3 (Orange) 2x
- 5 - Blink LD4 (Green) 2x
- 6 - Blink LD5 (Red) 2x
- B - Blink LD6 (Blue) 2x
- 7 - Blink LD3 (Orange) 3x
- 8 - Blink LD4 (Green) 3x
- 9 - Blink LD5 (Red) 3x
- C - Blink LD6 (Blue) 3x
- \* - Blink LD3 (Orange) 4x
- 0 - Blink LD4 (Green) 4x
- \# - Blink LD5 (Red) 4x
- D - Blink LD6 (Blue) 4x
 
 ### Mapping:
 8x pins of Keypad - MCU mapped
 1. R1 -> PD0
 2. R2 -> PD1
 3. R3 -> PD2
 4. R4 -> PD3
 5. C1 -> PD8
 6. C2 -> PD9
 7. C3 -> PD10
 8. C4 -> PD11

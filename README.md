# STM32 Microcontroller Lab

Lab exercises for STM32F103C6 microcontroller course covering embedded systems fundamentals.

## Lab 1 - GPIO, Delay & LED Animations
- Focus: GPIO, LED control, STM32CubeIDE, Proteus simulation.
- **Exercise 1**: Add a second LED (PA6, yellow) to alternate with the first LED (PA5).
- **Exercise 2**: Extend with a third LED, create a simple blinking sequence.
- **Exercise 3**: Design a 4-way traffic light system with 12 LEDs, arranged aesthetically.
- **Exercise 4**: Integrate a 7-segment LED (common anode), display basic numbers.
- **Exercise 5**: Add countdown to the traffic light using the 7-segment display.
- **Exercise 6**: Simulate a clock with 12 LEDs in a circular pattern.
- **Exercise 7**: Implement clearAllClock() to turn off all 12 LEDs.
- **Exercise 8**: Implement setNumberOnClock(int num) to light specific LEDs (0-11).
- **Exercise 9**: Implement clearNumberOnClock(int num) to turn off specific LEDs.
- **Exercise 10**: Create a full clock simulation with hour/minute/second LEDs.

## Lab 2 - Timer
- Focus: Timer interrupt, LED scanning, 7-segment display.
- **Exercise 1**: Connect and display on multiple 7-segment LEDs.
- **Exercise 2**: Expand to 4 7-segments and 2 DOT LEDs, use timer callback for scanning.
- **Exercise 3**: Implement update7SEG(int index) with led_buffer for 4-digit display.
- **Exercise 4**: Adjust timer to make 7-segments blink every second.
- **Exercise 5**: Build a digital clock (hour, minute) on 2 7-segments.
- **Exercise 6**: Use software timer for countdown, handle real-time processing.
- **Exercise 7**: Upgrade clock with seconds using software timer, avoid HAL_Delay.
- **Exercise 8**: Move update7SEG() to main loop, add a second timer if needed.
- **Exercise 9**: Add LED Matrix, display "A" using matrix_buffer.
- **Exercise 10**: Create a left-shifting animation on LED Matrix.

## Lab 3 - Buttons/Switches
- Focus: Button input, debouncing, FSM, traffic light system.
- **Exercise 1**: Sketch an FSM for button and mode handling.
- **Exercise 2**: Draw a Proteus schematic with STM32, buttons, and LEDs.
- **Exercise 3**: Set up a basic STM32 project for input/output.
- **Exercise 4**: Adjust timer parameters for debouncing.
- **Exercise 5**: Add debouncing code for button inputs.
- **Exercise 6**: Display mode on 7-segment and make LEDs blink accordingly.
- **Exercise 7**: Increase red LED time on button press.
- **Exercise 8**: Increase amber LED time on button press.
- **Exercise 9**: Increase green LED time or integrate all modes.
- **Exercise 10**: Finalize project, demo with video, submit report.

## Lab 4 - Finite State Machine (FSM)
- Upcoming

## Lab 5 - Real-time clock
- Upcoming

## Lab 6 - ADC and PWM
- Upcoming

## Lab 7 - UART
- Upcoming

## Hardware & Tools

- Microcontroller: STM32F103C6
- IDE: STM32CubeIDE
- Simulation: Proteus
- Language: C

## Getting Started

```bash
git clone https://github.com/thanhtoan23/STM32-Workspace.git
```

Open the desired lab folder in STM32CubeIDE, build, and flash to the STM32 board or run in Proteus simulation.

## Author

Thanh Toan - [@thanhtoan23](https://github.com/thanhtoan23)
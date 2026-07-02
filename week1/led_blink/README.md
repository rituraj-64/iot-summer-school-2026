# LED Blink Project

## Project Title

**Arduino LED Blink with Potentiometer Speed Control**

## Project Overview

This project demonstrates the basic operation of an LED using an Arduino Uno. The LED blinks continuously, and the blink speed can be adjusted using a potentiometer. The program also displays the blink count on the Serial Monitor.

## Hardware Required

* Arduino Uno
* LED
* 220 Ω resistor
* 10 kΩ potentiometer
* Breadboard
* Jumper wires
* USB cable

## Circuit Diagram Description

* Connect the LED anode (+) to Arduino digital pin 13 through a 220 Ω resistor.
* Connect the LED cathode (−) to GND.
* Connect one outer pin of the potentiometer to 5V.
* Connect the opposite outer pin of the potentiometer to GND.
* Connect the middle (wiper) pin of the potentiometer to analog pin A0.

## How to Upload Code

1. Connect the Arduino Uno to the computer using a USB cable.
2. Open the Arduino IDE.
3. Open the `led_blink.ino` sketch.
4. Select **Tools → Board → Arduino Uno**.
5. Select the correct COM port under **Tools → Port**.
6. Click the **Verify** button to compile the code.
7. Click the **Upload** button to upload the program to the Arduino.
8. Open the Serial Monitor (9600 baud) to view the blink count.

## Expected Output

* The LED blinks continuously.
* The potentiometer changes the blinking speed.
* The Serial Monitor displays:

  ```
  Blink count: 1
  Blink count: 2
  Blink count: 3
  ...
  ```

## Troubleshooting Tips

1. Verify that the correct Arduino board and COM port are selected.
2. Check all wiring connections, especially the LED polarity and potentiometer connections.
3. Ensure the baud rate of the Serial Monitor is set to **9600**.
4. Confirm that the resistor is connected in series with the LED.
5. If the LED does not blink, verify that the code has been uploaded successfully.
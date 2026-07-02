/*
 * Project:     LED Blink - Potentiometer Controlled (non-blocking)
 * File:        led_blink.ino
 * Author:      Ritu Raj (Roll: 25BEC064)
 * Date:        2026-07-02
 * Description: Blinks the on-board LED (pin 13). A potentiometer on A0 sets the
 *              blink interval (100-1000 ms), sampled every loop so the speed
 *              responds instantly. Blink count printed to the Serial Monitor.
 * Board:       Arduino UNO
 */

const uint8_t LED_PIN = 13;   // on-board LED
const uint8_t POT_PIN = A0;   // potentiometer wiper

unsigned long blinkCount    = 0;
unsigned long previousMillis = 0;   // last time the LED toggled
int ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Sample the pot on EVERY pass so a change is felt immediately.
  int potValue = analogRead(POT_PIN);
  int interval = map(potValue, 0, 1023, 100, 1000);

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= (unsigned long)interval) {
    previousMillis = currentMillis;
    ledState = (ledState == LOW) ? HIGH : LOW;   // flip the LED
    digitalWrite(LED_PIN, ledState);

    if (ledState == HIGH) {        // one full blink per ON transition
      blinkCount++;
      Serial.print("Blink count: ");
      Serial.println(blinkCount);
    }
  }
}
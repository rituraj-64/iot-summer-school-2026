const uint8_t LED_PIN = 13;   // on-board LED
const uint8_t POT_PIN = A0;   // potentiometer wiper

unsigned long blinkCount = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Map the potentiometer (0-1023) to a blink interval of 100-1000 ms.
  int potValue = analogRead(POT_PIN);
  int interval = map(potValue, 0, 1023, 100, 1000);

  digitalWrite(LED_PIN, HIGH);
  delay(interval);
  digitalWrite(LED_PIN, LOW);
  delay(interval);

  blinkCount++;
  Serial.print("Blink count: ");
  Serial.println(blinkCount);
}
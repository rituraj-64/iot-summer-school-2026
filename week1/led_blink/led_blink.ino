const uint8_t LED_PIN = 13;
unsigned long blinkCount = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);

  blinkCount++;
  Serial.print("Blink count: ");
  Serial.println(blinkCount);
}
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button_pin)) {
    direction = !direction;
    if (direction) // clockwise
      Serial.println("Clockwise...");
    else
      Serial.println("Anti-clockwise...");
    digitalWrite(DIR1, direction);
    digitalWrite(PWM1, !direction);
    delay(2000);
  }
}

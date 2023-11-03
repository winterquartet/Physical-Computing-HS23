
int pinNumber = 11;
void setup() {
  pinMode(11, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  dot();
  dot();
  dot();
  dash();
  dash();
  dash();
  dot();
  dot();
  dot();
}

void dot() {
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  delay(500);
}

void dash() {
  digitalWrite(11, HIGH);
  delay(2000);
  digitalWrite(11, LOW);
  delay(2000);
}

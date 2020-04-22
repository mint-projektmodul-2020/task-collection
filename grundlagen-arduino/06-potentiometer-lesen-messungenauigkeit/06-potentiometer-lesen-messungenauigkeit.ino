#define POT_PIN A0

int value = 1000;
int newValue;

void setup() {
  pinMode(POT_PIN, INPUT);
  Serial.begin(9600);
}

void loop() {
  newValue = analogRead(POT_PIN);
  
  // Only if the value changed by at least 6 (guessed value)
  // "||" means "or"
  if ((newValue < value - 6) || (newValue > value + 6)) {
    value = newValue;
    Serial.print("Value: ");
    Serial.println(value);
  }
  
  delay(100);  
}

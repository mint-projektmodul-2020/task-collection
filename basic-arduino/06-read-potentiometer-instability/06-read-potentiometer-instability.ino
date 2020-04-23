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
  // "||" means "or", "&&" means "and"
  if ((newValue < value - 6) || (newValue > value + 6)) {
    value = newValue;
    Serial.print("Value: ");
    Serial.println(value);
  }

  // With "||" only one condition has to be true in order for
  // the "conditional code" to be executed.
  // With "&&" both conditions have to be true.
  // Make sure to use braces "("/")" to clarify you logik
  
  delay(100);  
}

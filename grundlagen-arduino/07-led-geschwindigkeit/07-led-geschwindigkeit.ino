#define LED_PIN 10
#define POT_PIN A0

int value;

void setup() {
  pinMode(POT_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  value = analogRead(POT_PIN);
  digitalWrite(LED_PIN, HIGH);

  // Make the amount of waiting time depend on "value"
  delay(value/5);        
  
  digitalWrite(LED_PIN, LOW);

  // Make the amount of waiting time depend on "value"
  delay(value/5);  
}

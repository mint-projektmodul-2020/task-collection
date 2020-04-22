#define POT_PIN A0

// arbitrary starting value 
int value = 1000;
int newValue;

void setup() {
  pinMode(POT_PIN, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  newValue = analogRead(POT_PIN);
  
  // Only print the value if it changed
  if (newValue != value) {
    value = newValue;
    Serial.print("Value: ");
    Serial.println(value);
  }
  
  delay(100);  
}

#define POT_PIN A0

int value;

void setup() {
  // initialize analog pin A0 as an input
  pinMode(POT_PIN, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  value = analogRead(POT_PIN);
  Serial.print("Value: ");
  Serial.println(value);
  
  delay(100);  
}

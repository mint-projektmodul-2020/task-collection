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
  // "!=" is the "not equal" comparator
  // "==" is the "equal" comparator
  if (newValue != value) {
    value = newValue;
    Serial.print("Value: ");
    Serial.println(value);
  }

  // "<" and ">" as well as "<=" and ">=" can also 
  // be used for greater/less (equal) than comparisons
  
  delay(100);  
}

#define POT_PIN A0

// We have to store the value we measure somewhere. We use variables
// for that. To use them in our code we have to reserve memory space
// first by defining a type (here: "int") and a name (here: "value")
int value;

// The "int" type can only store whole numbers
// The "float" type can also store numbers with a fractional component

void setup() {
  // initialize analog pin A0 as an input
  pinMode(POT_PIN, INPUT);
  
  Serial.begin(9600);
}

void loop() {
  // We can easily assign a value to the variable with "=" ...
  value = analogRead(POT_PIN);
  Serial.print("Value: ");
  Serial.println(value);  // ... and use that value afterwards
  
  delay(100);  
}

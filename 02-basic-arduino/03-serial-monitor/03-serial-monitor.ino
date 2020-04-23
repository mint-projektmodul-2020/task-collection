
int counter = 0;

void setup() {
  // begin communication with serial monitor
  Serial.begin(9600);
}

void loop() {
  // Print something to the Serial monitor
  Serial.print("Counter: ");
  Serial.println(counter);  // next print/println after this one in new line
  
  delay(500);  
  counter = counter + 1;
}

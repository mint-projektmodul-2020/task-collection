// We can define constants at the beginning of our script
#define LED_PIN 10

void setup() {
  // initialize digital pin 10 as an output
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(200);        
  
  digitalWrite(LED_PIN, LOW);
  delay(400);  
  
  digitalWrite(LED_PIN, HIGH);
  delay(800);        
  
  digitalWrite(LED_PIN, LOW);
  delay(400);   
}

// The resulting blinking should, again, look something like this:
// **____********____ ... and so on

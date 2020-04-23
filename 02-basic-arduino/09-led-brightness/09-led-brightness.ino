#define LED_PIN 10
#define POT_PIN A0

int maxValue = 1024;
int minValue = 0;
float periodLength = 0.01; // Now very small!
float delayFactor = (periodLength/(maxValue-minValue)) * 1000;  

int value;

void setup() {
  pinMode(POT_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  value = analogRead(POT_PIN);

  // kicked out the minValue/maxValue adjustment because with a very small
  // period length it is rather useless
  
  digitalWrite(LED_PIN, HIGH);
  delay(value * delayFactor);

  
  digitalWrite(LED_PIN, LOW);
  delay((maxValue - value) * delayFactor);  
}

// Since the frequency is decently high we cannot not see the flickering 
// with our eyes anymore

// Still the "total amount of light power per time" depends on the duty 
// cycle

#define LED_PIN 10
#define POT_PIN A0


// The factor "periodLength" is just for visual purposes
// feel free to maniupulate it and see what happens
int maxValue = 800;
int minValue = 200;
float periodLength = 0.2;
float delayFactor = (periodLength/(maxValue-minValue)) * 1000;  

// "/" means "divide by" and "*" means "multiply by"

int value;

void setup() {
  pinMode(POT_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  value = analogRead(POT_PIN);

  
  // ****** you can ignore these ************************************************
  // These lines are just testing out the actual maximum value measured
  if (value > maxValue) {
    maxValue = value;
    delayFactor = (periodLength/(maxValue-minValue)) * 1000;
  }
  // Same for the minimum value
  if (value < minValue) {
    minValue = value;
    delayFactor = (periodLength/(maxValue-minValue)) * 1000;
  }
  // ****************************************************************************       
  
  
  digitalWrite(LED_PIN, HIGH);
  delay(value * delayFactor);

  
  digitalWrite(LED_PIN, LOW);
  // Make the total amount of waiting time in one loop always be the same
  // -> The amount of time "left to wait" is spent here
  delay((maxValue - value) * delayFactor);  
}

// The frequency remains the same but the fractional amount of the time
// when the LED is turned on/off varies
// This is called "Pulsweitenmodulation (PWM)" or "Pulsdauermodulation 
// (PDM)" -> https://www.elektronik-kompendium.de/sites/kom/0401111.htm

// We can vary the amount of "power" not just by varying the voltage
// but also by varying the "duty cycle" = the on/off ratio

// For LED's a linear brightness regulation is way easier with PWM than 
// with voltage variation!

// Sidenote: Even when the potentiometer measures 0 the LED will still be 
// turned on for a very small time. Even thougb we have "delay(0)" the code 
// needs some time to execute

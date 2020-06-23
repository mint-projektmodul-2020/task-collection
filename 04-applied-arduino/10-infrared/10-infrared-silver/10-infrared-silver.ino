
// You have to include the IR library
#include <IRremote.h>

// Translation-table for the SILVER REMOTE
enum IR_CODE_SILVER {
  CH_MINUS = 16753245,
  CH = 16736925,
  CH_PLUS = 16769565,
  
  PREVIOUS = 16720605,
  NEXT = 16712445,
  PLAY_PAUSE = 16761405,

  MINUS = 16769055,
  PLUS = 16754775,
  EQ = 16748655,
  
  NUM_0 = 16738455,
  NUM_100 = 16750695,
  NUM_200 = 16756815,
  
  NUM_1 = 16724175,
  NUM_2 = 16718055,
  NUM_3 = 16743045,
  NUM_4 = 16716015,
  NUM_5 = 16726215,
  NUM_6 = 16734885,
  NUM_7 = 16728765,
  NUM_8 = 16730805,
  NUM_9 = 16732845,
  
  HOLD_KEY = 4294967295
};

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);     // Receiver-Object managing the detection
decode_results raw_result;   // Storing the raw result
enum IR_CODE_SILVER result;  // Storing the pretty result

void setup() {
  Serial.begin(9600);

  irrecv.enableIRIn();
}

void loop() {
  
  // As long as data is being received -> Store the raw result
  while (irrecv.decode(&raw_result)) {
    
    // Translate into pretty result
    result = (enum IR_CODE_SILVER)raw_result.value;
    
    if (result == NUM_1) {
      Serial.println("started pressing 1");
    } else if (result == NUM_2) {
      Serial.println("started pressing 2");
    } else if (result == MINUS) {
      Serial.println("started pressing MINUS");
    }  else if (result == HOLD_KEY) {
      Serial.println("... holding ...");
    } else {
      Serial.println("started pressing an unknown key");
    }

    // Wait for next value to be received
    irrecv.resume();
  }
  
  // ... other program code ...
  
}

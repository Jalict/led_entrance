#include <Time.h>

const int TIME_ON = 4; // How long the timer should be  (In seconds)

void setup() {
  pinMode(9, INPUT);
  pinMode(8, OUTPUT);
  
  // Lets assume the door is closed
  // LED is turned off
  digitalWrite(8, false);
  
  // Stupid ideas:
  //   Give it a small speaker which can greet the door opener 
}

void loop() {
  if(hour() > 19 || hour() < 8) {   // If time is between 19:00 and 8:00)
    if(digitalRead(9) == 0) {       // If the door is opened
      digitalWrite(8, true);        // Turn on the LED
      delay(TIME_ON * 1000);        // And wait TIME_ON seconds
    } else {                        // If door is closed
      digitalWrite(8, false);       // Turn off the LED
    }
  }    
}

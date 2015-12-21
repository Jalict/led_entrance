#include <Time.h>

void setup() {
  Serial.begin(9600);
  pinMode(9, INPUT);
  pinMode(8, OUTPUT);
  
  // Lets assume the door is closed
  // Make LED is turned off
  // Get time of the day (?)
}

void loop() {
  // digitalWrite(8, digitalRead(9));
  Serial.println(hour() +":"  + second());
  // Check time of the day, if between certain timeslot, then proceed
    // Check if digitalRead(9) outputs 1 (door opened), if yes, proceed
      // Turn on LED
      // Delay certain amount of time
    // Else
      // Turn off LED

  if(hour() > 19 || hour() < 8) { // If time is between 19:00 and 8:00)
    if(digitalRead(9) == 0) {
      digitalWrite(8, true);
      delay(4000);
    } else {
      digitalWrite(8, false);
    }
  }    
}

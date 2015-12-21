//#include <Time.h>

/**
 ** @author Frans 'Jalict' Larsen
 ** Script to check if a IR light is blocked by object, if not, then turn on a light for TIME_ON seconds.
 ** Used for my home entrance to turn on some LED lights if I enter the house by night.
 **
 ** Currently works inverse for testing purpose
 ** (BUG: If door is closed and opened meanwhile waiting, then it wont stay active)
 ** Ideas:
 **   Give it a small speaker which can greet the door opener
 **   Light intensity depending on time of the day
 **/

const int TIME_ON = 4; // How long the timer should be  (In seconds)

void setup() {
  pinMode(9, INPUT);
  pinMode(8, OUTPUT);
  
  // Lets assume the door is closed
  // LED is turned off
  digitalWrite(8, false);
  

}

void loop() {
  //if(hour() > 19 || hour() < 8) { // If time is between 19:00 and 8:00)
    if(digitalRead(9)) {            // If the door is opened
      digitalWrite(8, false);       // Turn on the LED
    } else {                        // If door is closed
      digitalWrite(8, true);        // Turn off the LED
      delay(TIME_ON * 1000);        // And wait TIME_ON seconds 
    }
  //}    
}

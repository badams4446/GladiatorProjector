
#include <Arduino.h>
#include "Adafruit_CircuitPlayground.h" // Local project library


// Runs about 45 MHz
// Build is compile 
// RAM: [==   ] 16%
// Flash: [= ] 14% Program code and not data file. 



void setup() {
  Serial.begin(115200); // 115200 bits per second
  CircuitPlayground.begin(); // Initialize the Circuit Playground board
}



void loop() {
  CircuitPlayground.redLED(HIGH);
  delay(500); // Blocking technique, this does not allow other code to run
  // Can use timers to do this without blocking
  CircuitPlayground.redLED(LOW);
  delay(500); // Blocking technique, this does not allow other code to run
  Serial.print("HelloWorld!"); // Prints

  float X = CircuitPlayground.motionX();
  Serial.print("Motion X: ");
  Serial.println(X);
}






// // put function declarations here:
// int myFunction(int, int);

// void setup() {
//   // put your setup code here, to run once:
//   // int result = myFunction(2, 3);
//   CircuitPlayground.begin();
// }

// void loop() {
//   // put your main code here, to run repeatedly:
// }

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }
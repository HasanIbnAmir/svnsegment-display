#include<Arduino.h>
byte pin[] = {2, 3, 4, 5, 6, 7, 8, 9}; // Arduino pins for segments

int number[10][8] = { // Number array for digits 0-9 (A-G, DP)
// A B C D E F G H
  {1,1,1,1,1,1,0,0}, // 0
  {0,1,1,0,0,0,0,0}, // 1
  {1,1,0,1,1,0,1,0}, // 2
  {1,1,1,1,0,0,1,0}, // 3
  {0,1,1,0,0,1,1,0}, // 4
  {1,0,1,1,0,1,1,0}, // 5
  {1,0,1,1,1,1,1,0}, // 6
  {1,1,1,0,0,0,0,0}, // 7
  {1,1,1,1,1,1,1,0}, // 8
  {1,1,1,1,0,1,1,0}, // 9
};

void setup() {
  for (byte a = 0; a < 8; a++) {
    pinMode(pin[a], OUTPUT); // Define output pins
  }
}

void loop() {
  for (int a = 0; a < 10; a++) { // Loop through numbers 0 to 9
    for (int b = 0; b < 8; b++) {
      digitalWrite(pin[b], number[a][b]); // Display the digit
    }
    delay(1000); // 1-second delay between digits
  }
}

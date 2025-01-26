#include <Servo.h>

// Create servo objects for 6 motors
Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void setup() {
  // Attach servo motors to digital pins
  servo1.attach(3);  // Servo 1 on pin 5
  servo2.attach(5);  // Servo 2 on pin 6
  servo3.attach(6);  // Servo 3 on pin 7
  servo4.attach(9);  // Servo 4 on pin 8
  servo5.attach(10);  // Servo 5 on pin 9
  servo6.attach(11); // Servo 6 on pin 10
}

void loop() {
  // Sweep all servos for 2 seconds
  unsigned long startTime = millis(); // Record start time
  while (millis() - startTime < 2000) { // Run for 2 seconds
    for (int pos = 0; pos <= 180; pos += 1) { // Move from 0 to 180 degrees
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      servo5.write(pos);
      servo6.write(pos);
      delay(10); // Delay for smooth motion
    }

    for (int pos = 180; pos >= 0; pos -= 1) { // Move back from 180 to 0 degrees
      servo1.write(pos);
      servo2.write(pos);
      servo3.write(pos);
      servo4.write(pos);
      servo5.write(pos);
      servo6.write(pos);
      delay(10); // Delay for smooth motion
    }
  }

  // Hold all servos at 90 degrees
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);

  // Do nothing forever
  while (true) {
    // Hold position at 90 degrees
  }
}

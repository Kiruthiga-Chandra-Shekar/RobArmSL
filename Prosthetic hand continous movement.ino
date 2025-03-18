#include <Servo.h>
Servo thumb;
Servo index1;
Servo middle;
Servo ring;
Servo pinky;
void setup() {
    thumb.attach(2);
    index1.attach(3);
    middle.attach(4);
    ring.attach(5);
    pinky.attach(6);
}
void loop() {
  for (int i = 0; i<180; i++){
    //thumb.write(i);
    index1.write(i);
    middle.write(i);
    ring.write(i);
    pinky.write(i); 
    delay(10);
  }
  delay(1000);
  //thumb.write(0);
  index1.write(0);
  middle.write(0);
  ring.write(0);
  pinky.write(0);
}
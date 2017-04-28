/* @author: Tomas de Camino Beck
   August 2016
   www.funcostarica.org

  Made for teaching poruposes www.funcostarica.org
  Released under MIT License
  Copyright (c) 2016  Alex Roberto Vargas Benamburg (vbalex.com)
*/

#include <RobotKit.h>
void setup() {
  Serial.begin(9600);
  setSensor(A0);
  startUltrasonic(3, 2); //trig, echo//start the ultrasonic sensor
}

void loop() {
  float distance = getDistance();
  Serial.print(distance); // print in Serial Monitor or Serial Ploter
  Serial.print(",");
  Serial.println(readSensor(A0));
  delay(250); // delay 1/4 of seconds
}

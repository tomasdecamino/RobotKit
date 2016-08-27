/* @author: Alex Roberto Vargas Benamburg
 * August 2016
 * www.funcostarica.org

Made for teaching poruposes www.funcostarica.org
Released under MIT License
Copyright (c) 2016  Alex Roberto Vargas Benamburg
 */

uint8_t ultrasonictriggerPin;
uint32_t ultrasonicTime;
uint32_t ultrasonicCounter;
//Functions for ultrasonic range sensor
void triggerUltrasonic(){
  ultrasonicTime = micros()-ultrasonicCounter;
}
void setUltrasonic(uint8_t tPin, uint8_t ePin){
  ultrasonictriggerPin = tPin;
  pinMode(ultrasonictriggerPin,OUTPUT);
  pinMode(ePin,INPUT);
  attachInterrupt(digitalPinToInterrupt(ePin), triggerUltrasonic, CHANGE);
}
float getUltrasonic(){
  return ultrasonicTime/58.0;
}
void updateUtrasonic(){
  digitalWrite(ultrasonictriggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(ultrasonictriggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(ultrasonictriggerPin, LOW);
  ultrasonicCounter = micros();
}

/* Tomás de Camino Beck
 for remote codes check codes.txt
*/

#include <RobotKit.h>

int RECV_PIN = 7;

void setup() {
  setMotors();
  startRemote(RECV_PIN,REMOTE_1_KEYS);
  //startRemote(RECV_PIN,REMOTE_2_KEYS); usar esta linea si el control no funciona
  Serial.begin(9600);
}

void loop() {
  REMOTE_KEY key = getRemote();
  switch(key){
    case REMOTE_2:
      forward(128,100);
      break;
    case REMOTE_4:
      pivotRight(128,100);
      break;
    case REMOTE_6:
      pivotLeft(128,100);
      break;
    case REMOTE_8:
      backward(128,100);
      break;
    case REMOTE_HOLD:
      break;
    default:
      stopMotors();
  }
}

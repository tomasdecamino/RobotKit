# RobotKit

Esta libreria utiliza proyectos como:
  + Adafruit_NeoPixel: https://github.com/adafruit/Adafruit_NeoPixel
  + IRremote: https://github.com/z3t0/Arduino-IRremote

Instrucciones para instalar librerías en Arduino IDE la encuentran en este link https://www.arduino.cc/en/Guide/Libraries#

# Comandos

## Functions

- setMotors(). Called this first inside the setup function to assign motor pins
- forward(int mSpeed, int t).  Makes both DC motors move forward with speed mSpped for t milliseconds
- forward(int lSpeed, int rSpeed, int t) , moves with different left and right speed
- backward(int mSpeed, int t).  Makes both DC motors move backward with speed mSpped for t milliseconds
- backward(int lSpeed, int rSpeed, int t), backward with different left and right speed
- pivotLeft(int mSpeed, int t), turns left with mSpeed for t milliseconds
- pivotRight(int mSpeed, int t), turns left with mSpeed for t milliseconds
- stopMotors(), this function just stop the motors.
- randomForward(int t), moves forward left or right fot t milliseconds
- randomPivot(int p, int t) pivots left or roght with power p and for t milliseconds
- setSensor(int sensorPin) sets pinMode INPUT for pin sensorPin
- readSensor(int sensorPin) reads an analog sensor conected in sensorPin
- pointLight(int sensorPin) assuming there is a light sensor in sensorPin, rotates the robot to the light
- startLED(uint8_t pin) setup neopixel pin
- setLED(uint8_t red, uint8_t green, uint8_t blue)
- startRemote(uint8_t pin) inicializa el control remoto en el pin
- getRemote() revive el dato del control


## Usage

Inside the setup() section  include the command setMotors(), this will setup all motor pins. Then use movement functions described above in the loop() section of the code

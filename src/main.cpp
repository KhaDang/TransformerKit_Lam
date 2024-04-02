#include <Arduino.h>
//#include "Servocls.h"
#include "Arms.h"
#include "Legs.h"
#include "Adafruit_PWMServoDriver.h"
#include <SPI.h>

// Create the object of Adafruit
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
// Initialize left_arms, left_leg and assign the address of PCA9685
Arms left_arm = Arms(0,1,2);
Legs left_leg = Legs(10,11,12);




void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pwm.begin();
  pwm.setPWMFreq(50);
  pwm.setOscillatorFrequency(27000000);

  // pass the adafruit-object to left_arm
  //left_arm.delegate = pwm;
  left_leg.delegate = pwm;

}

void loop() {
  left_arm.handup();
  //delay(500);

  left_leg.leg_up();
  delay(500);

}

/////////////////////////////////////////////////////////////////////////

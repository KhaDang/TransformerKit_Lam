#include "Servocls.h"


void ServoclsA::moveMotoDegA(int motor_number, int moveDegree){

    double micro_second;
    Adafruit_PWMServoDriver pwm;
    pwm = this->delegate;

    
    micro_second = map(moveDegree, 0 ,179, this->MICRO_SECOND_MIN, this->MICRO_SECOND_MAX);
    pwm.writeMicroseconds(motor_number, micro_second);
    Serial.println(micro_second);
}


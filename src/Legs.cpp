#include "Legs.h"


void Legs::leg_up(){
    this->move_motor_degree(hip_servo, 30);
    delay(500);
    this->move_motor_degree(knee_servo, 50);
    delay(500);
    this->move_motor_degree(foot_servo, 80);
    
}

void Legs::move_motor_degree(int servo, int degree){
    double micro_second;
    Adafruit_PWMServoDriver pwm;
    pwm = this->delegate;

    micro_second = map(degree, 0 ,179, this->MICRO_SECOND_MIN, this->MICRO_SECOND_MAX);
    pwm.writeMicroseconds(servo, micro_second);
    Serial.println(micro_second);

};


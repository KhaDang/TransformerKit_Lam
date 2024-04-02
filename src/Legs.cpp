#include "Legs.h"

Legs::Legs(int act1, int act2, int act3){
    hip_servo = act1;
    knee_servo = act2;
    foot_servo = act3;
    
};


void Legs::leg_up(){
    this->move_motor_degree(hip_servo, 90);
    delay(2000);
    this->move_motor_degree(hip_servo, 180);
    delay(5000);
    this->move_motor_degree(hip_servo, 0);
    Serial.println("MOVING LEGS SUCCESS");


}

void Legs::move_motor_degree(int servo, int degree){
    double micro_second;
    Adafruit_PWMServoDriver pwm;
    pwm = this->delegate;

    micro_second = map(degree, 0 ,179, this->MICRO_SECOND_MIN, this->MICRO_SECOND_MAX);
    pwm.writeMicroseconds(servo, micro_second);    

};


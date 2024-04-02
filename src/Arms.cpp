#include "Arms.h"

Arms::Arms(int act1, int act2, int act3){
    shoulder_servo = act1;
    arm_servo = act2;
    wrist_servo = act3;
};

void Arms::handup(){
   this->move_motor_degree(shoulder_servo, 90);
   delay(500);
   this->move_motor_degree(shoulder_servo, 0);
   //delay(500);
   //this->move_motor_degree(wrist_servo,120);
   Serial.println("MOVING IN ARMS");
   

}
void Arms::handdown(){
    this->move_motor_degree(wrist_servo, 0);
   
   delay(500);
   this->move_motor_degree(arm_servo, 0);
   delay(500);
   this->move_motor_degree(shoulder_servo,0);
};

void Arms::move_motor_degree(int servo, int degree){
    double micro_second;
    Adafruit_PWMServoDriver pwm;
    pwm = this->delegate;

    micro_second = map(degree, 0 ,179, this->MICRO_SECOND_MIN, this->MICRO_SECOND_MAX);
    pwm.writeMicroseconds(servo, micro_second);

};

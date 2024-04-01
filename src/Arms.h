#include "Adafruit_PWMServoDriver.h"

class Arms{
public:
    int shoulder_servo;
    int arm_servo;
    int wrist_servo;

    const int MICRO_SECOND_MIN = 600;
    const int MICRO_SECOND_MAX = 2400;
    // delegate to use Adafruit Object
    Adafruit_PWMServoDriver delegate;
    //Constructor
    Arms(int act1, int act2, int act3);
    //Method to rotate servo shaft
    void move_motor_degree(int servo, int degree);
    //Set of commands to do with arm.
    void handup();

    void handdown();



};


#include "Adafruit_PWMServoDriver.h"
class ServoclsA
{
private:
    /* data */
public:
    const int MICRO_SECOND_MIN = 600;
    const int MICRO_SECOND_MAX = 2400;
    const int FREQ = 50;
    Adafruit_PWMServoDriver delegate;
    
    int motorOut; //To be initialized, and assign value in setup method

    void moveMotoDegA(int motor_number, int moveDegree);
};

class ServoclsB
{
private:
    /* data */
public:
    const int MICRO_SECOND_MIN = 600;
    const int MICRO_SECOND_MAX = 2400;
    const int FREQ = 50;

    int motorOut;

    void moveMotoDegB(int moveDegree);
};
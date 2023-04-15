#ifndef CLASSROBOT_H
#define CLASSROBOT_H
#include "classservo.h"

#define TRANGTHHAI_1 {0,0,0,0,0}
#define TRANGTHHAI_2 {40,40,0,0,0}
#define TRANGTHHAI_3 {0,0,0,40,30}
#define TRANGTHHAI_4 {0,0,30,0,0}
#define TRANGTHHAI_5 {1,2,3,4,5}

#define SERVO_PIN 0//11
#define SERVO_PIN_1 1//12
#define SERVO_PIN_2 2//13
#define SERVO_PIN_3 3//15
#define SERVO_PIN_4 4 //16
class classrobot
{
public:
    classrobot();

private:
    classservo* servo1;
    classservo* servo2;
    classservo* servo3;
    classservo* servo4;
    classservo* servo5;
    void settrangthai1();
    void settrangthai2();
    void settrangthai3();
    void settrangthai4();
    void settrangthai5();
public:

    void settrangthai(int a);

};

#endif // CLASSROBOT_H

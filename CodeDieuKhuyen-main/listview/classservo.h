#ifndef CLASSSERVO_H
#define CLASSSERVO_H
#include <wiringPi.h>
#include <softPwm.h>
#include "qdebug.h"
class classservo
{
public:

    classservo(int pin);
    void setangle(int angle );
    int getangle();
    int getpinmode();
    void setpinmode(int a);

private:
    int angle;
    int SERVO_PIN;
};

#endif // CLASSSERVO_H

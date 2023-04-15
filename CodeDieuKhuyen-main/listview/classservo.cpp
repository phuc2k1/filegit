#include "classservo.h"
#include"stdint.h"

classservo::classservo(int a)
{
    setpinmode(a);
    wiringPiSetup();
    pinMode(SERVO_PIN,OUTPUT);
    softPwmCreate(SERVO_PIN,0,50);
    qDebug()<<"Success INIT Servo:"<<a;


}

void classservo::setangle(int angle)
{
    if(angle<0){angle=0;}
    if(angle>180){angle=180;}
    uint32_t intension=5+ (angle/9);
    softPwmWrite (SERVO_PIN, intension);

}
int classservo::getangle(){
    return angle;
}

int classservo::getpinmode()
{
    return SERVO_PIN;
}
void classservo::setpinmode(int a){
    SERVO_PIN=a;
}



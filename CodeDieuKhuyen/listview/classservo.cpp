#include "classservo.h"


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
    qDebug()<<SERVO_PIN<<"="<<angle;
    if(localangle!=angle)
        {
        softPwmWrite (SERVO_PIN, intension);
        localangle=angle;
        int time=std::abs(localangle-angle)+20;
        delay(time);
        }


}
int classservo::getangle(){
    return localangle;
}

int classservo::getpinmode()
{
    return SERVO_PIN;
}
void classservo::setpinmode(int a){
    SERVO_PIN=a;
}



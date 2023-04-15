
#include "classrobot.h"

classrobot::classrobot()
{
    servo1= new classservo(SERVO_PIN);
    servo2= new classservo(SERVO_PIN_1);
    servo3= new classservo(SERVO_PIN_2);
    servo4= new classservo(SERVO_PIN_3);
    servo5= new classservo(SERVO_PIN_4);
    qDebug()<<"Success INIT robot";



}
void classrobot::settrangthai(int a){
    switch(a){
    case 1:{
        settrangthai1();
        qDebug()<<"Location 1";

        break;
    }
    case 2:
        settrangthai2();
        qDebug()<<"Location 2";
        break;
    case 3:
        settrangthai3();
        qDebug()<<"Location 3";
        break;
    case 4:
        settrangthai4();
        qDebug()<<"Location 4";
        break;
    case 5:
        settrangthai5();
        qDebug()<<"Location 5";
        break;
    }

}
void classrobot::settrangthai1()
{
    int trangthai[]=TRANGTHHAI_1;
    servo1->setangle(trangthai[0]);
    servo2->setangle(trangthai[1]);
    servo3->setangle(trangthai[2]);
    servo4->setangle(trangthai[3]);
    servo5->setangle(trangthai[4]);
}
void classrobot::settrangthai2()
{
    int trangthai[]=TRANGTHHAI_2;
    servo1->setangle(trangthai[0]);
    servo2->setangle(trangthai[1]);
    servo3->setangle(trangthai[2]);
    servo4->setangle(trangthai[3]);
    servo5->setangle(trangthai[4]);
}
void classrobot::settrangthai3()
{
    int trangthai[]=TRANGTHHAI_3;
    servo1->setangle(trangthai[0]);
    servo2->setangle(trangthai[1]);
    servo3->setangle(trangthai[2]);
    servo4->setangle(trangthai[3]);
    servo5->setangle(trangthai[4]);
}
void classrobot::settrangthai4()
{
    int trangthai[]=TRANGTHHAI_4;
    servo1->setangle(trangthai[0]);
    servo2->setangle(trangthai[1]);
    servo3->setangle(trangthai[2]);
    servo4->setangle(trangthai[3]);
    servo5->setangle(trangthai[4]);
}
void classrobot::settrangthai5()
{
    int trangthai[]=TRANGTHHAI_5;
    servo1->setangle(trangthai[0]);
    servo2->setangle(trangthai[1]);
    servo3->setangle(trangthai[2]);
    servo4->setangle(trangthai[3]);
    servo5->setangle(trangthai[4]);
}

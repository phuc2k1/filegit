
#include "classrobot.h"

classrobot::classrobot()
{
    trangthai = QVector<int>::fromStdVector(TRANGTHHAI);
    servo1= new classservo(SERVO_PIN);
    servo2= new classservo(SERVO_PIN_1);
    servo3= new classservo(SERVO_PIN_2);
    servo4= new classservo(SERVO_PIN_3);
    servo5= new classservo(SERVO_PIN_4);
    qDebug()<<"Success INIT robot";



}


void classrobot::settrangthai(int a,int b){
    switch(a){
    case 0:{
        setgoc(trangthai);
        qDebug()<<"ve ban dau";

        break;
    }
    case 1:
        setvat(b);
        qDebug()<<"set vat vi tri"<<b;
        break;
    case 2:
        getvat(b);
        qDebug()<<"Get vat vi tri"<<b;
        break;
    default:
        setvat(b);
        qDebug()<<"loi thong so";


    }
}
void classrobot::setgoc(QVector<int> &vectorgoc)
{

    servo1->setangle(vectorgoc[0]);
    servo2->setangle(vectorgoc[1]);
    servo3->setangle(vectorgoc[2]);
    servo4->setangle(vectorgoc[3]);
    servo5->setangle(vectorgoc[4]);

}
void classrobot::thucthi(int a, int b){
    trangthai[a]=trangthai[a]+b;
    setgoc(trangthai);
    qDebug()<<trangthai;
}
void classrobot::setvat(int a)  {
    int b;
    qDebug()<<"Thuc hien lenh set local: "<a;
    if(a=1){b=VITRI_1;}
    if(a=2){b=VITRI_2;}
    if(a=3){b=VITRI_3;}
    thucthi(4,-100);
    thucthi(1,40);
    thucthi(3,-20);
    thucthi(0,b);
    thucthi(1,-40);
    thucthi(3,20);
    thucthi(4,100);
    thucthi(1,40);
    thucthi(0,-b);
    thucthi(1,-40);
    qDebug()<<"Hoanh thanh lenh set local :"<<a;
}
void classrobot::getvat(int a){
    int b;
    qDebug()<<"Thuc hien lenh set local: "<a;
    if(a=1){b=VITRI_1;}
    if(a=2){b=VITRI_2;}
    if(a=3){b=VITRI_3;}
    thucthi(1,40);//nang1
    thucthi(3,-20);//be len2
    thucthi(0,b);//xoay3
    thucthi(1,-40);//ha4
    thucthi(3,20);//be xuong5
    thucthi(4,-100);//gap6
    thucthi(1,40);//nang7
    thucthi(0,-b);//xoay8
    thucthi(1,-40);//ha9
    thucthi(4,100);//nha10


}

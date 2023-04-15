
#include "readdata.h"

readdata::readdata()
{

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
        qDebug()<<"Error read data";return 1;

}

void readdata::setdata(QSrint datainput)
{


}
void readdata::getdata(){
    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        qDebug() << line;
    }

    file.close();
}


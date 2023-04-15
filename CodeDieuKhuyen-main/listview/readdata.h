
#ifndef READDATA_H
#define READDATA_H


#include <QFile>
#include <QTextStream>
#include <QString>


class readdata
{
public:

    readdata();
    QString getdata();
    void setdata(QSrint datainput);
private:
    QFile file("data.txt");
    QString data;
};

#endif // READDATA_H

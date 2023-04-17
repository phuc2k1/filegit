#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"debuglogger.h"
#include "classrobot.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    classrobot robot ;



private:
    Ui::MainWindow *ui;
    QStringListModel *m_stringListModel;

private slots:

};

#endif // MAINWINDOW_H

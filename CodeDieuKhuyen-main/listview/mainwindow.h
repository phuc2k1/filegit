#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"debuglogger.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;
    QStringListModel *m_stringListModel;
    static void messageHandler(QtMsgType type, const QMessageLogContext &context, const QString &msg);

private slots:
    void handleMessage(QtMsgType type, const QMessageLogContext &context, const QString &msg);

};

#endif // MAINWINDOW_H

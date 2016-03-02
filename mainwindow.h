#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <win_qextserialport.h>
#include "Forms/aboutdialog.h"
#include <QAction>
#include <QActionEvent>
#include <QMenu>

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

    Win_QextSerialPort *myCom;
    aboutDialog *P_About;   //关于窗口声明

    QAction *fileSaveAction;
    QAction *fileQuitAction;
    QAction *helpAboutAction;

    QMenu *fileMenu;
    QMenu *helpMenu;
    QMenu *comMenu;

    QMenu *portMenu;                    //配置菜单下的端口选择菜单
    QAction *comPort1Action;            //端口COM1
    QAction *comPort2Action;            //端口COM2
    QAction *comPort9Action;            //端口COM9
    QMenu *baudRateMenu;                //配置菜单下的波特率选择菜单
    QAction *comBaudRate9600Action;     //波特率9600
    QAction *comBaudRate115200Action;   //波特率115200

    QString portName;
    QString baudRateName;
    QMenuBar *menuBar;

    //成员函数
    void MenuBarInit();

private slots:
    void readMyCom();

    void on_openMyComBtn_clicked();
    void on_closeMyComBtn_clicked();
    void on_sendMsgBtn_clicked();

    void menu_fileSave();
    void menu_fileQuit();
    void menu_helpAbout();

    void menu_comPort1();
    void menu_comPort2();
    void menu_comPort9();
    void menu_comBaudRate9600();
    void menu_comBaudRate115200();

};

#endif // MAINWINDOW_H
